//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SBValueConvergenceAnimator : NSObject
{
    double _previousForce;
    double _diff;
    BOOL _finishesOnValueConvergence;
    double _currentValue;
    double _targetValue;
    CDUnknownBlockType _convergenceFunction;
    CDUnknownBlockType _applier;
    CDUnknownBlockType _completion;
    long long _frameInterval;
    double _startTime;
    double _lastFireTime;
}

@property (copy, nonatomic) CDUnknownBlockType applier; // @synthesize applier=_applier;
@property (copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property (copy, nonatomic) CDUnknownBlockType convergenceFunction; // @synthesize convergenceFunction=_convergenceFunction;
@property (nonatomic) double currentValue; // @synthesize currentValue=_currentValue;
@property (readonly, nonatomic) double elapsedTime;
@property (nonatomic) BOOL finishesOnValueConvergence; // @synthesize finishesOnValueConvergence=_finishesOnValueConvergence;
@property (nonatomic) long long frameInterval; // @synthesize frameInterval=_frameInterval;
@property (nonatomic) double lastFireTime; // @synthesize lastFireTime=_lastFireTime;
@property (nonatomic) double startTime; // @synthesize startTime=_startTime;
@property (nonatomic) double targetValue; // @synthesize targetValue=_targetValue;

- (void).cxx_destruct;
- (void)_convergeValue;
- (void)_invokeApplier;
- (void)_invokeCompletionWithFinished:(BOOL)arg1;
- (void)_reset;
- (void)dealloc;
- (id)init;
- (BOOL)isRunning;
- (void)setConvergenceFunctionWithConstant:(long long)arg1;
- (void)start;
- (void)stop;

@end

