//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VoiceServices/NSObject-Protocol.h>

@class NSArray, NSString, VSGenericUpdateEndpoint, VSSpeechRequest, VSVoiceAsset;

@protocol VSSpeechService <NSObject>
- (oneway void)continueSpeechRequest;
- (oneway void)downloadVoiceAsset:(VSVoiceAsset *)arg1 progress:(VSGenericUpdateEndpoint *)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)getAutoDownloadedVoiceAssets:(void (^)(NSArray *))arg1;
- (oneway void)getCustomVoicesReply:(void (^)(NSArray *, NSError *))arg1;
- (oneway void)getFootprintsForVoiceName:(NSString *)arg1 languageCode:(NSString *)arg2 reply:(void (^)(NSArray *))arg3;
- (oneway void)getLocalCustomVoicesReply:(void (^)(NSArray *, NSError *))arg1;
- (oneway void)getLogToFile:(void (^)(BOOL))arg1;
- (oneway void)getSpeechIsActiveForConnectionReply:(void (^)(BOOL))arg1;
- (oneway void)getSpeechIsActiveReply:(void (^)(BOOL))arg1;
- (oneway void)getVoiceInfoForLanguageCode:(NSString *)arg1 footprint:(long long)arg2 gender:(long long)arg3 custom:(BOOL)arg4 reply:(void (^)(VSVoiceAsset *))arg5;
- (oneway void)getVoiceNamesForLanguage:(NSString *)arg1 reply:(void (^)(NSArray *))arg2;
- (oneway void)pauseSpeechRequestAtMark:(long long)arg1;
- (oneway void)setAutoDownloadedVoiceAssets:(NSArray *)arg1;
- (oneway void)setLogToFile:(BOOL)arg1;
- (oneway void)startSpeechRequest:(VSSpeechRequest *)arg1;
- (oneway void)stopSpeechRequestAtMark:(long long)arg1;
@end
