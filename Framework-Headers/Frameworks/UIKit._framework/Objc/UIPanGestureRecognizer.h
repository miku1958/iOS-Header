//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIGestureRecognizer.h>

@class NSMutableArray, UIPanGestureVelocitySample;

@interface UIPanGestureRecognizer : UIGestureRecognizer
{
    struct CGPoint _firstSceneReferenceLocation;
    struct CGPoint _lastSceneReferenceLocation;
    double _lastTouchTime;
    id _velocitySample;
    id _previousVelocitySample;
    NSMutableArray *_touches;
    unsigned long long _lastTouchCount;
    unsigned long long _minimumNumberOfTouches;
    unsigned long long _maximumNumberOfTouches;
    double _hysteresis;
    double _allowableSeparation;
    struct CGPoint _lastUnadjustedSceneReferenceLocation;
    double _allowableTouchTimeSeparation;
    unsigned int _failsPastMaxTouches:1;
    unsigned int _failsPastHysteresisWithoutMinTouches:1;
    unsigned int _canPanHorizontally:1;
    unsigned int _canPanVertically:1;
    unsigned int _ignoresStationaryTouches:1;
    unsigned int _multitouchTimerOn:1;
    unsigned int _requiresImmediateMultipleTouches:1;
    NSMutableArray *_movingTouches;
    struct CGPoint _digitizerLocation;
}

@property (readonly, getter=_previousVelocitySample) UIPanGestureVelocitySample *_previousVelocitySample; // @synthesize _previousVelocitySample;
@property (readonly, getter=_velocitySample) UIPanGestureVelocitySample *_velocitySample; // @synthesize _velocitySample;
@property (nonatomic) unsigned long long maximumNumberOfTouches; // @synthesize maximumNumberOfTouches=_maximumNumberOfTouches;
@property (nonatomic) unsigned long long minimumNumberOfTouches; // @synthesize minimumNumberOfTouches=_minimumNumberOfTouches;

+ (double)_defaultHysteresis;
+ (void)_setPanGestureRecognizersEnabled:(BOOL)arg1;
+ (BOOL)_shouldDefaultToTouches;
- (void).cxx_destruct;
- (id)_activeTouches;
- (struct CGPoint)_adjustSceneReferenceLocation:(struct CGPoint)arg1;
- (double)_allowableSeparation;
- (double)_allowableTouchTimeSeparation;
- (BOOL)_canPanHorizontally;
- (BOOL)_canPanVertically;
- (void)_centroidMovedTo:(struct CGPoint)arg1 atTime:(double)arg2;
- (struct CGPoint)_convertPoint:(struct CGPoint)arg1 fromSceneReferenceCoordinatesToView:(id)arg2;
- (struct CGPoint)_convertPoint:(struct CGPoint)arg1 toSceneReferenceCoordinatesFromView:(id)arg2;
- (struct CGPoint)_convertVelocitySample:(id)arg1 fromSceneReferenceCoordinatesToView:(id)arg2;
- (struct CGPoint)_digitizerLocation;
- (BOOL)_failsPastHysteresisWithoutMinTouches;
- (void)_handleEndedTouches:(id)arg1 withFinalStateAdjustments:(CDUnknownBlockType)arg2;
- (double)_hysteresis;
- (void)_ignoreTouchForTouchIdentifier:(unsigned int)arg1;
- (void)_ignoreTouches:(id)arg1 forEvent:(id)arg2;
- (BOOL)_ignoresStationaryTouches;
- (long long)_lastTouchCount;
- (struct UIOffset)_offsetInViewFromSceneReferenceLocation:(struct CGPoint)arg1 toSceneReferenceLocation:(struct CGPoint)arg2;
- (void)_processTouchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)_removeHysteresisFromTranslation;
- (BOOL)_requiresImmediateMultipleTouches;
- (void)_resetGestureRecognizer;
- (void)_resetVelocitySamples;
- (void)_setAllowableSeparation:(double)arg1;
- (void)_setAllowableTouchTimeSeparation:(double)arg1;
- (void)_setCanPanHorizontally:(BOOL)arg1;
- (void)_setCanPanVertically:(BOOL)arg1;
- (void)_setFailsPastHysteresisWithoutMinTouches:(BOOL)arg1;
- (void)_setHysteresis:(double)arg1;
- (void)_setIgnoresStationaryTouches:(BOOL)arg1;
- (void)_setRequiresImmediateMultipleTouches:(BOOL)arg1;
- (struct CGPoint)_shiftPanLocationToNewSceneReferenceLocation:(struct CGPoint)arg1 lockingToAxis:(int)arg2;
- (BOOL)_shouldTryToBeginWithEvent:(id)arg1;
- (BOOL)_touchesExceedAllowableSeparation;
- (void)_touchesListChangedFrom:(id)arg1 to:(id)arg2;
- (void)_updateDigitizerLocationWithEvent:(id)arg1;
- (BOOL)_updateMovingTouchesArraySavingOldArray:(id *)arg1;
- (void)_willBeginAfterSatisfyingFailureRequirements;
- (BOOL)_willScrollX;
- (BOOL)_willScrollY;
- (void)clearMultitouchTimer;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)failsPastMaxTouches;
- (id)initWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (struct CGPoint)locationInView:(id)arg1;
- (struct CGPoint)locationOfTouch:(unsigned long long)arg1 inView:(id)arg2;
- (void)multitouchExpired:(id)arg1;
- (unsigned long long)numberOfTouches;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setFailsPastMaxTouches:(BOOL)arg1;
- (void)setTranslation:(struct CGPoint)arg1 inView:(id)arg2;
- (void)startMultitouchTimer:(double)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (struct CGPoint)translationInView:(id)arg1;
- (struct CGPoint)velocityInView:(id)arg1;

@end

