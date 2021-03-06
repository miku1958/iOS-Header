//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenTimeSettingsUI/STPINListViewController.h>

#import <ScreenTimeSettingsUI/STAllowanceDetailListControllerDelegate-Protocol.h>

@class NSArray, NSDictionary, NSObject, NSString, PSSpecifier;
@protocol STRootViewModelCoordinator;

__attribute__((visibility("hidden")))
@interface STAllowanceListController : STPINListViewController <STAllowanceDetailListControllerDelegate>
{
    BOOL _shouldShowConfirmDeletionAlert;
    NSObject<STRootViewModelCoordinator> *_coordinator;
    PSSpecifier *_informativeTextGroupSpecifier;
    NSArray *_allowanceSpecifiers;
    PSSpecifier *_enableAllAllowancesSpecifier;
    NSDictionary *_allowanceSpecifiersByBundleIdentifier;
}

@property (copy) NSArray *allowanceSpecifiers; // @synthesize allowanceSpecifiers=_allowanceSpecifiers;
@property (copy) NSDictionary *allowanceSpecifiersByBundleIdentifier; // @synthesize allowanceSpecifiersByBundleIdentifier=_allowanceSpecifiersByBundleIdentifier;
@property (strong, nonatomic) NSObject<STRootViewModelCoordinator> *coordinator; // @synthesize coordinator=_coordinator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong) PSSpecifier *enableAllAllowancesSpecifier; // @synthesize enableAllAllowancesSpecifier=_enableAllAllowancesSpecifier;
@property (readonly) unsigned long long hash;
@property (strong) PSSpecifier *informativeTextGroupSpecifier; // @synthesize informativeTextGroupSpecifier=_informativeTextGroupSpecifier;
@property BOOL shouldShowConfirmDeletionAlert; // @synthesize shouldShowConfirmDeletionAlert=_shouldShowConfirmDeletionAlert;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_adjustCellHeightForAllowanceSpecifier:(id)arg1;
- (id)_allAllowancesEnabled:(id)arg1;
- (void)_allowancesDidChange;
- (void)_devicesDidChange:(id)arg1 coordinator:(id)arg2;
- (void)_didFetchAppInfo:(id)arg1;
- (void)_hasWatchOSDevicesDidChange:(BOOL)arg1 coordinator:(id)arg2;
- (id)_informativeTextWithDevices:(id)arg1 hasWatchOSDevices:(BOOL)arg2;
- (void)_reloadInformativeTextGroupSpecifierIfNeeded:(id)arg1;
- (void)_setAllAllowancesEnabled:(id)arg1 specifier:(id)arg2;
- (void)_showAllowanceDetailController:(id)arg1;
- (void)_showConfirmDeletionView:(id)arg1;
- (id)_specifierForAllowance:(id)arg1;
- (id)_subtitleTextForAllowance:(id)arg1;
- (void)addAllowance:(id)arg1;
- (void)allowanceDetailController:(id)arg1 didDeleteAllowance:(id)arg2;
- (void)allowanceDetailController:(id)arg1 didSaveAllowance:(id)arg2;
- (BOOL)canBeShownFromSuspendedState;
- (void)confirmDeletion:(id)arg1;
- (void)dealloc;
- (void)deleteAllowance:(id)arg1;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)showStoreDemoAlert;
- (id)specifiers;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)viewWillAppear:(BOOL)arg1;

@end

