//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CAMediaTimingFunction;

@interface _SUICCheckGlyphSpringAnimationFactory : NSObject
{
    double _duration;
    BOOL _needsDurationUpdate;
    double _mass;
    double _stiffness;
    double _damping;
    double _velocity;
    CAMediaTimingFunction *_timing;
}

@property (nonatomic) double damping; // @synthesize damping=_damping;
@property (readonly, nonatomic) double duration;
@property (nonatomic) double mass; // @synthesize mass=_mass;
@property (nonatomic) double stiffness; // @synthesize stiffness=_stiffness;
@property (strong, nonatomic) CAMediaTimingFunction *timing; // @synthesize timing=_timing;
@property (nonatomic) double velocity; // @synthesize velocity=_velocity;

+ (double)defaultDuration;
+ (id)defaultTimingFunction;
+ (id)springAnimationWithKeyPath:(id)arg1;
+ (id)springAnimationWithKeyPath:(id)arg1 velocity:(double)arg2;
- (void).cxx_destruct;
- (id)_springAnimationWithKeyPath:(id)arg1;
- (id)_timingFunctionForAnimation;
- (void)_updateDurationIfNecessary;
- (void)dealloc;
- (id)init;
- (id)initWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 velocity:(double)arg4;
- (id)initWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 velocity:(double)arg4 timing:(id)arg5;
- (id)initWithVelocity:(double)arg1;
- (id)initWithVelocity:(double)arg1 timing:(id)arg2;
- (id)springAnimationWithKeyPath:(id)arg1;

@end

