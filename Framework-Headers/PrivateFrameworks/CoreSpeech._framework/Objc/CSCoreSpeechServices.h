//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CSCoreSpeechServices : NSObject
{
}

+ (void)fetchRemoteVoiceTriggerAssetForLanguageCode:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)getCoreSpeechServiceConnection;
+ (id)getCoreSpeechXPCConnection;
+ (long long)getFirstPassRunningMode;
+ (void)installedVoiceTriggerAssetForLanguageCode:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)requestUpdatedSATAudio;
+ (void)voiceTriggerJarvisLanguageList:(id)arg1 jarvisSelectedLanguage:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)voiceTriggerRTModelForVersion:(unsigned long long)arg1 minorVersion:(unsigned long long)arg2 downloadedModels:(id)arg3 preinstalledModels:(id)arg4 completion:(CDUnknownBlockType)arg5;

@end

