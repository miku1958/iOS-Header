//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink, NSHashTable, UIView, _UIDeepPressAnalyzer, _UIPreviewInteractionHighlighter, _UIPreviewInteractionStateRecognizer, _UIPreviewInteractionViewControllerHelper, _UIStatesFeedbackGenerator;
@protocol UIPreviewInteractionDelegate, _UIPreviewInteractionTouchForceProviding;

@interface UIPreviewInteraction : NSObject
{
    UIView *_view;
    struct {
        unsigned int delegatePreviewInteractionShouldBegin:1;
        unsigned int delegateDidUpdateCommitTransition:1;
        unsigned int delegateShouldFinishTransitionToPreview:1;
        unsigned int delegateShouldAutomaticallyTransitionToPreviewAfterDelay:1;
        unsigned int delegateHighlighterForPreviewTransition:1;
        unsigned int delegateViewForHighlight:1;
        unsigned int delegateViewControllerPresentationForPresentingViewController:1;
        unsigned int delegateViewControllerForPreview:1;
        unsigned int delegateAppearanceTransitionForViewController:1;
        unsigned int delegateDisappearanceTransitionForViewController:1;
        unsigned int interactive:1;
        unsigned int delegateDidPreventInteraction:1;
        unsigned int interactionRequiresRestart:1;
        unsigned int interactionWasCancelled:1;
        unsigned int previousProgressWasNegativeOrZero:1;
        unsigned int currentState:3;
        unsigned int nextUpdateShouldTransitionToPreview:1;
        unsigned int nextPreviewShouldPreventHapticFeedback:1;
    } _previewInteractionFlags;
    id<_UIPreviewInteractionTouchForceProviding> _systemTouchForceProvider;
    _UIPreviewInteractionStateRecognizer *_currentInteractionStateRecognizer;
    struct CGPoint _sceneReferenceLocationFromLatestUpdate;
    CADisplayLink *_continuousEvaluationDisplayLink;
    _UIDeepPressAnalyzer *_deepPressAnalyzer;
    _UIStatesFeedbackGenerator *_feedbackGenerator;
    BOOL _feedbackGeneratorTurnedOn;
    _UIPreviewInteractionHighlighter *_highlighter;
    _UIPreviewInteractionViewControllerHelper *_viewControllerHelper;
    id _viewControllerPresentationObserver;
    NSHashTable *_activeFailureRequirementGestureRecognizers;
    id<UIPreviewInteractionDelegate> _delegate;
    id<_UIPreviewInteractionTouchForceProviding> _touchForceProvider;
}

@property (weak, nonatomic) id<UIPreviewInteractionDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) id<_UIPreviewInteractionTouchForceProviding> touchForceProvider; // @synthesize touchForceProvider=_touchForceProvider;
@property (readonly, weak, nonatomic) UIView *view; // @synthesize view=_view;

- (void).cxx_destruct;
- (void)_actuateFeedbackForStateIfNeeded:(long long)arg1;
- (void)_dismissPreviewViewControllerIfNeeded;
- (void)_endContinuousEvaluation;
- (void)_endHighlightingIfNeeded;
- (void)_endInteractionIfNeeded;
- (void)_endInteractiveStateTransitions;
- (void)_endUsingFeedbackIfNeeded;
- (void)_endViewControllerPresentationObserving;
- (void)_prepareForInteractionIfNeeded;
- (void)_prepareForViewControllerPresentationObserving;
- (void)_prepareHighlighterIfNeeded;
- (void)_prepareUsingFeedback;
- (void)_prepareUsingFeedbackIfNeeded;
- (void)_presentPreviewViewControllerIfNeeded;
- (void)_resetAfterInteraction;
- (BOOL)_shouldCancelTransitionToState:(long long)arg1;
- (void)_startPreviewAtLocation:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;
- (void)_turnOffFeedbackGenerator;
- (void)_turnOnFeedbackGenerator;
- (void)_updateFailureRequirementGestureRecognizersIfNeeded;
- (void)_updateFeedbackTowardNextState:(long long)arg1 progress:(double)arg2;
- (void)_updateForContinuousEvaluation:(id)arg1;
- (void)_updateForCurrentTouchForceProvider;
- (void)_updateHighlighter:(double)arg1;
- (void)_updateInteractionStateRecognizerForTouchForce:(double)arg1 atTimestamp:(double)arg2 withCentroidAtLocation:(struct CGPoint)arg3;
- (void)cancelInteraction;
- (void)dealloc;
- (id)init;
- (id)initWithView:(id)arg1;
- (struct CGPoint)locationInCoordinateSpace:(id)arg1;
- (id)newGestureRecognizerForFailureRelationship;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

@end

