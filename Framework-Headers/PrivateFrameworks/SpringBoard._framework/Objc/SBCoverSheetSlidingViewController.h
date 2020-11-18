//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SpringBoard/PTSettingsKeyObserver-Protocol.h>
#import <SpringBoard/SBCoverSheetSystemGestureDelegatePositionProviding-Protocol.h>

@class CSCoverSheetTransitionSettings, CSLockScreenSettings, NSObject, NSString, SBCoverSheetPositionView, SBCoverSheetSystemGesturesDelegate, SBFluidScrunchGestureRecognizer, SBHomeGestureSettings, SBIndirectPanGestureRecognizer, SBScreenEdgePanGestureRecognizer, UIViewFloatAnimatableProperty;
@protocol OS_dispatch_group, SBCoverSheetSlidingViewControllerContentViewController, SBCoverSheetSlidingViewControllerDelegate;

@interface SBCoverSheetSlidingViewController : UIViewController <SBCoverSheetSystemGestureDelegatePositionProviding, PTSettingsKeyObserver>
{
    long long _dismissGestureState;
    BOOL _roundsCorners;
    BOOL _indirectPresentGestureCalledBegin;
    BOOL _canBePulledDown;
    BOOL _canBePulledUp;
    BOOL _performingCatchUpForPresentation;
    UIViewController<SBCoverSheetSlidingViewControllerContentViewController> *_contentViewController;
    id<SBCoverSheetSlidingViewControllerDelegate> _delegate;
    SBScreenEdgePanGestureRecognizer *_dismissGestureRecognizer;
    SBScreenEdgePanGestureRecognizer *_dismissAddendumGestureRecognizer;
    SBIndirectPanGestureRecognizer *_indirectPresentGestureRecognizer;
    SBIndirectPanGestureRecognizer *_indirectDismissGestureRecognizer;
    SBFluidScrunchGestureRecognizer *_scrunchDismissGestureRecognizer;
    long long _dismissalSlidingMode;
    long long _dismissalTransformMode;
    SBCoverSheetSystemGesturesDelegate *_systemGesturesDelegate;
    CSCoverSheetTransitionSettings *_transitionSettings;
    SBCoverSheetPositionView *_positionView;
    SBHomeGestureSettings *_homeGestureSettings;
    CSLockScreenSettings *_lockScreenSettings;
    long long _presentGestureState;
    UIViewFloatAnimatableProperty *_progressProperty;
    UIViewFloatAnimatableProperty *_catchupProperty;
    long long _groupCount;
    CDUnknownBlockType _completionBlock;
    NSObject<OS_dispatch_group> *_completionGroup;
    double _initialTouchOffsetFromScreenEdge;
    struct CGPoint _lastTouchLocation;
}

