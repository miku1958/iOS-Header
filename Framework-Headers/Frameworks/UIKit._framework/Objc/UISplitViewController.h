//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <UIKit/UIGestureRecognizerDelegate-Protocol.h>

@class NSArray, NSString, UIBarButtonItem, UIFocusContainerGuide, UIGestureRecognizer, UIPopoverController, UIResponder, UISnapshotView, UITapGestureRecognizer, UITraitCollection, UIView;
@protocol UISplitViewControllerDelegate;

@interface UISplitViewController : UIViewController <UIGestureRecognizerDelegate>
{
    id _delegate;
    UIBarButtonItem *_barButtonItem;
    UIBarButtonItem *_displayModeButtonItem;
    NSString *_buttonTitle;
    UIPopoverController *_hiddenPopoverController;
    UIView *_rotationSnapshotView;
    UIResponder *_postTransitionResponder;
    UISnapshotView *_collapsingMasterSnapshotView;
    UISnapshotView *_collapsingDetailSnapshotView;
    double _masterColumnWidth;
    float _gutterWidth;
    float _cornerRadius;
    long long _rotatingFromOrientation;
    long long _lastPresentedOrientation;
    struct CGRect _rotatingFromMasterViewFrame;
    struct CGRect _rotatingToMasterViewFrame;
    NSArray *_cornerImageViews;
    UIView *_underBarSeparatorView;
    unsigned long long _slideTransitionCount;
    UIView *_masterBackgroundView;
    BOOL _presentsInFadingPopover;
    BOOL _presentsWithGesture;
    UIGestureRecognizer *_popoverPresentationGestureRecognizer;
    UITapGestureRecognizer *_menuGestureRecognizer;
    long long _preferredDisplayMode;
    long long _effectiveTargetDisplayMode;
    long long _pendingDisplayModeChangeCount;
    long long _rotatingMasterChange;
    BOOL _useChangingBoundsLayout;
    long long _transitioningMasterChange;
    UITraitCollection *_transitioningToTraitCollection;
    long long _transitioningToInternalMode;
    long long _lastNotifiedDisplayMode;
    struct CGRect _viewBoundsBeforeCollapse;
    long long _suspendedState;
    struct {
        unsigned int invalidDelegateHiddenMasterAspectRatios:2;
        unsigned int delegateHiddenMasterAspectRatios:2;
        unsigned int delegateImplementsShouldHide:1;
        unsigned int hidden:3;
        unsigned int delegateHandlesTogglingMaster:1;
        unsigned int delegateProvidesBackgroundView:1;
        unsigned int delegateWantsUnSlideCallback:1;
        unsigned int masterOnSlide:1;
        unsigned int delegateWantsWillShowCallback:1;
        unsigned int delegateWantsWillHideCallback:1;
        unsigned int delegateWantsWillPresentCallback:1;
        unsigned int delegateWantsNavigationRequests:1;
        unsigned int resizesDetailOnSlide:1;
        unsigned int delegateSupportedInterfaceOrientations:1;
        unsigned int delegatePreferredInterfaceOrientationForPresentation:1;
        unsigned int disableDetailFrameChanges:1;
        unsigned int delegateWantsShowViewController:1;
        unsigned int delegateWantsPrivateShowViewController:1;
        unsigned int delegateWantsShowDetailViewController:1;
        unsigned int delegateWantsPrivateShowDetailViewController:1;
        unsigned int delegateWantsCollapseSecondaryViewController:1;
        unsigned int delegateWantsPrivateCollapseSecondaryViewController:1;
        unsigned int delegateWantsSeparateSecondaryViewController:1;
        unsigned int delegateWantsPrivateSeparateSecondaryViewController:1;
        unsigned int delegateWantsPrimaryViewControllerForCollapse:1;
        unsigned int delegateWantsPrivatePrimaryViewControllerForCollapse:1;
        unsigned int delegateWantsPrimaryViewControllerForExpanding:1;
        unsigned int delegateWantsPrivatePrimaryViewControllerForExpanding:1;
        unsigned int collapsedState:2;
        unsigned int primaryHidingState:2;
        unsigned int primaryHidingStateForCurrentOrientation:2;
        unsigned int delegateWantsWillChangeToDisplayMode:1;
        unsigned int delegateWantsTargetDisplayModeForAction:1;
        unsigned int delegateCanModifyFirstResponderOnTraitCollectionTransition:1;
        unsigned int pendingPresentMasterViewController:1;
        unsigned int pendingUpdateTargetDisplayMode:1;
        unsigned int collapsingClockwise:1;
        unsigned int firstResponderChangedFromPostTransitionResponder:1;
        unsigned int inWillTransitionToSize:1;
        unsigned int hasTransitioningToInternalMode:1;
        unsigned int delegateImplementsPrivateIsPrimaryVisible:1;
        unsigned int delegateImplementsPrivateCollapseSecondaryViewControllerWhileSuspended:1;
    } _splitViewControllerFlags;
    BOOL _resizeForKeyboard;
    NSString *_displayModeButtonItemTitle;
    unsigned long long _lastFocusedChildViewControllerIndex;
    double _preferredPrimaryColumnWidthFraction;
    double _minimumPrimaryColumnWidth;
    double _maximumPrimaryColumnWidth;
    UIViewController *__preservedDetailController;
    CDUnknownBlockType __didChangeBoundsBlock;
    CDUnknownBlockType __clearPreventRotationHook;
    UIFocusContainerGuide *_masterFocusContainerGuide;
    UIFocusContainerGuide *_detailFocusContainerGuide;
}

