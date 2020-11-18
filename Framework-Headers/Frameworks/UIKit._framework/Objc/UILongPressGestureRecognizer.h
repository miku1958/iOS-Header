//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIGestureRecognizer.h>

#import <UIKitCore/UITapRecognizerDelegate-Protocol.h>

@class NSArray, NSMutableSet, NSObservation, NSString, UIDelayedAction, UIHeldAction, UILongPressGestureVelocitySample, UITapRecognizer;

@interface UILongPressGestureRecognizer : UIGestureRecognizer <UITapRecognizerDelegate>
{
    NSArray *_touches;
    NSMutableSet *_activeTouches;
    unsigned long long _numberOfTouchesRequired;
    double _minimumPressDuration;
    double _allowableMovement;
    struct CGPoint _startPointScreen;
    struct CGPoint _lastCentroidScreen;
    UIHeldAction *_enoughTimeElapsed;
    UIDelayedAction *_tooMuchTimeElapsed;
    UIDelayedAction *_multitouchTimer;
    UITapRecognizer *_imp;
    UILongPressGestureVelocitySample *_velocitySample;
    UILongPressGestureVelocitySample *_previousVelocitySample;
    NSObservation *_touchForceObservation;
    long long _impulseObservations;
    double _currentImpulse;
    double _lastForce;
    double _lastForceTimestamp;
    unsigned int _gotTouchEnd:1;
    unsigned int _gotTooMany:1;
    unsigned int _gotEnoughTaps:1;
    unsigned int _cancelPastAllowableMovement:1;
    unsigned int _allowsDynamicTouchesList:1;
    BOOL _requiresQuietImpulse;
    BOOL _requiresQuietImpulseForCurrentTouchSequence;
    BOOL __prefersToBeExclusiveWithCompetingLongPressGestureRecognizers;
    BOOL __shouldAlwaysEnableMultitouchTimerAtTouchesBegin;
    long long _buttonType;
    double _allowableElapsedTimeForAllRequiredTouches;
    double _lastTouchTime;
    struct CGPoint _lastSceneReferenceLocation;
    struct CGPoint _lastUnadjustedSceneReferenceLocation;
}

