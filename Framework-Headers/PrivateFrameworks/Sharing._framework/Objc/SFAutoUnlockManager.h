//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sharing/SFUnlockClientProtocol-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue, SFAutoUnlockManagerDelegate;

@interface SFAutoUnlockManager : NSObject <SFUnlockClientProtocol>
{
    id<SFAutoUnlockManagerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<SFAutoUnlockManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) double spinnerDelay;
@property (readonly) Class superclass;

+ (BOOL)autoUnlockSupported;
- (void).cxx_destruct;
- (void)attemptAutoUnlock;
- (void)autoUnlockStateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)beganAttemptWithDevice:(id)arg1;
- (void)cancelAutoUnlock;
- (void)cancelEnablingAutoUnlockForDevice:(id)arg1;
- (void)completedUnlockWithDevice:(id)arg1;
- (void)disableAutoUnlockForDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)eligibleAutoUnlockDevicesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)enableAutoUnlockWithDevice:(id)arg1 passcode:(id)arg2;
- (void)enableAutoUnlockWithDevice:(id)arg1 passcode:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)enabledDevice:(id)arg1;
- (void)failedToEnableDevice:(id)arg1 error:(id)arg2;
- (void)failedUnlockWithError:(id)arg1;
- (id)init;
- (void)keyDeviceLocked:(id)arg1;
- (void)onDelegateQueue_notifyDelegateOfAttemptError:(id)arg1;
- (void)onDelegateQueue_notifyDelegateOfEnableError:(id)arg1 device:(id)arg2;
- (void)repairCloudPairing;

@end

