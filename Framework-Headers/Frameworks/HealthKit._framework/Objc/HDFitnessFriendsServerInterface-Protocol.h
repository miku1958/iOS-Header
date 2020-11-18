//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/NSObject-Protocol.h>

@class NSNumber, NSString;

@protocol HDFitnessFriendsServerInterface <NSObject>
- (void)remote_acceptInviteRequestFromFriendWithUUID:(NSString *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)remote_clearFriendListWithCompletion:(void (^)(BOOL))arg1;
- (void)remote_fetchAllDataIfTimeSinceLastFetchIsGreaterThan:(unsigned long long)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)remote_fetchAllDataWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (void)remote_fetchAreMultipleDevicesSharingDataForSnapshotIndex:(NSNumber *)arg1 withCompletion:(void (^)(BOOL, NSError *, BOOL))arg2;
- (void)remote_fitnessFriendsCloudKitAccountStatusWithCompletion:(void (^)(BOOL, BOOL, NSError *))arg1;
- (void)remote_ignoreInviteRequestFromFriendWithUUID:(NSString *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)remote_pushFakeDataWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (void)remote_removeFriendWithUUID:(NSString *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)remote_sendInviteRequestToDestination:(NSString *)arg1 callerID:(NSString *)arg2 serviceIdentifier:(NSString *)arg3 completion:(void (^)(BOOL, NSError *))arg4;
- (void)remote_sendWithdrawInviteRequestToFriendWithUUID:(NSString *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)remote_setActivityDataVisible:(BOOL)arg1 toFriendWithUUID:(NSString *)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)remote_setMuteEnabled:(BOOL)arg1 forFriendWithUUID:(NSString *)arg2 completion:(void (^)(BOOL, NSError *))arg3;
@end

