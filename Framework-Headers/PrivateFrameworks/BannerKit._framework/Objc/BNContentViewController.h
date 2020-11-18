//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <BannerKit/BNPanGestureProxyDelegate-Protocol.h>
#import <BannerKit/BNPresentedBannerAnimationCustomizing-Protocol.h>
#import <BannerKit/BNPresentingPrivate-Protocol.h>
#import <BannerKit/UIGestureRecognizerDelegate-Protocol.h>

@class BNTieredArray, NSArray, NSMutableSet, NSString, UIPanGestureRecognizer;
@protocol BNConsidering, BNLayoutManaging, BNPanGestureProxyPrivate, BNPosting, BNPresentable, BNPresentingDelegate, UIViewControllerAnimatedTransitioning, UIViewControllerTransitionCoordinator;

@interface BNContentViewController : UIViewController <UIGestureRecognizerDelegate, BNPanGestureProxyDelegate, BNPresentedBannerAnimationCustomizing, BNPresentingPrivate>
{
    BNTieredArray *_presentables;
    NSMutableSet *_presentingPresentables;
    NSMutableSet *_dismissingPresentables;
    NSMutableSet *_transitioningDelegates;
    UIPanGestureRecognizer *_panGesture;
    id<BNPresentable> _presentableForActiveGesture;
    struct CGRect _presentedFrameForPresentableForActiveGesture;
    id<BNPanGestureProxyPrivate> _panGestureProxyForActivePresentable;
    id<UIViewControllerAnimatedTransitioning> _activeBannerTransitionAnimator;
    id<UIViewControllerTransitionCoordinator> _activeTransitionCoordinator;
    id<BNLayoutManaging> _layoutManager;
    id<BNConsidering> _authority;
    id<BNPosting> _poster;
    id<BNPresentingDelegate> _delegate;
}

@property (readonly, nonatomic) id<BNConsidering> authority; // @synthesize authority=_authority;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<BNPresentingDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<BNLayoutManaging> layoutManager; // @synthesize layoutManager=_layoutManager;
@property (weak, nonatomic) id<BNPosting> poster; // @synthesize poster=_poster;
@property (readonly, copy, nonatomic) NSArray *presentedPresentables;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSArray *topPresentables;

+ (void)initialize;
- (void).cxx_destruct;
- (void)_addPresentable:(id)arg1 withTransitioningDelegate:(id)arg2 incrementingTier:(BOOL)arg3;
- (BOOL)_canShowWhileLocked;
- (void)_dismissPresentable:(id)arg1 withReason:(id)arg2 animated:(BOOL)arg3 userInfo:(id)arg4;
- (id)_dismissPresentableWithRequestIdentifier:(id)arg1 requesterIdentifier:(id)arg2 reason:(id)arg3 animated:(BOOL)arg4 userInfo:(id)arg5;
- (struct CGRect)_dismissedFrameForViewController:(id)arg1 withContainerBounds:(struct CGRect)arg2;
- (struct CGRect)_dismissedFrameWithPaddingForViewController:(id)arg1 withContainerBounds:(struct CGRect)arg2;
- (long long)_effectTierForPresentable:(id)arg1;
- (void)_gestureRecognizerFailed:(id)arg1;
- (void)_handlePan:(id)arg1;
- (void)_insertPresentable:(id)arg1 beneathPresentable:(id)arg2 withTransitioningDelegate:(id)arg3;
- (void)_insertPresentable:(id)arg1 beneathPresentable:(id)arg2 withTransitioningDelegate:(id)arg3 incrementingTier:(BOOL)arg4;
- (struct CGRect)_insetFrame:(struct CGRect)arg1 forViewController:(id)arg2;
- (BOOL)_isDraggingDismissalEnabledForPresentable:(id)arg1;
- (BOOL)_isDraggingEnabledForPresentable:(id)arg1;
- (BOOL)_isDraggingInteractionEnabledForPresentable:(id)arg1;
- (BOOL)_isLocalDraggingEnabledForPresentable:(id)arg1;
- (BOOL)_isPresentableHUD:(id)arg1;
- (BOOL)_isTouchOutsideDismissalEnabledForPresentable:(id)arg1;
- (id)_layoutManager;
- (struct CGPoint)_locationOfScrollEvent:(id)arg1 inContainerViewForGesture:(id)arg2;
- (struct CGPoint)_locationOfTouch:(id)arg1 inContainerViewForGesture:(id)arg2;
- (id)_newBannerTransitionContextForPresenting:(BOOL)arg1 viewController:(id)arg2 animated:(BOOL)arg3;
- (struct CGRect)_outsetFrame:(struct CGRect)arg1 forViewController:(id)arg2;
- (id)_presentableForGestureInView:(id)arg1;
- (id)_presentableForScrollEvent:(id)arg1;
- (id)_presentableForTouch:(id)arg1;
- (id)_presentableWithRequestIdentifier:(id)arg1 requesterIdentifier:(id)arg2;
- (struct CGRect)_presentedFrame:(BOOL)arg1 forViewController:(id)arg2 withContainerBounds:(struct CGRect)arg3 overshoot:(BOOL)arg4;
- (struct CGRect)_presentedFrameForPresentable:(id)arg1 withContainerBounds:(struct CGRect)arg2;
- (struct CGRect)_presentedFrameForViewController:(id)arg1 withContainerBounds:(struct CGRect)arg2;
- (struct CGRect)_presentedFrameForViewController:(id)arg1 withContentFrame:(struct CGRect)arg2 afterContentWithFrame:(struct CGRect)arg3;
- (void)_removePresentable:(id)arg1;
- (BOOL)_resetActiveBannerTransitionAnimator:(id)arg1;
- (BOOL)_resetActiveTransitionCoordinator:(id)arg1;
- (void)_resetPresentableForActiveGesture:(id)arg1;
- (id)_topPresentable;
- (struct CGPoint)_translationInContainerViewForGesture:(id)arg1;
- (struct CGPoint)_velocityInContainerViewForGesture:(id)arg1;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (id)dismissAllPresentablesWithRequesterIdentifier:(id)arg1 withReason:(id)arg2 userInfo:(id)arg3;
- (id)dismissPresentableWithRequestIdentifier:(id)arg1 requesterIdentifier:(id)arg2 reason:(id)arg3 animated:(BOOL)arg4 userInfo:(id)arg5;
- (id)dismissPresentableWithRequestIdentifier:(id)arg1 requesterIdentifier:(id)arg2 reason:(id)arg3 userInfo:(id)arg4;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveEvent:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (struct CGPoint)gestureRecognizerProxy:(id)arg1 locationForTouch:(id)arg2 inCoordinateSpace:(id)arg3;
- (struct CGPoint)gestureRecognizerProxy:(id)arg1 translationInCoordinateSpace:(id)arg2;
- (struct CGPoint)gestureRecognizerProxy:(id)arg1 velocityInCoordinateSpace:(id)arg2;
- (struct CGPoint)gestureRecognizerProxy:(id)arg1 visualTranslationInCoordinateSpace:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithAuthority:(id)arg1;
- (void)loadView;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)presentPresentable:(id)arg1 withOptions:(unsigned long long)arg2 userInfo:(id)arg3;
- (BOOL)resignFirstResponder;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (BOOL)shouldAutorotate;
- (BOOL)shouldFenceAnimationsForPresentable:(id)arg1;
- (BOOL)shouldOverlapPresentable:(id)arg1 withPresentable:(id)arg2;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (id)sizeTransitionAnimationSettingsForPresentable:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (id)userInterfaceStyleTransitionAnimationSettingsForPresentable:(id)arg1 forTransitionToStyle:(long long)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

@end
