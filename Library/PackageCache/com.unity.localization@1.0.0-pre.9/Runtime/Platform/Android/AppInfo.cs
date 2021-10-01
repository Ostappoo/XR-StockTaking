using System;
using UnityEngine.Localization.Metadata;

namespace UnityEngine.Localization.Platform.Android
{
    /// <summary>
    /// Contains all values that can be localized in the Android Application.
    /// These values can be displayed when the App is not running, such as the application name that is displayed on the home screen.
    /// </summary>
    [DisplayName("Android App Info")]
    [Metadata(AllowedTypes = MetadataType.LocalizationSettings, AllowMultiple = false, MenuItem = "Android/App Info")]
    [Serializable]
    public class AppInfo : IMetadata
    {
        [Tooltip("The user-visible name for the bundle, used by Google Assistant and visible on the Android Home screen.\n")]
        [SerializeField] LocalizedString m_DisplayName = new LocalizedString();

        /// <summary>
        /// The user-visible name for the bundle, used by Google Assistant and visible on the Android Home screen.
        /// </summary>
        public LocalizedString DisplayName { get => m_DisplayName; set => m_DisplayName = value; }
    }
}
