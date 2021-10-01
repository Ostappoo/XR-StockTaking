# Changelog
All notable changes to this package will be documented in this file.

## [1.0.0-pre.9] - 2021-05-12

### Added

- Added `ExcludeEntry` **Metadata** . This can be used to prevent an entry from being exported to Google Sheets, XLIFF, and CSV.
- Added `WaitForCompletion` property to `LocalizedString` and `LocalizedAsset`. This can be set in the inspector or via script to force synchronous loading.
- Added synchronous methods to `LocalizedString` and `LocalizedAsset`.

### Changed

- `LocalizationSettings.SelectedLocale` is now syncronous and does not need Initialization to have been completed.
- Moved `TryEvaluateAllLiterals` into its own interface `IFormatterLiteralExtractor` and renamed to `WriteAllLiterals`.
- Renamed `LocalizeString.GetLocalizedString` to `LocalizeString.GetLocalizedStringAsync`.
- System Locale Selector will now only output the message The Locale X is not available, however the parent locale Y is available. in the player.
- Updated Smart Format library to `aa9e4288612f79b86ab0cea36066797118d11a69` excluding the Nullable types support.
  - Fixed: Take an erroneous format string like `"this is {uncomplete"` (missing closing brace). Before v2.7.0 the parser handled `{uncomplete` as a `TextLiteral`, not as an erroneous `Placeholder`.
  - Fixed: Fixed issue where If the `Parser` encountered a `ParsingError.TooManyClosingBraces`, this closing brace was simply "swallowed-up". This way, the result with `Parser.ErrorAction.MaintainTokens` differs from the original format string. From v2.7.0, the redundant closing brace is handled as a `TextLiteral`. 
  - Improved: For `ParsingError.TrailingOperatorsInSelector` and `ParsingError.InvalidCharactersInSelector` the causing character is now included in the `Exception.Message`.
  - Fix: Fully implemented all `Settings.ParseErrorAction`.
  - Enhanced SubString extension as described in [PR142](https://github.com/axuno/SmartFormat/pull/142).
- Updated to Addressables `1.18.2`.

### Fixed

- Added support for `WaitForCompletion` so Async operations can be completed immediately and support synchronous workflows. (LOC-185)
- Fixed `ArgumentException` when adding a new table collection in a new project. ([LOC-192](https://issuetracker.unity3d.com/issues/errors-thrown-first-time-entering-play-mode))
- Fixed `LocalizeStringEvent` overwriting the `StringReference` Arguments when enabled.
- Fixed `NullReferenceException` in LoadTableOperation when the Locale could not be found. ([LOC-192](https://issuetracker.unity3d.com/issues/errors-thrown-first-time-entering-play-mode))
- Fixed `TemplateFormatter` not being added when selected through the Add Formatter menu. (LOC-179)
- Fixed default table version of `GetLocalizedStringAsync` arguments being wrapped in an `object[]` when using `IList<object>`. (LOC-191)
- Fixed Localized assets not using fallbacks.
- Fixed table name validation - names can no longer contain leading or trailing whitespace, nor can they contain characters that Unity considers invalid. ([LOC-183](https://jira.unity3d.com/browse/LOC-183))
- Fixed warning regarding `SelectedLocale` being thrown when entering play mode and the **Scene Controls Window** was open.
- Locale Analyzer, String Table Analyzer and Asset Table Analyzer will now check the Addressables groups have valid schemas. (LOC-190)
- Table Window now updates itself when Tables, Collections or Shared Table Data is deleted or restored in the project. (LOC-182)

## [1.0.0-pre.8] - 2021-04-27

### Changed

- Changed to Pre-release.

## [0.11.1] - 2021-04-23

### Fixed

- Fixed errors being generated when using Play Mode with Domain and Scene reload disabled. ([LOC-165](https://issuetracker.unity3d.com/issues/errors-thrown-when-entering-playmode-and-using-enter-play-mode-options-experimental))
- Fixed `NotSupportedException: Collection is read-only` error sometimes being produced by preload operation.

## [0.11.0] - 2021-04-08

### Added

- Added **Addressable Group Rules** asset. This can be used to configure what Addressable groups assets should be placed into. See Addressables Integration docs for further details.
- Added `CollectionExtension.Initialize`, this will be called when the extension is first added to a table collection.
- Added `IEntryOverride`. This can be used to create overrides for table entries to direct to different localized values.
- Added `Locale.LocaleName` property. This can be used to customize the name of the Locale instead of using the name of the Locale Asset in the `name` property. ([LOC-144](https://issuetracker.unity3d.com/issues/localization-locale-assets-name-is-not-saved-when-renaming-it-through-the-inspector))
- Added `LocalizationEditorSettings.GetPsuedoLocales`. This returns all Pseudo Locales that are included in the project.
- Added `LocalizedGameObjectEvent` component. This can be used to localize Prefabs.
- Added `LocalizedMaterial` & `LocalizedGameObject`.
- Added `PlatformOverride` **Metadata**. This can be used to override the value for an entry for a chosen platform, the override can change the entry, table or both.
- Added `ReleaseAsset` method in `AssetTable`. This can be used to release an asset from memory for the provided AssetTableEntry.
- Added `ReleaseTables` to `LocalizedDatabase`. This can be used to force a table to be released from the database so that it may be unloaded providing there are no other references to it.
- Added `SetEntryAssetType` and `GetEntryAssetType` to `AssetTableCollection.`. This can be used to control the expected asset type for an entry.
- Added `SharedEntry` property to `StringTableEntry` and `AssetTableEntry`. This will return the `SharedTableData` entry for the current Locale specific entry.
- Added `SharedStringTableEntry` and `SharedAssetTableEntry` to `MetadataType`. These can be used to only show **Metadata** for a shared table entry only.
- Added 3 new Addressable Analyzer rules which can be used to check for Addressable issues and upgrade when changing the **Addressable Group Rules**.
- Added additional override for `StringTableEntry.GetLocalized` which allows for passing in an optional **Pseudo Locale**. By default the **Selected Locale** will be used. (LOC-162)
- Added constructors to `LocalizedString`, `LocalizedAsset`, `LocalizedStringTable` and `LocalizedAssetTable`. These show the minimum arguments required for the class to function correctly.
- Added extra override for method `GetLocalizedString` which now accepts the parameters as list of objects [IList<object>].
- Added language change menu to Device Simulator window.
- Added metadata support to **LocalizationSettings**.
- Added method `TableEntryReference.ToString(TableReference)`. This will use the `TableReference` to gather additional data such as the **Key** or **Key Id**.
- Added support for localizing **Android App name**. Only the **Display Name** is currently supported on the Android Platform. To configure the Android App add the **Android/AppInfo** metadata to the LocalizationSettings.
- Added support for localizing Android app Icon. We currently support  Adaptive Icon, Round Icon, and Legacy Icon on the Android Platform. To configure the Android app icons, add the Android/Android Adaptive Icon or Android/Android Round Icon or Android/Android Legacy Icon metadata to the LocalizationSettings.
- Added support for localizing iOS App components. Display Name, Microphone description, Camera description and Location description are currently supported. To configure the iOS App, add the **iOS/AppInfo** metadata to the **LocalizationSettings**.
- Added the functionality to **Preview Localization** without entering Play mode. Do this through the **Localization Scene Controls** window. See Edit Mode Support docs for further details.
- Added UI validation hints for table collection creation.
- When a `TableReference` is a Guid type, the `TableCollectionName` will now attempt to resolve the name from the `AssetDatabase` or `LocalizationSettings`. This is particularly helpful when debugging as `ToString` will now also contain the `TableCollectionName` as well as the `Guid`.

### Changed

- `MetadataAttribute.AllowMultiple` is now respected. Metadata that already exists will now be disabled in the add menu.
- Changed `LocalizedString.Arguments` to be an `IList<object>` instead of `object[]`.
- Changed table collection names so they can no longer be comprised of whitespace, cannot contain invalid filename characters, and cannot contain "[]".
- Changed table collections so you can no longer create table collections of the same type with duplicate names.
- Changed the **Google Sheets Service - New Sheet Properties** field so it is now only visible when using **OAuth** authentication.
- Moved `UnityEventAudioClip`, `UnityEventSprite`, `UnityEventString` and `UnityEventTexture` to `UnityEngine.Localization.Events` namespace.
- Removed `LocaleIdentifier.Undefined`. You should compare against `default` to see if a `LocaleIdentifier` is defined. ([LOC-150](https://issuetracker.unity3d.com/issues/inconsistent-behaviour-between-localeidentifier-constructors-and-deserialization-when-using-different-empty-instances))
- Renamed `StringUnityEvent` to `UnityEventString`.
- Updated **Addressables** to **1.17.15**.

### Fixed

- `StringTableEntry.GetLocalizedString` variants now use the table's locale formatter if no formatter is provided.
- Added new functionality, so loading a table via its **Table Collection Name Guid** will now complete immediately if it was previously loaded using the **Table Collection Name**. (LOC-172). (LOC-172)
- Fixed **Psuedo Localization** so that when it is enabled, it will now be applied when calling `StringTableEntry.GetLocalized`. (LOC-162)
- Fixed `AssetTypeMetadata` being added multiple times to **Shared Table Data** when adding new entries.
- Fixed `CollectionExtension.TargetCollection` not being set when adding an extension via script.
- Fixed `LocaleIdentifier` Equality comparisons when comparing undefined versions. ([LOC-150](https://issuetracker.unity3d.com/issues/inconsistent-behaviour-between-localeidentifier-constructors-and-deserialization-when-using-different-empty-instances))
- Fixed `LocaleIdentifier` property drawer not updating when changing the Locale object. ([LOC-148](https://issuetracker.unity3d.com/issues/localization-localizationsettings-slash-locale-id-field-is-not-updated-when-selecting-locale-with-object-picker))
- Fixed `MissingMethodException` exception being thrown when adding a **Smart String** Formatter that does not contain a default constructor. ([LOC-164](https://issuetracker.unity3d.com/issues/adding-smart-format-formatters-via-inspector-throws-exception))
- Fixed `NullReferenceException` being thrown when pulling from an empty Google Sheet. (LOC-161)
- Fixed `ValueTupleSource` not being marked as `Serializable` which could cause serialization issues. ([LOC-147](https://issuetracker.unity3d.com/issues/unknown-managed-type-referenced-unity-dot-localization-unityengine-dot-localization-dot-smartformat-dot-extensions-dot-valuetuplesource))
- Fixed a bug where invoking `RemoveKey` was not removing the Keys from other tables. Now, this is handled by abstract overrides in StringTableCollection and AssetTableCollection.
- Fixed corruption of PlayerSettings preloaded assets when building with the **InputSystem** package in the project. ([LOC-146](https://issuetracker.unity3d.com/issues/localization-slash-inputsystem-asset-is-not-removed-from-preloaded-assets-list))
- Fixed Editor becoming unresponsive when using the **Google Sheets Service Authorize** button. (LOC-166)
- Fixed error regarding nested header foldouts in LocalizedString inspector. ([LOC-163](https://issuetracker.unity3d.com/product/unity/issues/guid/LOC-163))
- Fixed exception being thrown when adding a **CSV Extension** to a table collection. ([LOC-158](https://issuetracker.unity3d.com/issues/unityexception-is-thrown-while-moving-or-creating-scripts-after-adding-csv-extension-to-serialized-string-table-collection))
- Fixed incorrect formula syntax in Google Sheets duplicate key rule. This would cause errors when creating a new sheet and the default Google Sheet Language was not English. ([case 1286943](https://issuetracker.unity3d.com/product/unity/issues/guid/1286943))
- Fixed issue so that pulling from a **Google Sheet** with an **API Key** will no longer create an entry from the sheets header row.
- Fixed Localization being applied twice when changing the reference on a `LocalizationStringEvent` or `LocalizedAssetBehaviour` on a disabled GameObject which was then activated. ([LOC-132](https://issuetracker.unity3d.com/issues/localizestringevent-applies-localization-twice-when-activating-object-if-stringreference-was-set-when-object-was-inactive))
- Fixed Localization Tables window not updating when a value was changed in the LocalizedString property drawer.
- Fixed Localization Tables window not updating when Converting Table Entry to Smart String in the LocalizedString property drawer.
- Fixed NullReferenceException when pulling from a **Google Sheet** that contains an empty row. (LOC-149)
- Fixed NullReferenceException when pulling from a Google Sheet that contains an empty row. ([LOC-149](https://issuetracker.unity3d.com/issues/googlesheets-nullrefexception-when-pulling-empty-cell))
- Fixed possible infinite loop when calling `Locale.GetFallback()`.
- Fixed the **Table Collection Editor** incorrectly showing the Tables field as a ReoderableList in 2020.2+. (LOC-167)
- Regenerated Object Pool guids to prevent conflicts when using the package in a project with other packages that use the ObjectPool classes.

## [0.10.0] - 2021-01-20

### Added 

- Added `GetDefaultTableAsync` to `LocalizedDatabase`. This can be used to get the DefaultTable directly. 
- Added `HasChangeHandler` to `LocalizedString` and `LocalizedAsset`. ([LOC-111](https://issuetracker.unity3d.com/issues/localization-unable-to-check-if-registerchangehandler-is-null-when-using-localisestringevent))
- Added `GenerateCharacterSet` to `StringTable` and `StringTableCollection`. This can be used to extract the unique characters used by 1 or more `String Tables`. This could then be used with a Font Atlas creator. It is also possible to export a **Character Set** file from the Export menu of the String Table window, the String Table Collection window, or the Localization Tables window.
- Added new Google Sheets example `SmartStringColumn` for synchronizing the Smart String property of an entry.
- Added **Global Variables** to **Smart Strings**. **Global Variables** can be defined in a `GlobalVariableGroup` asset which can then be added to a `GlobalVariableSource` in the **Smart Format Sources** list. Variables can then be referenced in a **Smart String** without the need to pass arguments. For example: `{group-name.variable-name}`. When a `GlobalVariables` value is changed via script, it will automatically trigger any `LocalizedString` that is using it to refresh. See Samples and docs for further details.
- Added `HasTagMetadata` to `TableEntry`.
- Added PreLoadTables to LocalizedDatabase. This can be used to force tables to be loaded, including their contents without having to set the preload flag in the editor.
- Added fallback support. When a localized value is missing then the Locale fallback metadata or CultureInfo will be used to find a suitable fallback Locale. This can be enabled project-wide through the Localization Settings String Database or Asset Database, it can also be configured on a per-item basis for LocalizedStrings.
- Added useFallback parameter to LocalizedStringDatabase.GetLocalizedStringAsync & LocalizedDatabase.GetTableEntryAsync. This can be used as a flag to enable FallBack behavior for Locales that have missing translations.
- Added Custom Locale UI Window. This can be used to add any custom Locales that are not supported in CultureInfo class or the SystemLanguage.
- Added **Preloading Screen** sample. This shows how you can wait for the `InitializationOperation` to complete.

### Changed
- Reduced the amount of garbage being generated by requests for localized strings and assets. The operations inside of `AsyncOperationHandle` are now returned in the subsequent frame after completion. If you wish to hold onto an `AsyncOperationHandle` you should call `Addressables.ResourceManager.Acquire` to prevent the operation being reused and `Addressables.Release` to allow for it to be reused.
- Merged all Third Party dependencies into a single library **Unity.Localization.ThirdParty.Editor.dll**. This will prevent conflicts when projects/packages use the same libraries. **Google Sheets**, **Newtonsoft Json** and **CsvHelper** can still be accessed by adding **Unity.Localization.ThirdParty.Editor** as an **Assembly Reference** to your own asmdef files.
- Removed dependency on package **com.unity.nuget.newtonsoft-json**. It is now part of the combined dependencies.
- Updated Third Party dependencies. Google Sheets to v.1.49.0.2111, CsvHelper to 15.0.9 and Newtonsoft.Json to 12.0.3.
- Clicking the **Localized Table Collection** name label will now toggle the selector foldout for `LocalizedString` and `LocalizedAsset`. ([LOC-125](https://issuetracker.unity3d.com/product/unity/issues/guid/LOC-125))
- Significant improvements to **Smart String** overall performance. Testing showed results of an average of 10x less garbage and runs 2-3x faster.
- Updated **Smart Strings** with changes from **SmartFormat** v2.5.3.0-preview1.
  - Internal string comparisons (i.e. for placeholder names) are no more culture-specific, but Ordinal or OrdinalIgnoreCase respectively.
  - ListFormatter will now process IList data sources only.
  - Removed **SmartObjects**
- Updated to **Addressables** 1.6.13. 
- It's now possible to import `StringTableCollections` and `AssetTableCollections` into new or existing projects. When importing the Collection will create/update the Addressables and create any missing Locales in the project.
- Changed sample **Language Selection Menu (UGUI)** to use the Native name for Locales.
- The `Localization Tables` window search field is no longer cleared when changing selected table.
- After pulling from a **Google Sheet**, the order of the keys in the table will now match the order of the **Google Sheet**.
- When pushing to a **Google Sheet**, Table entries will no longer be sorted by the Key Id but keep their current order, as shown in the table editor window.
- It is now possible to use a **Google Sheet** with Sheet Id 0.
- Creating a new `LocalizationSettings` asset in the **Project Settings** window no longer selects the asset.
- Setting `LocalizedString` `Arguments` will now trigger `RefreshString`.
- `LocalizedString.RefreshString` will no longer throw an exception if there are no `StringChanged` subscribers.
- `LocalizedStrings` that are **Smart** will always use **Smart Format** even when no arguments have been provided.
- Culture-sensitive formatting now uses the `Locale` information.
- The `Localization Tables` window search field is no longer cleared when changing selected table.
- The `Localization Tables` window search field is no longer cleared when changing selected table.
- No Translation Found message is now a Smart String and has access to several placeholders which can be used to proivide details on the missing entry. 

### Fixed
- Fixed exceptions being thrown when trying to load a table that does not exist. Loading missing String Tables will now use the missing translation message instead of throwing an exception when a table was missing and assets will return a failed operation handle. (LOC-120)
- Fixed DefaultTable property throwing an invalid key exception when it is empty. Now getting a value from empty DefaultTable will throw an exception. 
- The LocalizedAsset selector will now filter out incompatible types. ([LOC-123](https://issuetracker.unity3d.com/issues/localizedasset-property-drawer-does-not-filter-by-type))
- Fixed **LocalizedString** Editor not preserving new items added to the Preview Arguments field. ([LOC-122](https://issuetracker.unity3d.com/issues/new-items-are-not-added-to-the-preview-arguments-list-in-the-localizedstring-field-when-pressing-the-plus-icon))
- Fixed `AddTagMetadata` creating a new tag each time instead of using an existing tag. `RemoveTagMetadata` will now remove all empty tag entries, not just the first one it finds. ([LOC-124](https://issuetracker.unity3d.com/issues/smart-format-tag-in-the-metadata-stays-after-disabling-the-smart-option-when-smart-option-is-enabled-on-another-entry))
- **String Table Entries** which have a null or empty localized string will now be treated as missing translations and use the `No Translation Found Format`. ([LOC-126](https://issuetracker.unity3d.com/issues/localization-no-translation-found-format-variable-isnt-used-when-an-entry-locale-is-empty))
- Fixed exception when calling GetLocale and no Addressables settings exists in the project.
- Fixed **XLIFF 2.0** generating empty **notes** nodes. ([LOC-131](https://issuetracker.unity3d.com/issues/localization-export-xliff-generates-table-with-notes-node-when-notes-are-not-added))
- Fixed **Google Sheets** `PullEnd` not being called after pulling from a Google Sheet. ([LOC-133](https://issuetracker.unity3d.com/issues/googlesheets-does-not-call-pullend-on-custom-columns))
- **Google Sheets** `PullCellData` is now called for all cells even if the sheet cell is empty. (LOC-134)
- Pulling a **Google Sheet** using an **API Key** will now use the correct public API and no longer produce authorization errors. ([LOC-139](https://issuetracker.unity3d.com/issues/localization-using-api-key-to-retrieve-data-outputs-request-is-missing-required-authentication-credential-expected-oauth-2))
- Calling `LocalizationEditorSettings.GetLocales` will no longer create a new Addressable Assets Settings file if one does not exist. ([LOC-142](https://issuetracker.unity3d.com/issues/a-new-addresableassetsdata-folder-is-created-when-recompiling-a-script-while-the-localization-tables-window-is-open))
- Fixed a bug where the Locales list were not been updated, when the New Table tab is open and the Locale name was changed.
- Improved `LocalizationSetting` editor performance. The editor is now using UI Toolkit to render and should be much smoother. (LOC-90)
- Fixed **Smart String** editor becoming corrupted when a parsing exception was thrown in the **Debug** view.
- Fixed exception being thrown by `GetSourceExtension` and `GetFormatterExtension` when no value could be found.
- Fixed `LocalizedAsset` Property Drawer not resolving the asset type when displaying a list of `LocalizedAssets`.
- Fixed preloaded Sprite assets having the incorrect type(Texture). ([LOC-142](https://issuetracker.unity3d.com/product/unity/issues/guid/LOC-143))

## [0.9.0] - 2020-10-27

### Added
- Added support for exporting and importing `StringTables` and `StringTableCollections` as XML Localisation Interchange File Format (XLIFF). XLIFF version [1.2](https://docs.oasis-open.org/xliff/v1.2/os/xliff-core.html) and [2.0](https://docs.oasis-open.org/xliff/xliff-core/v2.0/os/xliff-core-v2.0-os.html) are both supported. See docs for further details.
- Added support for exporting and importing `StringTableCollections` as Comma Separated Values (CSV).
- Added `GetRowEnumerator` to `AssetTableCollection` and `StringTableCollection`. This can be used to step through each key and its localized values.
- Added `ReleaseAssets` to allow for forcing all `AssetTable` assets to be released. This is called automatically when the `LocalizationSettings.SelectedLocale` is changed.

### Changed
- Updated to Addressables version **1.16.6**.
- Editor Foldout fields now toggle when clicking on the label.
- When enabling preload on Asset Tables, all assets will now be preloaded by default instead of requiring the `PreloadAssetTable` Metadata. Adding a `PreloadAssetTable` can be used to disable this default behavior. ([LOC-114](https://issuetracker.unity3d.com/issues/localized-audio-clips-fail-to-load-on-first-retrieval-when-using-loadassetasync))
- `SmartFormat` editor will now show parsing and format errors in the preview field.
- Added title header to Google Sheets extension property drawer.

### Fixed
- Fixed smart `StringTableEntry` returning the wrong localized string after its value was changed.
- Fixed `LocalizedAsset` from loading when it contained an empty reference. ([LOC-109](https://issuetracker.unity3d.com/product/unity/issues/guid/LOC-109))
- Fixed `InvalidCastException` when calling `AssetTable.GetAssetAsync` and the table was preloaded. ([LOC-114](https://issuetracker.unity3d.com/issues/localized-audio-clips-fail-to-load-on-first-retrieval-when-using-loadassetasync))
- Fixed bug in `PreloadDatabaseOperation` that caused it to complete before preloading was finished. ([LOC-114](https://issuetracker.unity3d.com/issues/localized-audio-clips-fail-to-load-on-first-retrieval-when-using-loadassetasync))
- Fixed Tables Window throwing exceptions when editing a collection which had 1 or more tables without a matching locale in the project.
- Fixed `ProjectSettings.asset` being modified on disc during a build.
- Fixed `LocalizedString` property drawer throwing `NullReferenceException` when selecting a Localization Table Collection which did not have a table for every Locale in the project. ([LOC-118](https://issuetracker.unity3d.com/issues/nullreferenceexception-thrown-when-editing-a-localizedstring-linked-to-a-collection-that-does-not-have-a-table-for-every-project-locale))
- Calling `AddKey` will now check if the new Id is already in use and generate a new Id if it is. This means it is now safe to use custom Id values.
- `SharedTableData` that contains an empty Guid will now be repaired when loaded in the editor.
- Fixed `SmartFormat` editor becoming corrupt when showing preview and `ThrowException` action was enabled in ParseError or FormatError. [(LOC-119)(https://issuetracker.unity3d.com/issues/editor-ui-is-broken-when-editing-a-smart-string-and-throwexceptions-error-mode-is-enabled)]
- Increased max width for `Localization Tables` window Id field so large keys can be fully visible.

## [0.8.1] - 2020-08-19

### Fixed
- Fixed incorrect Further Reading URL in Pseudo-Localization documentation page.
- Fixed changes to tables not being saved due to them not being set dirty when edited through the Table Editor.

## [0.8.0] - 2020-08-17

### Added
- Added `IKeyGenerator` to `SharedTableData`. This is now used to generate the unique ids for each key. By default `DistributedUIDGenerator` will be used to generate the keys however it is possible to change it back to Sequential by assigning `SequentialIDGenerator` to `SharedTableData.KeyGenerator`. See docs for further details.
- Added `PreserveTags` Pseudo-localization method. This will prevent tags such as rich text or xml from being modified by any subsequent Pseudo-localization methods. ([LOC-86](https://issuetracker.unity3d.com/issues/pseudo-localization-methods-are-applied-to-the-whole-string-when-using-rich-text-tags))
- Added `LocalizeSpriteEvent` component. This can be used for Localizing `Sprite` assets.
- Added `Localize` context menu item for UGUI `Image` component. This will add and setup a `LocalizeSpriteEvent` component.
- Added `Group` property to `StringTableCollection`and `AssetTableCollection`, This can be used to customize the menu grouping when selecting a Table Collection.
- Locales can now be sorted in the Localization project settings view.
- Added `SortOrder` property to `Locale`. This can be used to override the default sorting order. This value is set automatically when changing the order in the editor.
- Added `CheckForMissingSharedTableDataEntries` to `StringTable` and `AssetTable`. This will find any entries in the table that are missing matching Shared Table Entries. These missing entries can be repaired with the `MissingEntryAction` parameter.
- Added `RemapKey` to `SharedTableData`. This will let the Id of a key be changed.
- Added `LocalizedStringTable` and `LocalizedAssetTable`. These work in a similar way to `LocalizedString` and `LocalizedAsset` but will return a Table instead of a single table entry.
- Added new Sample: Simple Language Selection Menu (IMGUI). Includes 2 different examples of a Locale selection menu.

### Changed
- Changed Table Entry Key Id data type from `uint` to `long`. All Methods that were using a `uint` now require a `long`.
- `IPseudoLocalizationMethod` method `Transform` now passes a `Message` instead of a string.
- The Locale column order in the `Localization Tables` window is now determined by the Locale's order.
- Upgraded to latest `Newtonsoft Json` package `2.0.0`.
- Renamed `LocalizedTable` to `LocalizationTable`.
- Renamed `LocalizedTableT` to `DetailedLocalizationTable`
- Renamed `LocalizedTableCollection` to `LocalizationTableCollection`
- Improved error message when a Locale can not be selected during initialization.
- Replaced `LocalizedString` `RegisterChangeHandler` and `ClearChangeHandler` with the event `StringChanged`.
- Replaced `LocalizedAsset` `RegisterChangeHandler` and `ClearChangeHandler` with the event `AssetChanged`.

### Fixed

- Fixed StringTableCollection assets not being set dirty when pulling from a Google Sheet in the editor. ([1240528](https://issuetracker.unity3d.com/issues/undo-does-not-set-assets-dirty-when-using-iserializationcallbackreceiver))
- Fixed StringTableCollection assets not being set dirty when pulling from a Google Sheet in the editor.
- Fixed `LocalizedString.GetLocalizedString` not using the argument provided in `LocalizedString.Arguments`.
- Fixed serialization errors `Should not occur! Internal logic error: please report bug.` when `Comment Metadata` was attached to the table or shared table data. (LOC-104)
- Fixed `LocalizedDatabase.GetTableAsync` trying to load an already loaded `LocalizedTable` when using a GUID TableReference. This was causing preloaded tables to still require some loading.
- Fixed "LocalizationSettings has a different serialization layout" error. Moved the `Locale GameView Menu` property from LocalizationSettings to EditorPrefs and moved the menu option into `Preference/Localization`. (LOC-99)
- Fixed `GoogleSheets` push not handling Table entries that were missing matching Shared Table Entries, this would cause future rows to be blank. ([LOC-102](https://issuetracker.unity3d.com/product/unity/issues/guid/LOC-102))
- Fixed `NullReferenceException` in `Localization Settings` when Editor window focus was lost and Smart Format properties field was visible. ([LOC-101](https://issuetracker.unity3d.com/product/unity/issues/guid/LOC-101))
- Fixed `Available Locales` not updating when performing an Undo/Redo after adding or removing a Locale.
- `LocalizedString` and `LocalizedAsset` property drawers now remember the expanded state of each Locale field when an Undo/Redo occurs. ([LOC-105](https://issuetracker.unity3d.com/issues/undoing-a-change-to-a-language-in-the-localizedstring-inspector-resets-the-folded-state))
- Added Undo support when adding and removing a table from a `StringTableCollection` or `AssetTableCollection`. When Undo is not used the asset will be set dirty so changes are not lost. ([LOC-107](https://issuetracker.unity3d.com/product/unity/issues/guid/LOC-107))

## [0.7.1] - 2020-06-05

### Added
- Added `StringTableCollection` and `AssetTableCollection`. These are editor only assets for controlling a collection of string or asset tables. Tables that are not part of a collection will now be ignored. To upgrade old table assets select one and press the `Create Collection` button in the inspector.
- Added Google Sheets support. A `StringTableCollection` can by pushed and pulled by using the `Google Sheets Extension` in the editor or through script with the `GoogleSheets` class. Table entry values, comments and metadata can be synced to a Google Sheet. This is currently an Editor only feature.
- Added `DisplayName` attribute. This is an optional attribute for `Metadata` and `CollectionExtensions` so that a custom name that can be displayed in the editor instead of the class name.
- Added `LocalizationSettings.SelectedLocaleAsync`. This is a safer alternative to `LocalizationSettings.SelectedLocale` as it will ensure that the `AvailableLocales` is initialized.

### Changed
- Renamed `LocalizeStringBehaviour` to `LocalizeStringEvent`.
- Renamed `LocalizeAudioClipBehaviour` to `LocalizeAudioClipEvent`.
- Renamed `LocalizeTextureBehaviour` to `LocalizeTextureEvent`.
- Renamed `TableName` to `TableCollectionName`.
- The editor class `AssetTableCollection` has been repurposed. Please see the new `StringTableCollection` and `AssetTableCollection` assets.
- `LocalizationEditorSettings` has changed:
  - Replaced `ModificationEvent` with `EditorEvents` class
  - `AddAssetToTable` and `RemoveAssetFromTable` have been moved to `AssetTableCollection`
  - Added `GetStringTableCollection`, `GetStringTableCollections`, `GetAssetTableCollection` and `GetAssetTableCollections`.
  - Removed `RemoveTable`, `GetAssetTables`, `GetAssetTablesCollection`. These features are replaced by  `StringTableCollection` and `AssetTableCollection`.
  - Simplified `ILocalesProvider` interface Only 1 `GetLocale` function is now required.
  - Updated code Samples to include Creating Locales, Loading Strings, Google Sheets and a Language selection menu example.
  
### Fixed
- Fixed `Asset Tables Window` throwing `NullReferenceException` when editing Metadata for an entry that does not exist in the selected table.
- Fixed incorrect installation instructions in documentation.
- Fixed `SerializedTableEntryReference` not handling key names correctly, which could cause issues with LocalizedString and LocalizedAsset. (case 1230444)
- Fixed `TableReference` returning invalid value for TableName when type is Guid.
- Fixed `UpdateString` not being called When a new `LocalizedString` was assigned to `LocalizeStringEvent.StringReference`.
- Fixed `UpdateAsset` not being called When a new `LocalizedAsset` was assigned to `LocalizeStringEvent.AssetReference`.
- Fixed `LocalizedString` and `LocalizedAsset` trying to localize when they are empty. (case LOC-88)
- Localized String editor now clips Locale labels instead of letting them overlap into the preview label. (case LOC-84)
- Fixed Available Locales List is not updating when a Locale is added or removed from the project. (case LOC-79)
- Fixed `LocalizedAsset` and `LocalizedString` editor not updating when a Locale is added or removed from the project.
- Fixed `SharedTableData` Metadata child properties not being visible or editable in the Table Window. (case LOC-85)
- Fixed Smart Format toggle field overflowing into Metadata button when Table Window columns were narrow. (case LOC-95)
- Fixed `LocalizedStringDatabase` and `LocalizedAssetDatabase` using the `SelectedLocale` before `AvailableLocales` was initialized. (case 1225937)
- Fixed Asset Tables losing data due to not being set dirty when a change was made. (case LOC-82)
- Fixed ListFormatter Names property going null in player builds.

## [0.6.1] - 2020-02-18

### Added
- Added IEquatable to LocaleIdentifier.

### Changed
- Changed collection properties to be read only (rule CA2227).
- Made AddressableEntryNotFoundException public.

### Fixed
- SystemLocaleSelector will now check the CultureInfo before checking Application.SystemLanguage to allow for selecting regional languages first.
- Fixed `LocalizedAssetTexture` and `LocalizeAudioClipBehaviour` not serializing the asset reference field. (case 1216072)

## [0.6.0] - 2020-01-27

### Added
- Added PseudoLocale and Pseudo-localization methods(Accenter, CharacterSubstitutor, Encapsulator and Expander). This is used to generate Pseudo-localization using various methods during runtime(See docs for further info).
- Added support for loading multiple Locales from String and Asset Databases. By Default the `LocalizationSettings.SelectedLocale` will be used however it is now possible to provide a Locale as an argument. This means Localization data for multiple Locales can exist which allows for fallback Locales or just showing multiple languages at once.
- Added exception to LocalizedTable.TableName if the SharedTableData is null.
- Added `Locale Generator` button to `New Table` tab.

### Changed
- Renamed `KeyDatabase` to `SharedTableData`.
- Changed `Comment` metadata TimeStamp property type to DateTime.
- Disabled Addressables Settings asset creation during Localization OnPostprocessAllAssets. This could cause corruption of Addressables data due to OnPostprocessAllAssets execution order when importing a project for the first time.
- Updated to Addressables version *1.5.1*.
- Addressable groups now use the NoHash BundleNamingStyle by default.

### Fixed
- Fixed `NullReferenceException` sometimes being thrown by LocalizedString or LocalizedAsset during *ClearLoadingOperation*.
- Fixed `NullReferenceException` when adding SmartFormatter Source in String Database inspector.
- Fixed `ArgumentOutOfRangeException:` in StringTables when enabling a Missing Tables column.
- Fixed LocalizedReference field label overflowing when a selected key had multiple lines.
- Fixed LocalizedString property drawer adding too much vertical whitespace.
- Fixed items in Reorderable Lists ignoring the right border.
- Fixed LocalizedTableT entry Id not being updated when entry was moved or removed.
- Fixed GameViewLanguageMenu causing LocalizationSettings to Initialize when there was no Addressables/Locales in the project.
- Fixed Key name being unchangeable when its name was empty in the Asset Tables window.
- Fixed Search field border being too small in the Asset Tables Window.
- Fixed `New Table - Create` button being enabled when no locales were selected or existed in the project.
- Fixed `LocalizedString` and `LocalizedAsset` not automatically updating when the `TableReference` or `TableEntryReference` was changed and a `ChangeHandler` was being used.
- Fixed Addressable flags including `Preload` being removed during AddOrUpdateTable.

## [0.5.1] - 2019-11-22
- Updated to Addressables version *1.3.8*.
- Fixed `ArgumentOutOfRangeException:` in the Tables window when only 1 string or asset table existed.
- Exposed *CreateAssetTableCollection* in *LocalizationEditorSettings*.
- Implemented *IDictionary* to *LocalizedTableT* and Removed *TableEntries* property.
- Fixed LocalizedTableT not serializing changes made when using the Dictionary interface.
- Added *LocalizedTableT.CreateTableEntry*, this should be used when creating a *StringTableEntry* or *AssetTableEntry*.
- *ArgumentNullException* is now thrown when using a null ChangeHandler with *LocalizedString.RegisterChangeHandler* or *LocalizedAsset.RegisterChangeHandler*.
- Fixed *PluralLocalizationFormatter* using the Selected Locale when a CultureInfo provider was used.
- Current loading operations are now cleared when using *ClearChangeHandler* with *LocalizedAsset* and *LocalizedString*
- Added default constructor to FallbackLocale Metadata.
- Fixed error spamming when adding Metadata that does not have a default constructor.
- Removed missing image from LocalizationTablesWindow manual page.

## [0.5.0] - 2019-11-04
- Updated to Addressables version *1.2.4*.
- Removed type specific asset tables. The AssetTable class can now hold mixed types per entry.
- Removed Custom Locale support from Locale Generator Window. You should use Metadata to modify the Locale instead.
- Removed Preload behaviour from Localization Settings. Preload behaviour can now be controlled per table through the Asset Tables Window.
- Removed Addressable tests. These would cause issues when run in a project already using Addressables. They have been moved to an internal test suite.
- Removed *Key Database* field from *New Table* panel. Key databases should not be shared now as they act as the Table Name Guid.
- Added Metadata to Locale, LocalizedTable and TableEntry. Metadata can be used to add additional data that implements the IMetadata interface and is serializable.
- Added PreloadAssetTable Metadata. Add this to an AssetTable to configure the preload behaviour for individual assets contained in the table. By default the assets will not be preloaded if this is not present.
- Added PreloadAsset Metadata. Add this to Asset Table entries when using PreloadBehaviour.PreloadSelected to select the entry for preloading.
- Added Comment Metadata. This can be added to any Metadata to provide comments. In the future these comments will be extracted when exporting to external formats.
- Added SmartFormat for StringTables. This allows for advanced formatting of strings. Comes with support for named placeholders, lists, pluralization, gender, code reflection support and much more.
- Added Table Name Guid. Table Names can now be referenced by a Guid so that changes to the name do not break references.
- Fixed Locale Generator Window button `Generate Locales` staying disabled when using `Select All`.
- LocaleGeneratorListView now shows Locales that are already in the project.
- New Locales are now added to Addressables when created.
- Changed the name format for Tables for Addressables and asset creation to start with the name followed by the locale.
- Improved LocalizedString editor. It is now possible to modify the selected entry details in the Inspector without opening the Asset Tables Window.
- Moved Localization Table editor window option to *Window/Asset Management/Localization Tables*.

## [0.4.1] - 2019-07-09
- Updated to Addressables version '1.1.4-preview'.

## [0.4.0] - 2019-06-14
- Added AutoUpdate to LocalizedStringReference class. When enabled, the string will automatically be loaded any time a change is detected and the UpdateString event can be used to update the string. With AutoUpdate enabled calling GetLocalizedString is not necessary.
- Fixed StringTableEditor changes being lost when using inline editing.
- Fixed LocalizationBehaviour not updating the first time when LocalizationSettings are already initialized.
- Fixed LocalizationBehaviour not updating correctly if the asset or table has already been loaded.
- Improved drop down label in LocalizedStringReferencePropertyDrawer. Multi-line text is now correctly shown. (LOC-57)
- Added KeyDatabase.FindSimilarKey. Returns the closest match using a Levenshtein approximation.
- Improved key matching when using Localize context menu for Text components.
- Updated to Addressables version '0.8.6-preview'.

## [0.3.2] - 2019-05-09
- Added support for ugui package in 2019.2.0a15. ugui support is optional and will be enabled automatically if the ugui package is in the project.
- Removed support for 2018.3. The ugui support requires optional assemblies which are not supported in 2018.3.
- AssemblyScannerCache now uses UnityEditor.TypeCache in 2019.2 which should provide improved performance in Editor.
- Added an error when adding non-persistent assets to asset tables.
- Fixed StringTableEditor changes being lost due to not setting the table dirty.

## [0.3.1] - 2019-05-02
- Added KeyDatabase. All string keys are now contained within this and mapped to a unique(to the database) id value which is used by the table.
- Assets are now grouped in Addressables by the locale. This allows you to serve them on-demand for a particular language, instead of bundling them with the game release. Shared assets are stored in a separate group.
- Assets are now removed from Addressables when they are not referenced by any Asset Tables.
- Fixed UIElements issues in 2019.1+.
- Merged LocalizationPlayerSettings into LocalizationEditorSettings.
- Removed AddressableAssetTableT.GetAsset. GetAssetAsync should be used instead.
- Added option in `Asset Tables Windows` to add a missing table if a table does not exist for all available Locales.
- Fixed UIElements compilation issues in 2019.1+
- Updated to Addressables version '0.7.5-preview'.
- Removed support for .Net 3.5, this is due to a limitation in Addressables.

## [0.2.5] - 2019-03-01
- Updated to Addressables version '0.6.7-preview'.

## [0.2.3] - 2019-02-20
- Fixed adding Locales and Tables to Addressables not working when the Addressables settings asset did not exist(LOC-24).
- Fixed exception when changing a table name in the Table Editor window.
- Fixed AssetTablesField exception when no Asset Tables exist in the project.
- Updated to Addressables version '0.5.3-preview'.

## [0.2.2] - 2018-12-17
- Fixed NullRefException when opening the Asset Tables window and no Asset Tables exist in the project

## [0.2.1] - 2018-12-14
- Removed stray file `README - External.md`

## [0.2.0] - 2018-12-11

### This is the first release of *Unity Package Localization*.
- Contains preview of asset and string localization support.
