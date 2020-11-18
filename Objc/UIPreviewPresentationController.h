//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIPresentationController.h>

#import <UIKit/UIForcePresentationController-Protocol.h>
#import <UIKit/UIInteractionProgressObserver-Protocol.h>
#import <UIKit/_UIPlatterMenuDynamicsControllerDelegate-Protocol.h>
#import <UIKit/_UIPreviewActionSheetViewDelegate-Protocol.h>

@class NSLayoutConstraint, NSString, UIGestureRecognizer, UIImageView, UIInteractionProgress, UIPreviewForceInteractionProgress, UIScrollView, UITapGestureRecognizer, UIView, UIVisualEffectView, _UIPlatterMenuDynamicsController, _UIPlatterPanningVelocityIntegrator, _UIPreviewActionSheetView, _UIPreviewPresentationAnimator, _UIPreviewPresentationContainerView, _UIPreviewPresentationEffectView, _UIPreviewQuickActionView;
@protocol _UIForcePresentationControllerDelegate;

@interface UIPreviewPresentationController : UIPresentationController <UIInteractionProgressObserver, _UIPreviewActionSheetViewDelegate, _UIPlatterMenuDynamicsControllerDelegate, UIForcePresentationController>
{
    BOOL _sourceViewSnapshotAndScaleTransformSuppressed;
    BOOL _didSendBeginEvent;
    BOOL _leadingQuickActionViewSelected;
    BOOL _trailingQuickActionViewSelected;
    BOOL _isAnimatingActionSheet;
    BOOL _hasAskedForDismissalInternally;
    BOOL _hasAskedForCommitInternally;
    BOOL _preDismissAnimationsInflight;
    BOOL _panningGestureRecognizerInProgress;
    BOOL _breathing;
    UIGestureRecognizer *_panningGestureRecognizer;
    CDUnknownBlockType _presentationPhaseCompletionBlock;
    id<_UIForcePresentationControllerDelegate> _forcePresentationControllerDelegate;
    UIInteractionProgress *_interactionProgressForPresentation;
    unsigned long long _currentPresentationPhase;
    UIView *_actionSheetContainerView;
    UIScrollView *_containerScrollView;
    _UIPreviewActionSheetView *_previewActionSheet;
    UIPreviewForceInteractionProgress *_interactionProgressForCommit;
    UIPreviewForceInteractionProgress *_interactionProgressForBreathing;
    _UIPreviewPresentationContainerView *_presentationContainerView;
    UIVisualEffectView *_presentationBackgroundView;
    _UIPreviewPresentationEffectView *_revealContainerView;
    UIView *_highlightedPreviewCellSnapshotView;
    UIView *_initialPreviewCellSnapshotView;
    UIView *_updatedPreviewCellSnapshotView;
    _UIPreviewQuickActionView *_leadingQuickActionView;
    _UIPreviewQuickActionView *_trailingQuickActionView;
    NSLayoutConstraint *_leadingQuickActionViewEdgeConstraint;
    NSLayoutConstraint *_trailingQuickActionViewEdgeConstraint;
    UIImageView *_actionSheetAvailableImageView;
    NSLayoutConstraint *_containerScrollViewXConstraint;
    UITapGestureRecognizer *_tapToDismissGestureRecognizer;
    UIGestureRecognizer *_modalPreviewActionsPanningGestureRecognizer;
    _UIPlatterMenuDynamicsController *_platterMenuController;
    _UIPlatterPanningVelocityIntegrator *_revealPanningVelocityIntegrator;
    _UIPreviewPresentationAnimator *_unhighlightPreviewCellSnapshotViewAnimator;
}

