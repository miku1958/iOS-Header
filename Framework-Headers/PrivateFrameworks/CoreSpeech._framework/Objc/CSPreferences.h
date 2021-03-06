//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CSPreferences : NSObject
{
}

+ (id)sharedPreferences;
- (BOOL)_isDirectory:(id)arg1;
- (BOOL)_isRemoteVoiceTriggerAvailable;
- (BOOL)_storeModeEnabled;
- (id)assistantAudioFileLogDirectory;
- (id)assistantLogDirectory;
- (BOOL)audioInjectionEnabled;
- (BOOL)audioInjectionEnabledWithKey:(struct __CFString *)arg1;
- (id)audioInjectionFilePath;
- (double)audioSessionActivationDelay;
- (id)baseDir;
- (BOOL)bypassPersonalizedHeySiri;
- (BOOL)companionSyncVoiceTriggerUtterancesEnabled;
- (BOOL)enableAudioInjection:(BOOL)arg1;
- (BOOL)enableAudioInjection:(BOOL)arg1 withKey:(struct __CFString *)arg2;
- (BOOL)enableProgrammableAudioInjection:(BOOL)arg1;
- (id)fakeHearstModelPath;
- (BOOL)fileLoggingIsEnabled;
- (id)fileLoggingLevel;
- (BOOL)forceVoiceTriggerAOPMode;
- (BOOL)forceVoiceTriggerAPMode;
- (id)getCatAdBlockerAssetUpdateDirectory;
- (long long)getJarvisTriggerMode;
- (id)getSSVLogFilePathWithSessionIdentifier:(id)arg1;
- (id)getStartOfSpeechAudioLogFilePath;
- (BOOL)iOSBargeInSupportEnabled;
- (id)interstitialAbsoluteDirForLevel:(long long)arg1;
- (id)interstitialRelativeDirForLevel:(long long)arg1;
- (BOOL)isAdBlockerAudioLoggingEnabled;
- (BOOL)isAttentiveSiriAudioLoggingEnabled;
- (BOOL)isAttentiveSiriEnabled;
- (BOOL)isMultiChannelAudioLoggingEnabled;
- (BOOL)isMultiPhraseVTEnabled;
- (BOOL)isPHSSupported;
- (BOOL)isSelfTriggerFileLoggingEnabled;
- (BOOL)isSpeakerRecognitionAvailable;
- (BOOL)isStaggeredCATDownloadEnabled;
- (BOOL)jarvisAudioLoggingEnabled;
- (unsigned long long)maxNumGradingFiles;
- (unsigned long long)maxNumLoggingFiles;
- (BOOL)myriadFileLoggingEnabled;
- (id)myriadHashDirectory;
- (id)myriadHashFilePath;
- (BOOL)opportuneSpeakListenerBypassEnabled;
- (float)overwritingRemoteVADScore;
- (BOOL)phraseSpotterEnabled;
- (BOOL)programmableAudioInjectionEnabled;
- (double)remoteVoiceTriggerDelayTime;
- (double)remoteVoiceTriggerEndpointTimeoutWithDefault:(double)arg1;
- (BOOL)runningVoiceTriggerOnMac;
- (BOOL)secondPassAudioLoggingEnabled;
- (void)setAudioInjectionFilePath:(id)arg1;
- (void)setFileLoggingIsEnabled:(BOOL)arg1;
- (void)setFileLoggingLevel:(id)arg1;
- (void)setHearstFirstPassModelVersion:(id)arg1;
- (void)setHearstSecondPassModelVersion:(id)arg1;
- (void)setJarvisTriggerMode:(long long)arg1;
- (BOOL)shouldOverwriteRemoteVADScore;
- (BOOL)smartSiriVolumeContextAwareEnabled;
- (BOOL)smartSiriVolumeContextAwareLoggingEnabled;
- (BOOL)smartSiriVolumeSoftVolumeEnabled;
- (unsigned long long)speakerIdScoreReportingType;
- (BOOL)speakerRecognitionAudioLoggingEnabled;
- (id)ssvLogDirectory;
- (BOOL)startOfSpeechAudioLoggingEnabled;
- (id)trialBaseAssetDirectory;
- (BOOL)twoShotNotificationEnabled;
- (BOOL)useSiriActivationSPIForHomePod;
- (BOOL)useSiriActivationSPIForwatchOS;
- (id)voiceTriggerAudioLogDirectory;
- (BOOL)voiceTriggerEnabled;
- (BOOL)voiceTriggerInCoreSpeech;

@end

