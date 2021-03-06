//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <HealthUI/HKEmergencyCardContactUpdateDelegate-Protocol.h>
#import <HealthUI/HKEmergencyCardDeletionDelegate-Protocol.h>
#import <HealthUI/HKEmergencyCardPrimaryLanguageUpdateDelegate-Protocol.h>
#import <HealthUI/HKEmergencyCardRowHeightChangeDelegate-Protocol.h>
#import <HealthUI/HKEmergencyCardSelectionTableItemDelegate-Protocol.h>
#import <HealthUI/HKMedicalIDViewControllerDelegate-Protocol.h>
#import <HealthUI/UITableViewDataSource-Protocol.h>
#import <HealthUI/UITableViewDelegate-Protocol.h>

@class HKEmergencyCardContactsTableItem, HKEmergencyCardGroupTableItem, HKEmergencyCardNameAndPictureTableItem, HKEmergencyCardPrimaryLanguageTableItem, HKHealthStore, HKMedicalIDNavigationController, HKMedicalIDStore, HKProfileStore, NSArray, NSString, _HKMedicalIDData;
@protocol HKMedicalIDViewControllerDelegate;

@interface HKMedicalIDViewController : UITableViewController <UITableViewDataSource, UITableViewDelegate, HKMedicalIDViewControllerDelegate, HKEmergencyCardDeletionDelegate, HKEmergencyCardRowHeightChangeDelegate, HKEmergencyCardContactUpdateDelegate, HKEmergencyCardPrimaryLanguageUpdateDelegate, HKEmergencyCardSelectionTableItemDelegate>
{
    HKProfileStore *_profileStore;
    NSArray *_presentableTableItems;
    NSArray *_footers;
    NSArray *_headers;
    HKEmergencyCardGroupTableItem *_informationDataGroupItem;
    HKEmergencyCardNameAndPictureTableItem *_nameAndPictureItem;
    HKEmergencyCardContactsTableItem *_contactsItem;
    HKEmergencyCardPrimaryLanguageTableItem *_primaryLanguageItem;
    long long _tableViewStyle;
    BOOL _inBuddy;
    BOOL _inBridge;
    NSArray *_localeItems;
    NSArray *_accumulatedNumberOfRowsForItems;
    int _medicalIDChangedToken;
    HKMedicalIDNavigationController *_medicalIDEditor;
    NSArray *_organDonationItems;
    BOOL _organDonationSignupAvailable;
    BOOL _allowsEditing;
    BOOL _showsDismissButton;
    BOOL _showsDeleteButton;
    BOOL _modernAppearance;
    BOOL _shouldShowHints;
    BOOL _showsShowWhenLockedState;
    BOOL _showsEmergencyAccessState;
    BOOL _showsEditMedicalIDRowInViewMode;
    BOOL _isSecondaryProfileMedicalID;
    BOOL _inEditMode;
    _HKMedicalIDData *_medicalID;
    HKHealthStore *_healthStore;
    HKMedicalIDStore *_medicalIDStore;
    id<HKMedicalIDViewControllerDelegate> _delegate;
    long long _internalAccessType;
    NSArray *_tableItems;
}

@property (nonatomic) BOOL allowsEditing; // @synthesize allowsEditing=_allowsEditing;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HKMedicalIDViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
@property (nonatomic) BOOL inBridge; // @synthesize inBridge=_inBridge;
@property (nonatomic) BOOL inEditMode; // @synthesize inEditMode=_inEditMode;
@property (nonatomic) long long internalAccessType; // @synthesize internalAccessType=_internalAccessType;
@property (nonatomic) BOOL isSecondaryProfileMedicalID; // @synthesize isSecondaryProfileMedicalID=_isSecondaryProfileMedicalID;
@property (strong, nonatomic) _HKMedicalIDData *medicalID; // @synthesize medicalID=_medicalID;
@property (strong, nonatomic) HKMedicalIDStore *medicalIDStore; // @synthesize medicalIDStore=_medicalIDStore;
@property (nonatomic) BOOL modernAppearance; // @synthesize modernAppearance=_modernAppearance;
@property (nonatomic) BOOL shouldShowHints; // @synthesize shouldShowHints=_shouldShowHints;
@property (nonatomic) BOOL showsDeleteButton; // @synthesize showsDeleteButton=_showsDeleteButton;
@property (nonatomic) BOOL showsDismissButton; // @synthesize showsDismissButton=_showsDismissButton;
@property (nonatomic) BOOL showsEditMedicalIDRowInViewMode; // @synthesize showsEditMedicalIDRowInViewMode=_showsEditMedicalIDRowInViewMode;
@property (nonatomic) BOOL showsEmergencyAccessState; // @synthesize showsEmergencyAccessState=_showsEmergencyAccessState;
@property (nonatomic) BOOL showsShowWhenLockedState; // @synthesize showsShowWhenLockedState=_showsShowWhenLockedState;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSArray *tableItems; // @synthesize tableItems=_tableItems;

