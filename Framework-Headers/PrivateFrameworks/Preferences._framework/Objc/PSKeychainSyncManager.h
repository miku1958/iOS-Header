//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Preferences/KeychainSyncViewControllerDelegate-Protocol.h>

@class KeychainSyncAdvancedSecurityCodeController, KeychainSyncDevicePINController, KeychainSyncPhoneNumberController, KeychainSyncSMSVerificationController, NSString, NSTimer, PSKeychainSyncSecurityCodeController, PSRootController, PSSetupController, UIView, UIViewController;

@interface PSKeychainSyncManager : NSObject <KeychainSyncViewControllerDelegate>
{
    BOOL _joiningCircle;
    BOOL _joiningCircleAfterRecovery;
    int _circleNotificationToken;
    int _flow;
    KeychainSyncDevicePINController *_devicePinController;
    PSKeychainSyncSecurityCodeController *_simpleSecurityCodeController;
    PSKeychainSyncSecurityCodeController *_complexSecurityCodeController;
    KeychainSyncAdvancedSecurityCodeController *_advancedSecurityCodeChoiceController;
    PSKeychainSyncSecurityCodeController *_securityCodeRecoveryController;
    KeychainSyncPhoneNumberController *_phoneNumberController;
    KeychainSyncSMSVerificationController *_smsValidationController;
    UIView *_spinningView;
    unsigned int _spinnerCount;
    NSTimer *_credentialExpirationTimer;
    NSTimer *_joinAfterRecoveryTimeoutTimer;
    BOOL _circleWasReset;
    int _stagedSecurityCodeType;
    NSString *_appleIDUsername;
    NSString *_appleIDRawPassword;
    NSString *_appleIDPasswordOrEquivalentToken;
    CDUnknownBlockType _completion;
    CDUnknownBlockType _passwordPromptCompletion;
    CDUnknownBlockType _changeSecurityCodeCompletion;
    CDUnknownBlockType _resetCompletion;
    CDUnknownBlockType _circleJoinCompletion;
    UIViewController *_resetPromptControllerHost;
    UIViewController *_hostViewController;
    PSSetupController *_settingsSetupController;
    PSRootController *_buddyNavigationController;
    NSString *_securityCodeRecoveryAttempt;
    NSString *_stagedSecurityCode;
}

@property (readonly, nonatomic) NSString *appleIDPasswordOrEquivalentToken; // @synthesize appleIDPasswordOrEquivalentToken=_appleIDPasswordOrEquivalentToken;
@property (copy, nonatomic) NSString *appleIDRawPassword; // @synthesize appleIDRawPassword=_appleIDRawPassword;
@property (copy, nonatomic) NSString *appleIDUsername; // @synthesize appleIDUsername=_appleIDUsername;
@property (strong, nonatomic) PSRootController *buddyNavigationController; // @synthesize buddyNavigationController=_buddyNavigationController;
@property (copy, nonatomic) CDUnknownBlockType changeSecurityCodeCompletion; // @synthesize changeSecurityCodeCompletion=_changeSecurityCodeCompletion;
@property (copy, nonatomic) CDUnknownBlockType circleJoinCompletion; // @synthesize circleJoinCompletion=_circleJoinCompletion;
@property (nonatomic) BOOL circleWasReset; // @synthesize circleWasReset=_circleWasReset;
@property (copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) UIViewController *hostViewController; // @synthesize hostViewController=_hostViewController;
@property (copy, nonatomic) CDUnknownBlockType passwordPromptCompletion; // @synthesize passwordPromptCompletion=_passwordPromptCompletion;
@property (copy, nonatomic) CDUnknownBlockType resetCompletion; // @synthesize resetCompletion=_resetCompletion;
@property (strong, nonatomic) UIViewController *resetPromptControllerHost; // @synthesize resetPromptControllerHost=_resetPromptControllerHost;
@property (readonly, nonatomic, getter=isRunningInBuddy) BOOL runningInBuddy;
@property (strong, nonatomic) NSString *securityCodeRecoveryAttempt; // @synthesize securityCodeRecoveryAttempt=_securityCodeRecoveryAttempt;
@property (strong, nonatomic) PSSetupController *settingsSetupController; // @synthesize settingsSetupController=_settingsSetupController;
@property (readonly, nonatomic) NSString *stagedSecurityCode; // @synthesize stagedSecurityCode=_stagedSecurityCode;
@property (readonly, nonatomic) int stagedSecurityCodeType; // @synthesize stagedSecurityCodeType=_stagedSecurityCodeType;
@property (readonly) Class superclass;

