//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserActivity/NSObject-Protocol.h>

@class NSDate, NSDictionary, NSString, NSURL, NSUUID, UAUserActivityInfo;

@protocol UAUserActivityClientProtocol <NSObject>
- (void)doAddDynamicUserActivity:(NSString *)arg1 matching:(NSString *)arg2;
- (void)doDeleteUserActivityWithUUID:(NSUUID *)arg1;
- (void)doDetermineIfUserActivityIsCurrent:(NSUUID *)arg1 completionHandler:(void (^)(BOOL, NSString *, int, NSString *, NSError *))arg2;
- (void)doFetchUserActivityInfoWithUUID:(NSUUID *)arg1 completionHandler:(void (^)(UAUserActivityInfo *, NSError *))arg2;
- (void)doGetCurrentUserActivityInfo:(void (^)(NSUUID *, NSString *, NSError *))arg1;
- (void)doGetLoggingFileForClient:(NSString *)arg1 options:(NSDictionary *)arg2 completionHandler:(void (^)(NSFileHandle *, NSError *))arg3;
- (void)doInitializeWithClientVersion:(long long)arg1 clientInfo:(NSDictionary *)arg2 completionHandler:(void (^)(long long, NSDictionary *, NSError *))arg3;
- (void)doMarkUserActivityAsDirty:(NSUUID *)arg1 forceImmediate:(BOOL)arg2 webpageURL:(NSURL *)arg3 expiration:(NSDate *)arg4 hasiCloudDocument:(BOOL)arg5 hasUnsynchronizediCloudDoc:(BOOL)arg6;
- (void)doPinUserActivityInfo:(UAUserActivityInfo *)arg1 completionHandler:(void (^)(NSUUID *, NSError *))arg2;
- (void)doRemoveDynamicUserActivity:(NSString *)arg1 matching:(NSString *)arg2;
- (void)doUpdateUserActivityInfo:(UAUserActivityInfo *)arg1 makeCurrent:(BOOL)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)doUpdateUserActivityWithUUID:(NSUUID *)arg1 setActive:(BOOL)arg2;
@end
