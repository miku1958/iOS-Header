//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, SBFMutableMobileKeyBagState;
@protocol OS_dispatch_queue;

@interface SBFShamMobileKeyBag : NSObject
{
    float _timeScaleFactor;
    NSObject<OS_dispatch_queue> *_queue;
    NSData *_queue_correctPasscode;
    SBFMutableMobileKeyBagState *_queue_state;
    unsigned long long _queue_escrowState;
    float _queue_escrowCountTotal;
    float _queue_escrowCountDelta;
    NSData *_queue_trialPasscode;
}

+ (id)shamKeyBagWithRecoveryRequired:(BOOL)arg1 correctPasscode:(id)arg2;
+ (id)shamKeyBagWithRecoveryRequired:(BOOL)arg1 recoveryPossible:(BOOL)arg2 timeScaleFactor:(float)arg3 correctPasscode:(id)arg4;
- (void).cxx_destruct;
- (void)_queue_initializeSecretChangeMachine:(id)arg1;
- (void)_queue_stepSecretChangeMachine;
- (long long)_simplifiedLockStateForLockState:(long long)arg1;
- (BOOL)beginRecovery:(id)arg1 error:(id *)arg2;
- (void)createStashBag:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)createStashBag:(id)arg1 completion:(CDUnknownBlockType)arg2 completionQueue:(id)arg3;
- (id)extendedState;
- (id)initWithRecoveryRequired:(BOOL)arg1 correctPasscode:(id)arg2;
- (id)initWithRecoveryRequired:(BOOL)arg1 recoveryPossible:(BOOL)arg2 timeScaleFactor:(float)arg3 correctPasscode:(id)arg4;
- (void)lock;
- (id)state;
- (void)waitForUnlockWithTimeout:(float)arg1;

@end