@property (nonatomic) BOOL canBePulledDown; // @synthesize canBePulledDown=_canBePulledDown;
@property (nonatomic) BOOL canBePulledUp; // @synthesize canBePulledUp=_canBePulledUp;
@property (strong, nonatomic) UIViewFloatAnimatableProperty *catchupProperty; // @synthesize catchupProperty=_catchupProperty;
@property (copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property (strong, nonatomic) NSObject<OS_dispatch_group> *completionGroup; // @synthesize completionGroup=_completionGroup;
@property (readonly, nonatomic) UIViewController<SBCoverSheetSlidingViewControllerContentViewController> *contentViewController; // @synthesize contentViewController=_contentViewController;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SBCoverSheetSlidingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) SBScreenEdgePanGestureRecognizer *dismissAddendumGestureRecognizer; // @synthesize dismissAddendumGestureRecognizer=_dismissAddendumGestureRecognizer;
@property (strong, nonatomic) SBScreenEdgePanGestureRecognizer *dismissGestureRecognizer; // @synthesize dismissGestureRecognizer=_dismissGestureRecognizer;
@property (nonatomic) long long dismissalSlidingMode; // @synthesize dismissalSlidingMode=_dismissalSlidingMode;
@property (nonatomic) long long dismissalTransformMode; // @synthesize dismissalTransformMode=_dismissalTransformMode;
@property (nonatomic) long long groupCount; // @synthesize groupCount=_groupCount;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) SBHomeGestureSettings *homeGestureSettings; // @synthesize homeGestureSettings=_homeGestureSettings;
@property (strong, nonatomic) SBIndirectPanGestureRecognizer *indirectDismissGestureRecognizer; // @synthesize indirectDismissGestureRecognizer=_indirectDismissGestureRecognizer;
@property (nonatomic) BOOL indirectPresentGestureCalledBegin; // @synthesize indirectPresentGestureCalledBegin=_indirectPresentGestureCalledBegin;
@property (strong, nonatomic) SBIndirectPanGestureRecognizer *indirectPresentGestureRecognizer; // @synthesize indirectPresentGestureRecognizer=_indirectPresentGestureRecognizer;
@property (nonatomic) double initialTouchOffsetFromScreenEdge; // @synthesize initialTouchOffsetFromScreenEdge=_initialTouchOffsetFromScreenEdge;
@property (nonatomic) struct CGPoint lastTouchLocation; // @synthesize lastTouchLocation=_lastTouchLocation;
@property (strong, nonatomic) CSLockScreenSettings *lockScreenSettings; // @synthesize lockScreenSettings=_lockScreenSettings;
@property (nonatomic) BOOL performingCatchUpForPresentation; // @synthesize performingCatchUpForPresentation=_performingCatchUpForPresentation;
@property (strong, nonatomic) SBCoverSheetPositionView *positionView; // @synthesize positionView=_positionView;
@property (nonatomic, setter=_logPresentGestureState:) long long presentGestureState; // @synthesize presentGestureState=_presentGestureState;
@property (strong, nonatomic) UIViewFloatAnimatableProperty *progressProperty; // @synthesize progressProperty=_progressProperty;
@property (nonatomic) BOOL roundsCorners; // @synthesize roundsCorners=_roundsCorners;
@property (strong, nonatomic) SBFluidScrunchGestureRecognizer *scrunchDismissGestureRecognizer; // @synthesize scrunchDismissGestureRecognizer=_scrunchDismissGestureRecognizer;
@property (readonly) Class superclass;
@property (strong, nonatomic) SBCoverSheetSystemGesturesDelegate *systemGesturesDelegate; // @synthesize systemGesturesDelegate=_systemGesturesDelegate;
@property (weak, nonatomic) CSCoverSheetTransitionSettings *transitionSettings; // @synthesize transitionSettings=_transitionSettings;

- (void).cxx_destruct;
- (void)_addSystemGestureRecognizers;
- (struct CGPoint)_adjustedTouchLocationForCurrentDismissalMode:(struct CGPoint)arg1;
- (void)_animationTickForPresentationValue:(BOOL)arg1;
- (struct CGRect)_animationTickedWithProgress:(double)arg1 forPresentationValue:(BOOL)arg2;
- (struct CGPoint)_averageVelocityForGesture:(id)arg1;
- (void)_beginTransitionFromAppeared:(BOOL)arg1;
- (BOOL)_canShowWhileLocked;
- (void)_cancelTransitionForGesture:(id)arg1;
- (void)_createProperties;
- (void)_dismissCoverSheetAnimated:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_dismissGestureBeganWithGestureRecognizer:(id)arg1;
- (void)_dismissGestureChangedWithGestureRecognizer:(id)arg1;
- (void)_endTransitionToAppeared:(BOOL)arg1;
- (struct CGPoint)_finalLocationForTransitionToPresented:(BOOL)arg1;
- (void)_finishTransitionToPresented:(BOOL)arg1 animated:(BOOL)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)_grabberRecognizer;
- (void)_handleDismissGesture:(id)arg1;
- (void)_handleIndirectPresentGesture:(id)arg1;
- (void)_handlePresentGesture:(id)arg1;
- (BOOL)_isPresentingInterstitialForGestureRecognizer:(id)arg1;
- (BOOL)_isTransitioning;
- (struct CGPoint)_locationForGesture:(id)arg1;
- (void)_logDismissGestureState:(long long)arg1 forAddendumGesture:(BOOL)arg2;
- (BOOL)_mathForGestureRecognizerPointsDown:(id)arg1 position:(double *)arg2 velocity:(double *)arg3 instantVelocity:(double *)arg4 averageVelocity:(double *)arg5;
- (void)_positionSubviewsForContentFrame:(struct CGRect)arg1 forPresentationValue:(BOOL)arg2;
- (void)_presentCoverSheetAnimated:(BOOL)arg1 forUserGesture:(BOOL)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_presentGestureBeganWithGestureRecognizer:(id)arg1;
- (void)_presentOrDismissGestureChangedWithGestureRecognizer:(id)arg1;
- (void)_presentOrDismissGestureEndedWithGestureRecognizer:(id)arg1;
- (void)_removeSystemGestureRecognizers;
- (void)_setCornerRounded:(BOOL)arg1;
- (BOOL)_shouldEndPresentedForEndingGestureRecognizer:(id)arg1;
- (BOOL)_shouldRubberBandForGestureRecognizer:(id)arg1;
- (void)_startCatchupAnimationWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_studyLogForCompletionOfTransitionToPresented:(BOOL)arg1;
- (void)_studyLogForGestureRecognizerState:(long long)arg1 bounds:(struct CGRect)arg2 position:(double)arg3 velocity:(double)arg4;
- (void)_transitionToViewControllerAppearState:(int)arg1;
- (void)_transitionToViewControllerAppearState:(int)arg1 forUserGesture:(BOOL)arg2;
- (void)_transitionToViewControllerAppearState:(int)arg1 ifNeeded:(BOOL)arg2 forUserGesture:(BOOL)arg3;
- (void)_updateCoverSheetDismissSettings:(id)arg1;
- (void)_updateForLocation:(struct CGPoint)arg1 interactive:(BOOL)arg2;
- (void)_updateHomeGestureSettings:(id)arg1;
- (struct CGRect)_updatePositionViewForProgress:(double)arg1 forPresentationValue:(BOOL)arg2;
- (struct CGPoint)_velocityForGesture:(id)arg1;
- (id)activeGestureRecognizer;
- (id)coverSheetIdentifier;
- (void)dealloc;
- (id)initWithContentViewController:(id)arg1 canBePulledDown:(BOOL)arg2 canBePulledUp:(BOOL)arg3 dismissalPreemptingGestureRecognizer:(id)arg4;
- (void)invalidate;
- (BOOL)isAnyGestureActivelyRecognized;
- (BOOL)isBottomMostSlider;
- (BOOL)isDismissGestureActive;
- (BOOL)isPresentGestureActive;
- (BOOL)isTransitioning;
- (void)loadView;
- (BOOL)mathForGestureRecognizerPointsDown:(id)arg1;
- (long long)participantState;
- (void)setDismissGesturesEnabled:(BOOL)arg1;
- (void)setPresented:(BOOL)arg1 forUserGesture:(BOOL)arg2 animated:(BOOL)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (BOOL)shouldAutomaticallyForwardRotationMethods;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)wantsFullScreenLayout;

@end
