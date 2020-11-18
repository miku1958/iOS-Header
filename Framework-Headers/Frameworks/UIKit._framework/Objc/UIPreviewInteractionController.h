//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>
#import <UIKitCore/UIInteractionProgressObserver-Protocol.h>
#import <UIKitCore/UIPreviewInteractionDelegate-Protocol.h>
#import <UIKitCore/_UIForcePresentationControllerDelegate-Protocol.h>

@class NSArray, NSString, UIGestureRecognizer, UIInteractionProgress, UIPanGestureRecognizer, UIPresentationController, UIPreviewInteraction, UIView, UIViewController, UIWindow, _UIDeepPressAnalyzer, _UIPreviewGestureRecognizer, _UIRevealGestureRecognizer, _UIStatesFeedbackGenerator, _UITouchesObservingGestureRecognizer;
@protocol UIForcePresentationController, UIForceTransitioningDelegate, UIPreviewInteractionControllerDelegate, UIViewControllerPreviewing_Internal;

@interface UIPreviewInteractionController : NSObject <UIGestureRecognizerDelegate, UIInteractionProgressObserver, _UIForcePresentationControllerDelegate, UIPreviewInteractionDelegate>
{
    BOOL _isCommitting;
    BOOL _generatorTurnedOn;
    BOOL _statusBarWasHidden;
    BOOL _didSendDelegateWillDismissViewController;
    id<UIPreviewInteractionControllerDelegate> _delegate;
    UIView *_sourceView;
    UIViewController *_presentingViewController;
    UIPreviewInteraction *_previewInteraction;
    UIInteractionProgress *_interactionProgressForCommit;
    _UIRevealGestureRecognizer *_revealGestureRecognizer;
    _UIPreviewGestureRecognizer *_previewGestureRecognizer;
    UIPanGestureRecognizer *_modalPanGestureRecognizer;
    _UITouchesObservingGestureRecognizer *_touchObservingGestureRecognizer;
    _UIDeepPressAnalyzer *_deepPressAnalyzer;
    UIViewController *_currentPreviewViewController;
    UIPresentationController<UIForcePresentationController> *_currentPresentationController;
    id<UIForceTransitioningDelegate> _currentTransitionDelegate;
    UIWindow *_windowForPreviewPresentation;
    id _currentCommitTransition;
    id<UIViewControllerPreviewing_Internal> _previewingContext;
    _UIStatesFeedbackGenerator *_feedbackGenerator;
    UIInteractionProgress *_interactionProgressForPresentation;
    struct CGPoint _location;
}

