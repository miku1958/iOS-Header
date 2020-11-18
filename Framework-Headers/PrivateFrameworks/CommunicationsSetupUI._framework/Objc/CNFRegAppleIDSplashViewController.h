//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSAppleIDSplashViewController.h>

@class CNFRegController;

@interface CNFRegAppleIDSplashViewController : PSAppleIDSplashViewController
{
    BOOL _showBusyUIOnAppearance;
    CNFRegController *_regController;
    long long _serviceType;
}

@property (strong) CNFRegController *regController; // @synthesize regController=_regController;
@property long long serviceType; // @synthesize serviceType=_serviceType;
@property BOOL showBusyUIOnAppearance; // @synthesize showBusyUIOnAppearance=_showBusyUIOnAppearance;

+ (id)_inProgressRegisteringNonPhoneAccountForService:(id)arg1;
+ (BOOL)shouldShowSplashViewForService:(id)arg1 inProgressRegisteringNonPhoneAccount:(id *)arg2;
- (void).cxx_destruct;
- (void)_applicationDidResume:(id)arg1;
- (void)_cnfSignInWithUsername:(id)arg1 password:(id)arg2;
- (void)_completeIfAccountIsAlreadyRegistered;
- (void)_handleRegistarResults:(BOOL)arg1 alertController:(id)arg2;
- (id)_iCloudUserName;
- (id)_imService;
- (void)_showSettingsController;
- (void)continueRegisteringAccount:(id)arg1;
- (void)dealloc;
- (void)handleAuthCompletionWithResults:(id)arg1;
- (id)serviceDescription;
- (id)serviceIcon;
- (id)serviceName;
- (void)setSpecifier:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end

