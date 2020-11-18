//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBTransientOverlayViewController.h>

#import <SpringBoard/CCUIModuleAlertViewControllerDelegate-Protocol.h>

@class CCSModulePresentationOptions, CCUIModuleAlertViewController, NSString;
@protocol SBControlCenterModuleTransientOverlayViewControllerDelegate;

@interface SBControlCenterModuleTransientOverlayViewController : SBTransientOverlayViewController <CCUIModuleAlertViewControllerDelegate>
{
    CCUIModuleAlertViewController *_moduleOverlayViewController;
    id<SBControlCenterModuleTransientOverlayViewControllerDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SBControlCenterModuleTransientOverlayViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) CCSModulePresentationOptions *presentationOptions; // @dynamic presentationOptions;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_animateTransitionFromViewController:(id)arg1 toViewController:(id)arg2 containerView:(id)arg3 isAnimated:(BOOL)arg4 otherAnimations:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
- (BOOL)_canShowWhileLocked;
- (void)_dismiss;
- (BOOL)_shouldBlurBackground;
- (void)contentModuleAlertViewControllerNeedsDismissal:(id)arg1;
- (BOOL)handleHomeButtonPress;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithModuleIdentifier:(id)arg1 presentationOptions:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)newTransientOverlayDismissalTransitionCoordinator;
- (id)newTransientOverlayPresentationTransitionCoordinator;
- (long long)preferredLockedGestureDismissalStyle;
- (long long)preferredUnlockedGestureDismissalStyle;
- (BOOL)shouldDisableControlCenter;
- (BOOL)shouldDisableOrientationUpdates;
- (void)viewDidLoad;

@end
