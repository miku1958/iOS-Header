//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface PSUICellularDataOptionsController : PSListController
{
    NSMutableArray *_ratSpecifiers;
}

- (void).cxx_destruct;
- (id)controllerForSpecifier:(id)arg1;
- (id)getCDMARoamingStatus:(id)arg1;
- (id)getDataRoamingStatus:(id)arg1;
- (id)getEUInternetStatus:(id)arg1;
- (id)init;
- (void)roamingOptionsDidChange;
- (id)roamingSettingsDescription:(id)arg1;
- (id)roamingSpecifiers;
- (void)setCDMARoamingEnabled:(id)arg1 specifier:(id)arg2;
- (void)setDataRoamingEnabled:(id)arg1 specifier:(id)arg2;
- (void)setEUInternetCancelled:(id)arg1;
- (void)setEUInternetEnabled:(id)arg1 specifier:(id)arg2;
- (void)setEUInternetEnabledConfirmed:(id)arg1;
- (id)specifiers;
- (void)viewDidAppear:(BOOL)arg1;

@end
