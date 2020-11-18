//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <HealthKitUI/HKSwitchTableViewCellDelegate-Protocol.h>

@class HKDataCategoryController, HKHealthStore, HKSource, HKSourceAuthorizationController, NSSet, NSString, UIBarButtonItem;
@protocol HKAuthorizationSettingsViewControllerDelegate;

@interface HKAuthorizationSettingsViewController : UITableViewController <HKSwitchTableViewCellDelegate>
{
    id<HKAuthorizationSettingsViewControllerDelegate> _delegate;
    HKHealthStore *_healthStore;
    long long _style;
    NSString *_updateDescription;
    NSString *_shareDescription;
    NSSet *_typesToShare;
    NSSet *_typesToRead;
    HKSource *_source;
    HKDataCategoryController *_dataCategoryController;
    HKSourceAuthorizationController *_sourceAuthorizationController;
    UIBarButtonItem *_cancelButtonItem;
    UIBarButtonItem *_doneButtonItem;
}

@property (strong, nonatomic) UIBarButtonItem *cancelButtonItem; // @synthesize cancelButtonItem=_cancelButtonItem;
@property (strong, nonatomic) HKDataCategoryController *dataCategoryController; // @synthesize dataCategoryController=_dataCategoryController;
@property (weak, nonatomic) id<HKAuthorizationSettingsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) UIBarButtonItem *doneButtonItem; // @synthesize doneButtonItem=_doneButtonItem;
@property (readonly, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
@property (copy, nonatomic) NSString *shareDescription; // @synthesize shareDescription=_shareDescription;
@property (strong, nonatomic) HKSource *source; // @synthesize source=_source;
@property (strong, nonatomic) HKSourceAuthorizationController *sourceAuthorizationController; // @synthesize sourceAuthorizationController=_sourceAuthorizationController;
@property (readonly, nonatomic) long long style; // @synthesize style=_style;
@property (strong, nonatomic) NSSet *typesToRead; // @synthesize typesToRead=_typesToRead;
@property (strong, nonatomic) NSSet *typesToShare; // @synthesize typesToShare=_typesToShare;
@property (copy, nonatomic) NSString *updateDescription; // @synthesize updateDescription=_updateDescription;

- (void).cxx_destruct;
- (void)_addCancelAndDoneButtons;
- (void)_addHeaderView;
- (long long)_authorizationSectionForSection:(long long)arg1;
- (id)_authorizationSettingCellForRowAtIndexPath:(id)arg1;
- (void)_configurationFailedWithError:(id)arg1;
- (void)_done:(id)arg1;
- (void)_finishWithError:(id)arg1;
- (BOOL)_isPrompting;
- (BOOL)_isTypeEnabledAtIndexPath:(id)arg1;
- (BOOL)_shouldDisplayReadingSection;
- (BOOL)_shouldDisplaySharingSection;
- (id)_typeForIndexPath:(id)arg1 section:(long long *)arg2;
- (id)init;
- (id)initWithHealthStore:(id)arg1 style:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reloadAuthorizationSettings;
- (void)switchCellValueChanged:(id)arg1 value:(BOOL)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)updateAllowButtonEnabledState;
- (void)viewDidLoad;

@end

