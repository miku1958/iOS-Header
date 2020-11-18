//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreCDPUI/CDPUIDeviceToDeviceEncryptionPasscodeValidationDelegate-Protocol.h>

@class AKAppleIDAuthenticationController, CDPUIDeviceToDeviceEncryptionFlowContext, NSString, UINavigationController, UIViewController;
@protocol CDPUIDeviceToDeviceEncryptionHelperDelegate;

@interface CDPUIDeviceToDeviceEncryptionHelper : NSObject <CDPUIDeviceToDeviceEncryptionPasscodeValidationDelegate>
{
    UIViewController *_presentingViewController;
    id<CDPUIDeviceToDeviceEncryptionHelperDelegate> _delegate;
    UINavigationController *_navController;
    AKAppleIDAuthenticationController *_authController;
    CDPUIDeviceToDeviceEncryptionFlowContext *_context;
}

@property (strong, nonatomic) AKAppleIDAuthenticationController *authController; // @synthesize authController=_authController;
@property (strong, nonatomic) CDPUIDeviceToDeviceEncryptionFlowContext *context; // @synthesize context=_context;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CDPUIDeviceToDeviceEncryptionHelperDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UINavigationController *navController; // @synthesize navController=_navController;
@property (readonly, weak, nonatomic) UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_authContextFromContext:(id)arg1;
- (id)_authController;
- (id)_cdpContextForPrimaryAccountWithAuthenticationResults:(id)arg1;
- (id)_cdpStateControllerWithAuthResults:(id)arg1;
- (id)_cdpStateControllerWithContext:(id)arg1;
- (void)_checkEligibilityWithCompletionForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_configurePresentingViewControllerForModalPresentation;
- (void)_createPasscodeWithCompletion:(CDUnknownBlockType)arg1;
- (void)_dismissPresentedViewControllerWithCompletion:(CDUnknownBlockType)arg1;
- (id)_encryptionErrorFromError:(id)arg1;
- (void)_executeSyncOnMainThreadIfNeeded:(CDUnknownBlockType)arg1;
- (BOOL)_hasManatee;
- (BOOL)_hasPasscode;
- (id)_inAppContextFromContext:(id)arg1;
- (void)_isAccount2FAForAltDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)_isInCircle;
- (void)_legacyAskPermissionToContinueFlowWithCompletion:(CDUnknownBlockType)arg1;
- (void)_postBiometricFollowupIfNeeded;
- (void)_preflightDeviceToDeviceEncryptionWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_presentCDPUpgradeSpinnerWithCompletion:(CDUnknownBlockType)arg1;
- (void)_presentIneligibleAlertWithCompletion:(CDUnknownBlockType)arg1;
- (id)_presentingViewController;
- (id)_presentingViewControllerInline;
- (void)_repairCDPWithAuthResults:(id)arg1 cachedSecret:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_setupPresentedViewController;
- (void)_shouldContinueCreationWithCompletion:(CDUnknownBlockType)arg1;
- (void)_showUpgradeMessageWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_spinnerViewController;
- (id)_upgradeUIProvider;
- (void)_validateLocalSecretAndRepairCDPWithAuthResults:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithContext:(id)arg1;
- (id)initWithPresentingViewController:(id)arg1;
- (void)localSecretValidationCanCancelWithViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performDeviceToDeviceEncryptionStateRepairForContext:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)performDeviceToDeviceEncryptionStateRepairWithCompletion:(CDUnknownBlockType)arg1;

@end
