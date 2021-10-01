using System;
using System.Collections.Generic;
using UnityEngine.Localization.Metadata;
using UnityEngine.Pool;
using UnityEngine.ResourceManagement.AsyncOperations;

namespace UnityEngine.Localization.Settings
{
    /// <summary>
    /// The localization settings is the core component to the localization system.
    /// It provides the entry point to all player based localization features.
    /// </summary>
    public class LocalizationSettings : ScriptableObject, IReset
    {
        /// <summary>
        /// The name to use when retrieving the LocalizationSettings from CustomObject API.
        /// </summary>
        internal const string ConfigName = "com.unity.localization.settings";
        internal const string ConfigEditorLocale = "com.unity.localization-edit-locale";

        internal const string LocaleLabel = "Locale";
        internal const string PreloadLabel = "Preload";

        [SerializeReference]
        List<IStartupLocaleSelector> m_StartupSelectors = new List<IStartupLocaleSelector>
        {
            new CommandLineLocaleSelector(),
            new SystemLocaleSelector(),
            new SpecificLocaleSelector()
        };

        [SerializeReference]
        ILocalesProvider m_AvailableLocales = new LocalesProvider();

        [SerializeReference]
        LocalizedAssetDatabase m_AssetDatabase = new LocalizedAssetDatabase();

        [SerializeReference]
        LocalizedStringDatabase m_StringDatabase = new LocalizedStringDatabase();

        [MetadataType(MetadataType.LocalizationSettings)]
        [SerializeField]
        MetadataCollection m_Metadata = new MetadataCollection();

        AsyncOperationHandle<LocalizationSettings>? m_InitializingOperationHandle;

        AsyncOperationHandle<Locale>? m_SelectedLocaleAsync;

        static LocalizationSettings s_Instance;

        /// <summary>
        /// Called when the <see cref="SelectedLocale"/> is changed.
        /// This will be called after <see cref="InitializationOperation"/> is completed so any preloading operations will be finished.
        /// </summary>
        public event Action<Locale> OnSelectedLocaleChanged;

        /// <summary>
        /// Indicates if there is a LocalizationSettings present. If one is not found then it will attempt to find one however
        /// unlike <see cref="Instance"/> it will not create a default, if one can not be found.
        /// </summary>
        /// <value><c>true</c> if has settings; otherwise, <c>false</c>.</value>
        public static bool HasSettings
        {
            get
            {
                if (s_Instance == null)
                    s_Instance = GetInstanceDontCreateDefault();
                return s_Instance != null;
            }
        }

        /// <summary>
        /// The localization system may not be immediately ready. Loading Locales, preloading assets etc.
        /// This operation can be used to check when the system is ready. You can yield on this in a coroutine to wait.
        /// </summary>
        public static AsyncOperationHandle<LocalizationSettings> InitializationOperation => Instance.GetInitializationOperation();

        /// <summary>
        /// Singleton instance for the Localization Settings.
        /// </summary>
        public static LocalizationSettings Instance
        {
            get
            {
                if (s_Instance == null)
                    s_Instance = GetOrCreateSettings();
                return s_Instance;
            }
            set => s_Instance = value;
        }

        /// <summary>
        /// <inheritdoc cref="IStartupLocaleSelector"/>
        /// </summary>
        public static List<IStartupLocaleSelector> StartupLocaleSelectors => Instance.GetStartupLocaleSelectors();

        /// <summary>
        /// <inheritdoc cref="AvailableLocales"/>
        /// </summary>
        public static ILocalesProvider AvailableLocales
        {
            get => Instance.GetAvailableLocales();
            set => Instance.SetAvailableLocales(value);
        }

        /// <summary>
        /// The asset database is responsible for providing localized assets.
        /// </summary>
        public static LocalizedAssetDatabase AssetDatabase
        {
            get => Instance.GetAssetDatabase();
            set => Instance.SetAssetDatabase(value);
        }

        /// <summary>
        /// The string database is responsible for providing localized string assets.
        /// </summary>
        public static LocalizedStringDatabase StringDatabase
        {
            get => Instance.GetStringDatabase();
            set => Instance.SetStringDatabase(value);
        }

        /// <summary>
        /// Returns the Localization Settings Metadata.
        /// Metadata can be used to contain additional information such as App Name localization settings.
        /// </summary>
        public static MetadataCollection Metadata => Instance.GetMetadata();

