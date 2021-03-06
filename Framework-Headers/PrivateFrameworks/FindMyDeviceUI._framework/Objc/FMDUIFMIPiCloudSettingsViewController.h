//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

@class ACAccount, NSObject, PSSpecifier, UIProgressHUD;
@protocol SPSettingsConfigurating;

@interface FMDUIFMIPiCloudSettingsViewController : PSListController
{
    BOOL _firstTimeSetup;
    BOOL _togglingFMIPSwitch;
    BOOL _activityInProgress;
    BOOL _offlineFindingEnabled;
    BOOL _offlineFindingDisabledDueToNotHSA2;
    ACAccount *_account;
    PSSpecifier *_fmipSpecifier;
    PSSpecifier *_sendLastLocationSpecifier;
    UIProgressHUD *_hud;
    NSObject<SPSettingsConfigurating> *_spSession;
}

@property (strong, nonatomic) ACAccount *account; // @synthesize account=_account;
@property (nonatomic) BOOL activityInProgress; // @synthesize activityInProgress=_activityInProgress;
@property (nonatomic) BOOL firstTimeSetup; // @synthesize firstTimeSetup=_firstTimeSetup;
@property (strong, nonatomic) PSSpecifier *fmipSpecifier; // @synthesize fmipSpecifier=_fmipSpecifier;
@property (strong, nonatomic) UIProgressHUD *hud; // @synthesize hud=_hud;
@property (nonatomic) BOOL offlineFindingDisabledDueToNotHSA2; // @synthesize offlineFindingDisabledDueToNotHSA2=_offlineFindingDisabledDueToNotHSA2;
@property (nonatomic) BOOL offlineFindingEnabled; // @synthesize offlineFindingEnabled=_offlineFindingEnabled;
@property (strong, nonatomic) PSSpecifier *sendLastLocationSpecifier; // @synthesize sendLastLocationSpecifier=_sendLastLocationSpecifier;
@property (strong, nonatomic) NSObject<SPSettingsConfigurating> *spSession; // @synthesize spSession=_spSession;
@property (nonatomic) BOOL togglingFMIPSwitch; // @synthesize togglingFMIPSwitch=_togglingFMIPSwitch;

- (void).cxx_destruct;
- (BOOL)FMWLANEnabled;
- (id)_clientInfoHeader;
- (void)_disableFMIP;
- (void)_enableFMIP;
- (void)_fmipSettingsCacheDidUpdate:(id)arg1;
- (id)_fmipSwitchOnForSpecifier:(id)arg1;
- (id)_groupSpecifierForFMIP;
- (id)_groupSpecifierForOfflineFinding;
- (id)_groupSpecifierForSendLastLocation;
- (void)_loadSearchPartyConfiguration;
- (id)_offlineFindingSwitchOnForSpecifier:(id)arg1;
- (void)_reloadSpecifiersOnMainQueue;
- (id)_sendLastLocationSwitchOnForSpecifier:(id)arg1;
- (void)_setFMIPSwitchOn:(id)arg1 forSpecifier:(id)arg2;
- (void)_setOfflineFindingSwitchOn:(id)arg1 forSpecifier:(id)arg2;
- (void)_setSendLastLocationSwitchOn:(id)arg1 forSpecifier:(id)arg2;
- (void)_showFMIPPrivacyPage;
- (void)_showOfflineFindingAlertWhenTurningOff;
- (void)_showOfflineFindingLearnMorePage;
- (id)_specifierForFMIP;
- (id)_specifierForOfflineFinding;
- (id)_specifierForSendLastLocation;
- (id)_userAgentHeader;
- (void)hideActivityInProgressUI;
- (void)hideActivityInProgressUIWithDelay:(double)arg1;
- (id)init;
- (BOOL)isShowingActivityInProgressUI;
- (void)presentHSA2UpgradeForOfflineFinding;
- (void)setSearchPartyConfigurationActive:(BOOL)arg1;
- (void)showActivityInProgressUIWithMessage:(id)arg1;
- (void)showHSA2UpgradeAlert;
- (id)specifiers;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end

