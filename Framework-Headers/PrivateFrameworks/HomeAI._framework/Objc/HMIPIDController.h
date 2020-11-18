//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMFTimerDelegate-Protocol.h>

@class HMFTimer, NSString;

@interface HMIPIDController : HMFObject <HMFTimerDelegate>
{
    float _kp;
    float _ki;
    float _ts;
    float _target;
    float _integrator;
    float _integratorMin;
    float _integratorMax;
    float _engageDelta;
    int _controlEffortMin;
    int _controlEffortMax;
    long long _controlEffort;
    HMFTimer *_tick;
}

@property (readonly) long long controlEffort; // @synthesize controlEffort=_controlEffort;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) HMFTimer *tick; // @synthesize tick=_tick;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)arg1;
- (void)resumeMonitoring;
- (void)setControlEffort:(long long)arg1;
- (void)suspendMonitoring;
- (void)timerDidFire:(id)arg1;
- (void)updateControlEffortFromValue:(float)arg1;

@end
