//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIDragInteractionDriver.h>

#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, UIDelayedAction, _UIDragAcceleratorGestureRecognizer, _UIDragLiftGestureRecognizer, _UIRelationshipGestureRecognizer;

__attribute__((visibility("hidden")))
@interface _UIDragInteractionLongPressDriver : _UIDragInteractionDriver <UIGestureRecognizerDelegate>
{
    UIDelayedAction *_gateTimer;
    UIDelayedAction *_cancellationTimer;
    _UIDragLiftGestureRecognizer *_gestureRecognizerForDragInitiation;
    _UIDragAcceleratorGestureRecognizer *_gestureRecognizerForAcceleratedDragInitiation;
    _UIRelationshipGestureRecognizer *_gestureRecognizerForFailureRelationship;
    _UIRelationshipGestureRecognizer *_gestureRecognizerForExclusionRelationship;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) _UIDragAcceleratorGestureRecognizer *gestureRecognizerForAcceleratedDragInitiation; // @synthesize gestureRecognizerForAcceleratedDragInitiation=_gestureRecognizerForAcceleratedDragInitiation;
@property (readonly, nonatomic) _UIDragLiftGestureRecognizer *gestureRecognizerForDragInitiation; // @synthesize gestureRecognizerForDragInitiation=_gestureRecognizerForDragInitiation;
@property (readonly, nonatomic) _UIRelationshipGestureRecognizer *gestureRecognizerForExclusionRelationship; // @synthesize gestureRecognizerForExclusionRelationship=_gestureRecognizerForExclusionRelationship;
@property (readonly, nonatomic) _UIRelationshipGestureRecognizer *gestureRecognizerForFailureRelationship; // @synthesize gestureRecognizerForFailureRelationship=_gestureRecognizerForFailureRelationship;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dragInitiationGestureStateChanged:(id)arg1;
- (void)_gateCompetingGestureRecognizers;
- (void)_gestureRecognizerFailed:(id)arg1;
- (BOOL)_wantsTimeDelayedFailureRequirementGate;
- (void)attachToView:(id)arg1;
- (BOOL)canExcludeCompetingGestureRecognizer:(id)arg1;
- (void)detachFromView:(id)arg1;
- (void)didTransitionToBeginState;
- (void)didTransitionToCancelState;
- (void)didTransitionToInactiveState;
- (void)didTransitionToInflightState;
- (void)didTransitionToPreparing;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)hasExceededAllowableMovement;
- (BOOL)hasMoveHysteresisBeenReached;
- (id)init;
- (void)invalidateCancellationTimer;
- (void)invalidateCompetingGestureRecognizerGateTimer;
- (BOOL)isGestureRecognizerForDragInitiation:(id)arg1;
- (void)openCompetingGestureRecognizerGateCancelingGestures:(id)arg1;
- (void)openGateCancelingAddItemsGestures;
- (void)reset;
- (void)setAcceleratedDragGestureEnabled:(BOOL)arg1;
- (void)setAllowedTouchTypes:(id)arg1;
- (void)setAutomaticallyAddsFailureRelationships:(BOOL)arg1;
- (void)setLiftDelay:(double)arg1;
- (void)setLiftMoveHysteresis:(double)arg1;
- (BOOL)shouldDelayCompetingGestureRecognizer:(id)arg1;
- (double)translationInWindow;

@end