        /// <summary>
        /// The current selected <see cref="Locale"/>. This is the Locale that will be used by default when localizing assets and strings.
        /// Calling this when the Localization system has not initialized will force the Localization system to load all Locales before returning,
        /// see <see cref="SelectedLocaleAsync"/> for a version that will load the Locales asynchronously.
        /// </summary>
        public static Locale SelectedLocale
        {
            get => Instance.GetSelectedLocale();
            set => Instance.SetSelectedLocale(value);
        }

        /// <summary>
        /// The current selected Locale. This is the Locale that will be used by default when localizing assets and strings.
        /// If <see cref="InitializationOperation"/> has not been completed yet then this will wait for the <see cref="AvailableLocales"/> part to complete first.
        /// It will not wait for the entire <see cref="InitializationOperation"/> but just the part that initializes the Locales.
        /// See <seealso cref="SelectedLocale"/> for a synchronous version that will block until the Locales have been loaded.
        /// </summary>
        public static AsyncOperationHandle<Locale> SelectedLocaleAsync => Instance.GetSelectedLocaleAsync();

        /// <summary>
        /// Event that is sent when the <see cref="SelectedLocale"/> is changed.
        /// </summary>
        public static event Action<Locale> SelectedLocaleChanged
        {
            add => Instance.OnSelectedLocaleChanged += value;
            remove => Instance.OnSelectedLocaleChanged -= value;
        }

        void OnEnable()
        {
            if (s_Instance == null)
            {
                s_Instance = this;
            }

            #if UNITY_EDITOR
            UnityEditor.EditorApplication.playModeStateChanged += EditorApplication_playModeStateChanged;
            #endif
        }

        #if UNITY_EDITOR
        void EditorApplication_playModeStateChanged(UnityEditor.PlayModeStateChange obj)
        {
            if (obj == UnityEditor.PlayModeStateChange.ExitingEditMode || obj == UnityEditor.PlayModeStateChange.ExitingPlayMode)
            {
                ResetState();
            }
        }

        void OnDisable()
        {
            ResetState();
            UnityEditor.EditorApplication.playModeStateChanged -= EditorApplication_playModeStateChanged;
        }

        #endif

        /// <summary>
        /// Used to ensure a <see cref="LocalizationSettings"/> exists in the project.
        /// Throws an exception if <see cref="HasSettings"/> is false.
        /// </summary>
        /// <param name="error"></param>
        internal static void ValidateSettingsExist(string error = "")
        {
            if (!HasSettings)
            {
                throw new Exception($"There is no active LocalizationSettings.\n {error}");
            }
        }

        /// <summary>
        /// <inheritdoc cref="InitializationOperation"/>
        /// </summary>
        /// <returns></returns>
        public virtual AsyncOperationHandle<LocalizationSettings> GetInitializationOperation()
        {
            if (m_InitializingOperationHandle == null)
            {
                var operation = GenericPool<InitializationOperation>.Get();
                operation.Init(this);
                m_InitializingOperationHandle = AddressablesInterface.ResourceManager.StartOperation(operation, default);
            }

            return m_InitializingOperationHandle.Value;
        }

        #if UNITY_EDITOR
        /// <summary>
        /// We use this for testing so we don't have to enter play mode.
        /// </summary>
        internal bool? IsPlayingOverride { get; set; }
        #endif

        internal bool IsPlaying
        {
            get
            {
                #if UNITY_EDITOR
                if (IsPlayingOverride.HasValue)
                    return IsPlayingOverride.Value;
                return UnityEditor.EditorApplication.isPlayingOrWillChangePlaymode;
                #else
                return true;
                #endif
            }
        }

        internal virtual RuntimePlatform Platform => Application.platform;

        /// <summary>
        /// <inheritdoc cref="IStartupLocaleSelector"/>
        /// </summary>
        /// <returns>\</returns>
        public List<IStartupLocaleSelector> GetStartupLocaleSelectors() => m_StartupSelectors;

        /// <summary>
        /// <inheritdoc cref="AvailableLocales"/>
        /// </summary>
        /// <param name="available"></param>
        public void SetAvailableLocales(ILocalesProvider available) => m_AvailableLocales = available;

        /// <summary>
        /// <inheritdoc cref="AvailableLocales"/>
        /// </summary>
        /// <returns>\</returns>
        public virtual ILocalesProvider GetAvailableLocales() => m_AvailableLocales;

