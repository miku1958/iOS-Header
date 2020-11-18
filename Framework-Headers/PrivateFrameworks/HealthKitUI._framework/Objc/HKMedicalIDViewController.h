//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <HealthKitUI/HKEmergencyCardDeletionDelegate-Protocol.h>
#import <HealthKitUI/HKEmergencyCardRowHeightChangeDelegate-Protocol.h>
#import <HealthKitUI/HKMedicalIDViewControllerDelegate-Protocol.h>
#import <HealthKitUI/UINavigationControllerDelegate-Protocol.h>
#import <HealthKitUI/UITableViewDataSource-Protocol.h>
#import <HealthKitUI/UITableViewDelegate-Protocol.h>

@class HKEmergencyCardContactsTableItem, HKEmergencyCardGroupTableItem, HKHealthStore, NSArray, NSString, _HKMedicalIDData;
@protocol HKMedicalIDViewControllerDelegate;

@interface HKMedicalIDViewController : UITableViewController <UITableViewDataSource, UITableViewDelegate, UINavigationControllerDelegate, HKMedicalIDViewControllerDelegate, HKEmergencyCardDeletionDelegate, HKEmergencyCardRowHeightChangeDelegate>
{
    NSArray *_tableItems;
    NSArray *_presentableTableItems;
    NSArray *_footers;
    HKEmergencyCardGroupTableItem *_groupItem;
    HKEmergencyCardContactsTableItem *_contactsItem;
    BOOL _inEditMode;
    NSArray *_localeItems;
    BOOL _allowsEditing;
    BOOL _showsDismissButton;
    BOOL _showsDeleteButton;
    _HKMedicalIDData *_medicalID;
    HKHealthStore *_healthStore;
    id<HKMedicalIDViewControllerDelegate> _delegate;
}

@property (nonatomic) BOOL allowsEditing; // @synthesize allowsEditing=_allowsEditing;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HKMedicalIDViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
@property (strong, nonatomic) _HKMedicalIDData *medicalID; // @synthesize medicalID=_medicalID;
@property (nonatomic) BOOL showsDeleteButton; // @synthesize showsDeleteButton=_showsDeleteButton;
@property (nonatomic) BOOL showsDismissButton; // @synthesize showsDismissButton=_showsDismissButton;
@property (readonly) Class superclass;

+ (BOOL)isSupportedOnThisDevice;
- (void).cxx_destruct;
- (void)_buildPresentableTableItems;
- (void)_buildTableItems;
- (void)_cancelEditingTapped:(id)arg1;
- (void)_contactStoreDidChange:(id)arg1;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_doneEditingTapped:(id)arg1;
- (void)_doneTapped:(id)arg1;
- (void)_editTapped:(id)arg1;
- (id)_fetchMedicalIDDataSynchronously:(BOOL *)arg1;
- (id)_newViewForFooterInSection:(long long)arg1;
- (void)_refreshEmergencyContactsAndReload:(BOOL)arg1;
- (void)dealloc;
- (void)deletionTableItemDidTapDelete:(id)arg1;
- (id)initInEditMode:(BOOL)arg1;
- (void)localeDidChange:(id)arg1;
- (void)medicalIDViewControllerDidCancel:(id)arg1;
- (void)medicalIDViewControllerDidDelete:(id)arg1;
- (void)medicalIDViewControllerDidSave:(id)arg1;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)preferredStatusBarStyle;
- (unsigned long long)supportedInterfaceOrientations;
- (void)tableItem:(id)arg1 heightDidChangeForRowIndex:(long long)arg2 keepRectVisible:(struct CGRect)arg3 inView:(id)arg4;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end
