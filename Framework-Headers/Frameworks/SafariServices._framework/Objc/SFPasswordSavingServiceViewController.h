//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariServices/SFPasswordServiceViewController.h>

#import <SafariServices/SFPasswordSavingServiceViewControllerProtocol-Protocol.h>
#import <SafariServices/_ASAccountAuthenticationModificationExtensionManagerObserver-Protocol.h>
#import <SafariServices/_ASAccountAuthenticationModificationHostViewControllerDelegate-Protocol.h>

@class NSArray, NSExtension, NSString, NSURLCredential, UIAlertController, WBSAutoFillQuirksManager, WBSPasswordWarning, WBSSavedPasswordStore, _ASAccountAuthenticationModificationHostViewController;

__attribute__((visibility("hidden")))
@interface SFPasswordSavingServiceViewController : SFPasswordServiceViewController <_ASAccountAuthenticationModificationExtensionManagerObserver, _ASAccountAuthenticationModificationHostViewControllerDelegate, SFPasswordSavingServiceViewControllerProtocol>
{
    long long _action;
    NSArray *_protectionSpacesToUpdate;
    NSString *_domainForSavePasswordAction;
    NSURLCredential *_credential;
    NSString *_tokenForShowingPrompt;
    UIAlertController *_prompt;
    WBSAutoFillQuirksManager *_autoFillQuirksManager;
    WBSPasswordWarning *_passwordWarning;
    NSExtension *_accountModificationExtension;
    _ASAccountAuthenticationModificationHostViewController *_accountModificationHostViewController;
    WBSSavedPasswordStore *_savedPasswordStore;
    BOOL _supportsUpgradeToStrongPassword;
    BOOL _supportsUpgradeToSignInWithApple;
    BOOL _passwordIsWeakEnoughForActiveWarning;
    BOOL _passwordHasLikelyBeenCompromised;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_exportedInterface;
- (void).cxx_destruct;
- (void)_addChangePasswordOnWebsiteActionToPrompt;
- (void)_addChangeToStrongPasswordActionToPrompt;
- (void)_addUpgradeToSignInWithAppleActionToPrompt;
- (void)_checkIfWarningStoreAlreadyContainsCredentialWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_configureSecurityPromptActionsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_dismiss;
- (void)_initiateChangeToStrongPassword;
- (void)_initiateUpgradeToSignInWithApple;
- (id)_messageStringForAccountModificationPrompt;
- (void)_openPasswordManagerToChangePasswordOnWebsite;
- (void)_removeCredential:(id)arg1;
- (void)_saveCredential:(id)arg1;
- (void)_showAccountModificationPrompt;
- (id)_titleStringForAccountModificationPrompt;
- (void)_updateCredential:(id)arg1;
- (void)credentialsSubmittedForWebsiteURL:(id)arg1 user:(id)arg2 password:(id)arg3 passwordIsAutoGenerated:(BOOL)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)showPromptWithToken:(id)arg1 style:(long long)arg2;

@end

