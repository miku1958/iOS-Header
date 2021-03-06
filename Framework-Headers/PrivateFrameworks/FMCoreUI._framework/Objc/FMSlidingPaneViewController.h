//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FMCoreUI/FMViewController.h>

@class FMFuture, NSMutableArray, SlidingPaneViewState, UIView, UIViewController, UIVisualEffect;
@protocol FMSlidingPaneViewControllerDelegate;

@interface FMSlidingPaneViewController : FMViewController
{
    BOOL _didHideToolbar;
    UIVisualEffect *_paneVisualEffect;
    id<FMSlidingPaneViewControllerDelegate> _delegate;
    double _animationDuration;
    double _animationSpringDamping;
    double _animationInitialVelocity;
    unsigned long long _animationOptions;
    SlidingPaneViewState *_paneState;
    NSMutableArray *_actionFutures;
    struct UIEdgeInsets _paneInsets;
    struct UIEdgeInsets _paneContentInsets;
}

@property (strong, nonatomic) NSMutableArray *actionFutures; // @synthesize actionFutures=_actionFutures;
@property (nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property (nonatomic) double animationInitialVelocity; // @synthesize animationInitialVelocity=_animationInitialVelocity;
@property (nonatomic) unsigned long long animationOptions; // @synthesize animationOptions=_animationOptions;
@property (nonatomic) double animationSpringDamping; // @synthesize animationSpringDamping=_animationSpringDamping;
@property (readonly, nonatomic) FMFuture *currentFuture;
@property (weak, nonatomic) id<FMSlidingPaneViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) BOOL didHideToolbar; // @synthesize didHideToolbar=_didHideToolbar;
@property (nonatomic) struct UIEdgeInsets paneContentInsets; // @synthesize paneContentInsets=_paneContentInsets;
@property (nonatomic) struct UIEdgeInsets paneInsets; // @synthesize paneInsets=_paneInsets;
@property (readonly, nonatomic, getter=isPaneShowing) BOOL paneShowing;
@property (strong, nonatomic) SlidingPaneViewState *paneState; // @synthesize paneState=_paneState;
@property (readonly, nonatomic) UIView *paneView;
@property (readonly, nonatomic) UIViewController *paneViewController;
@property (strong, nonatomic) UIVisualEffect *paneVisualEffect; // @synthesize paneVisualEffect=_paneVisualEffect;

- (void).cxx_destruct;
- (void)_createPaneContentConstraintsForState:(id)arg1;
- (void)_createPaneViewForState:(id)arg1;
- (void)_crossDissolveOldPaneState:(id)arg1 newPaneState:(id)arg2 animated:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_dismissPaneState:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_metricsFromEdgeInsets:(struct UIEdgeInsets)arg1;
- (struct CGSize)_normalizeSize:(struct CGSize)arg1;
- (void)_paneFrameChanged:(struct CGRect)arg1;
- (id)_paneParentView;
- (struct CGSize)_preferredSizeForPaneState:(id)arg1;
- (void)_presentPaneState:(id)arg1 animated:(BOOL)arg2 interactive:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_removeChildViewControllerForState:(id)arg1;
- (void)awakeFromNib;
- (void)commonConfiguration;
- (void)completeFuture:(id)arg1;
- (void)didDismissPane:(id)arg1 animated:(BOOL)arg2;
- (void)didPresentPane:(id)arg1 inRect:(struct CGRect)arg2 animated:(BOOL)arg3;
- (void)dismiss:(id)arg1;
- (void)dismiss:(id)arg1 forEvent:(id)arg2;
- (void)dismissPaneViewControllerAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissSegue:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)newActionFuture;
- (void)paneSizeChanged:(struct CGRect)arg1 forViewController:(id)arg2;
- (void)presentPaneViewController:(id)arg1 fromEdge:(unsigned long long)arg2 animated:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)presentPaneViewController:(id)arg1 fromEdge:(unsigned long long)arg2 withPercent:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setPresentingConstraintConstant:(double)arg1;
- (id)traitCollectionForChildViewController:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)willDismissPane:(id)arg1 animated:(BOOL)arg2;
- (void)willPresentPane:(id)arg1 inRect:(struct CGRect)arg2 animated:(BOOL)arg3;

@end

