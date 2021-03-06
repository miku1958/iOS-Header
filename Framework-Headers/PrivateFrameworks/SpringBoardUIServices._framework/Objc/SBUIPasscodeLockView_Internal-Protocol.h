//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUIServices/SBUIPasscodeLockView-Protocol.h>

@class NSString, SBUIProudLockContainerViewController;

@protocol SBUIPasscodeLockView_Internal <SBUIPasscodeLockView>

@property (nonatomic) BOOL canSuggestSwipeToRetry;
@property (nonatomic) BOOL confirmedNotInPocket;
@property (strong, nonatomic) SBUIProudLockContainerViewController *overrideProudLockContainerViewController;
@property (nonatomic) CDStruct_29b32c11 proudLockConfiguration;

- (void)_overrideBiometricMatchingEnabled:(BOOL)arg1 forReason:(NSString *)arg2;
- (void)_resumeBiometricMatchingAdvisory:(BOOL)arg1;
- (void)beginTransitionToState:(long long)arg1;
- (void)didEndTransitionToState:(long long)arg1;
- (void)updateTransitionWithProgress:(double)arg1;
- (void)willEndTransitionToState:(long long)arg1;

@optional
- (void)_noteAppearingForSmartCoverUnlock:(BOOL)arg1;
- (void)_noteBottomFaceHasBeenOccluded;
- (void)_noteDeviceHasBeenUnlockedOnceSinceBoot:(BOOL)arg1;
@end

