//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

#import <Preferences/RemoteUIControllerDelegate-Protocol.h>

@class ABMonogrammer, AKAppleIDAuthenticationController, NSString, NSTimer, PSSpecifier, RemoteUIController, UIActivityIndicatorView, UIBarButtonItem, UIImageView;

@interface PSAppleIDSplashViewController : PSListController <RemoteUIControllerDelegate>
{
    AKAppleIDAuthenticationController *_authController;
    UIImageView *_silhouetteView;
    UIActivityIndicatorView *_spinner;
    UIBarButtonItem *_spinnerBarItem;
    UIBarButtonItem *_nextButtonBarItem;
    UIBarButtonItem *_cancelButtonBarItem;
    ABMonogrammer *_monogrammer;
    PSSpecifier *_createNewAccountButtonSpecifier;
    PSSpecifier *_signInButtonSpecifier;
    NSString *_username;
    NSString *_password;
    id _textFieldTextDidChangeObserver;
    BOOL _isPasswordDirty;
    BOOL _shouldHideBackButton;
    void *_powerAssertion;
    NSTimer *_idleJiggleTimer;
    RemoteUIController *_remoteUIController;
    CDUnknownBlockType _remoteUICompletion;
    BOOL _isPresentedModally;
    BOOL _shouldShowCreateAppleIDButton;
}

@property (readonly, nonatomic) AKAppleIDAuthenticationController *authenticationController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, setter=setPresentedModally:) BOOL isPresentedModally; // @synthesize isPresentedModally=_isPresentedModally;
@property (nonatomic) BOOL shouldShowCreateAppleIDButton; // @synthesize shouldShowCreateAppleIDButton=_shouldShowCreateAppleIDButton;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_allowSleepAndDimming;
- (void)_beginiCloudCreationFlowWithContinuationData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_cancelButtonWasTapped:(id)arg1;
- (void)_createNewAppleIDButtonWasTapped:(id)arg1;
- (double)_heightForCreateNewAccountFooterWithWidth:(double)arg1;
- (void)_iForgotButtonWasTapped:(id)arg1;
- (void)_idleTimerFired;
- (id)_monogrammer;
- (void)_openWebBasedCredentialRecoveryFlow;
- (id)_passwordForSpecifier:(id)arg1;
- (void)_presentAppleIDPrivacyInformationPane;
- (void)_presentInvalidUsernameAlert;
- (void)_preventSleepAndDimming;
- (BOOL)_runningInMail;
- (void)_setInteractionEnabled:(BOOL)arg1;
- (void)_setPassword:(id)arg1 withSpecifier:(id)arg2;
- (void)_setUsername:(id)arg1 withSpecifier:(id)arg2;
- (BOOL)_shouldShowCancelDone;
- (void)_signInButtonWasTapped:(id)arg1;
- (void)_signInWithUsername:(id)arg1 password:(id)arg2;
- (id)_specifierForGroupWithiForgotLink;
- (id)_specifiersForCreateNewAccount;
- (id)_specifiersForLoginForm;
- (id)_specifiersForSignInButton;
- (void)_textFieldValueDidChange:(id)arg1;
- (void)_updateSignInButton;
- (id)_usernameForSpecifier:(id)arg1;
- (void)createNewAppleIDWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)didFinishAuthWithContext:(id)arg1 results:(id)arg2 error:(id)arg3;
- (void)handleAuthCompletionWithResults:(id)arg1;
- (void)hideBusyUI;
- (void)remoteUIControllerDidDismiss:(id)arg1;
- (void)returnPressedAtEnd;
- (id)serviceDescription;
- (id)serviceIcon;
- (id)serviceName;
- (void)showBusyUI;
- (id)specifiers;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)title;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)willBeginAuthWithContext:(id)arg1;

@end
