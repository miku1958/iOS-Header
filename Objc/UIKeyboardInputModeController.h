//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIKeyboardInputMode, UITextInputMode;
@protocol UIKeyboardInputModeControllerDelegate;

@interface UIKeyboardInputModeController : NSObject
{
    UIKeyboardInputMode *_currentInputMode;
    NSArray *_inputModesWithoutHardwareSupport;
    NSArray *_allExtensions;
    NSArray *_allowedExtensions;
    BOOL _skipExtensionInputModes;
    BOOL _excludeExtensionInputModes;
    BOOL _cacheNeedsRefresh;
    int _notifyPasscodeChangedToken;
    struct __CFUserNotification *_userNotification;
    struct __CFRunLoopSource *_userNotificationRunLoopSource;
    NSString *_newModeForUserNotification;
    NSObject *_keyboardTagForUserNotification;
    BOOL _loadingExtensions;
    BOOL _needsUpdateExtensions;
    BOOL _suppressCurrentPublicInputMode;
    BOOL disableFloatingKeyboardFilter;
    BOOL _shouldRunContinuousDiscovery;
    UITextInputMode *_documentInputMode;
    NSArray *keyboardInputModes;
    NSArray *keyboardInputModeIdentifiers;
    NSArray *enabledInputModes;
    NSArray *normalizedInputModes;
    NSArray *defaultKeyboardInputModes;
    NSArray *defaultRawInputModes;
    NSArray *defaultInputModes;
    NSArray *defaultNormalizedInputModes;
    NSArray *suggestedInputModesForSiriLanguage;
    UIKeyboardInputMode *_lastUsedInputMode;
    NSString *_inputModeContextIdentifier;
    id<UIKeyboardInputModeControllerDelegate> _delegate;
    NSArray *_userSelectableKeyboardInputModes;
    NSArray *_userSelectableKeyboardInputModeIdentifiers;
    UIKeyboardInputMode *_nextInputModeToUse;
    UIKeyboardInputMode *_currentUsedInputMode;
    id _extensionMatchingContext;
}

@property (readonly, nonatomic) NSArray *activeDictationLanguages;
@property (readonly, nonatomic) NSArray *activeDictationSupportedInputModeIdentifiers;
@property (readonly) NSArray *activeInputModeIdentifiers;
@property (readonly) NSArray *activeUserSelectableInputModeIdentifiers;
@property (readonly, nonatomic) NSArray *allowedExtensions; // @synthesize allowedExtensions=_allowedExtensions;
@property (readonly, nonatomic) BOOL containsDictationSupportedInputMode;
@property (strong) UIKeyboardInputMode *currentInputMode;
@property (nonatomic) UIKeyboardInputMode *currentInputModeInPreference;
@property (readonly, nonatomic) UIKeyboardInputMode *currentLinguisticInputMode;
@property (readonly, nonatomic) UIKeyboardInputMode *currentPublicInputMode;
@property (readonly, nonatomic) UIKeyboardInputMode *currentSystemInputMode;
@property (strong, nonatomic) UIKeyboardInputMode *currentUsedInputMode; // @synthesize currentUsedInputMode=_currentUsedInputMode;
@property (strong) NSArray *defaultInputModes; // @synthesize defaultInputModes;
@property (strong) NSArray *defaultKeyboardInputModes; // @synthesize defaultKeyboardInputModes;
@property (strong) NSArray *defaultNormalizedInputModes; // @synthesize defaultNormalizedInputModes;
@property (copy, nonatomic) NSArray *defaultRawInputModes; // @synthesize defaultRawInputModes;
@property (nonatomic) id<UIKeyboardInputModeControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) BOOL disableFloatingKeyboardFilter; // @synthesize disableFloatingKeyboardFilter;
@property (strong, nonatomic) UITextInputMode *documentInputMode; // @synthesize documentInputMode=_documentInputMode;
@property (readonly, nonatomic) NSArray *enabledDictationLanguages;
@property (readonly) NSArray *enabledInputModeIdentifiers;
@property (readonly) NSArray *enabledInputModeLanguages;
@property (strong) NSArray *enabledInputModes; // @synthesize enabledInputModes;
@property (strong, nonatomic) id extensionMatchingContext; // @synthesize extensionMatchingContext=_extensionMatchingContext;
@property (readonly, nonatomic) UIKeyboardInputMode *hardwareInputMode;
@property (copy, nonatomic) NSString *inputModeContextIdentifier; // @synthesize inputModeContextIdentifier=_inputModeContextIdentifier;
@property (readonly) NSArray *inputModesWithoutHardwareSupport;
@property (strong) NSArray *keyboardInputModeIdentifiers; // @synthesize keyboardInputModeIdentifiers;
@property (strong) NSArray *keyboardInputModes; // @synthesize keyboardInputModes;
@property (strong, nonatomic) UIKeyboardInputMode *lastUsedInputMode; // @synthesize lastUsedInputMode=_lastUsedInputMode;
@property (readonly, nonatomic) UIKeyboardInputMode *lastUsedInputModeForCurrentContext;
@property (strong, nonatomic) UIKeyboardInputMode *nextInputModeToUse; // @synthesize nextInputModeToUse=_nextInputModeToUse;
@property (readonly) NSArray *normalizedEnabledInputModeIdentifiers;
@property (strong) NSArray *normalizedInputModes; // @synthesize normalizedInputModes;
@property (nonatomic) BOOL shouldRunContinuousDiscovery; // @synthesize shouldRunContinuousDiscovery=_shouldRunContinuousDiscovery;
@property (strong) NSArray *suggestedInputModesForSiriLanguage; // @synthesize suggestedInputModesForSiriLanguage;
@property (readonly) NSArray *supportedInputModeIdentifiers;
@property (strong) NSArray *userSelectableKeyboardInputModeIdentifiers; // @synthesize userSelectableKeyboardInputModeIdentifiers=_userSelectableKeyboardInputModeIdentifiers;
@property (strong) NSArray *userSelectableKeyboardInputModes; // @synthesize userSelectableKeyboardInputModes=_userSelectableKeyboardInputModes;

