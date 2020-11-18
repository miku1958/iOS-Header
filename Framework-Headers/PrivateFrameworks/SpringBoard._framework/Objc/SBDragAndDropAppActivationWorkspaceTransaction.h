//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBMainWorkspaceTransaction.h>

#import <SpringBoard/SBSceneLayoutWorkspaceTransactionObserver-Protocol.h>
#import <SpringBoard/SBWorkspaceApplicationSceneTransitionContextDelegate-Protocol.h>
#import <SpringBoard/UIDragInteractionDelegate_Private-Protocol.h>
#import <SpringBoard/UIDropInteractionDelegate_Private-Protocol.h>

@class CADisplayLink, NSMutableDictionary, NSMutableSet, NSString, NSUUID, SBAppPlatterDragPreview, SBApplicationDropSession, SBApplicationSceneUpdateTransaction, SBDeviceApplicationSceneHandle, SBFluidSwitcherGesture, SBFluidSwitcherViewController, SBLayoutElement, SBMainDisplayLayoutState, SBMainDisplaySceneLayoutViewController, SBMainWorkspaceTransitionRequest, SBMedusaSettings, SBToAppsWorkspaceTransaction, SBTouchHistory, UIView, UIViewFloatAnimatableProperty;
@protocol BSInvalidatable, SBAppPlatterDragSourceViewProviding, SBDragAndDropAppActivationWorkspaceTransactionDelegate;

@interface SBDragAndDropAppActivationWorkspaceTransaction : SBMainWorkspaceTransaction <SBWorkspaceApplicationSceneTransitionContextDelegate, SBSceneLayoutWorkspaceTransactionObserver, UIDragInteractionDelegate_Private, UIDropInteractionDelegate_Private>
{
    SBFluidSwitcherViewController *_mainSwitcherContentController;
    SBMainDisplaySceneLayoutViewController *_sceneLayoutViewController;
    id<SBDragAndDropAppActivationWorkspaceTransactionDelegate> _delegate;
    SBMainDisplayLayoutState *_initialLayoutState;
    SBMainDisplayLayoutState *_currentLayoutState;
    SBMainDisplayLayoutState *_finalLayoutState;
    SBApplicationDropSession *_dropSession;
    unsigned long long _sessionState;
    SBDeviceApplicationSceneHandle *_draggingApplicationSceneHandle;
    BOOL _beganTrackingDropSession;
    SBMainWorkspaceTransitionRequest *_dropTransitionRequest;
    SBToAppsWorkspaceTransaction *_currentWorkspaceTransaction;
    long long _currentDropAction;
    SBMainDisplayLayoutState *_currentDropActionProposedLayoutState;
    BOOL _performedDrop;
    BOOL _dropAnimationCompleted;
    BOOL _layoutStateTransitionCompleted;
    BOOL _dragExitedDropZone;
    struct CGSize _cachedSizeForFloatingApplication;
    SBLayoutElement *_layoutElementForWindowDrag;
    BOOL _windowDragEnteredPlatterZone;
    BOOL _windowLiftAnimationCompleted;
    SBApplicationSceneUpdateTransaction *_sceneUpdateTransactionForWindowDrag;
    CADisplayLink *_displayLinkForWindowDrag;
    long long _windowDragPauseCounter;
    unsigned long long _blurState;
    long long _blurringElementViewControllers;
    long long _resizingElementViewControllers;
    UIViewFloatAnimatableProperty *_resizeAnimatableProperty;
    NSMutableSet *_pendingSceneUpdatesTransactions;
    SBAppPlatterDragPreview *_activePlatterPreview;
    id<SBAppPlatterDragSourceViewProviding> _activeSourceViewProvider;
    unsigned long long _numberOfAttemptsRequestingVisibleItems;
    UIView *_contentDragPreview;
    long long _animatingPlatterPreview;
    id<BSInvalidatable> _deferOrientationUpdatesForDragAndDropAssertion;
    SBTouchHistory *_touchHistory;
    SBMedusaSettings *_medusaSettings;
    NSMutableDictionary *_statusBarAssertions;
    NSUUID *_gestureID;
    SBFluidSwitcherGesture *_dragAndDropGesture;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isDragging) BOOL dragging;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (BOOL)isDragOverFullscreenRegionAtLocation:(struct CGPoint)arg1 inBounds:(struct CGRect)arg2;
