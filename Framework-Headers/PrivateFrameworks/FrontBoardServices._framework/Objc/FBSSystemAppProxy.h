//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoardServices/FBSSystemServiceFacilityClient.h>

@class FBSProcessHandle;

@interface FBSSystemAppProxy : FBSSystemServiceFacilityClient
{
    FBSProcessHandle *_processHandle;
}

+ (id)sharedInstance;
- (void)_handleConnect:(id)arg1;
- (void)_sendMessageType:(long long)arg1 withMessage:(CDUnknownBlockType)arg2 withReplyHandler:(CDUnknownBlockType)arg3 waitForReply:(BOOL)arg4;
- (void)activeInterfaceOrientationWithCompletion:(CDUnknownBlockType)arg1;
- (void)applicationBundleID:(id)arg1 requestBrightness:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)badgeValueForBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)canActivateApplication:(id)arg1 withResult:(CDUnknownBlockType)arg2;
- (void)checkInUIApplication;
- (id)clientCallbackQueue;
- (void)dataResetWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (void)deleteAllSnapshotsForApplication:(id)arg1;
- (void)fireCompletion:(CDUnknownBlockType)arg1 bundleIDResult:(id)arg2 error:(id)arg3;
- (void)fireCompletion:(CDUnknownBlockType)arg1 error:(id)arg2;
- (void)fireCompletion:(CDUnknownBlockType)arg1 openAppErrorCode:(long long)arg2;
- (void)fireCompletion:(CDUnknownBlockType)arg1 pidResult:(int)arg2 error:(id)arg3;
- (void)handleMessage:(id)arg1 withType:(long long)arg2;
- (id)init;
- (void)isPasscodeLockedOrBlockedWithCompletion:(CDUnknownBlockType)arg1;
- (void)openApplication:(id)arg1 options:(id)arg2 clientHandle:(id)arg3 withResult:(CDUnknownBlockType)arg4;
- (void)pidForApplication:(id)arg1 withResult:(CDUnknownBlockType)arg2;
- (id)processHandleForApplication:(id)arg1;
- (void)sendActions:(id)arg1 withResult:(CDUnknownBlockType)arg2;
- (void)setBadgeValue:(id)arg1 forBundleID:(id)arg2;
- (void)setKeyboardFocusApplicationWithBundleID:(id)arg1 pid:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setNextWakeInterval:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)shutdownAndReboot:(BOOL)arg1;
- (void)suspendCurrentApplication;
- (void)systemApplicationBundleIdentifierWithResult:(CDUnknownBlockType)arg1;
- (void)terminateApplication:(id)arg1 forReason:(int)arg2 andReport:(BOOL)arg3 withDescription:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)terminateApplicationGroup:(int)arg1 forReason:(int)arg2 andReport:(BOOL)arg3 withDescription:(id)arg4 completion:(CDUnknownBlockType)arg5;

@end

