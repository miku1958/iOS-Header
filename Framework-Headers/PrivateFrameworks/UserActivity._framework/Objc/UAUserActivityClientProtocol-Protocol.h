//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserActivity/NSObject-Protocol.h>

@class NSDictionary, NSString, NSURL, NSUUID, UAUserActivityInfo;

@protocol UAUserActivityClientProtocol <NSObject>
- (void)doAddDynamicUserActivity:(NSString *)arg1 matching:(NSString *)arg2;
- (void)doDeleteUserActivityWithUUID:(NSUUID *)arg1;
- (void)doFetchUserActivityInfoWithUUID:(NSUUID *)arg1 completionHandler:(void (^)(UAUserActivityInfo *, NSError *))arg2;
- (void)doGetCurrentDebugInfo;
- (void)doGetCurrentUserActivityInfo:(void (^)(NSUUID *, NSString *, NSError *))arg1;
- (void)doInitializeWithClientVersion:(long long)arg1 clientInfo:(NSDictionary *)arg2 completionHandler:(void (^)(long long, NSDictionary *, NSError *))arg3;
- (void)doMarkUserActivityAsDirty:(NSUUID *)arg1 forceImmediate:(BOOL)arg2 webpageURL:(NSURL *)arg3;
- (void)doPinUserActivityInfo:(UAUserActivityInfo *)arg1 completionHandler:(void (^)(NSUUID *, NSError *))arg2;
- (void)doRegisterUserActivityInfo:(UAUserActivityInfo *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)doRemoveDynamicUserActivity:(NSString *)arg1 matching:(NSString *)arg2;
- (void)doUpdateUserActivityInfo:(UAUserActivityInfo *)arg1 makeCurrent:(BOOL)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)doUpdateUserActivityWithUUID:(NSUUID *)arg1 setActive:(BOOL)arg2;
@end

