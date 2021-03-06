//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBTransientOverlayViewController.h>

#import <SpringBoard/SPUIRemoteSearchViewDelegate-Protocol.h>

@class NSString, SBModalUIFluidDismissGestureManager, SBSpotlightSettings, SBSpotlightTransientOverlaySpotlightViewController, UIPanGestureRecognizer, UITapGestureRecognizer, UIView, UIVisualEffectView;
@protocol SBSpotlightTransientOverlayViewControllerDelegate, SBTransientOverlayTransitionContextProviding;

@interface SBSpotlightTransientOverlayViewController : SBTransientOverlayViewController <SPUIRemoteSearchViewDelegate>
{
    UIVisualEffectView *_blurEffectView;
    SBSpotlightTransientOverlaySpotlightViewController *_spotlightViewController;
    BOOL _presentingInteractively;
    BOOL _performedAlongsideAnimations;
    id<SBTransientOverlayTransitionContextProviding> _interactivePresentationContextProvider;
    id<SBSpotlightTransientOverlayViewControllerDelegate> _delegate;
    unsigned long long _presentationSource;
    unsigned long long _dismissalSource;
    SBSpotlightSettings *_settings;
    UIView *_scalingView;
    unsigned long long _animationCount;
    SBModalUIFluidDismissGestureManager *_modalUIDismissGestureManager;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UITapGestureRecognizer *_tapToDismissGestureRecognizer;
}

@property (nonatomic) unsigned long long animationCount; // @synthesize animationCount=_animationCount;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SBSpotlightTransientOverlayViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long dismissalSource; // @synthesize dismissalSource=_dismissalSource;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) SBModalUIFluidDismissGestureManager *modalUIDismissGestureManager; // @synthesize modalUIDismissGestureManager=_modalUIDismissGestureManager;
@property (strong, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property (nonatomic) unsigned long long presentationSource; // @synthesize presentationSource=_presentationSource;
@property (strong, nonatomic) UIView *scalingView; // @synthesize scalingView=_scalingView;
@property (strong, nonatomic) SBSpotlightSettings *settings; // @synthesize settings=_settings;
@property (readonly) Class superclass;
@property (strong, nonatomic) UITapGestureRecognizer *tapToDismissGestureRecognizer; // @synthesize tapToDismissGestureRecognizer=_tapToDismissGestureRecognizer;

- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)_configureBlurFilterOnView:(id)arg1;
- (void)_handlePanGestureRecognizer:(id)arg1;
- (void)_handleTapToDismissGestureRecognizer:(id)arg1;
- (BOOL)_isSpotlightVisible;
- (int)_preferredStatusBarVisibility;
- (void)_setSpotlightAlpha:(double)arg1 scale:(double)arg2 blurProgress:(double)arg3 translation:(struct CGPoint)arg4 withAnimationMode:(long long)arg5 alongsideAnimationBlock:(CDUnknownBlockType)arg6 completion:(CDUnknownBlockType)arg7;
- (void)_setSpotlightPresented:(BOOL)arg1 withAnimationMode:(long long)arg2 alongsideAnimationBlock:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (BOOL)allowsStackingOverlayContentAbove;
- (void)beginInteractivePresentation;
- (void)dealloc;
- (void)dismissSearchView;
- (BOOL)dismissesForCoverSheetPresentation;
- (BOOL)dismissesSiriForPresentation;
- (void)endInteractivePresentation:(BOOL)arg1;
- (void)handleGestureDismissal;
- (BOOL)handleHomeButtonPress;
- (long long)homeAffordanceSuppression;
- (id)initWithModalUIFluidDismissGestureManager:(id)arg1;
- (BOOL)isContentOpaque;
- (id)newTransientOverlayDismissalTransitionCoordinator;
- (id)newTransientOverlayPresentationTransitionCoordinator;
- (id)preferredDisplayLayoutElementIdentifier;
- (long long)preferredLockedGestureDismissalStyle;
- (long long)preferredUnlockedGestureDismissalStyle;
- (BOOL)prefersWindowHitTestingDisabled;
- (id)presentationDimmingViewColor;
- (BOOL)preservesAppSwitcherDuringPresentationAndDismissal;
- (BOOL)preventsClippingToBounds;
- (CDUnknownBlockType)sceneDeactivationPredicate;
- (BOOL)shouldAutorotate;
- (BOOL)shouldPreventDragAndDrop;
- (unsigned long long)supportedInterfaceOrientations;
- (void)updateInteractivePresentationWithProgress:(double)arg1 translation:(double)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;

@end

