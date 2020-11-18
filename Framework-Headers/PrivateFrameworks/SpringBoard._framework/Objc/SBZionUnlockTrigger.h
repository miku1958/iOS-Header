//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBMesaUnlockTrigger.h>

@class BSTimer;
@protocol SBBiometricUnlockBehaviorConfigurationDelegate;

@interface SBZionUnlockTrigger : SBMesaUnlockTrigger
{
    id<SBBiometricUnlockBehaviorConfigurationDelegate> _behaviorConfigurationDelegate;
    BOOL _fingerOn;
    BOOL _fingerOffSinceWake;
    BSTimer *_restToOpenTimer;
    BSTimer *_minTouchIDTimer;
}

- (void).cxx_destruct;
- (void)_cancelMinTouchIDTimer;
- (void)_cancelRestToOpenTimer;
- (void)_evaluateRestToOpenTimer;
- (BOOL)_isRestToOpenAvailable;
- (void)_startRestToOpenTimer;
- (void)_startRestToOpenTimerWithDuration:(double)arg1;
- (BOOL)bioUnlock;
- (id)description;
- (void)fingerOff;
- (void)fingerOn;
- (id)initWithUnlockBehaviorConfigurationDelegate:(id)arg1;
- (void)lockButtonDown;
- (void)screenOff;
- (id)succinctDescriptionBuilder;

@end
