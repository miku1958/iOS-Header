//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKTableViewController.h>

#import <HealthUI/HKDocumentPickerViewControllerDelegate-Protocol.h>
#import <HealthUI/HKSourceAuthorizationControllerDelegate-Protocol.h>
#import <HealthUI/HKSwitchTableViewCellDelegate-Protocol.h>

@class HKDisplayCategoryController, HKHealthStore, HKSource, HKSourceAuthorizationController, NSArray, NSSet, NSString, UIBarButtonItem;
@protocol HKAuthorizationSettingsViewControllerDelegate;

@interface HKAuthorizationSettingsViewController : HKTableViewController <HKSwitchTableViewCellDelegate, HKDocumentPickerViewControllerDelegate, HKSourceAuthorizationControllerDelegate>
{
    NSArray *_documents;
    NSArray *_actualSections;
    NSArray *_readingTypeOrdering;
    id<HKAuthorizationSettingsViewControllerDelegate> _delegate;
    HKHealthStore *_healthStore;
    HKSource *_source;
    long long _style;
    NSString *_updateDescription;
    NSString *_shareDescription;
    NSString *_researchStudyUsageDescription;
    NSSet *_typesToShare;
    NSSet *_typesToRead;
    HKDisplayCategoryController *_displayCategoryController;
    HKSourceAuthorizationController *_sourceAuthorizationController;
    UIBarButtonItem *_cancelButtonItem;
    UIBarButtonItem *_doneButtonItem;
}

@property (strong) NSArray *actualSections; // @synthesize actualSections=_actualSections;
@property (strong, nonatomic) UIBarButtonItem *cancelButtonItem; // @synthesize cancelButtonItem=_cancelButtonItem;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HKAuthorizationSettingsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) HKDisplayCategoryController *displayCategoryController; // @synthesize displayCategoryController=_displayCategoryController;
@property (strong, nonatomic) UIBarButtonItem *doneButtonItem; // @synthesize doneButtonItem=_doneButtonItem;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
@property (readonly) BOOL isPrompting;
@property (copy, nonatomic) NSString *researchStudyUsageDescription; // @synthesize researchStudyUsageDescription=_researchStudyUsageDescription;
@property (copy, nonatomic) NSString *shareDescription; // @synthesize shareDescription=_shareDescription;
@property (strong, nonatomic) HKSource *source; // @synthesize source=_source;
@property (strong, nonatomic) HKSourceAuthorizationController *sourceAuthorizationController; // @synthesize sourceAuthorizationController=_sourceAuthorizationController;
@property (readonly, nonatomic) long long style; // @synthesize style=_style;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSSet *typesToRead; // @synthesize typesToRead=_typesToRead;
@property (strong, nonatomic) NSSet *typesToShare; // @synthesize typesToShare=_typesToShare;
@property (copy, nonatomic) NSString *updateDescription; // @synthesize updateDescription=_updateDescription;

- (void).cxx_destruct;
- (void)_addCancelAndDoneButtons;
- (void)_addHeaderView;
- (id)_authorizationSettingCellForRowAtIndexPath:(id)arg1;
- (void)_configurationFailedWithError:(id)arg1;
- (void)_done:(id)arg1;
- (void)_finishWithError:(id)arg1;
- (BOOL)_isTypeEnabledAtIndexPath:(id)arg1;
- (id)_localizedNameForSection:(long long)arg1 type:(id)arg2;
- (id)_openAppCell;
- (BOOL)_shouldDisplayHealthRecordsRequests;
- (BOOL)_shouldDisplayReadingSection;
- (BOOL)_shouldDisplaySharingSection;
- (id)_specialCellWithIdentifier:(id)arg1;
- (id)_toggleAllCell;
- (id)_typeForIndexPath:(id)arg1 section:(long long *)arg2;
- (void)authorizationController:(id)arg1 parentTypeIsDisabled:(id)arg2 forType:(id)arg3 inSection:(long long)arg4;
- (void)authorizationController:(id)arg1 subTypesEnabled:(id)arg2 forType:(id)arg3 inSection:(long long)arg4;
- (long long)authorizationSectionForSection:(long long)arg1;
- (void)documentPickerViewControllerDidFinish:(id)arg1 error:(id)arg2;
- (id)init;
- (id)initWithHealthStore:(id)arg1 style:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reloadAuthorizationSettings;
- (id)sectionsForAuthController:(id)arg1;
- (void)switchCellValueChanged:(id)arg1 value:(BOOL)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)updateAllowButtonEnabledState;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end
