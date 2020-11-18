//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/UIDimmingViewDelegate-Protocol.h>
#import <UIKit/UIGestureRecognizerDelegate-Protocol.h>
#import <UIKit/UIPanelControllerDelegate-Protocol.h>
#import <UIKit/UISplitViewControllerImpl-Protocol.h>

@class NSArray, NSString, UIDimmingView, UIImage, UIPanGestureRecognizer, UIPanelController, UIResponder, UISlidingBarConfiguration, UISlidingBarState, UISlidingBarStateRequest, UISplitViewController, UISplitViewControllerPanelImplDisplayModeButtonItem, UITraitCollection, UIViewController;
@protocol UISplitViewControllerDelegate;

@interface UISplitViewControllerPanelImpl : NSObject <UIPanelControllerDelegate, UIDimmingViewDelegate, UIGestureRecognizerDelegate, UISplitViewControllerImpl>
{
    UISplitViewController *_svc;
    UISplitViewControllerPanelImplDisplayModeButtonItem *_displayModeButtonItem;
    NSString *_displayModeButtonItemTitle;
    double _presentationGestureDirection;
    long long _lastNotifiedMode;
    long long _overrideReportedDisplayMode;
    long long _animatingToDisplayMode;
    BOOL _lastShouldAllowChange;
    BOOL _lastNotifiedIsCollapsed;
    UITraitCollection *_transitioningToTraitCollection;
    struct CGSize _transitioningToSize;
    long long _transitioningToOrientation;
    UITraitCollection *_suspendedTraitCollection;
    struct CGSize _suspendedSize;
    UISlidingBarStateRequest *_suspendedStateRequest;
    long long _suspendedState;
    UIResponder *_postTransitionResponder;
    struct {
        unsigned int usedNewAPI:1;
        unsigned int primaryHidingState:2;
        unsigned int didSetLastShouldAllowChangeDuringUpdate:1;
        unsigned int hasTransitioningSizeAndOrientation:1;
        unsigned int hasPendingPreferredDisplayModeChange:1;
        unsigned int firstResponderChangedFromPostTransitionResponder:1;
    } _flags;
    double _lastUserInitiatedPrimaryWidth;
    BOOL _presentsWithGesture;
    id<UISplitViewControllerDelegate> _delegate;
    long long _preferredDisplayMode;
    double _preferredPrimaryColumnWidthFraction;
    double _minimumPrimaryColumnWidth;
    double _maximumPrimaryColumnWidth;
    UIPanelController *_panelController;
    UIPanGestureRecognizer *__presentationGestureRecognizer;
    UIDimmingView *__dimmingView;
    UIViewController *__preservedDetailController;
    UIImage *__fullScreenButtonImage;
}

@property (strong, nonatomic, setter=_setDimmingView:) UIDimmingView *_dimmingView; // @synthesize _dimmingView=__dimmingView;
@property (copy, nonatomic, setter=_setDisplayModeButtonItemTitle:) NSString *_displayModeButtonItemTitle;
@property (strong, nonatomic, setter=_setFullScreenButtonImage:) UIImage *_fullScreenButtonImage; // @synthesize _fullScreenButtonImage=__fullScreenButtonImage;
@property (strong, nonatomic, setter=_setPresentationGestureRecognizer:) UIPanGestureRecognizer *_presentationGestureRecognizer; // @synthesize _presentationGestureRecognizer=__presentationGestureRecognizer;
@property (strong, nonatomic, setter=_setPreservedDetailController:) UIViewController *_preservedDetailController; // @synthesize _preservedDetailController=__preservedDetailController;
@property (readonly, nonatomic, getter=isCollapsed) BOOL collapsed;
@property (copy, nonatomic) UISlidingBarConfiguration *configuration;
@property (readonly, nonatomic) UISlidingBarState *currentState;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<UISplitViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) float gutterWidth;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL hidesMasterViewInPortrait;
@property (strong, nonatomic) UIViewController *leadingViewController;
@property (strong, nonatomic) UIViewController *mainViewController;
@property (nonatomic) float masterColumnWidth;
@property (nonatomic) double maximumPrimaryColumnWidth; // @synthesize maximumPrimaryColumnWidth=_maximumPrimaryColumnWidth;
@property (nonatomic) double minimumPrimaryColumnWidth; // @synthesize minimumPrimaryColumnWidth=_minimumPrimaryColumnWidth;
@property (strong, nonatomic) UIPanelController *panelController; // @synthesize panelController=_panelController;
@property (readonly, nonatomic) NSArray *possibleStates;
@property (nonatomic) long long preferredDisplayMode; // @synthesize preferredDisplayMode=_preferredDisplayMode;
@property (nonatomic) double preferredPrimaryColumnWidthFraction; // @synthesize preferredPrimaryColumnWidthFraction=_preferredPrimaryColumnWidthFraction;
@property (nonatomic) BOOL presentsWithGesture; // @synthesize presentsWithGesture=_presentsWithGesture;
@property (copy, nonatomic) UISlidingBarStateRequest *stateRequest;
@property (readonly) Class superclass;
@property (strong, nonatomic) UIViewController *trailingViewController;
@property (copy, nonatomic) NSArray *viewControllers;