+ (BOOL)isDragOverSideGutterRegionsAtLocation:(struct CGPoint)arg1 inBounds:(struct CGRect)arg2 totalContentDragGutterWidth:(double)arg3;
+ (double)prototypeSettingsContentDraggingCommandeerWidth;
+ (double)prototypeSettingsContentDraggingFloatingActivationWidth;
+ (double)prototypeSettingsContentDraggingSideActivationWidth;
+ (struct CGSize)prototypeSettingsFullscreenActivationRegionSize;
+ (double)prototypeSettingsSideActivationGutterSize;
+ (double)prototypeSettingsWindowTearOffDraggingFloatingActivationWidth;
+ (double)prototypeSettingsWindowTearOffDraggingSideActivationWidth;
+ (BOOL)shouldTrackLocationOfDropSession:(id)arg1 inSceneLayoutViewController:(id)arg2;
+ (BOOL)shouldTrackLocationOfDropSession:(id)arg1 inSceneLayoutViewController:(id)arg2 isCurrentlyTracking:(BOOL)arg3;
+ (struct CGRect)sourceSceneInterfaceOrientedBoundsForDropSession:(id)arg1 inSceneLayoutViewController:(id)arg2;
- (void).cxx_destruct;
- (void)_acquireStatusBarAssertions;
- (void)_addChildWorkspaceTransaction:(id)arg1;
- (BOOL)_areLayoutElementViewControllersBlurred;
- (BOOL)_areLayoutElementViewControllersCorrectlySizedForDropAction:(long long)arg1 proposedDropLayoutState:(id)arg2;
- (void)_begin;
- (void)_beginRequiringSceneViewMatchMoveAnimation;
- (BOOL)_canBeInterrupted;
- (BOOL)_canInterruptForCurrentDropAction;
- (void)_childTransactionDidComplete:(id)arg1;
- (void)_cleanUpAndCompleteTransactionIfNecessary;
- (void)_configurePlatterPreview:(id)arg1 forSceneHandle:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_cornerRadiusConfigurationForDropAction:(long long)arg1 proposedDropLayoutState:(id)arg2 setDown:(BOOL)arg3 mode:(unsigned long long)arg4;
- (id)_createPlatterPreviewForApplication:(id)arg1 withSourceView:(id)arg2 dropSession:(id)arg3;
- (id)_currentGestureEventForGesture:(id)arg1;
- (void)_didComplete;
- (void)_didInterruptWithReason:(id)arg1;
- (void)_displayLinkDidUpdate:(id)arg1;
- (id)_dragInteraction:(id)arg1 customSpringAnimationBehaviorForCancellingItem:(id)arg2;
- (void)_dragInteractionDidCancelLiftWithoutDragging:(id)arg1;
- (id)_dragPreviewForDroppingItem:(id)arg1 withDefault:(id)arg2;
- (id)_dropInteraction:(id)arg1 customSpringAnimationBehaviorForDroppingItem:(id)arg2;
- (void)_endDragAndDropFluidGesture;
- (void)_endRequiringSceneViewMatchMoveAnimation;
- (void)_fadeOutPreviousLayoutElementViewControllersIfNecessary;
- (unsigned long long)_gestureModifierPhaseForGestureState:(long long)arg1;
- (long long)_gestureType;
- (void)_getPlatterDiffuseShadowParameters:(struct SBDragPreviewShadowParameters *)arg1 rimShadowParameters:(struct SBDragPreviewShadowParameters *)arg2 diffuseFilters:(id *)arg3 rimFilters:(id *)arg4 forDropAction:(long long)arg5 setDown:(BOOL)arg6 mode:(unsigned long long)arg7 userInterfaceStyle:(long long)arg8;
- (void)_getPrimaryLayoutElementViewFrame:(struct CGRect *)arg1 sideLayoutElementViewFrame:(struct CGRect *)arg2 separatorViewFrame:(struct CGRect *)arg3 forDropAction:(long long)arg4 proposedDropLayoutState:(id)arg5 state:(unsigned long long)arg6;
- (void)_getPrimaryLayoutElementViewFrame:(struct CGRect *)arg1 sideLayoutElementViewFrame:(struct CGRect *)arg2 separatorViewFrame:(struct CGRect *)arg3 forDropAction:(long long)arg4 proposedDropLayoutState:(id)arg5 state:(unsigned long long)arg6 spaceConfiguration:(long long)arg7;
- (void)_handleSessionDidEnd:(id)arg1;
- (void)_handleSessionDidPerformDrop:(id)arg1;
- (BOOL)_handleSessionDidUpdate:(id)arg1;
- (void)_handleWillAnimateDropWithAnimator:(id)arg1;
- (void)_interruptForDragExitedDropZoneIfNecessary;
- (void)_invalidateStatusBarAssertions;
- (long long)_layoutRoleForDropAction:(long long)arg1;
- (struct CGRect)_platterFrameInSwitcherView;
- (double)_platterScale;
- (struct CGSize)_platterSizeForDropAction:(long long)arg1 proposedDropLayoutState:(id)arg2 setDown:(BOOL)arg3;
- (id)_primaryApplicationLayoutElementViewController;
- (id)_primaryLayoutElementViewController;
- (void)_runFinalLayoutStateTransaction;
- (void)_setStatusBarsHidden:(BOOL)arg1;
- (void)_setupPlatterPreviewForContentDrag;
- (void)_setupResizeAnimatableProperty;
- (BOOL)_shouldComplete;
- (BOOL)_shouldFailLayoutStateTransitionForWindowDrag;
- (BOOL)_shouldPushInSceneLayoutViewControllerForDropAction:(long long)arg1;
- (BOOL)_showResizeUI;
- (id)_sideApplicationLayoutElementViewController;
- (id)_sideLayoutElementViewController;
- (struct CGSize)_sizeForFloatingApplication;
- (id)_transitionRequestForDropAction:(long long)arg1;
- (void)_uncommandeerContentDrag;
- (void)_updateActiveSourceViewProviderWithDragState:(unsigned long long)arg1;
- (void)_updateAnchorPointForPlatterPreview:(id)arg1 dragPreview:(id)arg2 withSourceViewBounds:(struct CGRect)arg3 location:(struct CGPoint)arg4;
- (void)_updateCurrentDropActionForSession:(id)arg1;
- (void)_updateCurrentDropActionProposedLayoutState;
- (void)_updateForWindowDragForSession:(id)arg1;
- (void)_updateLayoutElementViewControllerBlurringWithCompletion:(CDUnknownBlockType)arg1;
- (void)_updateLayoutElementViewControllerCornerRadiusWithCompletion:(CDUnknownBlockType)arg1;
- (void)_updateLayoutElementViewControllerDarkeningWithCompletion:(CDUnknownBlockType)arg1;
- (void)_updateLayoutElementViewControllerForDropCompletion;
- (void)_updateLayoutElementViewControllerFrames;
- (void)_updateLayoutElementViewControllerStatusBars;
- (void)_updateLayoutElementViewControllersWithCompletion:(CDUnknownBlockType)arg1;
- (void)_updatePlatterPreviewForSetDown:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_updatePlatterPreviewWithUpdatedSourceView;
- (void)_updateSeparatorViewWithCompletion:(CDUnknownBlockType)arg1;
- (void)_willInterruptForTransitionRequest:(id)arg1;
- (void)_willInterruptWithReason:(id)arg1;
- (struct CGRect)applicationTransitionContext:(id)arg1 frameForApplicationSceneEntity:(id)arg2;
- (BOOL)canInterruptForTransitionRequest:(id)arg1;
- (void)dragInteraction:(id)arg1 item:(id)arg2 willAnimateCancelWithAnimator:(id)arg3;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (id)dragInteraction:(id)arg1 previewForCancellingItem:(id)arg2 withDefault:(id)arg3;
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned long long)arg3;
- (void)dragInteraction:(id)arg1 session:(id)arg2 willEndWithOperation:(unsigned long long)arg3;
- (void)dragInteraction:(id)arg1 sessionDidMove:(id)arg2;
- (void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2;
- (void)dragInteraction:(id)arg1 willAnimateLiftWithAnimator:(id)arg2 session:(id)arg3;
- (void)dropInteraction:(id)arg1 concludeDrop:(id)arg2;
- (void)dropInteraction:(id)arg1 item:(id)arg2 willAnimateDropWithAnimator:(id)arg3;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3;
- (void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (id)initWithTransitionRequest:(id)arg1 mainSwitcherContentController:(id)arg2 sceneLayoutViewController:(id)arg3 dropSession:(id)arg4 delegate:(id)arg5;
- (id)layoutStateForApplicationTransitionContext:(id)arg1;
- (BOOL)matchesApplicationDropSession:(id)arg1;
- (BOOL)matchesUIDragDropSession:(id)arg1;
- (id)previousLayoutStateForApplicationTransitionContext:(id)arg1;
- (id)resizeUIAnimationFactory;
- (void)transaction:(id)arg1 didCommitSceneUpdate:(id)arg2;

@end