@property (readonly, nonatomic) UIView *_revealContainerView;
@property (nonatomic) BOOL _sourceViewSnapshotAndScaleTransformSuppressed; // @synthesize _sourceViewSnapshotAndScaleTransformSuppressed;
@property (strong, nonatomic) UIImageView *actionSheetAvailableImageView; // @synthesize actionSheetAvailableImageView=_actionSheetAvailableImageView;
@property (strong, nonatomic) UIView *actionSheetContainerView; // @synthesize actionSheetContainerView=_actionSheetContainerView;
@property (readonly, nonatomic, getter=isBreathing) BOOL breathing; // @synthesize breathing=_breathing;
@property (strong, nonatomic) UIScrollView *containerScrollView; // @synthesize containerScrollView=_containerScrollView;
@property (strong, nonatomic) NSLayoutConstraint *containerScrollViewXConstraint; // @synthesize containerScrollViewXConstraint=_containerScrollViewXConstraint;
@property (nonatomic) unsigned long long currentPresentationPhase; // @synthesize currentPresentationPhase=_currentPresentationPhase;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didSendBeginEvent; // @synthesize didSendBeginEvent=_didSendBeginEvent;
@property (weak, nonatomic) id<_UIForcePresentationControllerDelegate> forcePresentationControllerDelegate; // @synthesize forcePresentationControllerDelegate=_forcePresentationControllerDelegate;
@property (nonatomic) BOOL hasAskedForCommitInternally; // @synthesize hasAskedForCommitInternally=_hasAskedForCommitInternally;
@property (nonatomic) BOOL hasAskedForDismissalInternally; // @synthesize hasAskedForDismissalInternally=_hasAskedForDismissalInternally;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIView *highlightedPreviewCellSnapshotView; // @synthesize highlightedPreviewCellSnapshotView=_highlightedPreviewCellSnapshotView;
@property (strong, nonatomic) UIView *initialPreviewCellSnapshotView; // @synthesize initialPreviewCellSnapshotView=_initialPreviewCellSnapshotView;
@property (strong, nonatomic) UIPreviewForceInteractionProgress *interactionProgressForBreathing; // @synthesize interactionProgressForBreathing=_interactionProgressForBreathing;
@property (strong, nonatomic) UIPreviewForceInteractionProgress *interactionProgressForCommit; // @synthesize interactionProgressForCommit=_interactionProgressForCommit;
@property (strong, nonatomic) UIInteractionProgress *interactionProgressForPresentation; // @synthesize interactionProgressForPresentation=_interactionProgressForPresentation;
@property (nonatomic) BOOL isAnimatingActionSheet; // @synthesize isAnimatingActionSheet=_isAnimatingActionSheet;
@property (strong, nonatomic) _UIPreviewQuickActionView *leadingQuickActionView; // @synthesize leadingQuickActionView=_leadingQuickActionView;
@property (strong, nonatomic) NSLayoutConstraint *leadingQuickActionViewEdgeConstraint; // @synthesize leadingQuickActionViewEdgeConstraint=_leadingQuickActionViewEdgeConstraint;
@property (nonatomic) BOOL leadingQuickActionViewSelected; // @synthesize leadingQuickActionViewSelected=_leadingQuickActionViewSelected;
@property (strong, nonatomic) UIGestureRecognizer *modalPreviewActionsPanningGestureRecognizer; // @synthesize modalPreviewActionsPanningGestureRecognizer=_modalPreviewActionsPanningGestureRecognizer;
@property (strong, nonatomic) UIGestureRecognizer *panningGestureRecognizer; // @synthesize panningGestureRecognizer=_panningGestureRecognizer;
@property (nonatomic) BOOL panningGestureRecognizerInProgress; // @synthesize panningGestureRecognizerInProgress=_panningGestureRecognizerInProgress;
@property (strong, nonatomic) _UIPlatterMenuDynamicsController *platterMenuController; // @synthesize platterMenuController=_platterMenuController;
@property (nonatomic) BOOL preDismissAnimationsInflight; // @synthesize preDismissAnimationsInflight=_preDismissAnimationsInflight;
@property (strong, nonatomic) UIVisualEffectView *presentationBackgroundView; // @synthesize presentationBackgroundView=_presentationBackgroundView;
@property (strong, nonatomic) _UIPreviewPresentationContainerView *presentationContainerView; // @synthesize presentationContainerView=_presentationContainerView;
@property (copy, nonatomic) CDUnknownBlockType presentationPhaseCompletionBlock; // @synthesize presentationPhaseCompletionBlock=_presentationPhaseCompletionBlock;
@property (nonatomic) double presentationViewCornerRadius; // @dynamic presentationViewCornerRadius;
@property (strong, nonatomic) _UIPreviewActionSheetView *previewActionSheet; // @synthesize previewActionSheet=_previewActionSheet;
@property (strong, nonatomic) _UIPreviewPresentationEffectView *revealContainerView; // @synthesize revealContainerView=_revealContainerView;
@property (strong, nonatomic) _UIPlatterPanningVelocityIntegrator *revealPanningVelocityIntegrator; // @synthesize revealPanningVelocityIntegrator=_revealPanningVelocityIntegrator;
@property (readonly) Class superclass;
@property (strong, nonatomic) UITapGestureRecognizer *tapToDismissGestureRecognizer; // @synthesize tapToDismissGestureRecognizer=_tapToDismissGestureRecognizer;
@property (strong, nonatomic) _UIPreviewQuickActionView *trailingQuickActionView; // @synthesize trailingQuickActionView=_trailingQuickActionView;
@property (strong, nonatomic) NSLayoutConstraint *trailingQuickActionViewEdgeConstraint; // @synthesize trailingQuickActionViewEdgeConstraint=_trailingQuickActionViewEdgeConstraint;
@property (nonatomic) BOOL trailingQuickActionViewSelected; // @synthesize trailingQuickActionViewSelected=_trailingQuickActionViewSelected;
@property (strong, nonatomic) _UIPreviewPresentationAnimator *unhighlightPreviewCellSnapshotViewAnimator; // @synthesize unhighlightPreviewCellSnapshotViewAnimator=_unhighlightPreviewCellSnapshotViewAnimator;
@property (strong, nonatomic) UIView *updatedPreviewCellSnapshotView; // @synthesize updatedPreviewCellSnapshotView=_updatedPreviewCellSnapshotView;

