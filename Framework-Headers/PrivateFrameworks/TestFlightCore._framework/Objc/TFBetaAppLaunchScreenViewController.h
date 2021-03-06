//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <TestFlightCore/TFBetaAppLaunchPresenterView-Protocol.h>
#import <TestFlightCore/TFHostedBetaAppLaunchScreenView-Protocol.h>

@class NSString, TFBetaAppLaunchPresenter, TFBetaAppLaunchScreenView, UIBarButtonItem;
@protocol TFBetaAppLaunchScreenHost;

__attribute__((visibility("hidden")))
@interface TFBetaAppLaunchScreenViewController : UIViewController <TFBetaAppLaunchPresenterView, TFHostedBetaAppLaunchScreenView>
{
    id<TFBetaAppLaunchScreenHost> _launchScreenHost;
    TFBetaAppLaunchPresenter *_presenter;
    TFBetaAppLaunchScreenView *_launchScreenView;
    UIBarButtonItem *_cancelBarButtonItem;
}

@property (readonly, nonatomic) UIBarButtonItem *cancelBarButtonItem; // @synthesize cancelBarButtonItem=_cancelBarButtonItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) id<TFBetaAppLaunchScreenHost> launchScreenHost; // @synthesize launchScreenHost=_launchScreenHost;
@property (strong, nonatomic) TFBetaAppLaunchScreenView *launchScreenView; // @synthesize launchScreenView=_launchScreenView;
@property (readonly, nonatomic) TFBetaAppLaunchPresenter *presenter; // @synthesize presenter=_presenter;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_animateLaunchScreenViewWithUpdateBlock:(CDUnknownBlockType)arg1 transition:(id)arg2;
- (long long)_currentInterfaceOrientation;
- (void)_didPressExitLaunchScreenButton;
- (void)_didPressNavigationItemCancel;
- (void)_didPressOpenHowToSupportLinkButton;
- (void)_didPressShowHowToButton;
- (id)_fadeTransition;
- (id)_pushTransition;
- (SEL)_selectorForPresentorViewEvent:(unsigned long long)arg1;
- (void)_updateForContainmentInHostEnvironment:(id)arg1;
- (void)_updateNavigationBarForHostTraitCollection:(id)arg1;
- (void)dismissAnimated:(BOOL)arg1;
- (id)initWithPresenter:(id)arg1;
- (void)launchScreenHost:(id)arg1 traitCollectionDidChange:(id)arg2;
- (void)loadView;
- (void)showHowToWithTitle:(id)arg1 subtitle:(id)arg2 imageIdentifier:(id)arg3 primaryButtonTitle:(id)arg4 primaryButtonEvent:(unsigned long long)arg5 secondaryButtonTitle:(id)arg6 secondaryButtonEvent:(unsigned long long)arg7 animated:(BOOL)arg8;
- (void)showLoadingAnimated:(BOOL)arg1;
- (void)showTestNotesWithTitle:(id)arg1 lockup:(id)arg2 testNotesTitle:(id)arg3 testNotesText:(id)arg4 primaryButtonTitle:(id)arg5 primaryButtonEvent:(unsigned long long)arg6 animated:(BOOL)arg7 fetchingOnImageFetcher:(id)arg8;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

@end

