//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBApplicationLaunchNotifyAlertItem.h>

@interface SBApplicationLaunchNotifyAirplaneModeAlertItem : SBApplicationLaunchNotifyAlertItem
{
    BOOL _usesCellNetwork;
}

- (void)_configureForAirplaneModeDataAlertOffCellular:(BOOL)arg1;
- (void)_configureForAirplaneModeDataAlertOnCellular:(BOOL)arg1;
- (void)_sendUserToSettings;
- (void)_turnOffAirplaneMode;
- (void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2;
- (id)initWithApplication:(id)arg1;

@end