+ (BOOL)_shouldApplyVisualEffectsToPresentingView;
+ (id)_visualEffectForPresentationPhase:(unsigned long long)arg1 traitCollection:(id)arg2;
- (void).cxx_destruct;
- (id)_animatorForContainmentTransition;
- (void)_beginBreathing;
- (BOOL)_canCommitPresentation;
- (BOOL)_canDismissPresentation;
- (void)_configureActionSheetChromeViews;
- (void)_configureDynamicsController;
- (void)_configureInitialActionSheetViewIfNeeded;
- (void)_dismissForHandledActionWithCompletion:(CDUnknownBlockType)arg1;
- (void)_dismissForSelectionQuickActionAnimated;
- (void)_dismissPresentation;
- (void)_dismissPresentationWithCompletion:(CDUnknownBlockType)arg1;
- (void)_dismissTransitionDidComplete:(BOOL)arg1;
- (struct CGPoint)_dismissedActionSheetCenterForActionSheet:(id)arg1;
- (void)_endBreathing;
- (BOOL)_hasPreviewActions;
- (BOOL)_hasPreviewQuickActions;
- (BOOL)_hasSelectedQuickAction;
- (void)_hideQuickActions;
- (void)_invokeCommitHandlerFromInteractionProgress;
- (BOOL)_keyboardShouldAnimateAlongsideForInteractiveTransitions;
- (void)_layoutForDismissTransition;
- (void)_layoutForPreviewInteractionProgress:(double)arg1;
- (void)_layoutForPreviewTransition;
- (void)_layoutForRevealTransition;
- (void)_layoutForRevealUnhighlightTransition:(double)arg1;
- (double)_leadingQuickActionOffsetForCenterPosition:(struct CGPoint)arg1 swipeView:(id)arg2;
- (id)_makeAndAddToViewHierarchyPreviewActionSheetForMenuItems:(id)arg1;
- (void)_panningGestureRecognizerDidFire:(id)arg1;
- (BOOL)_platterIsInInitialPosition;
- (BOOL)_platterIsInInitialPositionMostly;
- (BOOL)_platterIsSelectingPreviewActions;
- (struct CGRect)_preferredSourceViewRect;
- (id)_preferredVisualEffectForPreviewPresentationPhase:(unsigned long long)arg1;
- (void)_preparePresentationContainerViewForPreviewInteraction;
- (void)_preparePresentationContainerViewForPreviewTransition;
- (void)_presentSubActionSheetForPreviewActionGroup:(id)arg1;
- (struct CGPoint)_presentedActionSheetCenterForActionSheet:(id)arg1;
- (void)_previewTransitionDidComplete:(BOOL)arg1;
- (double)_quickActionSelectionOffset;
- (double)_quickActionsSelectionThresholdForPreviewMenuItemStyle:(long long)arg1;
- (void)_restorePlatterToInitialStatePositionAnimated;
- (void)_restorePlatterToInitialStatePositionAnimatedWithCompletion:(CDUnknownBlockType)arg1;
- (void)_revealTransitionDidComplete:(BOOL)arg1;
- (void)_setupInteractionProgressForBreathing;
- (BOOL)_shouldChangeStatusBarViewController;
- (BOOL)_shouldDisableInteractionDuringTransitions;
- (BOOL)_shouldSavePresentedViewControllerForStateRestoration;
- (void)_stopUnhighlightPreviewCellSnapshotViewAnimationIfNeeded;
- (void)_tapToDismissPreviewWithActionsDidFire:(id)arg1;
- (double)_trailingQuickActionOffsetForCenterPosition:(struct CGPoint)arg1 swipeView:(id)arg2;
- (void)_triggerQuickActionHandlerIfNeeded;
- (void)_unhighlightPreviewCellSnapshotViewsIfNeeded;
- (void)_updateBreathingTransformWithProgress:(double)arg1 animated:(BOOL)arg2;
- (void)_updateRevealContainerView:(id)arg1 forTableViewCell:(id)arg2 sourceRect:(struct CGRect)arg3;
- (void)_updateRevealContainerViewForSourceRect:(struct CGRect)arg1;
- (void)_updateVisibiltyOfPreviewActionChromeForCurrentState;
- (id)_viewsParticipatingInNavigationControllerTransition;
- (void)_willCommitPresentation;
- (struct CGPoint)centerForMenuDismissed;
- (struct CGPoint)centerForMenuDismissedForActionSheet:(id)arg1;
- (struct CGPoint)centerForMenuPresented;
- (struct CGPoint)centerForMenuPresentedForActionSheet:(id)arg1;
- (struct CGPoint)centerForPlatterWithMenuViewDismissed;
- (struct CGPoint)centerForPlatterWithMenuViewPresented;
- (struct CGPoint)centerForPlatterWithMenuViewPresentedForActionSheet:(id)arg1;
- (void)containerViewDidLayoutSubviews;
- (void)containerViewWillLayoutSubviews;
- (void)dealloc;
- (void)dismissalTransitionDidEnd:(BOOL)arg1;
- (void)dismissalTransitionWillBegin;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (struct CGPoint)initialCenterForLeadingSwipeActionView;
- (struct CGPoint)initialCenterForTrailingSwipeActionView;
- (void)interactionProgress:(id)arg1 didEnd:(BOOL)arg2;
- (void)interactionProgressDidUpdate:(id)arg1;
- (id)leadingSwipeActionView;
- (double)minimumSpacingBetweenPlatterAndMenu;
- (struct CGRect)platterBounds;
- (struct CGRect)platterContainerBounds;
- (double)platterContainerCenterX;
- (double)platterContainerCenterY;
- (void)platterMenuDynamicsController:(id)arg1 didMoveSwipeView:(id)arg2 toPosition:(struct CGPoint)arg3;
- (void)platterMenuDynamicsControllerDidDismissWithController:(id)arg1;
- (id)platterView;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)presentationTransitionDidEnd:(BOOL)arg1;
- (void)presentationTransitionWillBegin;
- (BOOL)previewActionSheetCanSelectItem:(id)arg1;
- (void)setupAdditionalModalGestureRecognizers;
- (BOOL)shouldPresentInFullscreen;
- (BOOL)shouldRemovePresentersView;
- (void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1;
- (id)trailingSwipeActionView;
- (void)updateSwipeActionsIfApplicable;

@end

