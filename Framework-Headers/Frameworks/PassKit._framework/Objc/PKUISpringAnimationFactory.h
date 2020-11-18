//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PassKit/_UIBasicAnimationFactory-Protocol.h>

@class CAMediaTimingFunction, NSString;

@interface PKUISpringAnimationFactory : NSObject <_UIBasicAnimationFactory>
{
    double _duration;
    BOOL _needsDurationUpdate;
    CDUnknownBlockType _animationDelayHandler;
    double _mass;
    double _stiffness;
    double _damping;
    double _velocity;
    CAMediaTimingFunction *_timing;
    double _maximumVendedDelay;
}

@property (nonatomic) double damping; // @synthesize damping=_damping;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) double duration;
@property (readonly) unsigned long long hash;
@property (nonatomic) double mass; // @synthesize mass=_mass;
@property (readonly, nonatomic) double maximumVendedDelay; // @synthesize maximumVendedDelay=_maximumVendedDelay;
@property (nonatomic) double stiffness; // @synthesize stiffness=_stiffness;
@property (readonly) Class superclass;
@property (strong, nonatomic) CAMediaTimingFunction *timing; // @synthesize timing=_timing;
@property (nonatomic) double velocity; // @synthesize velocity=_velocity;

+ (id)defaultTimingFunction;
+ (id)springAnimationWithKeyPath:(id)arg1;
+ (id)springAnimationWithKeyPath:(id)arg1 velocity:(double)arg2;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (id)_springAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (id)_springAnimationWithKeyPath:(id)arg1;
- (id)_timingFunctionForAnimation;
- (void)_updateDurationIfNecessary;
- (CDUnknownBlockType)animationDelayHandler;
- (void)dealloc;
- (id)init;
- (id)initWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 velocity:(double)arg4;
- (id)initWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 velocity:(double)arg4 timing:(id)arg5;
- (id)initWithVelocity:(double)arg1;
- (id)initWithVelocity:(double)arg1 timing:(id)arg2;
- (void)setAnimationDelayHandler:(CDUnknownBlockType)arg1;
- (id)springAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (id)springAnimationWithKeyPath:(id)arg1;

@end

