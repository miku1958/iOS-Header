//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoardServices/FBSServiceFacilityClient.h>

@class BSProcessHandle, BSServiceConnectionEndpoint;

@interface FBSSystemAppProxy : FBSServiceFacilityClient
{
    BSServiceConnectionEndpoint *_endpoint;
    unsigned long long _checkoutCount;
    BSProcessHandle *_processHandle;
}

+ (id)checkoutProxyWithEndpoint:(id)arg1;
- (void).cxx_destruct;
- (void)_handleConnect:(id)arg1;
- (void)_sendMessageType:(long long)arg1 withMessage:(CDUnknownBlockType)arg2 withReplyHandler:(CDUnknownBlockType)arg3 waitForReply:(BOOL)arg4;
- (void)checkin;
- (id)clientCallbackQueue;
- (void)fireCompletion:(CDUnknownBlockType)arg1 error:(id)arg2;
- (void)fireCompletion:(CDUnknownBlockType)arg1 openAppErrorCode:(long long)arg2;
- (void)handleMessage:(id)arg1 withType:(long long)arg2;
- (BOOL)isPasscodeLockedOrBlocked;
- (id)processHandleForBundleID:(id)arg1;
- (void)sendActions:(id)arg1 withResult:(CDUnknownBlockType)arg2;
- (void)setKeyboardFocusApplication:(int)arg1 deferringToken:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)shutdownWithOptions:(id)arg1;
- (id)systemApplicationBundleIdentifier;
- (void)terminateApplication:(id)arg1 forReason:(long long)arg2 andReport:(BOOL)arg3 withDescription:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)terminateApplicationGroup:(long long)arg1 forReason:(long long)arg2 andReport:(BOOL)arg3 withDescription:(id)arg4 completion:(CDUnknownBlockType)arg5;

@end

