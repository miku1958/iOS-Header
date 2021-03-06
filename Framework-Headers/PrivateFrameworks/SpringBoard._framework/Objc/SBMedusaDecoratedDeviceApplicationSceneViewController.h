//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SpringBoard/SBInlineAppExposeContainerViewControllerDelegate-Protocol.h>
#import <SpringBoard/SBMedusaDecoratedDeviceApplicationSceneViewControlling-Protocol.h>
#import <SpringBoard/SBMedusaDecoratedDeviceApplicationSceneViewControlling_Internal-Protocol.h>
#import <SpringBoard/SBSceneViewStatusBarAssertionObserver-Protocol.h>
#import <SpringBoard/SBSystemPointerInteractionDelegate-Protocol.h>

@class BSCornerRadiusConfiguration, MTLumaDodgePillSettings, NSHashTable, NSMutableSet, NSString, SBApplicationBlurContentView, SBAsymmetricalCornerRadiusWrapperView, SBDeviceApplicationSceneHandle, SBDeviceApplicationSceneViewController, SBHomeGrabberView, SBInlineAppExposeContainerViewController, SBMedusaSettings, SBNubView, SBSceneViewStatusBarAssertion, UIDropInteraction, UIView;
@protocol SBApplicationSceneBackgroundView, SBApplicationSceneViewControllingStatusBarDelegate, SBScenePlaceholderContentContext;

@interface SBMedusaDecoratedDeviceApplicationSceneViewController : UIViewController <SBSceneViewStatusBarAssertionObserver, SBInlineAppExposeContainerViewControllerDelegate, SBSystemPointerInteractionDelegate, SBMedusaDecoratedDeviceApplicationSceneViewControlling_Internal, SBMedusaDecoratedDeviceApplicationSceneViewControlling>
{
    SBDeviceApplicationSceneHandle *_deviceApplicationSceneHandle;
    SBDeviceApplicationSceneViewController *_deviceApplicationSceneViewController;
    UIView *_inlineAppExposeContainerView;
    SBInlineAppExposeContainerViewController *_inlineContainerViewController;
    BOOL _nubViewHidden;
    BOOL _nubViewHighlighted;
    UIView *_rimShadowView;
    UIView *_containerView;
    SBAsymmetricalCornerRadiusWrapperView *_asymmetricalCornerRadiusWrapperView;
    UIView *_blurViewContainerView;
    SBNubView *_nubView;
    UIView *_darkenView;
    BOOL _isBlurred;
    SBApplicationBlurContentView *_blurView;
    NSHashTable *_statusBarAssertions;
    SBSceneViewStatusBarAssertion *_inlineAppExposeStatusBarAssertion;
    NSMutableSet *_matchMoveAnimationRequiringReasons;
    SBMedusaSettings *_medusaSettings;
    BOOL _clipsToBounds;
    double _shadowOpacity;
    double _shadowOffset;
    BSCornerRadiusConfiguration *_cornerRadiusConfiguration;
    unsigned long long _maskedCorners;
    double _darkenViewAlpha;
    UIDropInteraction *_dropInteraction;
}