+ (id)ASCIICapableInputModeIdentifierForPreferredLanguages;
+ (id)disallowedDictationLanguagesForDeviceLanguage;
+ (id)hardwareInputModeAutomaticHardwareLayout;
+ (id)inputModeIdentifierForPreferredLanguages:(id)arg1 passingTest:(CDUnknownBlockType)arg2;
+ (id)sharedInputModeController;
- (id)_MCFilteredExtensionIdentifiers;
- (id)_allExtensionsFromMatchingExtensions:(id)arg1;
- (void)_beginContinuousDiscoveryIfNeeded;
- (void)_clearAllExtensions;
- (void)_clearAllExtensionsIfNeeded;
- (void)_inputModeChangedWhileContextTracked;
- (BOOL)_mayContainExtensionInputModes;
- (void)_removeInputModes:(id)arg1;
- (void)_setCurrentAndNextInputModePreference;
- (void)_setCurrentInputMode:(id)arg1 force:(BOOL)arg2;
- (id)_systemInputModePassingLanguageTest:(CDUnknownBlockType)arg1;
- (id)_systemInputModePassingTest:(CDUnknownBlockType)arg1;
- (void)_trackInputModeIfNecessary:(id)arg1;
- (id)activeInputModes;
- (id)activeUserSelectableInputModes;
- (id)appendPasscodeInputModes:(id)arg1;
- (void)clearNextInputModeToUse;
- (BOOL)currentLocaleRequiresExtendedSetup;
- (void)dealloc;
- (id)defaultDictationLanguages:(id)arg1;
- (id)defaultEnabledInputModesForCurrentLocale:(BOOL)arg1;
- (BOOL)deviceStateIsLocked;
- (void)didAcceptAddKeyboardInputMode;
- (void)didEnterBackground:(id)arg1;
- (id)enabledInputModeIdentifiers:(BOOL)arg1;
- (id)extensionInputModes;
- (void)extensionsChanged;
- (id)fallbackCurrentInputModeForFilteredInputMode:(id)arg1 fromInputModes:(id)arg2;
- (id)fallbackCurrentInputModeForFilteredInputModeIdentifier:(id)arg1 fromInputModeIdentifiers:(id)arg2;
- (id)filteredInputModesForSiriLanguageFromInputModes:(id)arg1;
- (id)filteredPadInputModesFromInputModes:(id)arg1 withRules:(id)arg2;
- (id)filteredTVInputModesFromInputModes:(id)arg1;
- (id)getDictationSLSLanguagesEnabled;
- (void)getHardwareKeyboardLanguage:(id *)arg1 countryCode:(id *)arg2;
- (void)handleLastUsedInputMode:(id)arg1 withNewInputMode:(id)arg2;
- (void)handleSpecificHardwareKeyboard;
- (id)hardwareLayoutToUseForInputMode:(id)arg1;
- (BOOL)identifierIsValidSystemInputMode:(id)arg1;
- (id)identifiersFromInputModes:(id)arg1;
- (id)init;
- (id)inputModeByReplacingSoftwareLayoutWithSoftwareLayout:(id)arg1 inInputMode:(id)arg2;
- (id)inputModeForASCIIToggleWithTraits:(id)arg1;
- (id)inputModeIdentifierLastUsedForLanguage:(id)arg1;
- (id)inputModeLastUsedForLanguage:(id)arg1;
- (id)inputModeToAddForKeyboardLanguage:(id)arg1 countryCode:(id)arg2 activeModes:(id)arg3;
- (id)inputModeWithIdentifier:(id)arg1;
- (id)inputModesFromIdentifiers:(id)arg1;
- (BOOL)isDictationLanguageEnabled:(id)arg1;
- (BOOL)isLockscreenPasscodeKeyboard;
- (id)keyboardLanguageForDictationLanguage:(id)arg1;
- (void)keyboardsPreferencesChanged:(id)arg1;
- (id)lastUsedInputModeForTextInputMode:(id)arg1;
- (void)loadSuggestedInputModesForSiriLanguage;
- (id)nextInputModeFromList:(id)arg1 withFilter:(unsigned long long)arg2 withTraits:(id)arg3;
- (id)nextInputModeInPreferenceListForTraits:(id)arg1;
- (id)nextInputModeInPreferenceListForTraits:(id)arg1 updatePreference:(BOOL)arg2;
- (id)nextInputModeInPreferenceListForTraits:(id)arg1 updatePreference:(BOOL)arg2 skipEmoji:(BOOL)arg3;
- (id)nextInputModeToUseForTraits:(id)arg1;
- (id)nextInputModeToUseForTraits:(id)arg1 updatePreference:(BOOL)arg2;
- (void)performWithForcedExtensionInputModes:(CDUnknownBlockType)arg1;
- (void)performWithoutExtensionInputModes:(CDUnknownBlockType)arg1;
- (void)releaseAddKeyboardNotification;
- (void)saveDeviceUnlockPasscodeInputModes;
- (void)setDictationSLSLanguagesEnabled:(id)arg1;
- (void)showAddKeyboardAlertForInputModeIdentifier:(id)arg1;
- (void)startConnectionForFileAtURL:(id)arg1 forInputModeIdentifier:(id)arg2;
- (void)startDictationConnectionForFileAtURL:(id)arg1 forInputModeIdentifier:(id)arg2;
- (void)stopDictation;
- (id)suggestedDictationLanguagesForDeviceLanguage;
- (id)suggestedInputModesForCurrentHardwareKeyboardAndSuggestedInputModes:(id)arg1;
- (id)suggestedInputModesForCurrentLocale;
- (id)suggestedInputModesForCurrentLocale:(BOOL)arg1 fallbackToDefaultInputModes:(BOOL)arg2;
- (id)suggestedInputModesForHardwareKeyboardLanguage:(id)arg1 countryCode:(id)arg2 inputModes:(id)arg3;
- (id)suggestedInputModesForLocales:(id)arg1;
- (id)suggestedInputModesForPreferredLanguages;
- (id)supportedInputModesFromArray:(id)arg1;
- (void)switchToCurrentSystemInputMode;
- (void)switchToDictationInputMode;
- (id)textInputModeForResponder:(id)arg1;
- (void)updateCurrentAndNextInputModes;
- (void)updateCurrentInputMode:(id)arg1;
- (void)updateDefaultInputModesIfNecessaryForIdiom;
- (void)updateEnabledDictationAndSLSLanguagesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)updateEnabledDictationLanguages:(BOOL)arg1;
- (void)updateLastUsedInputMode:(id)arg1;
- (void)updateUserSelectableInputModes;
- (id)userSelectableInputModeIdentifiersFromInputModeIdentifiers:(id)arg1;
- (id)userSelectableInputModesFromInputModes:(id)arg1;
- (BOOL)verifyKeyboardExtensionsWithApp;
- (void)willEnterForeground:(id)arg1;

@end

