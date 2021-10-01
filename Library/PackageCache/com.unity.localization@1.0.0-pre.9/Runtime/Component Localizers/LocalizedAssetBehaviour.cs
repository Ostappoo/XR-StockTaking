using UnityEngine.Events;
using UnityEngine.Localization.Settings;

namespace UnityEngine.Localization.Components
{
    /// <summary>
    /// Abstract class that can be inherited from to create a general purpose Localized Asset Component.
    /// This Component handles the Localization of the asset and calls <see cref="UpdateAsset(TObject)"/>
    /// whenever a new Localized Asset is ready.
    /// </summary>
    /// <example>
    /// This example shows how the [Font](https://docs.unity3d.com/ScriptReference/Font.html) asset of a [UGUI Text Component](https://docs.unity3d.com/Packages/com.unity.ugui@1.0/api/UnityEngine.UI.Text.html) could be localized.
    /// ![](../manual/images/scripting/LocalizedFontComponent.png)
    /// <code source="../../DocCodeSamples.Tests/LocalizedFontComponent.cs" region="sample-code"/>
    /// </example>
    /// <typeparam name="TObject">The type of Asset to be Localized. Must inherit from [UnityEngine.Object](https://docs.unity3d.com/ScriptReference/Object.html)</typeparam>
    /// <typeparam name="TReference">The **Serializable** LocalizedAsset class. This will be used for the <see cref="AssetReference"/> property.</typeparam>
    [ExecuteAlways]
    public abstract class LocalizedAssetBehaviour<TObject, TReference> : LocalizedMonoBehaviour
        where TObject : Object
        where TReference : LocalizedAsset<TObject>, new()
    {
        [SerializeField]
        TReference m_LocalizedAssetReference = new TReference();

        /// <summary>
        /// Reference to the Table and Entry which will be used to identify the asset being localized.
        /// </summary>
        public TReference AssetReference
        {
            get => m_LocalizedAssetReference;
            set
            {
                ClearChangeHandler();
                m_LocalizedAssetReference = value;

                if (isActiveAndEnabled)
                    RegisterChangeHandler();
            }
        }

        protected virtual void OnEnable() => RegisterChangeHandler();

        protected virtual void OnDisable() => ClearChangeHandler();

        void OnValidate()
        {
            AssetReference.ForceUpdate();
        }

        internal virtual void RegisterChangeHandler()
        {
            AssetReference.AssetChanged += UpdateAsset;
        }

        internal virtual void ClearChangeHandler()
        {
            AssetReference.AssetChanged -= UpdateAsset;
        }

        /// <summary>
        /// Called when <see cref="AssetReference"/> has been loaded. This will occur when the game first starts after
        /// <see cref="Settings.LocalizationSettings.InitializationOperation"/> has completed and whenever
        /// the <see cref="Settings.LocalizationSettings.SelectedLocale"/> is changed.
        /// </summary>
        /// <param name="localizedAsset"></param>
        protected abstract void UpdateAsset(TObject localizedAsset);
    }

    /// <summary>
    /// A version of <see cref="LocalizedAssetBehaviour{TObject, TReference}"/> which also includes a [UnityEvent](https://docs.unity3d.com/ScriptReference/Events.UnityEvent.html) with the localized asset.
    /// Using the <see cref="OnUpdateAsset"/> event it is possible to Localize Components without writing scripts specific to the Component that can be configured in the Inspector.
    /// </summary>
    /// <example>
    /// This example shows how a [Font](https://docs.unity3d.com/ScriptReference/Font.html) asset could be localized.
    /// ![](../manual/images/scripting/LocalizedFontEventComponent.png)
    /// <code source="../../DocCodeSamples.Tests/LocalizedFontEventComponent.cs" region="sample-code"/>
    /// </example>
    /// <typeparam name="TObject">The type of Asset to be Localized. Must inherit from [UnityEngine.Object](https://docs.unity3d.com/ScriptReference/Object.html)</typeparam>
    /// <typeparam name="TReference">The **Serializable** LocalizedAsset class. This will be used for the <see cref="AssetReference"/> property.</typeparam>
    /// <typeparam name="TEvent">The **Serializable** [UnityEvent](https://docs.unity3d.com/ScriptReference/Events.UnityEvent.html) that should be called when the asset is loaded.</typeparam>
    public class LocalizedAssetEvent<TObject, TReference, TEvent> : LocalizedAssetBehaviour<TObject, TReference>
        where TObject : Object
        where TReference : LocalizedAsset<TObject>, new()
        where TEvent : UnityEvent<TObject>, new()
    {
        [SerializeField]
        TEvent m_UpdateAsset = new TEvent();

        public TEvent OnUpdateAsset
        {
            get => m_UpdateAsset;
            set => m_UpdateAsset = value;
        }

        protected override void UpdateAsset(TObject localizedAsset)
        {
            #if UNITY_EDITOR
            if (!LocalizationSettings.Instance.IsPlaying)
            {
                if (AssetReference.IsEmpty)
                {
                    Editor_UnregisterKnownDrivenProperties(OnUpdateAsset);
                    return;
                }

                Editor_RegisterKnownDrivenProperties(OnUpdateAsset);
                OnUpdateAsset.Invoke(localizedAsset);
                Editor_RefreshEventObjects(OnUpdateAsset);
            }
            else
            #endif
            {
                OnUpdateAsset.Invoke(localizedAsset);
            }
        }
    }
}