+ (BOOL)isSupportedOnThisDevice;
- (void).cxx_destruct;
- (void)_adjustTableViewContentOffsetForVisibleView:(id)arg1 visibleRect:(struct CGRect)arg2 animated:(BOOL)arg3;
- (void)_buildEditModeTableItems;
- (void)_buildPresentableTableItems;
- (void)_buildTableItems;
- (void)_buildViewModeTableItems;
- (BOOL)_canShowWhileLocked;
- (void)_cancelEditingTapped:(id)arg1;
- (void)_contactStoreDidChange:(id)arg1;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_dismissMedicalIDEditor;
- (void)_doneEditingTapped:(id)arg1;
- (void)_doneTapped:(id)arg1;
- (BOOL)_editable;
- (void)_fetchDemographicInformation;
- (id)_fetchProfileFirstName;
- (void)_forceDisableBiometricIfDeviceLocked;
- (id)_formatMedicalIDAccessPoint:(long long)arg1;
- (id)_newViewForFooterInSection:(long long)arg1;
- (id)_newViewForHeaderInSection:(long long)arg1;
- (void)_nextButtonTapped:(id)arg1;
- (long long)_preferredOrganDonationOrganization;
- (BOOL)_refreshEmergencyContacts:(BOOL)arg1;
- (void)_refreshMedicalIDInViewMode;
- (void)_reloadTableWithMedicalIDData:(id)arg1;
- (long long)_rowIndexForTableItem:(id)arg1 atIndexPath:(id)arg2;
- (BOOL)_shouldShowOrganDonation;
- (void)_showMedicalIDPreviewAsNext;
- (void)_submitAccessAnalytic;
- (id)_tableItemForIndexPath:(id)arg1;
- (void)_updateMedicalID;
- (void)_updateMedicalIDNameWithDemographicsInformation:(id)arg1;
- (void)dealloc;
- (void)deletionTableItemDidTapDelete:(id)arg1;
- (void)editButtonTapped:(id)arg1;
- (void)editMedicalID:(id)arg1;
- (void)editOrganDonation:(id)arg1;
- (id)initInEditMode:(BOOL)arg1;
- (id)initInEditMode:(BOOL)arg1 inBuddy:(BOOL)arg2 organDonationSignupAvailable:(BOOL)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (void)localeDidChange:(id)arg1;
- (void)medicalIDViewControllerDidCancel:(id)arg1;
- (void)medicalIDViewControllerDidDelete:(id)arg1;
- (void)medicalIDViewControllerDidSave:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)preferredStatusBarStyle;
- (void)selectionTableItemDidTap:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)tableItem:(id)arg1 heightDidChangeForRowIndex:(long long)arg2 keepRectVisible:(struct CGRect)arg3 inView:(id)arg4;
- (void)tableItemDidBeginEditing:(id)arg1 keepRectVisible:(struct CGRect)arg2 inView:(id)arg3;
- (void)tableItemDidChangeSelection:(id)arg1 keepRectVisible:(struct CGRect)arg2 inView:(id)arg3;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)timeZoneDidChange:(id)arg1;
- (void)updateEmergencyContactTableItem;
- (void)updateNavigationBar;
- (void)updatePrimaryLanguageTableItem;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end

