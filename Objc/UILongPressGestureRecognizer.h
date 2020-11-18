//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

#import <UIKit/UITapRecognizerDelegate-Protocol.h>

@class NSArray, NSMutableSet, NSObservation, NSString, UIDelayedAction, UIHeldAction, UITapRecognizer;

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
    UITapRecognizer *_imp;
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
    long long _buttonType;
}

@property (nonatomic, setter=_setButtonType:) long long _buttonType; // @synthesize _buttonType;
@property (readonly, nonatomic) struct CGPoint _centroidScreen;
@property (nonatomic, setter=_setRequiresQuietImpulse:) BOOL _requiresQuietImpulse; // @synthesize _requiresQuietImpulse;
@property (nonatomic, setter=_setRequiresQuietImpulseForCurrentTouchSequence:) BOOL _requiresQuietImpulseForCurrentTouchSequence; // @synthesize _requiresQuietImpulseForCurrentTouchSequence;
@property (nonatomic) double allowableMovement; // @synthesize allowableMovement=_allowableMovement;
@property (nonatomic) BOOL cancelPastAllowableMovement;
@property (readonly, nonatomic) struct CGPoint centroid;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double delay; // @synthesize delay=_minimumPressDuration;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double minimumPressDuration;
@property (nonatomic) unsigned long long numberOfTapsRequired;
@property (nonatomic) unsigned long long numberOfTouchesRequired; // @synthesize numberOfTouchesRequired=_numberOfTouchesRequired;
@property (readonly, nonatomic) struct CGPoint startPoint;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSArray *touches; // @synthesize touches=_touches;

- (void).cxx_destruct;
- (double)_allowableSeparation;
- (BOOL)_allowsDynamicTouchesList;
- (struct CGPoint)_centroidInView:(id)arg1;
- (void)_changeTouchesListTo:(id)arg1;
- (long long)_finalStateForRecognition;
- (BOOL)_impulseQuietEnough;
- (void)_incorporateTouchForceMessageIntoImpulseQuietness:(id)arg1;
- (void)_interactionsEndedWithValidTouches:(BOOL)arg1;
- (void)_resetGestureRecognizer;
- (void)_resetImpulseQuietness;
- (void)_setAllowableSeparation:(double)arg1;
- (void)_setAllowsDynamicTouchesList:(BOOL)arg1;
- (BOOL)_shouldFailInResponseToPresses:(id)arg1 withEvent:(id)arg2;
- (BOOL)_shouldReceivePress:(id)arg1;
- (struct CGPoint)_startPointInView:(id)arg1;
- (void)_startTapFinishedTimer;
- (double)_touchSloppinessFactor;
- (BOOL)_touchesMayBeRecognizedByForcePreviewingRevealGestureRecognizerWhichShouldDelayTimer:(id)arg1;
- (struct CGPoint)_translationInView:(id)arg1;
- (BOOL)activeTouchesExceedAllowableSeparation;
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

@end

