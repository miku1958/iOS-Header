//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUAnimationSettings.h>

@class CASpringAnimation;

@interface HUSpringAnimationSettings : HUAnimationSettings
{
    double _completionEpsilon;
    CASpringAnimation *_springAnimation;
}

@property (nonatomic) double completionEpsilon; // @synthesize completionEpsilon=_completionEpsilon;
@property (nonatomic) double damping;
@property (nonatomic) double initialVelocity;
@property (nonatomic) double mass;
@property (readonly, nonatomic) CASpringAnimation *springAnimation; // @synthesize springAnimation=_springAnimation;
@property (nonatomic) double stiffness;

+ (id)criticallyDampedSpringSettings;
- (void).cxx_destruct;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (id)_initWithSpringAnimation:(id)arg1 completionEpsilon:(double)arg2;
- (void)_updateDuration;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)delay;
- (double)duration;
- (id)init;
- (double)interpolatedProgressForProgress:(double)arg1;
- (float)repeatCount;
- (void)setDelay:(double)arg1;
- (void)setDuration:(double)arg1;
- (void)setRepeatCount:(float)arg1;
- (void)setSpeed:(double)arg1;
- (void)setTimingFunction:(id)arg1;
- (double)speed;
- (id)timingFunction;

@end

