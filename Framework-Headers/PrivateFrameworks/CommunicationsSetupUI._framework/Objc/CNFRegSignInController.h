//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CommunicationsSetupUI/CNFRegFirstRunController.h>

#import <CommunicationsSetupUI/CNFRegCreateAccountControllerDelegate-Protocol.h>

@class CNFRegLearnMoreButton, NSString, PSSpecifier;

@interface CNFRegSignInController : CNFRegFirstRunController <CNFRegCreateAccountControllerDelegate>
{
    PSSpecifier *_usernameSpecifier;
    PSSpecifier *_passwordSpecifier;
    PSSpecifier *_actionGroupSpecifier;
    PSSpecifier *_signInButtonSpecifier;
    PSSpecifier *_createAccountButtonSpecifier;
    NSString *_pendingUsername;
    NSString *_pendingPassword;
    unsigned long long _signinFailureCount;
    CNFRegLearnMoreButton *_learnMoreButton;
    BOOL _hideLearnMoreButton;
    BOOL _useSystemAccount;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL hideLearnMoreButton; // @synthesize hideLearnMoreButton=_hideLearnMoreButton;
@property (copy, nonatomic) NSString *pendingPassword; // @synthesize pendingPassword=_pendingPassword;
@property (copy, nonatomic) NSString *pendingUsername; // @synthesize pendingUsername=_pendingUsername;
@property (nonatomic) unsigned long long signinFailureCount; // @synthesize signinFailureCount=_signinFailureCount;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)__userTappedTextField;
- (void)_buildCreateAccountButtonSpecifierCache:(id)arg1;
- (void)_buildCredentialSpecifierCache:(id)arg1;
- (void)_buildSignInGroupSpecifierCache:(id)arg1;
- (void)_buildSpecifierCache:(id)arg1;
- (void)_finishSignInWithAccount:(id)arg1 animated:(BOOL)arg2;
- (void)_handleTimeout;
- (void)_incrementSigninFailureCount;
- (void)_launchForgotPasswordUrl;
- (void)_layoutLearnMoreButton;
- (void)_loadRegionsIfNecessary;
- (void)_resetSigninFailureCount;
- (void)_resignFirstResponders;
- (void)_returnKeyPressed;
- (id)_rightButtonItem;
- (void)_setFieldsEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setupAppearBlockForAccountAuthorizeWithAuthID:(id)arg1 token:(id)arg2;
- (void)_setupAppearBlockForNewPasswordWithAppleID:(id)arg1;
- (void)_setupEventHandlers;
- (void)_showAccountNotAuthorizedSheetWithAuthID:(id)arg1 token:(id)arg2;
- (void)_showNewPasswordNeededSheetWithAppleID:(id)arg1;
- (void)_showRegistrationFailureWithError:(id)arg1;
- (void)_showSigninFailureAlert;
- (void)_startTimeout;
- (void)_updateControllerState;
- (void)_updateUI;
- (void)applicationDidResume;
- (id)bundle;
- (void)cancelButtonTapped;
- (void)createAccountControllerDidFinish:(id)arg1 withAppleId:(id)arg2 authID:(id)arg3 authToken:(id)arg4;
- (void)dealloc;
- (void)forgotIDButtonTapped;
- (id)getPasswordForSpecifier:(id)arg1;
- (id)getUserNameForSpecifier:(id)arg1;
- (void)handleURL:(id)arg1;
- (void)learnMorePressed:(id)arg1;
- (void)loadView;
- (id)logName;
- (void)passwordFieldDidBeginEditing:(id)arg1;
- (void)passwordFieldEmptyStateChanged:(id)arg1 forSpecifier:(id)arg2;
- (BOOL)passwordIsEmpty;
- (id)passwordTextField;
- (void)setCreateAccountButtonEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setPasswordEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setPasswordText:(id)arg1;
- (void)setSignInButtonEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSpecifier:(id)arg1;
- (void)setUsernameEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setUsernameText:(id)arg1;
- (void)showCreateAccountController;
- (void)signInTapped:(id)arg1;
- (void)signInWithUsername:(id)arg1 password:(id)arg2;
- (id)specifierList;
- (void)systemApplicationDidEnterBackground;
- (void)systemApplicationWillEnterForeground;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)usernameFieldDidBeginEditing:(id)arg1;
- (void)usernameFieldEmptyStateChanged:(id)arg1 forSpecifier:(id)arg2;
- (BOOL)usernameIsEmpty;
- (id)usernameTextField;
- (id)validationString;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end

