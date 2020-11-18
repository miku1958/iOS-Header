//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UISplitViewController.h>

#import <GameCenterPrivateUI/CAAnimationDelegate-Protocol.h>

@class GKMasterDetailNavigationController, NSMutableArray, NSString, UIColor, UIView, UIViewController;
@protocol GKMasterDetailViewControllerDelegate;

@interface GKMasterDetailViewController : UISplitViewController <CAAnimationDelegate>
{
    id<GKMasterDetailViewControllerDelegate> _masterDetailDelegate;
    BOOL _shouldCollapseToDetail;
    BOOL _covered;
    UIColor *_separatorLineColor;
    GKMasterDetailNavigationController *_masterNavigationController;
    UIView *_separatorWrapperView;
    UIView *_separatorLineView;
    UIView *_separatorBarView;
    UIView *_separatorBarMaskView;
    CDUnknownBlockType _presentationDelayHandler;
    NSMutableArray *_controllersDelayingPresentation;
}

@property (strong, nonatomic) NSMutableArray *controllersDelayingPresentation; // @synthesize controllersDelayingPresentation=_controllersDelayingPresentation;
@property (nonatomic, getter=isCovered) BOOL covered; // @synthesize covered=_covered;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) id<GKMasterDetailViewControllerDelegate> masterDetailDelegate;
@property (strong, nonatomic) GKMasterDetailNavigationController *masterNavigationController; // @synthesize masterNavigationController=_masterNavigationController;
@property (copy, nonatomic) CDUnknownBlockType presentationDelayHandler; // @synthesize presentationDelayHandler=_presentationDelayHandler;
@property (readonly, strong, nonatomic) UIViewController *rootDetailViewController;
@property (strong, nonatomic) UIView *separatorBarMaskView; // @synthesize separatorBarMaskView=_separatorBarMaskView;
@property (strong, nonatomic) UIView *separatorBarView; // @synthesize separatorBarView=_separatorBarView;
@property (strong, nonatomic) UIColor *separatorLineColor; // @synthesize separatorLineColor=_separatorLineColor;
@property (strong, nonatomic) UIView *separatorLineView; // @synthesize separatorLineView=_separatorLineView;
@property (strong, nonatomic) UIView *separatorWrapperView; // @synthesize separatorWrapperView=_separatorWrapperView;
@property (nonatomic) BOOL shouldCollapseToDetail; // @synthesize shouldCollapseToDetail=_shouldCollapseToDetail;
@property (readonly) Class superclass;
@property (readonly, strong, nonatomic) UIViewController *topDetailViewController;
@property (readonly, strong, nonatomic) UIViewController *topMasterViewController;

+ (BOOL)_shouldForwardViewWillTransitionToSize;
- (void)_animateSlidingDoorTransitionFromRelativeStartTime:(double)arg1 relativeDuration:(double)arg2 duration:(double)arg3 appearing:(BOOL)arg4;
- (void)_gkPushPresentedViewControllerForCompactSizeClass:(id)arg1;
- (void)_gkRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (void)_gkRestorePopoverWithViewControllers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)_gkShouldRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (id)_gkTargetViewControllerForAction:(SEL)arg1;
- (id)_gkViewControllersForRestoringPopover;
- (void)_setSeparatorBarHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setupSeparatorViews;
- (id)_viewForSlidingInDetailView;
- (id)_viewForSlidingInMasterView;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (BOOL)automaticallyForwardAppearanceMethods;
- (double)bubbleFlowAnimateInDuration;
- (double)bubbleFlowAnimateOutDuration;
- (void)dealloc;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)delayAppearingWithBubbleFlowUntil:(CDUnknownBlockType)arg1;
- (void)dismissMasterOverlayViewControllerAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (id)init;
- (BOOL)isUsingPrimaryViewOverlay;
- (void)notifyViewControllersOfNavigationController:(id)arg1 transitionToTraitCollection:(id)arg2 withTransitionCoordinator:(id)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)popToRootDetailViewControllerAnimated:(BOOL)arg1;
- (void)pushMasterViewController:(id)arg1;
- (BOOL)readyToAppearWithBubbleFlow;
- (void)setNavigationBarHidden:(BOOL)arg1;
- (void)setNavigationBarHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)shouldAutomaticallyForwardRotationMethods;
- (BOOL)shouldUnhidePrimaryViewController;
- (BOOL)statusShouldCoverSplitViewFor:(id)arg1;
- (void)updateCoveredColumnWidth;
- (void)updateViewsForCurrentAppSize;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappearAnimated:(BOOL)arg1 bubbleFlow:(BOOL)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willAnimateKeyframesForAppearingWithBubbleFlowFromRelativeStartTime:(double)arg1 relativeDuration:(double)arg2 absoluteTransitionDuration:(double)arg3 fromViewController:(id)arg4;
- (void)willAnimateKeyframesForDisappearingWithBubbleFlowFromRelativeStartTime:(double)arg1 relativeDuration:(double)arg2 absoluteTransitionDuration:(double)arg3 toViewController:(id)arg4;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

@end

