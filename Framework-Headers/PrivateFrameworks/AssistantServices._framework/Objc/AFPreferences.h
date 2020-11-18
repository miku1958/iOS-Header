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
- (id)_alternativeLocaleLanguageFor:(id)arg1;
- (id)_fallbackLocaleLanguageFor:(id)arg1;
- (void)_internalPreferencesDidChangeExternally;
- (void)_languageCodeDidChangeExternally;
- (id)_mappedLanguageCodeArrayFor:(id)arg1;
- (void)_ouputVoiceDidChangeExternally;
- (void)_preferencesDidChangeExternally;
- (void)_registerForInteralPrefs;
- (void)_registerForLanguageCode;
- (void)_registerForNavStatusIfNeeded;
- (void)_registerForOutputVoice;
- (void)_setAssistantIsEnabledLocal:(BOOL)arg1;
- (void)_setDictationIsEnabledLocal:(BOOL)arg1;
- (void)_setLoggingDefaultValue:(id)arg1 forKey:(id)arg2;
- (void)_setSiriAccess:(BOOL)arg1 forAppID:(id)arg2;
- (void)_setSuppressDictationOptInLocal:(BOOL)arg1;
- (BOOL)_siriAccessForAppID:(id)arg1;
- (id)_siriDisabledAppIDs;
- (BOOL)assistantIsEnabled;
- (BOOL)assistantLanguageForceRTL;
- (id)bestSupportedLanguageCodeForLanguageCode:(id)arg1;
- (long long)bugReportingMode;
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
- (id)manualEndpointingThreshold;
- (BOOL)myriadCoordinationEnabled;
- (BOOL)offlineDictationOverride;
- (id)offlineDictationProfileOverridePath;
- (id)outputVoice;
- (void)resetSessionLanguage;
- (BOOL)respectsSystemMute;
- (void)setAssistantIsEnabled:(BOOL)arg1;
- (void)setAssistantLanguageForceRTL:(BOOL)arg1;
- (void)setBugReportingMode:(long long)arg1;
- (void)setDebugButtonIsEnabled:(BOOL)arg1;
- (void)setDictationIsEnabled:(BOOL)arg1;
- (void)setDisableAssistantWhilePasscodeLocked:(BOOL)arg1;
- (void)setFileLoggingIsEnabled:(BOOL)arg1;
- (void)setHandsFreeMode:(long long)arg1;
- (void)setIgnoreServerManualEndpointingThreshold:(BOOL)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setManualEndpointingThreshold:(id)arg1;
- (void)setMyriadCoordinationEnabled:(BOOL)arg1;
- (void)setOfflineDictationOverride:(BOOL)arg1;
- (void)setOfflineDictationProfileOverridePath:(id)arg1;
- (void)setOutputVoice:(id)arg1;
- (void)setRespectsSystemMute:(BOOL)arg1;
- (void)setShowsHoldToTalkIndicator:(BOOL)arg1;
- (void)setSiriDebugUIEnabled:(BOOL)arg1;
- (void)setStreamingDictationEnabled:(BOOL)arg1;
- (void)setSuppressAssistantOptIn:(BOOL)arg1;
- (void)setSuppressDictationOptIn:(BOOL)arg1;
- (void)setUseDeviceSpeakerForTTS:(long long)arg1;
- (void)setValue:(id)arg1 forSessionContextKey:(id)arg2;
- (BOOL)showsHoldToTalkIndicator;
- (BOOL)siriDebugUIEnabled;
- (BOOL)streamingDictationEnabled;
- (BOOL)suppressAssistantOptIn;
- (BOOL)suppressDictationOptIn;
- (void)synchronize;
- (void)synchronizeVoiceServicesLanguageCode;
- (long long)useDeviceSpeakerForTTS;
- (id)valueForSessionContextPreferenceKey:(id)arg1;

@end

