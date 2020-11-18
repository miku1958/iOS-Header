//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssertionServices/BKSProcessClientDelegate-Protocol.h>
#import <AssertionServices/BSDescriptionProviding-Protocol.h>

@class BKSLaunchdJobSpecification, BKSProcessClient, BKSProcessExitContext, BSProcessHandle, NSString;
@protocol BKSProcessDelegate, OS_dispatch_queue;

@interface BKSProcess : NSObject <BKSProcessClientDelegate, BSDescriptionProviding>
{
    NSString *_bundleID;
    NSString *_jobLabel;
    BKSProcessClient *_client;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    BKSLaunchdJobSpecification *_jobSpec;
    BKSProcessExitContext *_lastExitContext;
    BOOL _bootstrapped;
    BOOL _workspaceLocked;
    BOOL _connectedToExternalAccessories;
    BOOL _nowPlayingWithAudio;
    BOOL _recordingAudio;
    id<BKSProcessDelegate> _delegate;
    long long _visibility;
    long long _taskState;
    BSProcessHandle *_handle;
    long long _terminationReason;
    NSString *_activationReason;
}

@property (copy, nonatomic) NSString *activationReason; // @synthesize activationReason=_activationReason;
@property (readonly, nonatomic) double backgroundTimeRemaining;
@property (nonatomic) BOOL connectedToExternalAccessories; // @synthesize connectedToExternalAccessories=_connectedToExternalAccessories;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<BKSProcessDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, strong, nonatomic) BSProcessHandle *handle; // @synthesize handle=_handle;
@property (readonly) unsigned long long hash;
@property (readonly, strong, nonatomic) BKSProcessExitContext *lastExitContext;
@property (nonatomic) BOOL nowPlayingWithAudio; // @synthesize nowPlayingWithAudio=_nowPlayingWithAudio;
@property (nonatomic) BOOL recordingAudio; // @synthesize recordingAudio=_recordingAudio;
@property (readonly) Class superclass;
@property (readonly, nonatomic) long long taskState; // @synthesize taskState=_taskState;
@property (nonatomic) long long terminationReason; // @synthesize terminationReason=_terminationReason;
@property (nonatomic) long long visibility; // @synthesize visibility=_visibility;
@property (nonatomic) BOOL workspaceLocked; // @synthesize workspaceLocked=_workspaceLocked;

+ (double)backgroundTimeRemaining;
+ (id)busyExtensionInstances:(id)arg1;
+ (id)currentProcess;
- (void).cxx_destruct;
- (BOOL)_bootstrapWithError:(out id *)arg1;
- (void)_sendMessageType:(int)arg1 withMessage:(CDUnknownBlockType)arg2;
- (void)_sendMessageType:(int)arg1 withMessage:(CDUnknownBlockType)arg2 withReplyHandler:(CDUnknownBlockType)arg3 waitForReply:(BOOL)arg4;
- (BOOL)bootstrapWithProcessHandle:(id)arg1 error:(out id *)arg2;
- (BOOL)bootstrapWithSpecification:(id)arg1 error:(out id *)arg2;
- (void)client:(id)arg1 processDidChangeDebuggingState:(BOOL)arg2;
- (void)client:(id)arg1 processDidChangeTaskState:(long long)arg2;
- (void)client:(id)arg1 processDidExitWithContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)init;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithPID:(int)arg1 bundlePath:(id)arg2 visibility:(long long)arg3 workspaceLocked:(BOOL)arg4 queue:(id)arg5;
- (void)invalidate;
- (void)processAssertionExpirationImminentForClient:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end

