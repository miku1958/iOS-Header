//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSLock, NSMutableDictionary, NSMutableSet, NSNumber, NSOrderedSet, NSSet, NSString, NSURL, NSUUID;

@interface AXSettings : NSObject
{
    NSLock *_synchronizeDomainsLock;
    NSMutableSet *_migratedSwitchControlMenuItemsPreferenceKeys;
    NSMutableDictionary *_unarchivedVoiceCache;
    BOOL _writeAXLogsToFile;
    float _reduceWhitePointLevel;
    double _lastPlatformSwitchTimeResetCount;
    double _lastGuidedAccessTimeLimitResetCount;
    double _lastGuidedAccessTimeResetCount;
    double _lastHearingAidControlPanelTimeResetCount;
    double _lastHearingAidHandoffTimeResetCount;
    NSMutableSet *_registeredNotifications;
    NSMutableDictionary *_synchronizeDomains;
    NSMutableDictionary *_updateBlocks;
}

@property (readonly) BOOL accessibilityEnabled;
@property (strong, nonatomic) NSURL *alexLocalAssetURL;
@property (nonatomic) BOOL allowHearingAidControlOnLockScreen;
@property BOOL applicationAccessibilityEnabled;
@property (nonatomic) BOOL assistiveTouchActionRepeatEnabled;
@property (nonatomic) double assistiveTouchActionRepeatInterval;
@property BOOL assistiveTouchAlwaysShowMenu;
@property (nonatomic) BOOL assistiveTouchAlwaysShowMenuEnabled;
@property (nonatomic) double assistiveTouchAxisSweepSpeed;
@property (nonatomic) BOOL assistiveTouchCameraSwitchPreviewEnabled;
@property (nonatomic) long long assistiveTouchCursorColor;
@property (strong, nonatomic) NSArray *assistiveTouchCustomGestures;
@property (nonatomic) double assistiveTouchDelayAfterInput;
@property (nonatomic) BOOL assistiveTouchDelayAfterInputEnabled;
@property BOOL assistiveTouchEnabled;
@property (nonatomic) BOOL assistiveTouchGroupElementsEnabled;
@property BOOL assistiveTouchHardwareEnabled;
@property (nonatomic) long long assistiveTouchHeadMovementSensitivity;
@property (nonatomic) BOOL assistiveTouchHeadlessModeEnabled;
@property (nonatomic) double assistiveTouchInputCoalescingDuration;
@property (nonatomic) BOOL assistiveTouchInputCoalescingEnabled;
@property (nonatomic) double assistiveTouchInputHoldDuration;
@property (nonatomic) BOOL assistiveTouchInputHoldEnabled;
@property (nonatomic) double assistiveTouchLongPressDuration;
@property (nonatomic) BOOL assistiveTouchLongPressEnabled;
@property (strong, nonatomic) NSDictionary *assistiveTouchMainScreenCustomization;
@property (nonatomic) BOOL assistiveTouchOpenMenuSwaggleEnabled;
@property (strong, nonatomic) NSString *assistiveTouchOrbAction;
@property (nonatomic) long long assistiveTouchPreferredPointPicker;
@property (strong, nonatomic) NSArray *assistiveTouchRecentGestures;
@property (strong, nonatomic) NSArray *assistiveTouchSavedGestures;
@property (nonatomic) long long assistiveTouchScanCycles;
@property (nonatomic) double assistiveTouchScanTimeout;
@property (nonatomic) BOOL assistiveTouchScanTimeoutEnabled;
@property (nonatomic) BOOL assistiveTouchScannerAddedTripleClickAutomatically;
@property (nonatomic) BOOL assistiveTouchScannerCompactMenuEnabled;
@property (nonatomic) BOOL assistiveTouchScannerCursorHighVisibilityEnabled;
@property (nonatomic) BOOL assistiveTouchScannerMenuLabelsEnabled;
@property (nonatomic) BOOL assistiveTouchScannerPointPickerDefaultsToRescan;
@property (nonatomic) BOOL assistiveTouchScannerSoundEnabled;
@property (nonatomic) BOOL assistiveTouchScannerSpeechEnabled;
@property (nonatomic) BOOL assistiveTouchScannerSpeechIsInterruptedByScanning;
@property (nonatomic) double assistiveTouchScannerSpeechRate;
@property (nonatomic) long long assistiveTouchScanningMode;
@property (nonatomic) double assistiveTouchSpeed;
@property (nonatomic) double assistiveTouchStepInterval;
@property (nonatomic) BOOL assistiveTouchSwitchUsageConfirmed;
@property (strong, nonatomic) NSSet *assistiveTouchSwitches;
@property BOOL assistiveTouchUIEnabled;
@property (copy, nonatomic) NSDictionary *assistiveTouchUsageCount;
@property BOOL automationEnabled;
@property BOOL automationFauxCollectionViewCellsEnabled;
@property BOOL automationHitpointWarpingEnabled;
@property BOOL automationLocalizedStringLookupInfoEnabled;
@property (readonly) NSString *automationPreferredLocalization;
@property (nonatomic) long long brokenHomeButtonCount;
@property BOOL buttonShapesEnabled;
@property (nonatomic) double characterFeedbackDelayDuration;
@property (nonatomic) long long characterVoicesUsageCount;
@property (strong, nonatomic) NSArray *currentVoices;
@property (strong, nonatomic) NSArray *customPronunciationSubstitutions;
@property (nonatomic) BOOL enableHearingAidReporter;
@property (nonatomic) BOOL enableVoiceOverCaptions;
@property BOOL enhanceBackgroundContrastEnabled;
@property BOOL enhanceTextLegibilityEnabled;
@property BOOL enhanceTextTrackingEnabled;
@property (strong, nonatomic) NSArray *extantVoices;
@property (copy, nonatomic) NSString *gaxInternalSettingsActiveAppID;
@property (copy, nonatomic) NSNumber *gaxInternalSettingsActiveAppOrientation;
@property (copy, nonatomic) NSString *gaxInternalSettingsDeviceID;
@property (nonatomic) BOOL gaxInternalSettingsIsActiveAppSelfLocked;
@property (strong, nonatomic) NSDate *gaxInternalSettingsLastActivationDate;
@property (strong, nonatomic) NSDate *gaxInternalSettingsLastPasscodeSetDate;
@property (copy, nonatomic) NSString *gaxInternalSettingsProductBuildVersion;
@property (strong, nonatomic) NSDictionary *gaxInternalSettingsSavedAccessibilityFeatures;
@property (strong, nonatomic) NSArray *gaxInternalSettingsSavedAccessibilityTripleClickOptions;
@property (nonatomic) BOOL gaxInternalSettingsSystemDidRestartDueToLowBattery;
@property (nonatomic) BOOL gaxInternalSettingsTimeRestrictionHasExpired;
@property (strong, nonatomic) NSDictionary *gaxInternalSettingsUserAppProfile;
@property (strong, nonatomic) NSArray *gaxInternalSettingsUserConfiguredAppIDs;
@property (strong, nonatomic) NSDictionary *gaxInternalSettingsUserGlobalProfile;
@property (nonatomic) BOOL gizmoApplicationAccessibilityEnabled;
@property (nonatomic) BOOL guidedAccessAXFeaturesEnabled;
@property (nonatomic) BOOL guidedAccessAllowsUnlockWithTouchID;
@property (readonly, nonatomic) NSString *guidedAccessDefaultToneIdentifierForTimeRestrictionEvents;
@property (nonatomic) BOOL guidedAccessDisallowDirectInactiveToActiveTransition;
@property (strong, nonatomic) NSNumber *guidedAccessOverrideTimeRestrictionDuration;
@property (nonatomic) BOOL guidedAccessShouldSpeakForTimeRestrictionEvents;
@property (nonatomic) long long guidedAccessTimeLimitsUsageCount;
@property (copy, nonatomic) NSString *guidedAccessToneIdentifierForTimeRestrictionEvents;
@property (nonatomic) long long guidedAccessUsageCount;
@property (nonatomic) long long hearingAidControlPanelCount;
@property (nonatomic) long long hearingAidHandOffCount;
@property BOOL highContrastFocusIndicatorsEnabled;
@property (nonatomic) BOOL ignoreAXAsserts;
@property (nonatomic) BOOL ignoreAXServerEntitlements;
@property (nonatomic) BOOL includeBacktraceInLogs;
@property BOOL increaseButtonLegibilityEnabled;
@property (nonatomic) BOOL independentHearingAidSettings;
@property BOOL inspectorEnabled;
@property (nonatomic) long long internalLoggingColorTheme;
@property (nonatomic) double lastAssistiveTouchTimeResetCount;
@property (nonatomic) double lastBrailleScreenInputTimeResetCount;
@property (nonatomic) double lastCharacterVoiceTimeResetCount;
@property (nonatomic) double lastGuidedAccessTimeLimitResetCount; // @synthesize lastGuidedAccessTimeLimitResetCount=_lastGuidedAccessTimeLimitResetCount;
@property (nonatomic) double lastGuidedAccessTimeResetCount; // @synthesize lastGuidedAccessTimeResetCount=_lastGuidedAccessTimeResetCount;
@property (nonatomic) double lastHearingAidControlPanelTimeResetCount; // @synthesize lastHearingAidControlPanelTimeResetCount=_lastHearingAidControlPanelTimeResetCount;
@property (nonatomic) double lastHearingAidHandoffTimeResetCount; // @synthesize lastHearingAidHandoffTimeResetCount=_lastHearingAidHandoffTimeResetCount;
@property (nonatomic) double lastMagnifierResetCount;
@property (nonatomic) double lastPlatformSwitchTimeResetCount; // @synthesize lastPlatformSwitchTimeResetCount=_lastPlatformSwitchTimeResetCount;
@property (nonatomic) double lastTapticTimeResetCount;
@property (nonatomic) BOOL letterFeedbackEnabled;
@property (nonatomic) BOOL localizationQACaptionMode;
@property (nonatomic) BOOL localizationQACaptionShowFilePath;
@property (nonatomic) BOOL localizationQACaptionShowLocalizedString;
@property (nonatomic) BOOL localizationQACaptionShowUSString;
@property (nonatomic) BOOL logAXNotificationPosting;
@property (nonatomic) double magnifierBrightness;
@property (nonatomic) double magnifierContrast;
@property (nonatomic) BOOL magnifierEnabled;
@property (nonatomic) BOOL magnifierFilterInverted;
@property (nonatomic) unsigned long long magnifierFilterSetIdentifier;
@property (nonatomic) BOOL magnifierShouldAdjustFiltersForAmbientLight;
@property (nonatomic) long long magnifierUsageCount;
@property (nonatomic) double magnifierZoomLevel;
@property (strong, nonatomic) NSDictionary *pairedHearingAids;
@property (nonatomic) BOOL phoneticFeedbackEnabled;
@property (nonatomic) unsigned long long quickSpeakHighlightOption;
@property (nonatomic) BOOL quickSpeakHighlightText;
@property (nonatomic) struct CGPoint quickSpeakNubbitNormalizedPosition;
@property (nonatomic) unsigned long long quickSpeakSentenceHighlightOption;
@property (nonatomic) float quickSpeakSpeakingRate;
@property (nonatomic) BOOL quickSpeakUnderlineSentence;
@property (nonatomic) float quickSpeakVolume;
@property (nonatomic) BOOL quickTypeWordFeedbackEnabled;
@property BOOL reduceMotionEnabled;
@property BOOL reduceWhitePointEnabled;
@property (nonatomic) float reduceWhitePointLevel; // @synthesize reduceWhitePointLevel=_reduceWhitePointLevel;
@property (strong, nonatomic) NSMutableSet *registeredNotifications; // @synthesize registeredNotifications=_registeredNotifications;
@property (nonatomic) BOOL shouldFlashForAlertInSilentMode;
@property (nonatomic) BOOL shouldStreamToLeftAid;
@property (nonatomic) BOOL shouldStreamToRightAid;
@property BOOL siriSemanticContextEnabled;
@property (nonatomic) BOOL skipHearingAidMFiAuth;
@property (nonatomic) BOOL speakCorrectionsEnabled;
@property (nonatomic) BOOL speakIncomingNotifications;
@property (nonatomic) BOOL stickyKeysBeepEnabled;
@property (nonatomic) BOOL stickyKeysEnabled;
@property (nonatomic) BOOL stickyKeysShiftToggleEnabled;
@property (nonatomic) double switchControlAutoTapTimeout;
@property (strong, nonatomic) NSArray *switchControlDeviceMenuItems;
@property (nonatomic) double switchControlDwellTime;
@property BOOL switchControlEnabled;
@property (strong, nonatomic) NSArray *switchControlGesturesMenuItems;
@property (readonly, nonatomic) BOOL switchControlHasEmptyTopLevelMenu;
@property (nonatomic) BOOL switchControlIsEnabledAsSlave;
@property (strong, nonatomic) NSUUID *switchControlLaunchRecipeUUID;
@property (nonatomic) long long switchControlPlatformSwitchedCount;
@property (strong, nonatomic) NSArray *switchControlRecipes;
@property (nonatomic) long long switchControlScanAfterTapLocation;
@property (nonatomic) long long switchControlScanningStyle;
@property (strong, nonatomic) NSArray *switchControlSettingsMenuItems;
@property (nonatomic) BOOL switchControlShouldAlwaysActivateKeyboardKeys;
@property (nonatomic) BOOL switchControlShouldUseShortFirstPage;
@property (nonatomic) long long switchControlTapBehavior;
@property (strong, nonatomic) NSArray *switchControlTopLevelMenuItems;
@property (strong, nonatomic) NSMutableDictionary *synchronizeDomains; // @synthesize synchronizeDomains=_synchronizeDomains;
@property (nonatomic) long long tapticTimeUsageCount;
@property (readonly, nonatomic) BOOL touchAccommodationsAreConfigured;
@property (nonatomic) BOOL touchAccommodationsEnabled;
@property (nonatomic) double touchAccommodationsHoldDuration;
@property (nonatomic) BOOL touchAccommodationsHoldDurationEnabled;
@property (nonatomic) double touchAccommodationsIgnoreRepeatDuration;
@property (nonatomic) BOOL touchAccommodationsIgnoreRepeatEnabled;
@property (nonatomic) long long touchAccommodationsTapActivationMethod;
@property (nonatomic) double touchAccommodationsTapActivationTimeout;
@property (nonatomic) BOOL touchAccommodationsTripleClickConfirmed;
@property (nonatomic) BOOL touchAccommodationsUsageConfirmed;
@property (strong) NSArray *tripleClickOptions;
@property (strong, nonatomic) NSMutableDictionary *updateBlocks; // @synthesize updateBlocks=_updateBlocks;
@property (nonatomic) BOOL validateSecondPartyApps;
@property (nonatomic) long long voiceOverActivationWorkaround;
@property (nonatomic) BOOL voiceOverAlwaysUseNemethCodeForMathEnabled;
@property (nonatomic) BOOL voiceOverAudioDuckingEnabled;
@property (nonatomic) long long voiceOverBSIUsageCount;
@property (nonatomic) double voiceOverBrailleAlertDisplayDuration;
@property (copy) NSDictionary *voiceOverBrailleBluetoothDisplay;
@property long long voiceOverBrailleContractionMode;
@property BOOL voiceOverBrailleEightDotMode;
@property (readonly, nonatomic) BOOL voiceOverBrailleGesturesEnabled;
@property (nonatomic) long long voiceOverBrailleGesturesTypingFeedback;
@property (nonatomic) BOOL voiceOverBrailleGradeTwoAutoTranslateEnabled;
@property long long voiceOverBrailleMasterStatusCellIndex;
@property (copy, nonatomic) NSString *voiceOverBrailleTableIdentifier;
@property long long voiceOverBrailleVirtualStatusAlignment;
@property (nonatomic) double voiceOverDoubleTapInterval;
@property BOOL voiceOverEnabled;
@property BOOL voiceOverEnabledThroughAccessory;
@property (readonly, nonatomic) BOOL voiceOverHandwritingEnabled;
@property (strong, nonatomic) NSNumber *voiceOverHandwritingWasNativeAutocorrectEnabled;
@property (nonatomic) long long voiceOverHardwareTypingFeedback;
@property (nonatomic) BOOL voiceOverHearingAidRoutingEnabled;
@property (nonatomic) long long voiceOverHelpMode;
@property (nonatomic) BOOL voiceOverHintsEnabled;
@property (nonatomic) long long voiceOverKeyboardModifierChoice;
@property (readonly) BOOL voiceOverLangaugeRotorItemsExist;
@property (strong) NSArray *voiceOverLanguageRotorItems;
@property (nonatomic) BOOL voiceOverLargeCursorEnabled;
@property (nonatomic) long long voiceOverNavigateImagesOption;
@property (nonatomic) long long voiceOverNavigationDirectionMode;
@property (nonatomic) long long voiceOverPhoneticsFeedback;
@property (nonatomic) BOOL voiceOverPitchChangeEnabled;
@property (copy, nonatomic) NSArray *voiceOverRotorItems;
@property BOOL voiceOverScreenCurtainEnabled;
@property (nonatomic) BOOL voiceOverShouldOutputToHearingAid;
@property (nonatomic) BOOL voiceOverShowSoftwareKeyboardWithBraille;
@property (nonatomic) long long voiceOverSoftwareTypingFeedback;
@property (nonatomic) BOOL voiceOverSoundEffectsEnabled;
@property (nonatomic) BOOL voiceOverSpeakNotificationsEnabled;
@property (nonatomic) long long voiceOverSpeakSecondsEncoding;
@property float voiceOverSpeakingRate;
@property (nonatomic) BOOL voiceOverSpeakingRateInRotorEnabled;
@property (nonatomic) long long voiceOverTapticTimeEncoding;
@property (nonatomic) BOOL voiceOverTapticTimeMode;
@property (nonatomic) long long voiceOverTouchBrailleDisplayInputMode;
@property (nonatomic) long long voiceOverTouchBrailleDisplayOutputMode;
@property (nonatomic) BOOL voiceOverTouchBrailleGesturesDidPlayCalibrationHint;
@property (nonatomic) long long voiceOverTouchBrailleGesturesInputMode;
@property (nonatomic) int voiceOverTouchBrailleGesturesLockedOrientation;
@property (nonatomic) long long voiceOverTouchBrailleGesturesLockedTypingMode;
@property (nonatomic) BOOL voiceOverTouchBrailleGesturesShouldUseLockedConfiguration;
@property (nonatomic) BOOL voiceOverTouchBraillePanningAutoTurnsReadingContent;
@property (nonatomic) BOOL voiceOverTouchBrailleShouldReverseDots;
@property (copy) NSString *voiceOverTouchBrailleTableIdentifier;
@property (nonatomic) BOOL voiceOverTouchSingleLetterQuickNavEnabled;
@property int voiceOverTypingMode;
@property BOOL voiceOverUIEnabled;
@property BOOL voiceOverUsageConfirmed;
@property (nonatomic) BOOL voiceOverVerbosityEmojiSuffixEnabled;
@property float voiceOverVolume;
@property (nonatomic) BOOL wordFeedbackEnabled;
@property (nonatomic) BOOL writeAXLogsToFile; // @synthesize writeAXLogsToFile=_writeAXLogsToFile;
@property (nonatomic) BOOL zoomAlwaysUseWindowedZoomForTyping;
@property (strong, nonatomic) NSString *zoomCurrentLensEffect;
@property (strong, nonatomic) NSString *zoomCurrentLensMode;
@property (nonatomic) BOOL zoomDebugDisableZoomLensScaleTransform;
@property (nonatomic) BOOL zoomDebugShowExternalFocusRect;
@property BOOL zoomEnabled;
@property (nonatomic) double zoomIdleSlugOpacity;
@property (nonatomic) BOOL zoomInStandby;
@property (nonatomic) struct CGPoint zoomPanOffset;
@property (nonatomic) BOOL zoomPeekZoomEnabled;
@property (nonatomic) BOOL zoomPeekZoomEverEnabled;
@property (nonatomic) BOOL zoomPreferencesWereInitialized;
@property (strong, nonatomic) NSString *zoomPreferredCurrentLensMode;
@property (strong, nonatomic) NSOrderedSet *zoomPreferredLensModes;
@property (nonatomic) double zoomPreferredMaximumZoomScale;
@property (nonatomic) double zoomScale;
@property (nonatomic) BOOL zoomShouldAllowFullscreenAutopanning;
@property (nonatomic) BOOL zoomShouldFollowFocus;
@property (nonatomic) BOOL zoomShouldShowSlug;
@property (nonatomic) struct CGPoint zoomSlugNormalizedPosition;
@property BOOL zoomSmoothScalingEnabled;
@property BOOL zoomToggledByPreferenceSwitch;
@property BOOL zoomToggledByVoiceOver;
@property (nonatomic) struct CGRect zoomWindowFrame;

