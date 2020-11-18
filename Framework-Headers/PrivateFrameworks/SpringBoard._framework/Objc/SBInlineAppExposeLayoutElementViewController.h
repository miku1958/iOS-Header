//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBLayoutElementViewController.h>

#import <SpringBoard/SBLayoutStateTransitionObserver-Protocol.h>
#import <SpringBoard/SBMainDisplaySceneLayoutElementViewControlling-Protocol.h>

@class BSCornerRadiusConfiguration, NSMutableSet, NSString, SBInlineAppExposeContainerViewController;

@interface SBInlineAppExposeLayoutElementViewController : SBLayoutElementViewController <SBLayoutStateTransitionObserver, SBMainDisplaySceneLayoutElementViewControlling>
{
    SBInlineAppExposeContainerViewController *_inlineContainerViewController;
    NSMutableSet *_maskDisplayCornersReasons;
}

@property (strong, nonatomic) BSCornerRadiusConfiguration *cornerRadiusConfiguration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)SB_conformsToMainDisplaySceneLayoutElementViewControlling;
- (id)_newDisplayLayoutElementForEntity:(id)arg1;
- (id)animationControllerForTransitionRequest:(id)arg1;
- (void)configureWithWorkspaceEntity:(id)arg1 forLayoutElement:(id)arg2 layoutState:(id)arg3 referenceFrame:(struct CGRect)arg4;
- (void)invalidate;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionWillEndWithTransitionContext:(id)arg2;
- (void)prepareForReuse;
- (id)relinquishInlineContainerViewController;
- (void)setMaskDisplayCorners:(BOOL)arg1 forReason:(id)arg2;
- (void)setShadowOffset:(double)arg1;
- (void)setShadowOpacity:(double)arg1;
- (void)viewDidLayoutSubviews;

@end
