//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKTableViewController.h>

#import <HealthRecordsUI/HKHealthRecordsStoreAccountStateChangeListener-Protocol.h>

@class HKClinicalAccount, HRProfile, NSDate, NSMutableArray, NSString, UIProgressHUD;
@protocol WDClinicalAccountDetailsViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface WDClinicalAccountDetailsViewController : HKTableViewController <HKHealthRecordsStoreAccountStateChangeListener>
{
    NSDate *_activityEarliestDismissalDate;
    UIProgressHUD *_hud;
    BOOL _scopeUpgraded;
    HRProfile *_profile;
    id<WDClinicalAccountDetailsViewControllerDelegate> _delegate;
    NSMutableArray *_sections;
    HKClinicalAccount *_account;
    NSString *_patientIdentifier;
    NSString *_lastUpdate;
    NSString *_status;
}

@property (strong, nonatomic) HKClinicalAccount *account; // @synthesize account=_account;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<WDClinicalAccountDetailsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSString *lastUpdate; // @synthesize lastUpdate=_lastUpdate;
@property (strong, nonatomic) NSString *patientIdentifier; // @synthesize patientIdentifier=_patientIdentifier;
@property (strong, nonatomic) HRProfile *profile; // @synthesize profile=_profile;
@property (nonatomic) BOOL scopeUpgraded; // @synthesize scopeUpgraded=_scopeUpgraded;
@property (strong, nonatomic) NSMutableArray *sections; // @synthesize sections=_sections;
@property (strong, nonatomic) NSString *status; // @synthesize status=_status;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_computeSections;
- (void)_deleteAccount;
- (void)_deleteAccountPromptingForiCloudConfirmationIfNeeded;
- (void)_hideActivityAndDismissUnlessError:(id)arg1;
- (void)_popOrDismissViewController;
- (void)_presentDeleteAccountFromiCloudConfirmation;
- (void)_presentRemoveAccountConfirmation;
- (void)_showActivityInProgressUIWithMessage:(id)arg1;
- (BOOL)_showInternalGatewayDetails;
- (id)accountOwner;
- (void)dealloc;
- (void)dismiss:(id)arg1;
- (void)healthRecordsStore:(id)arg1 accountDidChange:(id)arg2 changeType:(long long)arg3;
- (id)initWithProfile:(id)arg1 account:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end

