//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CFNetwork/NSObject-Protocol.h>

@class NSDictionary, NSString, NSURL, NSURLSessionConfiguration;
@protocol NDBackgroundSessionClient;

@protocol NDBackgroundSessionManagerProtocol <NSObject>
- (void)boost;
- (void)createSessionWithConfiguration:(NSURLSessionConfiguration *)arg1 clientProxy:(id<NDBackgroundSessionClient>)arg2 cachesDirectory:(NSURL *)arg3 options:(NSDictionary *)arg4 reply:(void (^)(id<NDBackgroundSessionProtocol>, NSDictionary *, BOOL))arg5;
- (void)dropBoost;
- (void)getActiveSessionIdentifiersWithReply:(void (^)(NSArray *))arg1;
- (void)obliterateAllSessionsWithReply:(void (^)(void))arg1;
- (void)okayToSendPendingCallbacksForIdentifier:(NSString *)arg1 reply:(void (^)(void))arg2;
- (void)releaseAssertionForSession:(NSString *)arg1 reply:(void (^)(void))arg2;
- (void)sendPendingCallbacksForIdentifier:(NSString *)arg1 reply:(void (^)(void))arg2;
@end

