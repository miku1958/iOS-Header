//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/UIGestureRecognizerDelegate-Protocol.h>

@class CADisplayLink, NSHashTable, NSString, UITouch, UIView, _UIDeepPressAnalyzer, _UIFeedbackStatesBehavior, _UIPreviewInteractionStateRecognizer, _UITouchesObservingGestureRecognizer;
@protocol UIPreviewInteractionDelegate;

@interface UIPreviewInteraction : NSObject <UIGestureRecognizerDelegate>
{
    UIView *_view;
    struct {
        unsigned int interactive:1;
        unsigned int delegateDidPreventInteraction:1;
        unsigned int interactionRequiresRestart:1;
        unsigned int interactionWasCancelled:1;
        unsigned int previousProgressWasNegativeOrZero:1;
        unsigned int interactionPaused:1;
        unsigned int currentState:3;
    } _previewInteractionFlags;
    _UITouchesObservingGestureRecognizer *_touchObservingGestureRecognizer;
    _UITouchesObservingGestureRecognizer *_modalTouchObservingGestureRecognizer;
    _UIPreviewInteractionStateRecognizer *_currentInteractionStateRecognizer;
    UITouch *_currentTouch;
    CADisplayLink *_continuousEvaluationDisplayLink;
    _UIDeepPressAnalyzer *_deepPressAnalyzer;
    _UIFeedbackStatesBehavior *_feedbackBehavior;
    BOOL _feedbackBehaviorTurnedOn;
    NSHashTable *_activeSystemAnimators;
    NSHashTable *_activeFailureRequirementGestureRecognizers;
    id<UIPreviewInteractionDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<UIPreviewInteractionDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) UIView *view; // @synthesize view=_view;

- (void).cxx_destruct;
- (void)_actuateFeedbackForStateIfNeeded:(long long)arg1;
- (void)_attachToModalViewForRemainerOfInteraction:(id)arg1;
- (BOOL)_delegateRespondsToCommitStateTransitions;
- (BOOL)_delegateRespondsToPreviewStateCancellations;
- (void)_endInteractionIfNeeded;
- (void)_endInteractiveStateTransitions;
- (void)_endUsingFeedbackIfNeeded;
- (void)_handleTouchObservingGesture:(id)arg1;
- (BOOL)_interactionIsPaused;
- (void)_pauseInteraction;
- (void)_prepareForInteractionWithGestureRecognizer:(id)arg1;
- (void)_prepareUsingFeedback;
- (void)_prepareUsingFeedbackIfNeeded;
- (void)_resetAfterInteraction;
- (void)_resumeInteraction;
- (BOOL)_shouldCancelTransitionToState:(long long)arg1;
- (id)_touchObservingGestureRecognizerForView:(id)arg1;
- (void)_turnOffFeedbackBehavior;
- (void)_turnOnFeedbackBehavior;
- (void)_updateAnimatorsIfNeeded;
- (void)_updateFailureRequirementGestureRecognizersIfNeeded;
- (void)_updateFeedbackTowardNextState:(long long)arg1 progress:(double)arg2;
- (void)_updateForContinuousEvaluation:(id)arg1;
- (void)_updateInteractionStateRecognizerForTouch:(id)arg1;
- (void)_updateInteractionStateRecognizerForTouchForce:(double)arg1 atTimestamp:(double)arg2 withCentroidAtLocation:(struct CGPoint)arg3;
- (void)cancelInteraction;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)init;
- (id)initWithView:(id)arg1;
- (struct CGPoint)locationInCoordinateSpace:(id)arg1;
- (id)newAnimator;
- (id)newAnimatorForViewControllerTransition;
- (id)newGestureRecognizerForFailureRelationship;

@end

