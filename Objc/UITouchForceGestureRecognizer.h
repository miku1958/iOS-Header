//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIGestureRecognizer.h>

@class CADisplayLink, NSMutableSet, _UIVelocityIntegrator;

@interface UITouchForceGestureRecognizer : UIGestureRecognizer
{
    CADisplayLink *_continuousEvaluationDisplayLink;
    NSMutableSet *_currentTouches;
    unsigned long long _eventTouchCount;
    double _currentTouchForce;
    struct CGPoint _initialCentroidOfTouches;
    struct CGPoint _currentCentroidOfTouches;
    _UIVelocityIntegrator *_velocityIntegrator;
    BOOL _automaticallyIncreaseTouchForce;
    double _touchesBeganTimestamp;
    BOOL _steady;
    double _touchForce;
    double _minimumRequiredTouchForce;
    double _velocity;
    double _allowableMovement;
    unsigned long long _maximumNumberOfTouches;
    double _automaticTouchForce;
    double _automaticTouchForceDuration;
    CDUnknownBlockType _configurationBlock;
}

@property (nonatomic) double allowableMovement; // @synthesize allowableMovement=_allowableMovement;
@property (nonatomic) double automaticTouchForce; // @synthesize automaticTouchForce=_automaticTouchForce;
@property (nonatomic) double automaticTouchForceDuration; // @synthesize automaticTouchForceDuration=_automaticTouchForceDuration;
@property (copy, nonatomic) CDUnknownBlockType configurationBlock; // @synthesize configurationBlock=_configurationBlock;
@property (nonatomic) unsigned long long maximumNumberOfTouches; // @synthesize maximumNumberOfTouches=_maximumNumberOfTouches;
@property (nonatomic) double minimumRequiredTouchForce; // @synthesize minimumRequiredTouchForce=_minimumRequiredTouchForce;
@property (nonatomic, getter=isSteady) BOOL steady; // @synthesize steady=_steady;
@property (readonly, nonatomic) double touchDuration;
@property (nonatomic) double touchForce; // @synthesize touchForce=_touchForce;
@property (nonatomic) double velocity; // @synthesize velocity=_velocity;

- (void).cxx_destruct;
- (void)_beginForContinuousEvaluationForTouches:(id)arg1;
- (void)_endContinuousEvaluation;
- (void)_endIfNeeded:(BOOL)arg1;
- (double)_evaluateAutomaticTouchForceForTimeInterval:(double)arg1 actualTouchForce:(double)arg2;
- (void)_evaluateTouches:(id)arg1 withEvent:(id)arg2;
- (void)_evaluateWithTouchForce:(double)arg1 centroidAtLocation:(struct CGPoint)arg2;
- (BOOL)_hasExceededAllowableMovement;
- (BOOL)_hasExceededMaximumNumberOfTouches;
- (BOOL)_shouldReceiveTouch:(id)arg1 forEvent:(id)arg2 recognizerView:(id)arg3;
- (void)_updateForContinuousEvaluation:(id)arg1;
- (void)_updateTouchForce:(double)arg1;
- (BOOL)_validateHysteresis;
- (BOOL)canPreventGestureRecognizer:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)reset;
- (void)setView:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end

