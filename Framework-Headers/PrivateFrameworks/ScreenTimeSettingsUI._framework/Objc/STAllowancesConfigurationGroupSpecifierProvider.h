//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenTimeSettingsUI/STRootGroupSpecifierProvider.h>

#import <ScreenTimeSettingsUI/STAlwaysAllowListControllerDelegate-Protocol.h>
#import <ScreenTimeSettingsUI/STDeviceBedtimeListControllerDelegate-Protocol.h>

@class NSString, PSSpecifier;

__attribute__((visibility("hidden")))
@interface STAllowancesConfigurationGroupSpecifierProvider : STRootGroupSpecifierProvider <STAlwaysAllowListControllerDelegate, STDeviceBedtimeListControllerDelegate>
{
    PSSpecifier *_deviceBedtimeSpecifier;
    PSSpecifier *_appLimitsSpecifier;
    PSSpecifier *_alwaysAllowedSpecifier;
    PSSpecifier *_communicationLimitsSpecifier;
    PSSpecifier *_contentPrivacySpecifier;
}

@property (strong, nonatomic) PSSpecifier *alwaysAllowedSpecifier; // @synthesize alwaysAllowedSpecifier=_alwaysAllowedSpecifier;
@property (strong, nonatomic) PSSpecifier *appLimitsSpecifier; // @synthesize appLimitsSpecifier=_appLimitsSpecifier;
@property (strong, nonatomic) PSSpecifier *communicationLimitsSpecifier; // @synthesize communicationLimitsSpecifier=_communicationLimitsSpecifier;
@property (strong, nonatomic) PSSpecifier *contentPrivacySpecifier; // @synthesize contentPrivacySpecifier=_contentPrivacySpecifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) PSSpecifier *deviceBedtimeSpecifier; // @synthesize deviceBedtimeSpecifier=_deviceBedtimeSpecifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_communicationLimitsDetailText;
- (void)_communicationLimitsDidChangeFrom:(id)arg1 to:(id)arg2;
- (void)_deviceBedtimeDidChange:(id)arg1;
- (void)_hasWatchOSDevicesOnlyDidChange:(BOOL)arg1;
- (void)_isRemoteUserDidChangeFrom:(BOOL)arg1 to:(BOOL)arg2;
- (void)_resetCommunicationLimitsDetailText;
- (void)_showCommunicationLimitsViewController:(id)arg1;
- (id)_subtitleTextForDeviceBedtime:(id)arg1;
- (void)_userTypeDidChange:(unsigned long long)arg1;
- (void)alwaysAllowListController:(id)arg1 didFinishEditingAlwaysAllowList:(id)arg2;
- (id)alwaysAllowedDetailText;
- (id)appLimitsDetailText;
- (void)bedtimeListController:(id)arg1 didFinishEditingBedtime:(id)arg2;
- (id)contentPrivacyDetailText;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setCoordinator:(id)arg1;
- (void)showAlwaysAllowedViewController:(id)arg1;
- (void)showAppLimitsViewController:(id)arg1;
- (void)showContentPrivacyViewController:(id)arg1;
- (BOOL)showDemoModeAlertIfNeeded;
- (void)showDeviceBedtimeViewController:(id)arg1;

@end