@property (readonly, nonatomic) UIView *_blurViewContainerView;
@property (weak, nonatomic) id<SBApplicationSceneViewControllingStatusBarDelegate> applicationSceneStatusBarDelegate;
@property (strong, nonatomic) UIView<SBApplicationSceneBackgroundView> *backgroundView;
@property (readonly, nonatomic, getter=isBlurred) BOOL blurred;
@property (nonatomic) BOOL clipsToBounds; // @synthesize clipsToBounds=_clipsToBounds;
@property (readonly, nonatomic) long long contentInterfaceOrientation;
@property (readonly, nonatomic) struct CGSize contentReferenceSize;
@property (strong, nonatomic) BSCornerRadiusConfiguration *cornerRadiusConfiguration; // @synthesize cornerRadiusConfiguration=_cornerRadiusConfiguration;
@property (strong, nonatomic) UIView *customContentView;
@property (nonatomic) double darkenViewAlpha; // @synthesize darkenViewAlpha=_darkenViewAlpha;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) long long displayMode;
@property (strong, nonatomic) UIDropInteraction *dropInteraction; // @synthesize dropInteraction=_dropInteraction;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long homeGrabberDisplayMode;
@property (strong, nonatomic) MTLumaDodgePillSettings *homeGrabberPillSettings;
@property (readonly, nonatomic) SBHomeGrabberView *homeGrabberView;
@property (nonatomic) long long layoutRole;
@property (nonatomic) unsigned long long maskedCorners; // @synthesize maskedCorners=_maskedCorners;
@property (nonatomic, getter=isNubViewHidden) BOOL nubViewHidden;
@property (nonatomic, getter=isNubViewHighlighted) BOOL nubViewHighlighted;
@property (readonly, nonatomic) long long overrideStatusBarStyle;
@property (strong, nonatomic) id<SBScenePlaceholderContentContext> placeholderContentContext;
@property (readonly, nonatomic) SBDeviceApplicationSceneHandle *sceneHandle;
@property (copy, nonatomic) NSString *sceneHostViewMinificationFilter;
@property (nonatomic) double shadowOffset; // @synthesize shadowOffset=_shadowOffset;
@property (nonatomic) double shadowOpacity; // @synthesize shadowOpacity=_shadowOpacity;
@property (nonatomic) BOOL shouldRasterizeSceneHostView;
@property (readonly, nonatomic) double statusBarAlpha;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)SB_conformsToMedusaDecoratedDeviceApplicationSceneViewControlling;
- (BOOL)SB_conformsToSceneLayoutMedusaStatusBarAssertionProviding;
- (BOOL)SB_conformsToSceneLayoutStatusBarAssertionProviding;
- (void)_addSceneViewMatchMoveAnimation;
- (void)_beginRequiringSceneViewMatchMoveAnimationForReason:(id)arg1;
- (id)_blurContentView;
- (void)_endRequiringSceneViewMatchMoveAnimationForReason:(id)arg1;
- (void)_handleNubTapGestureRecognizerAction:(id)arg1;
- (void)_removeSceneViewMatchMoveAnimation;
- (BOOL)_sceneViewHasMatchMoveAnimation;
- (void)_setAbsoluteDiffuseShadowOpacity:(double)arg1;
- (void)_setAbsoluteShadowOffset:(struct CGSize)arg1;
- (void)_setAbsoluteShadowRadius:(double)arg1;
- (void)_setBlurContentView:(id)arg1;
- (void)_updateNubViewAlpha;
- (id)animationControllerForTransitionRequest:(id)arg1;
- (void)blurApplicationContent:(BOOL)arg1 withAnimationFactory:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)containerContentWrapperInterfaceOrientationChangedTo:(long long)arg1;
- (void)dealloc;
- (double)effectiveCornerRadius;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeviceApplicationSceneHandle:(id)arg1 inlineContainerViewController:(id)arg2 layoutRole:(long long)arg3;
- (void)inlineContainerViewController:(id)arg1 setStatusBarHidden:(BOOL)arg2;
- (void)invalidate;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionWillEndWithTransitionContext:(id)arg2;
- (void)loadView;
- (id)newSnapshot;
- (id)newSnapshotView;
- (void)newSnapshotViewOnQueue:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (struct UIEdgeInsets)pointerInteractionHitTestInsetsForView:(id)arg1;
- (void)setContentReferenceSize:(struct CGSize)arg1 withInterfaceOrientation:(long long)arg2;
- (void)setDisplayMode:(long long)arg1 animationFactory:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setInlineAppExposeContainerViewController:(id)arg1;
- (BOOL)shouldBeginPointerInteractionAtLocation:(struct CGPoint)arg1 forView:(id)arg2;
- (void)statusBarAssertionDidInvalidate:(id)arg1;
- (void)statusBarAssertionDidUpdate:(id)arg1;
- (id)statusBarAssertionWithStatusBarHidden:(BOOL)arg1 atLevel:(unsigned long long)arg2;
- (id)statusBarAssertionWithStatusBarHidden:(BOOL)arg1 nubViewHidden:(long long)arg2 atLevel:(unsigned long long)arg3;
- (id)styleForRegion:(id)arg1 forView:(id)arg2;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willMoveToParentViewController:(id)arg1;

@end

