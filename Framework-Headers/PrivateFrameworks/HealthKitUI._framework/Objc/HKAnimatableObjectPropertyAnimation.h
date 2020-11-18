//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface HKAnimatableObjectPropertyAnimation : NSObject
{
    CDUnknownBlockType _animationTimingFunction;
    double _currentAnimationTime;
    double _duration;
    CDUnknownBlockType _completionHandler;
}

@property (readonly, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property (readonly, nonatomic) double duration; // @synthesize duration=_duration;

+ (id)animationWithDuration:(double)arg1 timingFunction:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
+ (CDUnknownBlockType)linearTimingFunction;
+ (CDUnknownBlockType)timingFunctionForMediaTimingFunction:(id)arg1;
- (void).cxx_destruct;
- (id)_currentValue;
- (id)_endValue;
- (void)_setCurrentValue:(id)arg1;
- (void)_setEndValue:(id)arg1;
- (void)_setStartValue:(id)arg1;
- (id)_startValue;
- (void)_updateWithProgress:(float)arg1;
- (void)callAndReleaseCompletionHandler;
- (BOOL)isFinishedAnimating;
- (void)update:(double)arg1;
- (id)valueByAddingCurrentValueToValue:(id)arg1;

@end
