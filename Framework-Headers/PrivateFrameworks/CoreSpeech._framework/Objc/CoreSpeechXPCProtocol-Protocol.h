//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSString;

@protocol CoreSpeechXPCProtocol
- (void)fetchRemoteVoiceTriggerAssetForLanguageCode:(NSString *)arg1 completion:(void (^)(NSString *, NSString *, NSError *))arg2;
- (void)installedVoiceTriggerAssetForLanguageCode:(NSString *)arg1 completion:(void (^)(NSString *, NSString *, NSError *))arg2;
- (void)voiceTriggerRTModelForVersion:(unsigned long long)arg1 minorVersion:(unsigned long long)arg2 downloadedModels:(NSArray *)arg3 preinstalledModels:(NSArray *)arg4 completion:(void (^)(CSVoiceTriggerRTModel *, CSVoiceTriggerRTModel *, NSError *))arg5;
@end

