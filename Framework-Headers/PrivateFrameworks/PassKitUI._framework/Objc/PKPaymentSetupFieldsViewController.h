//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKPaymentSetupTableViewController.h>

#import <PassKitUI/PKPaymentSetupFieldCellDelegate-Protocol.h>
#import <PassKitUI/UITextFieldDelegate-Protocol.h>

@class NSMapTable, NSString, PKPaymentSetupFieldsModel, PKPaymentWebService, PKTableHeaderView;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKPaymentSetupFieldsViewController : PKPaymentSetupTableViewController <UITextFieldDelegate, PKPaymentSetupFieldCellDelegate>
{
    PKTableHeaderView *_headerView;
    BOOL _hasScrolledToShowFields;
    PKPaymentSetupFieldsModel *_fieldsModel;
    NSMapTable *_fieldIdentifierToCellMap;
    id _currentNextActionBlock;
    BOOL _showingActivitySpinner;
    id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
    PKPaymentWebService *_webService;
}

@property (readonly, nonatomic, getter=isComplete) BOOL complete;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) PKPaymentSetupFieldsModel *fieldsModel; // @synthesize fieldsModel=_fieldsModel;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) id<PKPaymentSetupViewControllerDelegate> setupDelegate; // @synthesize setupDelegate=_setupDelegate;
@property (readonly, nonatomic, getter=isShowingActivitySpinner) BOOL showingActivitySpinner; // @synthesize showingActivitySpinner=_showingActivitySpinner;
@property (readonly) Class superclass;
@property (strong, nonatomic) PKPaymentWebService *webService; // @synthesize webService=_webService;

- (void).cxx_destruct;
- (id)_contextSpecificStringForAggDKey:(id)arg1;
- (void)_handleNextButtonTapped:(id)arg1;
- (void)_setIdleTimerDisabled:(BOOL)arg1 title:(id)arg2 subtitle:(id)arg3;
- (void)_setNavigationBarEnabled:(BOOL)arg1;
- (void)_triggerNextActionLoop;
- (id)allCells;
- (id)cellForIdentifier:(id)arg1;
- (id)defaultFields;
- (id)defaultHeaderViewSubTitle;
- (id)defaultHeaderViewTitle;
- (BOOL)fieldCellEditableTextFieldShouldBeginEditing:(id)arg1;
- (BOOL)fieldCellEditableTextFieldShouldClear:(id)arg1;
- (BOOL)fieldCellEditableTextFieldShouldReturn:(id)arg1;
- (void)fieldCellEditableTextFieldValueDidChange:(id)arg1;
- (id)fieldForIdentifier:(id)arg1;
- (id)firstEmptyCell;
- (id)firstEmptyField;
- (id)firstResponderCell;
- (id)footerView;
- (void)handleNextActionError:(id)arg1 shouldContinue:(BOOL)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)handleNextActionWithCompletion:(CDUnknownBlockType)arg1;
- (void)handleNextButtonTapped:(id)arg1;
- (id)headerView;
- (void)hideActivitySpinner;
- (void)hideActivitySpinnerWithTitle:(id)arg1 subtitle:(id)arg2;
- (id)initWithWebService:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 setupFieldsModel:(id)arg4;
- (BOOL)isEmpty;
- (void)logAggDCheckpointForKey:(id)arg1;
- (void)logAggDContextSpecificCheckpointForKey:(id)arg1;
- (id)nextResponderCellForCurrentIdentifier:(id)arg1;
- (void)noteFieldIdentifiersChanged;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)readonlyFieldIdentifiers;
- (BOOL)shouldAppearWithFirstEmptyFieldAsFirstResponder;
- (void)showActivitySpinnerWithTitle:(id)arg1 subtitle:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (id)visibleFieldIdentifiers;

@end