@property (copy, nonatomic, setter=_setClearPreventRotationHook:) CDUnknownBlockType _clearPreventRotationHook; // @synthesize _clearPreventRotationHook=__clearPreventRotationHook;
@property (copy, nonatomic, getter=_didChangeBoundsBlock, setter=_setDidChangeBoundsBlock:) CDUnknownBlockType _didChangeBoundsBlock; // @synthesize _didChangeBoundsBlock=__didChangeBoundsBlock;
@property (copy, nonatomic, setter=_setDisplayModeButtonItemTitle:) NSString *_displayModeButtonItemTitle; // @synthesize _displayModeButtonItemTitle;
@property (nonatomic, setter=_setPresentsInFadingPopover:) BOOL _presentsInFadingPopover;
@property (strong, nonatomic, setter=_setPreservedDetailController:) UIViewController *_preservedDetailController; // @synthesize _preservedDetailController=__preservedDetailController;
@property (nonatomic, setter=_setResizesDetailOnSlide:) BOOL _resizesDetailOnSlide;
@property (readonly, nonatomic, getter=isCollapsed) BOOL collapsed;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<UISplitViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=_detailFocusContainerGuide) UIFocusContainerGuide *detailFocusContainerGuide; // @synthesize detailFocusContainerGuide=_detailFocusContainerGuide;
@property (readonly, nonatomic) long long displayMode;
@property (nonatomic) float gutterWidth;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL hidesMasterViewInLandscape;
@property (nonatomic) BOOL hidesMasterViewInPortrait;
@property (readonly, nonatomic, getter=_lastFocusedChildViewControllerIndex) unsigned long long lastFocusedChildViewControllerIndex; // @synthesize lastFocusedChildViewControllerIndex=_lastFocusedChildViewControllerIndex;
@property (nonatomic) float masterColumnWidth;
@property (readonly, nonatomic, getter=_masterFocusContainerGuide) UIFocusContainerGuide *masterFocusContainerGuide; // @synthesize masterFocusContainerGuide=_masterFocusContainerGuide;
@property (nonatomic) double maximumPrimaryColumnWidth; // @synthesize maximumPrimaryColumnWidth=_maximumPrimaryColumnWidth;
@property (nonatomic) double minimumPrimaryColumnWidth; // @synthesize minimumPrimaryColumnWidth=_minimumPrimaryColumnWidth;
@property (nonatomic) long long preferredDisplayMode;
@property (nonatomic) double preferredPrimaryColumnWidthFraction; // @synthesize preferredPrimaryColumnWidthFraction=_preferredPrimaryColumnWidthFraction;
@property (nonatomic) BOOL presentsWithGesture; // @synthesize presentsWithGesture=_presentsWithGesture;
@property (readonly, nonatomic) double primaryColumnWidth;
@property (nonatomic) BOOL resizeForKeyboard; // @synthesize resizeForKeyboard=_resizeForKeyboard;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *viewControllers;

