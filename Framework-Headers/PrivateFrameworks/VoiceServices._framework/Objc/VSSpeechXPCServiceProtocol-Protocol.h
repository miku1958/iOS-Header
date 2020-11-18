//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VoiceServices/NSObject-Protocol.h>

@class NSArray, NSString, VSPresynthesizedAudioRequest, VSSpeechRequest, VSVoiceAsset;

@protocol VSSpeechXPCServiceProtocol <NSObject>
- (oneway void)beginAudioPowerUpdateWithReply:(void (^)(AFXPCWrapper *))arg1;
- (oneway void)cleanUnusedAssets:(void (^)(NSError *))arg1;
- (oneway void)continueSpeechRequest;
- (oneway void)endAudioPowerUpdate;
- (oneway void)getAutoDownloadedVoiceAssets:(void (^)(NSArray *))arg1;
- (oneway void)getFootprintsForVoiceName:(NSString *)arg1 languageCode:(NSString *)arg2 reply:(void (^)(NSArray *))arg3;
- (oneway void)getLocalVoiceResourcesReply:(void (^)(NSArray *, NSError *))arg1;
- (oneway void)getLocalVoicesReply:(void (^)(NSArray *, NSError *))arg1;
- (oneway void)getLogToFile:(void (^)(BOOL))arg1;
- (oneway void)getSpeechIsActiveForConnectionReply:(void (^)(BOOL))arg1;
- (oneway void)getSpeechIsActiveReply:(void (^)(BOOL))arg1;
- (oneway void)getTTSServerVoicesWithFilter:(VSVoiceAsset *)arg1 reply:(void (^)(NSArray *, NSError *))arg2;
- (oneway void)getVoiceInfoForLanguageCode:(NSString *)arg1 footprint:(long long)arg2 gender:(long long)arg3 type:(long long)arg4 reply:(void (^)(VSVoiceAsset *))arg5;
- (oneway void)getVoiceNamesForLanguage:(NSString *)arg1 reply:(void (^)(NSArray *))arg2;
- (oneway void)getVoiceResourceForLanguage:(NSString *)arg1 reply:(void (^)(VSVoiceResourceAsset *))arg2;
- (oneway void)pauseSpeechRequestAtMark:(long long)arg1;
- (oneway void)prewarmIfNeededWithRequest:(VSSpeechRequest *)arg1;
- (oneway void)setAutoDownloadedVoiceAssets:(NSArray *)arg1;
- (oneway void)setLogToFile:(BOOL)arg1;
- (oneway void)startPresynthesizedAudioRequest:(VSPresynthesizedAudioRequest *)arg1;
- (oneway void)startSpeechRequest:(VSSpeechRequest *)arg1;
- (oneway void)startSynthesisRequest:(VSSpeechRequest *)arg1;
- (oneway void)stopPresynthesizedAudioRequest;
- (oneway void)stopSpeechRequestAtMark:(long long)arg1;
- (oneway void)updateWithConnectionIdentifier:(NSString *)arg1;
@end

