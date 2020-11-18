//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSSpecifier.h>

@class CTXPCServiceSubscriptionContext, PSConfirmationSpecifier, PSListController, PSListItemsController;

__attribute__((visibility("hidden")))
@interface PSUICellularRATSpecifier : PSSpecifier
{
    PSListController *_hostController;
    PSSpecifier *_mobileDataGroup;
    int _RATSwitchKind;
    BOOL _3GOverrideTo4G;
    BOOL _LTEOverrideTo4G;
    BOOL _supports2G;
    BOOL _supports3G;
    BOOL _supports4G;
    CTXPCServiceSubscriptionContext *_subscriptionContext;
    PSListItemsController *_RATModeDrilldownController;
    PSConfirmationSpecifier *_warning;
}

@property (weak, nonatomic) PSListItemsController *RATModeDrilldownController; // @synthesize RATModeDrilldownController=_RATModeDrilldownController;
@property (strong, nonatomic) CTXPCServiceSubscriptionContext *subscriptionContext; // @synthesize subscriptionContext=_subscriptionContext;
@property (strong, nonatomic) PSConfirmationSpecifier *warning; // @synthesize warning=_warning;

- (void).cxx_destruct;
- (unsigned long long)_getLTEService;
- (void)_setRATModeConfirmed:(int)arg1;
- (void)_setRATModeIgnoreCall:(int)arg1;
- (BOOL)_updateMobileDataGroupContentShowingRAT:(BOOL)arg1;
- (void)acceptedRATSwitch:(id)arg1;
- (void)acceptedRATSwitchDuringCall:(id)arg1;
- (void)canceledRATSwitch:(id)arg1;
- (BOOL)doesMatchMaxRAT:(long long)arg1;
- (id)getLTEService:(id)arg1;
- (id)getRATModeState:(id)arg1;
- (id)getRATSwitchIsOn:(id)arg1;
- (id)initWithName:(id)arg1 identifier:(id)arg2 hostController:(id)arg3 subscriptionContext:(id)arg4 groupSpecifierToUpdateFooterFor:(id)arg5;
- (id)localizableRATModeStringKeyForKey:(id)arg1 targetMode:(int)arg2;
- (void)reloadRATStatus:(id)arg1;
- (void)setLTEService:(id)arg1 specifier:(id)arg2;
- (void)setRATModeState:(id)arg1 specifier:(id)arg2;
- (void)setRATSwitchIsOn:(id)arg1 specifier:(id)arg2;
- (BOOL)shouldShowLTEOptions;
- (BOOL)shouldShowLegacyRATOptions;
- (void)showVoLTECanCauseIssues;
- (BOOL)supportsVoLTE;
- (void)updateRATSpecifiers;
- (void)updateRATState;
- (BOOL)updateState;

@end
