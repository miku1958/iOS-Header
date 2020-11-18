//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserManagement/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString;

@protocol UMXPCServer <NSObject>
- (void)addUserSwitchBlockingTask:(NSDictionary *)arg1 forPID:(int)arg2;
- (void)addUserSwitchBlockingTask:(NSDictionary *)arg1 forPID:(int)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)addUserSyncTask:(NSDictionary *)arg1 forPID:(int)arg2;
- (void)addUserSyncTask:(NSDictionary *)arg1 forPID:(int)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)fetchUserSwitchBlockingTaskListWithCompletionHandler:(void (^)(NSArray *))arg1;
- (void)reengageUserQuotaForPID:(int)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)registerCriticalUserSwitchStakeholderForPID:(int)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)registerUserSwitchStakeholderForPID:(int)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)registerUserSyncStakeholderForPID:(int)arg1 machServiceName:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)removeUserSwitchBlockingTask:(NSDictionary *)arg1 forPID:(int)arg2;
- (void)removeUserSwitchBlockingTask:(NSDictionary *)arg1 forPID:(int)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)removeUserSyncTask:(NSDictionary *)arg1 forPID:(int)arg2;
- (void)removeUserSyncTask:(NSDictionary *)arg1 forPID:(int)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)resumeSyncBubbleForPID:(int)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)suspendUserQuotaForPID:(int)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)switchToLoginUserWithPID:(int)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)switchToUser:(NSDictionary *)arg1 passcodeData:(NSData *)arg2 context:(NSData *)arg3 pid:(int)arg4 completionHandler:(void (^)(NSError *))arg5;
- (void)terminateSyncBubbleForPID:(int)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)unregisterStakeholderForPID:(int)arg1 status:(unsigned long long)arg2 reason:(NSString *)arg3 completionHandler:(void (^)(NSError *))arg4;
@end