+ (id)_withDisabledAppearanceTransitions:(BOOL)arg1 forVisibleDescendantsOf:(id)arg2 perform:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (id)_additionalViewControllersToCheckForUserActivity;
- (id)_allContainedViewControllers;
- (id)_childContainingSender:(id)arg1;
- (id)_childViewControllersToSendViewWillTransitionToSize;
- (void)_commonInit;
- (double)_contentMarginForChildViewController:(id)arg1;
- (struct CGSize)_contentSizeForChildViewController:(id)arg1 inPopoverController:(id)arg2;
- (void)_descendantWillPresentViewController:(id)arg1 modalSourceViewController:(id)arg2 presentationController:(id)arg3 animated:(BOOL)arg4;
- (void)_didChangeToFirstResponder:(id)arg1;
- (void)_didEndSnapshotSession;
- (BOOL)_disableAutomaticKeyboardBehavior;
- (void)_displayModeButtonItemWasAddedForFirstTime;
- (long long)_displayModeForState:(id)arg1;
- (struct UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(BOOL *)arg2;
- (long long)_effectiveTargetDisplayMode;
- (long long)_effectiveTargetDisplayModeForDisplayMode:(long long)arg1;
- (struct CGRect)_frameForChildContentContainer:(id)arg1;
- (long long)_fullScreenStateForOrientation:(long long)arg1 viewWidth:(double)arg2;
- (BOOL)_gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (BOOL)_gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (BOOL)_gestureRecognizerShouldBegin:(id)arg1;
- (void)_getRotationContentSettings:(CDStruct_8bdd0ba6 *)arg1;
- (BOOL)_handlesCounterRotationForPresentation;
- (BOOL)_hasPreferredInterfaceOrientationForPresentation;
- (BOOL)_iPadShouldUseOverlayInCurrentEnvironment;
- (void)_initWithCoder:(id)arg1;
- (BOOL)_isCollapsed;
- (BOOL)_isLeadingShown;
- (BOOL)_isRotating;
- (BOOL)_optsOutOfPopoverControllerHierarchyCheck;
- (void)_popoverController:(id)arg1 didChangeFromVisible:(BOOL)arg2;
- (void)_popoverController:(id)arg1 willChangeToVisible:(BOOL)arg2;
- (void)_presentationGestureRecognizerChanged:(id)arg1;
- (id)_primaryContentResponder;
- (id)_primaryDimmingView;
- (long long)_primaryHidingState;
- (void)_setLeadingShownFromGesture:(BOOL)arg1;
- (void)_setPrimaryHidingState:(long long)arg1;
- (BOOL)_shouldPersistViewWhenCoding;
- (BOOL)_shouldSynthesizeSupportedOrientations;
- (void)_stopTransitionsInViewController:(id)arg1;
- (void)_triggerDisplayModeAction:(id)arg1;
- (void)_updateChildContentMargins;
- (void)_updateDimmingView;
- (void)_updateDisplayModeButtonItem;
- (void)_updateLayoutForStatusBarAndInterfaceOrientation;
- (void)_updatePresentationGestureRecognizer;
- (void)_willBeginSnapshotSession;
- (void)_willShowCollapsedDetailViewController:(id)arg1 inTargetController:(id)arg2;
- (void)_withDisabledAppearanceTransitionsPerform:(CDUnknownBlockType)arg1;
- (void)animateToRequest:(id)arg1;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (id)detailViewController;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)dimmingViewWasTapped:(id)arg1;
- (long long)displayMode;
- (id)displayModeButtonItem;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithSplitViewController:(id)arg1;
- (void)loadView;
- (id)masterViewController;
- (void)panelController:(id)arg1 adjustLeadingViewController:(id)arg2 forKeyboardInfo:(id)arg3;
- (BOOL)panelController:(id)arg1 collapseOntoPrimaryViewController:(id)arg2;
- (void)panelController:(id)arg1 collapsePrimaryViewController:(id)arg2 withFallbackSecondaryViewController:(id)arg3 transitionCoordinator:(id)arg4;
- (void)panelController:(id)arg1 didChangeToState:(id)arg2;
- (void)panelController:(id)arg1 didEndAnimatedTransitionToStateRequest:(id)arg2;
- (id)panelController:(id)arg1 separateSecondaryViewControllerFromPrimaryViewController:(id)arg2;
- (void)panelController:(id)arg1 willBeginAnimatedTransitionToStateRequest:(id)arg2 predictedEndState:(id)arg3;
- (void)panelController:(id)arg1 willChangeToState:(id)arg2;
- (CDUnknownBlockType)panelControllerWillUpdate:(id)arg1;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (id)preferredFocusEnvironments;
- (id)preferredFocusedView;
- (long long)preferredInterfaceOrientationForPresentation;
- (double)primaryColumnWidth;
- (id)primaryViewControllerForCollapsingPanelController:(id)arg1;
- (id)primaryViewControllerForExpandingPanelController:(id)arg1;
- (void)purgeMemoryForReason:(int)arg1;
- (void)removeChildViewController:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (BOOL)shouldUpdateFocusInContext:(id)arg1;
- (void)showDetailViewController:(id)arg1 sender:(id)arg2;
- (void)showViewController:(id)arg1 sender:(id)arg2;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)toggleMasterVisible:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)unloadViewForced:(BOOL)arg1;
- (void)updateViewConstraints;
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
