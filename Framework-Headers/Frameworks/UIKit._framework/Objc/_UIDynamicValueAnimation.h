//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIDynamicAnimation.h>

@class NSArray, NSMutableArray;

@interface _UIDynamicValueAnimation : _UIDynamicAnimation
{
    CDUnknownBlockType _applier;
    CDUnknownBlockType _viewApplier;
    double _value;
    double _velocity;
    double _unitSize;
    double _friction;
    double _decelerationFactor;
    double _decelerationLnFactor;
    double _multiplier;
    NSMutableArray *_activeValues;
    void *_stepFunction;
}

@property (copy, nonatomic) NSArray *activeValues; // @synthesize activeValues=_activeValues;
@property (nonatomic) double friction; // @synthesize friction=_friction;
@property (nonatomic) double value; // @synthesize value=_value;
@property (nonatomic) double velocity; // @synthesize velocity=_velocity;

+ (id)_dynamicValueAnimationMatchingCASpringAnimationWithMass:(double)arg1 stiffness:(double)arg2 damping:(float)arg3 velocity:(float)arg4 fromValue:(double)arg5 toValue:(double)arg6;
- (BOOL)_animateForInterval:(double)arg1;
- (void)_appendSubclassDescription:(id)arg1 atLevel:(int)arg2;
- (double)_multiplier;
- (void)_setDecelerationFactor:(double)arg1;
- (void)_setMultiplier:(double)arg1;
- (void)_setVelocity:(double)arg1;
- (void)_stopAnimation;
- (void)_updateStepFunction;
- (void)addActiveValue:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithValue:(double)arg1 velocity:(double)arg2 unitSize:(double)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeActiveValue:(id)arg1;
- (void)runWithCompletion:(CDUnknownBlockType)arg1;
- (void)runWithValueApplier:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)runWithValueApplier:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2 forScreen:(id)arg3 runLoopMode:(id)arg4;

@end