+ (void)getStatusWithCompletion:(CDUnknownBlockType)arg1;
+ (id)sharedManager;
- (void).cxx_destruct;
- (void)_autoVetSMSValidationWithToken:(id)arg1;
- (void)_callCompletionWithStatus:(int)arg1 error:(id)arg2;
- (BOOL)_changeSecurityCode:(id)arg1 type:(int)arg2 smsTarget:(id)arg3 smsTargetCountryInfo:(id)arg4 username:(id)arg5 passwordOrEquivalentToken:(id)arg6 error:(id *)arg7;
- (void)_changeToNewSecurityCode:(id)arg1 type:(int)arg2 smsTarget:(id)arg3 smsTargetCountryInfo:(id)arg4;
- (void)_circleJoinAfterRecoveryTimerFired:(id)arg1;
- (void)_cleanup;
- (void)_cleanupAppleIDCredentials;
- (id)_defaultKeychainViewSet;
- (void)_deleteSafariAutoFillPasswords;
- (void)_disableCDPKeychainSyncOverController:(id)arg1 deletingSafariPasswords:(BOOL)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_disableKeychainSyncOverController:(id)arg1 deletingSafariPasswords:(BOOL)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_enableSecureBackupWithPhoneNumber:(id)arg1 countryInfo:(id)arg2;
- (BOOL)_errorRequiresPasswordPrompt:(id)arg1;
- (void)_finishedWithStatus:(int)arg1 error:(id)arg2;
- (void)_peerApprovalFromRecoveryFlow;
- (void)_preSetupCancelledWithCurrentStatus;
- (void)_promptUserToDeleteSafariSavedContentWithCompletion:(CDUnknownBlockType)arg1;
- (void)_recoverWithSecurityCode:(id)arg1 verificationCode:(id)arg2;
- (void)_registerForCircleChangeNotifications;
- (void)_registerForCircleChangeNotificationsWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)_registerUserCredentialsName:(id)arg1 rawPassword:(id)arg2 error:(id *)arg3;
- (BOOL)_resetCircleAndDisableBackupWithError:(id *)arg1;
- (void)_resetFromRecoveryFlow;
- (void)_showGenericFlowErrorAlert;
- (void)_showGenericFlowErrorAlertWithDismissalHandler:(CDUnknownBlockType)arg1;
- (void)_showInvalidPhoneNumberAlertWithDigits:(id)arg1 countryInfo:(id)arg2;
- (void)_showResetFlowOverController:(id)arg1 withEnableBackupText:(BOOL)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_startCircleJoinAfterRecoveryTimer;
- (void)_stopCircleJoinAfterRecoveryTimer;
- (void)dealloc;
- (void)disableKeychainSyncOverController:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)dismissAppleSupportPane:(id)arg1;
- (void)handleCircleChangedNotification;
- (id)init;
- (void)joinCircleAfterRecovery:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)joinCircleAndEnableSecureBackupWithPhoneNumber:(id)arg1 countryInfo:(id)arg2;
- (void)joinCircleWithCompletion:(CDUnknownBlockType)arg1;
- (void)keychainSyncController:(id)arg1 didFinishWithResult:(id)arg2 error:(id)arg3;
- (void)keychainSyncControllerCancel:(id)arg1;
- (void)keychainSyncPhoneNumberController:(id)arg1 didCompleteWithPhoneNumber:(id)arg2 countryInfo:(id)arg3;
- (void)makeSettingsSetupControllerWithSpecifier:(id)arg1 parent:(id)arg2 initialController:(id)arg3;
- (id)navigationController;
- (void)pinChoiceAlertDidChooseToUseDevicePasscode:(BOOL)arg1;
- (id)preferencesApp;
- (void)promptForDevicePasscodeChangeToPasscode:(id)arg1 overController:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)promptForPasswordIfCredentialsNotCachedOverController:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)promptForPasswordIfNeededForWritingOverController:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)promptForPasswordIfNeededOverController:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)promptForPasswordIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (void)promptForPasswordOverController:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)setAppleIDRawPassword:(id)arg1 equivalentToken:(id)arg2;
- (void)setStagedSecurityCode:(id)arg1 type:(int)arg2;
- (void)showAlert:(id)arg1;
- (void)showChangeSecurityCodeFlowWithSpecifier:(id)arg1 overController:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showContactAppleSupportPane;
- (void)showController:(id)arg1;
- (void)showEnableEscrowFlowWithSpecifier:(id)arg1 overController:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showEnableFlowWithNavigationController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showEnableSyncFlowWithSpecifier:(id)arg1 overController:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showNetworkReachabilityError;
- (void)showPinChoiceAlert;
- (void)showRecoveryFlowWithNavigationController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showRecoveryFlowWithSpecifier:(id)arg1 overController:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showResetAcknowledgementIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (void)showResetAndJoinFlowOverController:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)startNavigationSpinnerInViewController:(id)arg1;
- (void)stopNavigationSpinner;
- (id)viewControllerForPresentingAlerts;

@end

