//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <KeychainCircle/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary;

@protocol SOSControlProtocol <NSObject>
- (void)assertStashedAccountCredential:(void (^)(BOOL, NSError *))arg1;
- (void)circleJoiningBlob:(NSData *)arg1 complete:(void (^)(NSData *, NSError *))arg2;
- (void)getWatchdogParameters:(void (^)(NSDictionary *, NSError *))arg1;
- (void)idsPerformanceCounters:(void (^)(NSDictionary *))arg1;
- (void)importInitialSyncCredentials:(NSArray *)arg1 complete:(void (^)(BOOL, NSError *))arg2;
- (void)initialSyncCredentials:(unsigned int)arg1 complete:(void (^)(NSArray *, NSError *))arg2;
- (void)joinCircleWithBlob:(NSData *)arg1 version:(int)arg2 complete:(void (^)(BOOL, NSError *))arg3;
- (void)kvsPerformanceCounters:(void (^)(NSDictionary *))arg1;
- (void)myPeerInfo:(void (^)(NSData *, NSError *))arg1;
- (void)rateLimitingPerformanceCounters:(void (^)(NSDictionary *))arg1;
- (void)setWatchdogParmeters:(NSDictionary *)arg1 complete:(void (^)(NSError *))arg2;
- (void)stashAccountCredential:(NSData *)arg1 complete:(void (^)(BOOL, NSError *))arg2;
- (void)stashedCredentialPublicKey:(void (^)(NSData *, NSError *))arg1;
- (void)triggerSync:(NSArray *)arg1 complete:(void (^)(BOOL, NSError *))arg2;
- (void)userPublicKey:(void (^)(BOOL, NSData *, NSError *))arg1;
- (void)validatedStashedAccountCredential:(void (^)(NSData *, NSError *))arg1;
@end