@property (readonly, nonatomic) UIGestureRecognizer *beginPreviewGestureRecognizer;
@property (strong, nonatomic) id currentCommitTransition; // @synthesize currentCommitTransition=_currentCommitTransition;
@property (strong, nonatomic) UIPresentationController<UIForcePresentationController> *currentPresentationController; // @synthesize currentPresentationController=_currentPresentationController;
@property (strong, nonatomic) UIViewController *currentPreviewViewController; // @synthesize currentPreviewViewController=_currentPreviewViewController;
@property (strong, nonatomic) id<UIForceTransitioningDelegate> currentTransitionDelegate; // @synthesize currentTransitionDelegate=_currentTransitionDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (strong, nonatomic) _UIDeepPressAnalyzer *deepPressAnalyzer; // @synthesize deepPressAnalyzer=_deepPressAnalyzer;
@property (weak, nonatomic) id<UIPreviewInteractionControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didSendDelegateWillDismissViewController; // @synthesize didSendDelegateWillDismissViewController=_didSendDelegateWillDismissViewController;
@property (strong, nonatomic) _UIStatesFeedbackGenerator *feedbackGenerator; // @synthesize feedbackGenerator=_feedbackGenerator;
@property (readonly, nonatomic) NSArray *gestureRecognizers; // @dynamic gestureRecognizers;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIInteractionProgress *interactionProgressForCommit; // @synthesize interactionProgressForCommit=_interactionProgressForCommit;
@property (strong, nonatomic) UIInteractionProgress *interactionProgressForPresentation; // @synthesize interactionProgressForPresentation=_interactionProgressForPresentation;
@property (nonatomic) struct CGPoint location; // @synthesize location=_location;
@property (strong, nonatomic) UIPanGestureRecognizer *modalPanGestureRecognizer; // @synthesize modalPanGestureRecognizer=_modalPanGestureRecognizer;
@property (readonly, nonatomic) UIGestureRecognizer *presentationGestureRecognizer;
@property (weak, nonatomic) UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property (strong, nonatomic) _UIPreviewGestureRecognizer *previewGestureRecognizer; // @synthesize previewGestureRecognizer=_previewGestureRecognizer;
@property (strong, nonatomic) UIPreviewInteraction *previewInteraction; // @synthesize previewInteraction=_previewInteraction;
@property (weak, nonatomic) id<UIViewControllerPreviewing_Internal> previewingContext; // @synthesize previewingContext=_previewingContext;
@property (strong, nonatomic) _UIRevealGestureRecognizer *revealGestureRecognizer; // @synthesize revealGestureRecognizer=_revealGestureRecognizer;
@property (weak, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
@property (nonatomic) BOOL statusBarWasHidden; // @synthesize statusBarWasHidden=_statusBarWasHidden;
@property (readonly) Class superclass;
@property (strong, nonatomic) _UITouchesObservingGestureRecognizer *touchObservingGestureRecognizer; // @synthesize touchObservingGestureRecognizer=_touchObservingGestureRecognizer;
@property (strong, nonatomic) UIWindow *windowForPreviewPresentation; // @synthesize windowForPreviewPresentation=_windowForPreviewPresentation;

- (void).cxx_destruct;
- (void)_activateFeedback;
- (void)_activateFeedbackIfNeeded;
- (void)_configureCommitInteractionProgressForView:(id)arg1;
- (void)_deactivateFeedbackIfNeeded;
- (void)_finalizeInteractivePreview;
- (void)_gestureRecognizerFailed:(id)arg1;
- (void)_handleRevealGesture:(id)arg1;
- (void)_handleTouchObservingGesture:(id)arg1;
- (void)_previewPresentationControllerDidScheduleDismiss;
- (BOOL)_previewingIsPossibleForView:(id)arg1;
- (void)_resetCustomPresentationHooks;
- (void)_setCalloutBarHidden:(BOOL)arg1;
- (void)_setStatusBarHidden:(BOOL)arg1;
- (id)_transitionDelegateForPreviewViewController:(id)arg1 atPosition:(struct CGPoint)arg2 inView:(id)arg3;
- (void)_turnOffFeedbackGenerator;
- (void)_turnOnFeedbackGenerator;
- (BOOL)_usesPreviewInteraction;
- (BOOL)_usesPreviewPresentationController;
- (BOOL)_viewControllerIsChildOfExpandedSplitViewController:(id)arg1;
- (void)cancelInteractivePreview;
- (void)commitInteractivePreview;
- (BOOL)configureRevealTransformSourceViewSnapshotSuppressionFromLocation:(struct CGPoint)arg1 inView:(id)arg2;
- (void)configureRevealTransformWithInteractionProgress:(id)arg1 forLocation:(struct CGPoint)arg2 inView:(id)arg3 containerView:(id)arg4;
- (void)dealloc;
- (void)forcePresentationController:(id)arg1 didSelectMenuItem:(id)arg2;
- (void)forcePresentationControllerDidDismiss:(id)arg1;
- (void)forcePresentationControllerWantsToCommit:(id)arg1;
- (void)forcePresentationControllerWillDismiss:(id)arg1;
- (void)forcePresentationTransitionWillBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)init;
- (void)initGestureRecognizers;
- (id)initWithView:(id)arg1;
- (void)interactionProgress:(id)arg1 didEnd:(BOOL)arg2;
- (void)interactionProgressDidUpdate:(id)arg1;
- (void)previewInteraction:(id)arg1 didUpdateCommitTransition:(double)arg2 ended:(BOOL)arg3;
- (void)previewInteraction:(id)arg1 didUpdatePreviewTransition:(double)arg2 ended:(BOOL)arg3;
- (void)previewInteractionDidCancel:(id)arg1;
- (BOOL)previewInteractionShouldBegin:(id)arg1;
- (BOOL)startInteractivePreviewAtLocation:(struct CGPoint)arg1 inView:(id)arg2;
- (BOOL)startInteractivePreviewWithGestureRecognizer:(id)arg1;

@end