+ (double)_defaultGutterWidthInView:(id)arg1;
+ (BOOL)_forcePresentsInSlidingPopover;
+ (BOOL)_forcePresentsWithGesture;
+ (BOOL)_optsOutOfPopoverControllerHierarchyCheck;
+ (BOOL)doesOverridePreferredInterfaceOrientationForPresentation;
+ (BOOL)doesOverrideSupportedInterfaceOrientations;
- (void).cxx_destruct;
- (void)__viewWillLayoutSubviews;
- (void)_addOrRemovePopoverPresentationGestureRecognizer;
- (id)_additionalViewControllersToCheckForUserActivity;
- (id)_allContainedViewControllers;
- (void)_animateTransitionFromTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)_animateTransitionToOrientation:(long long)arg1 duration:(double)arg2 masterChange:(long long)arg3;
- (void)_cacheEffectiveTargetDisplayMode;
- (BOOL)_canDisplayHostedMaster;
- (BOOL)_canSlideMaster;
- (void)_changeToDisplayMode:(long long)arg1 forCurrentOrientationOnly:(BOOL)arg2;
- (id)_childContainingSender:(id)arg1;
- (id)_childViewControllersToSendViewWillTransitionToSize;
- (void)_collapseMaster:(id)arg1 andDetail:(id)arg2 withTransitionCoordinator:(id)arg3;
- (void)_collapseSecondaryViewController:(id)arg1 ontoPrimaryViewController:(id)arg2;
- (void)_commonInit;
- (void)_completeTransitionFromOrientation:(long long)arg1 masterChange:(long long)arg2;
- (double)_contentMarginForChildViewController:(id)arg1;
- (struct CGSize)_contentSizeForChildViewController:(id)arg1 inPopoverController:(id)arg2;
- (id)_defaultDisplayModes;
- (double)_defaultMaximumPrimaryColumnWidthForSize:(struct CGSize)arg1;
- (long long)_defaultTargetDisplayMode;
- (BOOL)_delegateUsesLegacySlideSPI;
- (void)_descendantWillPresentViewController:(id)arg1 modalSourceViewController:(id)arg2 presentationController:(id)arg3 animated:(BOOL)arg4;
- (struct CGRect)_detailViewFrame;
- (struct CGRect)_detailViewFrame:(struct CGRect)arg1;
- (struct CGRect)_detailViewFrameWithPopoverControllerFrame:(struct CGRect)arg1;
- (void)_didChangeToFirstResponder:(id)arg1;
- (void)_didTransitionTraitCollection;
- (BOOL)_disableAutomaticKeyboardBehavior;
- (void)_dismissMasterViewController:(BOOL)arg1;
- (void)_displayModeDidChange;
- (void)_displayModeWillChangeTo:(long long)arg1;
- (struct UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(BOOL *)arg2;
- (BOOL)_effectivePresentsWithGesture;
- (long long)_effectivePrimaryHidingState;
- (long long)_effectiveTargetDisplayMode;
- (struct CGRect)_frameForChildContentContainer:(id)arg1;
- (void)_getRotationContentSettings:(CDStruct_8bdd0ba6 *)arg1;
- (BOOL)_hasMasterViewController;
- (BOOL)_hidesMasterViewInCurrentOrientation;
- (BOOL)_hidesMasterViewInOrientation:(long long)arg1 medusaState:(long long)arg2;
- (long long)_internalModeForTraitCollection:(id)arg1 orientation:(long long)arg2 viewSize:(struct CGSize)arg3 medusaState:(long long)arg4;
- (void)_invalidateHidesMasterViewForAspectRatio:(long long)arg1;
- (void)_invokeDidChangeBoundsBlock;
- (BOOL)_isBasicallyHorizontallyCompact;
- (BOOL)_isCollapsed;
- (BOOL)_isHidesMasterInLandscapeInvalid;
- (BOOL)_isHidesMasterInPortraitInvalid;
- (BOOL)_isLandscape;
- (BOOL)_isMasterPopoverVisible;
- (BOOL)_isMasterViewShown;
- (BOOL)_isRotating;
- (BOOL)_isTransitioningFromCollapsedToSeparated;
- (void)_layoutContainerViewDidMoveToWindow:(id)arg1;
- (void)_layoutContainerViewWillMoveToWindow:(id)arg1;
- (void)_loadNewSubviews:(id)arg1;
- (double)_masterPresentationAnimationDuration;
- (struct CGRect)_masterViewFrame;
- (struct CGRect)_masterViewFrame:(struct CGRect)arg1;
- (long long)_medusaState;
- (long long)_medusaStateForOrientation:(long long)arg1 viewWidth:(double)arg2;
- (void)_popoverController:(id)arg1 didChangeFromVisible:(BOOL)arg2;
- (void)_popoverController:(id)arg1 willAnimateToFrame:(struct CGRect)arg2;
- (void)_popoverController:(id)arg1 willChangeToVisible:(BOOL)arg2;
- (void)_prepareForCompactLayout;
- (long long)_prepareToTransitionToViewSize:(struct CGSize)arg1 fromOrientation:(long long)arg2 toOrientation:(long long)arg3 duration:(double)arg4;
- (void)_presentGestureAttemptedWithPresentedPopoverController:(id)arg1;
- (void)_presentMasterViewController:(BOOL)arg1;
- (double)_primaryColumnWidthForSize:(struct CGSize)arg1;
- (double)_primaryColumnWidthForSize:(struct CGSize)arg1 isCompact:(BOOL)arg2;
- (id)_primaryContentResponder;
- (id)_primaryDimmingView;
- (long long)_primaryHidingState;
- (long long)_primaryHidingStateForCurrentOrientation;
- (id)_primaryViewControllerForCollapsing;
- (id)_primaryViewControllerForExpanding;
- (void)_removeCollapsingSnapshotViews;
- (void)_removeRoundedCorners;
- (id)_secondaryViewControllerForCollapsing;
- (void)_separateMasterAndDetailWithTransitionCoordinator:(id)arg1;
- (id)_separateSecondaryViewControllerFromPrimaryViewController:(id)arg1;
- (void)_setCollapsedState:(long long)arg1;
- (void)_setDelegateHidesMaster:(BOOL)arg1 inAspectRatio:(long long)arg2;
- (void)_setDetailViewFrame:(struct CGRect)arg1;
- (void)_setMasterOverrideTraitCollectionActive:(BOOL)arg1;
- (void)_setPrimaryHidingState:(long long)arg1;
- (void)_setPrimaryHidingStateForCurrentOrientation:(long long)arg1;
- (void)_setUpFocusContainerGuides;
- (void)_setupHiddenPopoverControllerWithViewController:(id)arg1;
- (void)_setupRoundedCorners;
- (void)_setupUnderBarSeparatorView;
- (BOOL)_shouldPersistViewWhenCoding;
- (BOOL)_shouldPreventAutorotation;
- (BOOL)_shouldSynthesizeSupportedOrientations;
- (void)_showMasterViewAnimated:(BOOL)arg1;
- (void)_slideIn:(BOOL)arg1 viewController:(id)arg2 animated:(BOOL)arg3 totalDuration:(double)arg4 completion:(CDUnknownBlockType)arg5;
- (unsigned long long)_targetEdgeForPopover;
- (void)_triggerDisplayModeAction:(id)arg1;
- (void)_updateChildContentMargins;
- (void)_updateDelegateHiddenMasterAspectRatios;
- (void)_updateDisplayModeButtonItem;
- (void)_updateLayoutForStatusBarAndInterfaceOrientation;
- (void)_updateMasterViewControllerFrame;
- (void)_updateTargetDisplayMode;
- (void)_viewControllerHiding:(id)arg1;
- (void)_willShowCollapsedDetailViewController:(id)arg1 inTargetController:(id)arg2;
- (void)applicationDidResume;
- (void)applicationWillSuspend;
- (void)dealloc;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (id)detailViewController;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (id)displayModeButtonItem;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (float)leftColumnWidth;
- (void)loadSubviews;
- (void)loadView;
- (id)masterViewController;
- (void)popoverWillAppear:(id)arg1;
- (id)preferredFocusedView;
- (long long)preferredInterfaceOrientationForPresentation;
- (float)preferredLeftColumnWidth;
- (void)purgeMemoryForReason:(int)arg1;
- (void)setPreferredLeftColumnWidth:(float)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (BOOL)shouldUpdateFocusInContext:(id)arg1;
- (void)showDetailViewController:(id)arg1 sender:(id)arg2;
- (void)showViewController:(id)arg1 sender:(id)arg2;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (void)snapshotAllViews;
- (void)snapshotForRotationFromInterfaceOrientation:(long long)arg1 toInterfaceOrientation:(long long)arg2 masterChange:(long long)arg3;
- (void)snapshotMasterView;
- (unsigned long long)supportedInterfaceOrientations;
- (void)toggleMasterVisible:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)unloadViewForced:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)willUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;

@end