+ (void)initialize;
+ (id)sharedInstance;
- (BOOL)_anyUserPreferredLangaugeIsRTL;
- (void)_assignDefaultTitleIfNeededToRecipe:(id)arg1;
- (id)_audioHardwareChannelLayout;
- (void)_clearWhitetailMigrationSettings;
- (id)_createAndSaveRecipeForInterfaceOrientedPoint:(struct CGPoint)arg1 forHold:(BOOL)arg2;
- (int)_domainForPreferenceKey:(id)arg1;
- (struct __CFString *)_domainNameForDomain:(int)arg1;
- (void)_handlePreferenceChanged:(id)arg1;
- (void)_handleVoiceUnarchivedCache:(id)arg1;
- (BOOL)_hasSwitchWithUUID:(id)arg1;
- (void)_localeChange:(id)arg1;
- (id)_migratePreferenceIfNecessary:(id)arg1;
- (id)_notificationForPreferenceKey:(id)arg1;
- (id)_preferenceKeyForSelector:(SEL)arg1;
- (id)_quickSpeakAltVoices;
- (id)_quickSpeakPrefersCompact;
- (id)_quickSpeakSpeakingRateLanguages;
- (void)_registerForNotification:(id)arg1;
- (void)_removeSpeakingRatePreferenceForLanguage:(id)arg1;
- (id)_retrieveVoices:(id)arg1;
- (void)_setAudioHardwareChannelLayout:(id)arg1;
- (void)_setValue:(id)arg1 forPreferenceKey:(id)arg2;
- (void)_setVoiceArray:(id)arg1 forKey:(id)arg2;
- (id)_switchControlAltVoices;
- (void)_switchControlClearMenuItemMigrationTracking;
- (void)_switchControlClearMenuItemPreferences;
- (BOOL)_switchControlHasEmptyTopLevelMenuItems:(id)arg1;
- (id)_switchControlMenuItemsForPreferenceKey:(id)arg1 allTypes:(id)arg2;
- (id)_switchControlMigratePreMonarchIncludedMenuItemsForNewTypes:(id)arg1;
- (id)_switchControlPrefersCompact;
- (id)_switchControlScannerDefaultDialect;
- (BOOL)_switchFromRootUserIfNecessary:(CDUnknownBlockType)arg1;
- (id)_switchWithAction:(long long)arg1 excludedUUIDs:(id)arg2 needsToSupportLongPress:(BOOL)arg3;
- (id)_switchWithAnyActionExcludingUUIDs:(id)arg1 needsToSupportLongPress:(BOOL)arg2;
- (void)_synchronizeIfNecessary:(id)arg1 domain:(int)arg2;
- (void)_updateTouchAccommodationsTripleClickSetting;
- (BOOL)_updateWithoutSavingExistingRecipe:(id)arg1 allRecipes:(id)arg2;
- (id)_userDefaultsStoreForDomain:(int)arg1;
- (id)_valueForPreferenceKey:(id)arg1;
- (id)_voiceOverAlternativeVoiceIdentifiers;
- (id)_voiceOverDefaultDialect;
- (id)_voiceOverPrefersCompactByLanguage;
- (BOOL)_voiceOverRotorItemEnabled:(id)arg1;
- (id)_voiceOverTouchSpeakingRateLanguages;
- (void)addRotorOptionsForLoginSession;
- (BOOL)assistiveTouchAutoScanningEnabled;
- (BOOL)assistiveTouchCustomizationEnabled;
- (BOOL)assistiveTouchScannerPrefersCompact:(id)arg1;
- (void)clearExistingValueForPreference:(SEL)arg1;
- (void)clearVoicePrefersCompactSettings;
- (void)configureZoomForLoginSession;
- (id)createAndSaveRecipeForInterfaceOrientedHoldPoint:(struct CGPoint)arg1;
- (id)createAndSaveRecipeForInterfaceOrientedPoint:(struct CGPoint)arg1;
- (void)dealloc;
- (BOOL)gizmoGetAutoSpeakEnabledForComplication:(id)arg1 slot:(id)arg2 face:(id)arg3;
- (id)gizmoGetWatchFaceAutoSpeakPreferences;
- (void)gizmoSetAutoSpeakEnabledForComplication:(id)arg1 slot:(id)arg2 face:(id)arg3 toggle:(BOOL)arg4;
- (id)init;
- (BOOL)isNewRecipe:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)preferenceHasExistingValue:(SEL)arg1;
- (float)quickSpeakSpeakingRateForLanguage:(id)arg1;
- (void)registerUpdateBlock:(CDUnknownBlockType)arg1 forRetrieveSelector:(SEL)arg2 withListener:(id)arg3;
- (void)saveRecipe:(id)arg1;
- (id)selectedSpeechVoiceIdentifiers;
- (void)setAssistiveTouchScannerPrefersCompact:(BOOL)arg1 forLanguage:(id)arg2;
- (void)setQuickSpeakSpeakingRate:(float)arg1 forLanguage:(id)arg2;
- (void)setSpeechVoiceIdentifier:(id)arg1 forLanguage:(id)arg2 source:(long long)arg3;
- (void)setTestingExtantVoices:(id)arg1;
- (void)setVoiceOverAlternativeVoiceIdentifier:(id)arg1 forLanguage:(id)arg2;
- (void)setVoiceOverSpeakingRate:(float)arg1 forLanguage:(id)arg2;
- (void)setlastGuidedAccessTimeLimitResetCount:(double)arg1;
- (void)setlastGuidedAccessTimeResetCount:(double)arg1;
- (void)setlastHearingAidControlPanelTimeResetCount:(double)arg1;
- (void)setlastHearingAidHandoffTimeResetCount:(double)arg1;
- (void)setlastPlatformSwitchTimeResetCount:(double)arg1;
- (id)speechVoiceIdentifierForLanguage:(id)arg1 source:(long long)arg2 exists:(BOOL *)arg3;
- (id)switchForUUID:(id)arg1;
- (BOOL)updateRecipe:(id)arg1;
- (BOOL)validateAndUpdateRecipeIfNeeded:(id)arg1;
- (id)voiceOverAlternativeVoiceIdentifier:(id)arg1;
- (float)voiceOverSpeakingRateForLanguage:(id)arg1;
- (void)zoomUserHadLegacyZoomEnabled:(BOOL *)arg1 wasZoomedIn:(BOOL *)arg2 withScale:(double *)arg3;

@end

