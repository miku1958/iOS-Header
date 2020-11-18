//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HDFitnessMachineStateTimer;
@protocol HDFitnessMachineStateTimersDelegate, OS_dispatch_queue;

@interface HDFitnessMachineStateTimers : NSObject
{
    id<HDFitnessMachineStateTimersDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    HDFitnessMachineStateTimer *_fieldDetectTimer;
    HDFitnessMachineStateTimer *_tagReadTimer;
    HDFitnessMachineStateTimer *_machineIdentityVerificationTimer;
    HDFitnessMachineStateTimer *_userAcceptanceTimer;
    HDFitnessMachineStateTimer *_waitForMachineStartTimer;
    HDFitnessMachineStateTimer *_pauseTimer;
    HDFitnessMachineStateTimer *_disconnectTimer;
    HDFitnessMachineStateTimer *_retryConnectionTimer;
    HDFitnessMachineStateTimer *_mfaTimer;
}

@property (weak, nonatomic) id<HDFitnessMachineStateTimersDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) HDFitnessMachineStateTimer *disconnectTimer; // @synthesize disconnectTimer=_disconnectTimer;
@property (strong, nonatomic) HDFitnessMachineStateTimer *fieldDetectTimer; // @synthesize fieldDetectTimer=_fieldDetectTimer;
@property (strong, nonatomic) HDFitnessMachineStateTimer *machineIdentityVerificationTimer; // @synthesize machineIdentityVerificationTimer=_machineIdentityVerificationTimer;
@property (strong, nonatomic) HDFitnessMachineStateTimer *mfaTimer; // @synthesize mfaTimer=_mfaTimer;
@property (strong, nonatomic) HDFitnessMachineStateTimer *pauseTimer; // @synthesize pauseTimer=_pauseTimer;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (strong, nonatomic) HDFitnessMachineStateTimer *retryConnectionTimer; // @synthesize retryConnectionTimer=_retryConnectionTimer;
@property (strong, nonatomic) HDFitnessMachineStateTimer *tagReadTimer; // @synthesize tagReadTimer=_tagReadTimer;
@property (strong, nonatomic) HDFitnessMachineStateTimer *userAcceptanceTimer; // @synthesize userAcceptanceTimer=_userAcceptanceTimer;
@property (strong, nonatomic) HDFitnessMachineStateTimer *waitForMachineStartTimer; // @synthesize waitForMachineStartTimer=_waitForMachineStartTimer;

- (void).cxx_destruct;
- (void)beginDisconnectTimeout;
- (void)beginFieldDetectTimeout;
- (void)beginMachineIdentityVerificationTimeout;
- (void)beginMfaTimeout;
- (void)beginPauseTimeout;
- (void)beginRetryConnectionTimeout;
- (void)beginTagReadTimeout;
- (void)beginUserAcceptanceTimeout;
- (void)beginWaitForMachineStartTimeout;
- (void)cancelAllTimers;
- (void)cancelDisconnectTimeout;
- (void)cancelFieldDetectTimeout;
- (void)cancelMachineIdentityVerificationTimeout;
- (void)cancelMfaTimeout;
- (void)cancelPauseTimeout;
- (void)cancelRetryConnectionTimeout;
- (void)cancelTagReadTimeout;
- (void)cancelUserAcceptanceTimeout;
- (void)cancelWaitForMachineStartTimeout;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 delegate:(id)arg2;
- (BOOL)isDisconnectTimerValid;
- (BOOL)isFieldDetectTimerValid;
- (BOOL)isMachineIdentityVerificationTimerValid;
- (BOOL)isMfaTimerValid;
- (BOOL)isPauseTimerValid;
- (BOOL)isRetryConnectionTimerValid;
- (BOOL)isTagReadTimerValid;
- (BOOL)isUserAcceptanceTimerValid;
- (BOOL)isWaitForMachineStartTimerValid;

@end
