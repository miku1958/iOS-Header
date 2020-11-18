//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBSSerialQueue, FBSystemServiceServer;
@protocol FBSystemServiceDelegate;

@interface FBSystemService : NSObject
{
    FBSSerialQueue *_queue;
    int _pendingExit;
    id<FBSystemServiceDelegate> _delegate;
    FBSystemServiceServer *_server;
}

@property (nonatomic) id<FBSystemServiceDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, getter=isPendingExit) BOOL pendingExit;
@property (readonly, strong, nonatomic) FBSSerialQueue *queue; // @synthesize queue=_queue;
@property (strong, nonatomic) FBSystemServiceServer *server; // @synthesize server=_server;

+ (id)sharedInstance;
- (void)_activateApplication:(id)arg1 options:(id)arg2 source:(id)arg3 originalSource:(id)arg4 withResult:(CDUnknownBlockType)arg5;
- (BOOL)_isTrustedRequestToOpenApplication:(id)arg1 options:(id)arg2 source:(id)arg3 originalSource:(id)arg4;
- (BOOL)_isWhitelistedLaunchSuspendedApp:(id)arg1;
- (void)_logPendedActivationRequestForMismatchedClientSequenceNumber:(unsigned long long)arg1 clientCacheGUID:(id)arg2 ourSequenceNumber:(unsigned long long)arg3 ourCacheGUID:(id)arg4;
- (void)_performExitTasksForRelaunch:(BOOL)arg1;
- (void)_reallyActivateApplication:(id)arg1 options:(id)arg2 source:(id)arg3 originalSource:(id)arg4 isTrusted:(BOOL)arg5 sequenceNumber:(unsigned long long)arg6 cacheGUID:(id)arg7 ourSequenceNumber:(unsigned long long)arg8 ourCacheGUID:(id)arg9 withResult:(CDUnknownBlockType)arg10;
- (BOOL)_requireEntitlementToOpenURL:(id)arg1;
- (BOOL)_shouldPendRequestForClientSequenceNumber:(unsigned long long)arg1 clientCacheGUID:(id)arg2 ourSequenceNumber:(unsigned long long)arg3 ourCacheGUID:(id)arg4;
- (void)_terminateProcess:(id)arg1 forReason:(long long)arg2 andReport:(BOOL)arg3 withDescription:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)activateApplication:(id)arg1 options:(id)arg2 source:(id)arg3 originalSource:(id)arg4 withResult:(CDUnknownBlockType)arg5;
- (void)canActivateApplication:(id)arg1 source:(id)arg2 withResult:(CDUnknownBlockType)arg3;
- (void)dataReset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (void)exitAndRelaunch:(BOOL)arg1;
- (void)exitAndRelaunch:(BOOL)arg1 withOptions:(unsigned long long)arg2;
- (void)handleActions:(id)arg1 source:(id)arg2 withResult:(CDUnknownBlockType)arg3;
- (id)initWithQueue:(id)arg1;
- (void)isPasscodeLockedOrBlockedWithResult:(CDUnknownBlockType)arg1;
- (void)prepareForExitAndRelaunch:(BOOL)arg1;
- (void)setPendingExit:(BOOL)arg1;
- (void)shutdownAndReboot:(BOOL)arg1;
- (void)shutdownWithOptions:(unsigned long long)arg1;
- (id)systemApplicationBundleIdentifier;
- (void)terminateApplication:(id)arg1 forReason:(long long)arg2 andReport:(BOOL)arg3 withDescription:(id)arg4 source:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)terminateApplicationGroup:(long long)arg1 forReason:(long long)arg2 andReport:(BOOL)arg3 withDescription:(id)arg4 source:(id)arg5;
- (void)terminateApplicationGroup:(long long)arg1 forReason:(long long)arg2 andReport:(BOOL)arg3 withDescription:(id)arg4 source:(id)arg5 completion:(CDUnknownBlockType)arg6;

@end

