//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, _TtC8FMClient12SearchFilter, _TtC8FMClient19ClientConfiguration;

@protocol _TtP8FMClient21ServerSessionProtocol_
- (void)clientConfigurationWithUpdateConfiguration:(_TtC8FMClient19ClientConfiguration *)arg1 completion:(void (^)(_TtC8FMClient19ClientConfiguration *, NSError *))arg2;
- (void)deviceSearch:(_TtC8FMClient12SearchFilter *)arg1 completion:(void (^)(_TtC8FMClient12SearchResult *, NSError *))arg2;
- (void)discoverNearbyDevicesWithCompletion:(void (^)(NSSet *, NSError *))arg1;
- (void)invalidateCacheWithType:(long long)arg1 completion:(void (^)(NSError *))arg2;
- (void)playSound:(NSArray *)arg1 completion:(void (^)(NSError *))arg2;
- (void)voiceAssistantSyncWithCompletion:(void (^)(_TtC8FMClient24VoiceAssistantSyncResult *, NSError *))arg1;
@end
