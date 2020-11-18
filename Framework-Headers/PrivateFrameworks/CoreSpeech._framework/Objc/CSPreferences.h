//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CSPreferences : NSObject
{
}

+ (unsigned long long)_deviceCategoryForDeviceProductType:(id)arg1;
+ (id)deviceCategoryStringRepresentationForCategoryType:(unsigned long long)arg1;
+ (BOOL)isCurrentDeviceCompatibleWithVoiceProfileAt:(id)arg1;
+ (id)sharedPreferences;
- (id)CSSATBasePath;
- (id)_CSSATUpdatePath;
- (id)_CSSATUploadPath;
- (id)_getEnrolledLanguageList;
- (BOOL)_isDirectory:(id)arg1;
- (BOOL)_markSATEnrollmentMigratedForLanguageCode:(id)arg1;
- (BOOL)_markSATEnrollmentSuccessForLanguageCode:(id)arg1;
- (BOOL)_markSATEnrollmentWithMarker:(id)arg1 forLanguage:(id)arg2;
- (BOOL)_storeModeEnabled;
- (id)assistantAudioFileLogDirectory;
- (id)assistantLogDirectory;
- (double)audioSessionActivationDelay;
- (id)baseDir;
- (BOOL)fileLoggingIsEnabled;
- (id)fileLoggingLevel;
- (id)getUserVoiceProfileFileList;
- (id)getUserVoiceProfileUpdateDirectory;
- (id)getUserVoiceProfileUploadPath;
- (id)getUserVoiceProfileUploadPathWithEnrolledLanguageList:(id *)arg1;
- (id)interstitialAbsoluteDirForLevel:(long long)arg1;
- (id)interstitialRelativeDirForLevel:(long long)arg1;
- (BOOL)myriadFileLoggingEnabled;
- (void)notifyUserVoiceProfileUpdateReady;
- (void)notifyUserVoiceProfileUploadComplete;
- (double)remoteVoiceTriggerDelayTime;
- (double)remoteVoiceTriggerEndpointTimeoutWithDefault:(double)arg1;
- (void)setFileLoggingIsEnabled:(BOOL)arg1;
- (void)setFileLoggingLevel:(id)arg1;
- (BOOL)twoShotNotificationEnabled;
- (id)voiceTriggerAudioLogDirectory;
- (BOOL)voiceTriggerEnabled;
- (BOOL)voiceTriggerInCoreSpeech;

@end

