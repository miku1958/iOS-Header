//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserManagement/NSObject-Protocol.h>

@class NSDictionary;

@protocol UMXPCClient <NSObject>
- (void)bubbleDidPop;
- (void)deviceLoginSessionStateDidUpdate;
- (void)personaListDidUpdateCompletionHandler:(void (^)(void))arg1;
- (void)personaUpdateCallbackForMachServiceCompletionHandler:(void (^)(void))arg1;
- (void)readyToSwitchToLoginSession:(NSDictionary *)arg1 completionHandler:(void (^)(void))arg2;
- (void)readyToSwitchToUser:(NSDictionary *)arg1 completionHandler:(void (^)(void))arg2;
- (void)uploadContentWithCompletionHandler:(void (^)(void))arg1;
- (void)userSwitchTaskListDidUpdate;
- (void)willSwitchToUser:(NSDictionary *)arg1 completionHandler:(void (^)(void))arg2;
@end