@property (nonatomic, setter=_setAllowableElapsedTimeForAllRequiredTouches:) double _allowableElapsedTimeForAllRequiredTouches; // @synthesize _allowableElapsedTimeForAllRequiredTouches;
@property (nonatomic, setter=_setButtonType:) long long _buttonType; // @synthesize _buttonType;
@property (readonly, nonatomic) struct CGPoint _centroidScreen;
@property (nonatomic) BOOL _prefersToBeExclusiveWithCompetingLongPressGestureRecognizers; // @synthesize _prefersToBeExclusiveWithCompetingLongPressGestureRecognizers=__prefersToBeExclusiveWithCompetingLongPressGestureRecognizers;
@property (nonatomic, setter=_setRequiresQuietImpulse:) BOOL _requiresQuietImpulse; // @synthesize _requiresQuietImpulse;
@property (nonatomic, setter=_setShouldAlwaysEnableMultitouchTimerAtTouchesBegin:) BOOL _shouldAlwaysEnableMultitouchTimerAtTouchesBegin; // @synthesize _shouldAlwaysEnableMultitouchTimerAtTouchesBegin=__shouldAlwaysEnableMultitouchTimerAtTouchesBegin;
@property (nonatomic) double allowableMovement; // @synthesize allowableMovement=_allowableMovement;
@property (nonatomic) BOOL cancelPastAllowableMovement;
@property (readonly, nonatomic) struct CGPoint centroid;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double delay; // @synthesize delay=_minimumPressDuration;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGPoint lastSceneReferenceLocation; // @synthesize lastSceneReferenceLocation=_lastSceneReferenceLocation;
@property (nonatomic) double lastTouchTime; // @synthesize lastTouchTime=_lastTouchTime;
@property (nonatomic) struct CGPoint lastUnadjustedSceneReferenceLocation; // @synthesize lastUnadjustedSceneReferenceLocation=_lastUnadjustedSceneReferenceLocation;
@property (nonatomic) double minimumPressDuration;
@property (nonatomic) unsigned long long numberOfTapsRequired;
@property (nonatomic) unsigned long long numberOfTouchesRequired; // @synthesize numberOfTouchesRequired=_numberOfTouchesRequired;
@property (readonly, nonatomic) struct CGPoint startPoint;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSArray *touches; // @synthesize touches=_touches;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (struct CGPoint)_adjustSceneReferenceLocation:(struct CGPoint)arg1;
- (double)_allowableSeparation;
- (double)_allowableTouchTimeSeparation;
- (BOOL)_allowsDynamicTouchesList;
- (void)_appendSubclassDescription:(id)arg1;
- (struct CGPoint)_centroidInView:(id)arg1;
- (void)_centroidMovedTo:(struct CGPoint)arg1 atTime:(double)arg2 physicalTouch:(id)arg3;
- (void)_changeTouchesListTo:(id)arg1;
- (struct CGPoint)_convertPoint:(struct CGPoint)arg1 fromSceneReferenceCoordinatesToView:(id)arg2;
- (struct CGPoint)_convertPoint:(struct CGPoint)arg1 toSceneReferenceCoordinatesFromView:(id)arg2;
- (struct CGPoint)_convertVelocitySample:(id)arg1 fromSceneReferenceCoordinatesToView:(id)arg2;
- (long long)_finalStateForRecognition;
- (BOOL)_impulseQuietEnough;
- (void)_incorporateTouchForceMessageIntoImpulseQuietness:(id)arg1;
- (void)_interactionsEndedWithValidTouches:(BOOL)arg1;
- (BOOL)_isGestureType:(long long)arg1;
- (struct CGPoint)_locationOfTouches:(id)arg1;
- (struct UIOffset)_offsetInViewFromSceneReferenceLocation:(struct CGPoint)arg1 toSceneReferenceLocation:(struct CGPoint)arg2;
- (void)_resetGestureRecognizer;
- (void)_resetImpulseQuietness;
- (void)_resetVelocitySamples;
- (void)_setAllowableSeparation:(double)arg1;
- (void)_setAllowableTouchTimeSeparation:(double)arg1;
- (void)_setAllowsDynamicTouchesList:(BOOL)arg1;
- (void)_setTranslation:(struct CGPoint)arg1 inView:(id)arg2;
- (struct CGPoint)_shiftPanLocationToNewSceneReferenceLocation:(struct CGPoint)arg1;
- (BOOL)_shouldFailInResponseToPresses:(id)arg1 withEvent:(id)arg2;
- (BOOL)_shouldReceivePress:(id)arg1;
- (void)_startMultitouchTimer;
- (struct CGPoint)_startPointInView:(id)arg1;
- (void)_startTapFinishedTimer;
- (double)_touchSloppinessFactor;
- (BOOL)_touchesMayBeRecognizedByForcePreviewingRevealGestureRecognizerWhichShouldDelayTimer:(id)arg1;
- (struct CGPoint)_translationInView:(id)arg1;
- (BOOL)activeTouchesExceedAllowableSeparation;
- (long long)buttonMaskRequired;
- (BOOL)canPreventGestureRecognizer:(id)arg1;
- (void)clearTimer;
- (void)encodeWithCoder:(id)arg1;
- (void)enoughTimeElapsed:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)invalidate;
- (struct CGPoint)locationInView:(id)arg1;
- (struct CGPoint)locationOfTouch:(unsigned long long)arg1 inView:(id)arg2;
- (unsigned long long)numberOfTouches;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setButtonMaskRequired:(long long)arg1;
- (void)setView:(id)arg1;
- (void)startTimer;
- (BOOL)tapIsPossibleForTapRecognizer:(id)arg1;
- (void)tapRecognizerFailedToRecognizeTap:(id)arg1;
- (void)tapRecognizerRecognizedTap:(id)arg1;
- (void)tooMuchElapsed:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (struct CGPoint)velocityInView:(id)arg1;

@end
