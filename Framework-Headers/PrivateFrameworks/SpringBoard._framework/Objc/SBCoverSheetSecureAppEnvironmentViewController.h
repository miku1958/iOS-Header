//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SpringBoard/CSApplicationHosting-Protocol.h>
#import <SpringBoard/SBCoverSheetSlidingViewControllerContentViewController-Protocol.h>
#import <SpringBoard/SBHomeGestureParticipantDelegate-Protocol.h>
#import <SpringBoard/SBHomeGrabberPointerClickDelegate-Protocol.h>
#import <SpringBoard/SBSecureAppObserver-Protocol.h>

@class NSString, SBDashBoardHostedAppViewController, SBHomeGestureParticipant;
@protocol BSInvalidatable, SBCoverSheetSecureAppEnvironmentViewControllerDelegate;

@interface SBCoverSheetSecureAppEnvironmentViewController : UIViewController <SBHomeGestureParticipantDelegate, SBHomeGrabberPointerClickDelegate, SBSecureAppObserver, CSApplicationHosting, SBCoverSheetSlidingViewControllerContentViewController>
{
    id<BSInvalidatable> _biometricMatchingAssertion;
    unsigned long long _currentOrientationMask;
    SBDashBoardHostedAppViewController *_secureAppViewController;
    id<SBCoverSheetSecureAppEnvironmentViewControllerDelegate> _delegate;
    SBHomeGestureParticipant *_homeGestureParticipant;
}

@property (readonly, nonatomic) BOOL contentOccludesBackground;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SBCoverSheetSecureAppEnvironmentViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) SBHomeGestureParticipant *homeGestureParticipant; // @synthesize homeGestureParticipant=_homeGestureParticipant;
@property (readonly, nonatomic) SBDashBoardHostedAppViewController *secureAppViewController; // @synthesize secureAppViewController=_secureAppViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (id)_currentSecureAppAction;
- (void)_updateSupportedOrientationsMaskForSecureAppAction;
- (BOOL)canHostAnApp;
- (void)conformsToCSApplicationHosting;
- (void)conformsToSBApplicationHosting;
- (void)conformsToSBCoverSheetSlidingViewControllerContentViewController;
- (BOOL)handlesRotationIndependentOfCoverSheet;
- (void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1;
- (void)homeGrabberViewDidReceiveClick:(id)arg1;
- (id)hostedAppSceneHandle;
- (id)hostedAppSceneHandles;
- (void)hostedAppWillRotateToInterfaceOrientation:(long long)arg1;
- (id)initWithSecureAppViewController:(id)arg1;
- (BOOL)isHostingAnApp;
- (void)relinquishHiddenAssertionForHomeGrabber:(id)arg1 animated:(BOOL)arg2;
- (void)relinquishHomeGesture;
- (void)requestHomeGestureOwnership;
- (void)secureAppOfTypeDidBegin:(unsigned long long)arg1;
- (void)secureAppOfTypeDidTakeNewAssertion:(unsigned long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)takeHiddenAssertionForHomeGrabber:(id)arg1 animated:(BOOL)arg2;
- (void)updateHomeGrabberHiddenAssertion:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end

