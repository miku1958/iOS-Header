//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface AFPreferences : NSObject
{
    BOOL _registeredForInternalPrefs;
    BOOL _registeredForLanguageCode;
    BOOL _registeredForOutputVoice;
    NSObject<OS_dispatch_queue> *_navTokenQueue;
    BOOL _navTokenIsValid;
    int _navToken;
}

+ (id)sharedPreferences;
- (void).cxx_destruct;
- (id)_bestSupportedLanguageCodeForLanguageCode:(id)arg1 isGoodFit:(BOOL *)arg2;
- (id)_bestSupportedLanguageCodeForLanguageCodes:(id)arg1 isGoodFit:(BOOL *)arg2;
- (void)_internalPreferencesDidChangeExternally;
- (BOOL)_languageCode:(id)arg1 isGoodFitForPreferredLanguages:(id)arg2;
- (void)_languageCodeDidChangeExternally;
- (id)_languagePreferencesForCurrentSystemConfiguration;
- (void)_ouputVoiceDidChangeExternally;
- (void)_preferencesDidChangeExternally;
- (void)_registerForInteralPrefs;
- (void)_registerForLanguageCodeChangeNotifications;
- (void)_registerForNavStatusIfNeeded;
- (void)_registerForOutputVoice;
- (void)_setAssistantIsEnabledLocal:(BOOL)arg1;
- (void)_setDictationIsEnabledLocal:(BOOL)arg1;
- (void)_setLoggingDefaultValue:(id)arg1 forKey:(id)arg2;
- (void)_setSuppressDictationOptInLocal:(BOOL)arg1;
- (id)activitySummaryReportDate;
- (id)allSiriLanguageCodesForSystemLanguageCode:(id)arg1 isGoodFit:(BOOL *)arg2;
- (BOOL)applySASToFirstPartyDomains;
- (BOOL)assistantIsEnabled;
- (BOOL)assistantLanguageForceRTL;
- (id)bestSupportedLanguageCodeForLanguageCode:(id)arg1;
- (BOOL)cardLoggingEnabled;
- (BOOL)cloudSyncEnabled;
- (id)cloudSyncEnabledModificationDate;
- (unsigned long long)currentNavigationState;
- (void)dealloc;
- (BOOL)debugButtonIsEnabled;
- (BOOL)dictationIsEnabled;
- (BOOL)disableAssistantWhilePasscodeLocked;
- (BOOL)fileLoggingIsEnabled;
- (void)getOfflineDictationStatusWithCompletion:(CDUnknownBlockType)arg1;
- (long long)handsFreeMode;
- (BOOL)ignoreServerManualEndpointingThreshold;
- (id)init;
- (BOOL)isCurrentLocaleNativelySupported;
- (BOOL)isLocaleIdentifierNativelySupported:(id)arg1;
- (id)languageCode;
- (BOOL)legacyLoggingEnabled;
- (BOOL)limitedAudioLoggingEnabled;
- (id)manualEndpointingThreshold;
- (BOOL)myriadCoordinationEnabled;
- (id)myriadDeviceGroup;
- (BOOL)myriadDuckingEnabled;
- (BOOL)offlineDictationOverride;
- (id)offlineDictationProfileOverridePath;
- (id)outputVoice;
- (void)resetSessionLanguage;
- (BOOL)respectsSystemMute;
- (void)setActivitySummaryReportDateToNow;
- (void)setApplySASToFirstPartyDomains:(BOOL)arg1;
- (void)setAssistantIsEnabled:(BOOL)arg1;
- (void)setAssistantLanguageForceRTL:(BOOL)arg1;
- (void)setCardLoggingEnabled:(BOOL)arg1;
- (void)setCloudSyncEnabled:(BOOL)arg1;
- (void)setCurrentNavigationState:(unsigned long long)arg1;
- (void)setDebugButtonIsEnabled:(BOOL)arg1;
- (void)setDictationIsEnabled:(BOOL)arg1;
- (void)setDisableAssistantWhilePasscodeLocked:(BOOL)arg1;
- (void)setFileLoggingIsEnabled:(BOOL)arg1;
- (void)setHandsFreeMode:(long long)arg1;
- (void)setIgnoreServerManualEndpointingThreshold:(BOOL)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setLimitedAudioLoggingEnabled:(BOOL)arg1;
- (void)setManualEndpointingThreshold:(id)arg1;
- (void)setMyriadCoordinationEnabled:(BOOL)arg1;
- (void)setMyriadDeviceGroup:(id)arg1;
- (void)setMyriadDuckingEnabled:(BOOL)arg1;
- (void)setOfflineDictationOverride:(BOOL)arg1;
- (void)setOfflineDictationProfileOverridePath:(id)arg1;
- (void)setOutputVoice:(id)arg1;
- (void)setRespectsSystemMute:(BOOL)arg1;
- (void)setShowServerOnUI:(BOOL)arg1;
- (void)setShowsHoldToTalkIndicator:(BOOL)arg1;
- (void)setSiriDebugUIEnabled:(BOOL)arg1;
- (void)setSiriKitEnabledForNativeCalling:(BOOL)arg1;
- (void)setSiriKitEnabledForNativeMessages:(BOOL)arg1;
- (void)setSiriKitEnabledForNativeNotes:(BOOL)arg1;
- (void)setStreamingDictationEnabled:(BOOL)arg1;
- (void)setSuppressAssistantOptIn:(BOOL)arg1;
- (void)setSuppressDictationOptIn:(BOOL)arg1;
- (void)setUseDeviceSpeakerForTTS:(long long)arg1;
- (void)setUseSASAutoSelectionFeature:(BOOL)arg1;
- (void)setValue:(id)arg1 forSessionContextKey:(id)arg2;
- (BOOL)shouldLogForQA;
- (BOOL)showServerOnUI;
- (BOOL)showsHoldToTalkIndicator;
- (BOOL)siriDebugUIEnabled;
- (BOOL)siriKitEnabledForNativeCalling;
- (BOOL)siriKitEnabledForNativeMessages;
- (BOOL)siriKitEnabledForNativeNotes;
- (BOOL)streamingDictationEnabled;
- (BOOL)suppressAssistantOptIn;
- (BOOL)suppressDictationOptIn;
- (void)synchronize;
- (void)synchronizeVoiceServicesLanguageCode;
- (long long)useDeviceSpeakerForTTS;
- (BOOL)useSASAutoSelectionFeature;
- (id)valueForSessionContextPreferenceKey:(id)arg1;

@end