        /// <summary>
        /// <inheritdoc cref="AssetDatabase"/>
        /// </summary>
        /// <param name="database"></param>
        public void SetAssetDatabase(LocalizedAssetDatabase database) => m_AssetDatabase = database;

        /// <summary>
        /// <inheritdoc cref="AssetDatabase"/>
        /// </summary>
        /// <returns></returns>
        public virtual LocalizedAssetDatabase GetAssetDatabase() => m_AssetDatabase;

        /// <summary>
        /// Sets the string database to be used for localizing all strings.
        /// </summary>
        /// <param name="database"></param>
        public void SetStringDatabase(LocalizedStringDatabase database) => m_StringDatabase = database;

        /// <summary>
        /// Returns the string database being used to localize all strings.
        /// </summary>
        /// <returns>The string database.</returns>
        public virtual LocalizedStringDatabase GetStringDatabase() => m_StringDatabase;

        /// <summary>
        /// Returns the Localization Settings Metadata.
        /// Metadata can be used to contain additional information such as App Name localization settings.
        /// </summary>
        /// <returns></returns>
        public MetadataCollection GetMetadata() => m_Metadata;

        /// <summary>
        /// Sends out notifications when the locale has changed. Ensures the the events are sent in the correct order.
        /// </summary>
        /// <param name="locale">The new locale.</param>
        internal void SendLocaleChangedEvents(Locale locale)
        {
            #if UNITY_EDITOR
            if (locale == null)
            {
                LocalizationPropertyDriver.UnregisterProperties();
            }
            #endif

            m_StringDatabase?.OnLocaleChanged(locale);
            m_AssetDatabase?.OnLocaleChanged(locale);

            if (m_InitializingOperationHandle.HasValue)
            {
                AddressablesInterface.Release(m_InitializingOperationHandle.Value);
                m_InitializingOperationHandle = null;
            }

            var initOp = GetInitializationOperation();
            if (initOp.Status == AsyncOperationStatus.Succeeded)
            {
                OnSelectedLocaleChanged?.Invoke(locale);
            }
            else
            {
                initOp.Completed += (o) =>
                {
                    // Don't send the change event until preloading is completed.
                    OnSelectedLocaleChanged?.Invoke(locale);
                };
            }
        }

        Locale SelectActiveLocale()
        {
            if (m_AvailableLocales == null)
            {
                Debug.LogError("AvailableLocales is null, can not pick a Locale.");
                return null;
            }

            if (m_AvailableLocales.Locales == null)
            {
                Debug.LogError("AvailableLocales.Locales is null, can not pick a Locale.");
                return null;
            }

            #if UNITY_EDITOR
            if (!IsPlaying)
            {
                var code = UnityEditor.SessionState.GetString(ConfigEditorLocale, string.Empty);
                return m_AvailableLocales.GetLocale(code);
            }
            #endif

            return SelectLocaleUsingStartupSelectors();
        }

        /// <summary>
        /// Uses <see cref="StartupLocaleSelectors"/> to select the most appropriate <see cref="Locale"/>.
        /// </summary>
        protected internal virtual Locale SelectLocaleUsingStartupSelectors()
        {
            foreach (var sel in m_StartupSelectors)
            {
                var locale = sel.GetStartupLocale(m_AvailableLocales);
                if (locale != null)
                {
                    return locale;
                }
            }

            using (StringBuilderPool.Get(out var sb))
            {
                sb.AppendLine("No Locale could be selected:");

                if (m_AvailableLocales.Locales.Count == 0)
                {
                    sb.AppendLine("No Locales were available. Did you build the Addressables?");
                }
                else
                {
                    sb.AppendLine($"The following ({m_AvailableLocales.Locales.Count}) Locales were considered:");
                    foreach (var locale in m_AvailableLocales.Locales)
                    {
                        sb.AppendLine($"\t{locale}");
                    }
                }

                sb.AppendLine($"The following ({m_StartupSelectors.Count}) IStartupLocaleSelectors were used:");
                foreach (var selector in m_StartupSelectors)
                {
                    sb.AppendLine($"\t{selector}");
                }

                Debug.LogError(sb.ToString(), this);
            }

            return null;
        }

        /// <summary>
        /// <inheritdoc cref="SelectedLocale"/>
        /// </summary>
        /// <param name="locale"></param>
        public void SetSelectedLocale(Locale locale)
        {
            if (m_SelectedLocaleAsync != null && ReferenceEquals(m_SelectedLocaleAsync.Value.Result, locale))
                return;

            // We need to ensure initialization has been started
            GetInitializationOperation();

            #if UNITY_EDITOR
            // Running the player loop outside of play mode will force an update for many types, especially UGUI.
            if (!IsPlaying)
            {
                UnityEditor.EditorApplication.QueuePlayerLoopUpdate();
            }
            #endif

            // Ignore null locales in play mode
            if (locale == null && IsPlaying)
                return;

            if (!m_SelectedLocaleAsync.HasValue || !ReferenceEquals(m_SelectedLocaleAsync.Value.Result, locale))
            {
                #if UNITY_EDITOR
                if (!IsPlaying)
                {
                    var code = locale == null ? string.Empty : locale.Identifier.Code;
                    UnityEditor.SessionState.SetString(ConfigEditorLocale, code);
                }
                #endif

                if (m_SelectedLocaleAsync.HasValue)
                    AddressablesInterface.Release(m_SelectedLocaleAsync.Value);

                m_SelectedLocaleAsync = AddressablesInterface.ResourceManager.CreateCompletedOperation(locale, null);
                SendLocaleChangedEvents(locale);
            }
        }

        /// <summary>
        /// <inheritdoc cref="SelectedLocaleAsync"/>
        /// </summary>
        /// <returns></returns>
        public virtual AsyncOperationHandle<Locale> GetSelectedLocaleAsync()
        {
            if (!m_SelectedLocaleAsync.HasValue)
            {
                if (m_AvailableLocales is IPreloadRequired localesProvider && !localesProvider.PreloadOperation.IsDone)
                {
                    m_SelectedLocaleAsync = AddressablesInterface.ResourceManager.CreateChainOperation(localesProvider.PreloadOperation, (op) => AddressablesInterface.ResourceManager.CreateCompletedOperation(SelectActiveLocale(), null));
                }
                else
                {
                    m_SelectedLocaleAsync = AddressablesInterface.ResourceManager.CreateCompletedOperation(SelectActiveLocale(), null);
                }
            }
            return m_SelectedLocaleAsync.Value;
        }

        /// <summary>
        /// <inheritdoc cref="SelectedLocale"/>
        /// </summary>
        /// <returns>\</returns>
        public virtual Locale GetSelectedLocale()
        {
            var localeOp = GetSelectedLocaleAsync();
            if (localeOp.IsDone)
                return localeOp.Result;
            return localeOp.WaitForCompletion();
        } 

        /// <summary>
        /// Indicates that the Locale is no longer available.
        /// If the locale is the current <see cref="SelectedLocale"/> then a new one will be found using <see cref="StartupLocaleSelectors"/>.
        /// </summary>
        /// <param name="locale"></param>
        public void OnLocaleRemoved(Locale locale)
        {
            if (m_SelectedLocaleAsync.HasValue && ReferenceEquals(m_SelectedLocaleAsync.Value.Result, locale))
            {
                AddressablesInterface.Release(m_SelectedLocaleAsync.Value);
                m_SelectedLocaleAsync = null;
            }
        }

        public void ResetState()
        {
            m_SelectedLocaleAsync = null;
            m_InitializingOperationHandle = null;
            (m_AvailableLocales as IReset)?.ResetState();
            (m_AssetDatabase as IReset)?.ResetState();
            (m_StringDatabase as IReset)?.ResetState();
        }

        /// <summary>
        /// Returns the singleton of the LocalizationSettings but does not create a default one if no active settings are found.
        /// </summary>
        /// <returns></returns>
        public static LocalizationSettings GetInstanceDontCreateDefault()
        {
            if (s_Instance != null)
                return s_Instance;

            LocalizationSettings settings;
            #if UNITY_EDITOR
            UnityEditor.EditorBuildSettings.TryGetConfigObject(ConfigName, out settings);
            #else
            settings = FindObjectOfType<LocalizationSettings>();
            #endif
            return settings;
        }

        static LocalizationSettings GetOrCreateSettings()
        {
            var settings = GetInstanceDontCreateDefault();
            if (settings == null)
            {
                Debug.LogWarning("Could not find localization settings. Default will be used.");

                settings = CreateInstance<LocalizationSettings>();
                settings.name = "Default Localization Settings";
            }

            return settings;
        }
    }
}
