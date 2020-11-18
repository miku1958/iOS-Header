//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKPaymentSetupTableViewController.h>

#import <PassKitUI/PKLinkedApplicationObserver-Protocol.h>
#import <PassKitUI/PKPaymentSetupActivitySpinnerProtocol-Protocol.h>
#import <PassKitUI/UITableViewDelegate-Protocol.h>
#import <PassKitUI/UITextFieldDelegate-Protocol.h>

@class NSString, PKLinkedApplication, PKPaymentProvisioningController, PKPaymentSetupBrowseProductsModel, PKPaymentSetupProduct, PKSearchableTableHeaderView;
@protocol PKPaymentSetupActivitySpinnerProtocol, PKPaymentSetupBrowseProductsViewControllerDelegate, PKPaymentSetupViewControllerDelegate;

@interface PKPaymentSetupBrowseProductsViewController : PKPaymentSetupTableViewController <UITableViewDelegate, UITextFieldDelegate, PKLinkedApplicationObserver, PKPaymentSetupActivitySpinnerProtocol>
{
    PKPaymentSetupBrowseProductsModel *_model;
    PKLinkedApplication *_loadingLinkedApplication;
    id<PKPaymentSetupActivitySpinnerProtocol> _loadingLinkedApplicationSpinner;
    PKSearchableTableHeaderView *_headerView;
    id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
    PKPaymentProvisioningController *_provisioningController;
    BOOL _isBridgeContext;
    double _previousHeaderHeight;
    BOOL _showScanCardButton;
    id<PKPaymentSetupBrowseProductsViewControllerDelegate> _delegate;
    PKPaymentSetupProduct *_selectedProduct;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PKPaymentSetupBrowseProductsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) PKPaymentSetupBrowseProductsModel *model; // @synthesize model=_model;
@property (readonly, nonatomic) PKPaymentSetupProduct *selectedProduct; // @synthesize selectedProduct=_selectedProduct;
@property (nonatomic) BOOL showScanCardButton; // @synthesize showScanCardButton=_showScanCardButton;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_cardTypeFlowPickerForProduct:(id)arg1;
- (BOOL)_isLikelySection:(long long)arg1;
- (BOOL)_isUnlikelySection:(long long)arg1;
- (void)_nextStepInSetupFlowWithProduct:(id)arg1;
- (void)_nextTapped:(id)arg1;
- (void)_notifyDelegateDidSelectProduct:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)_productAtIndexPath:(id)arg1;
- (void)_pushAppRequiredViewControllerForProduct:(id)arg1 linkedApplication:(id)arg2;
- (BOOL)_searchUIEnabled;
- (void)_setNavigationBarEnabled:(BOOL)arg1;
- (void)_showAppRequiredForProduct:(id)arg1 withSpinner:(id)arg2;
- (void)_showCameraCapture;
- (BOOL)_showLikelySection;
- (void)_updateFilterString:(id)arg1 userInteraction:(BOOL)arg2;
- (void)_updateSelectedProduct:(id)arg1;
- (void)clearSearchField;
- (void)clearSelectedProduct;
- (void)dealloc;
- (id)defaultHeaderViewSubTitle;
- (id)defaultHeaderViewTitle;
- (id)defaultSearchPrompt;
- (void)hideActivitySpinner;
- (id)initWithModel:(id)arg1 context:(long long)arg2;
- (id)initWithProducts:(id)arg1 context:(long long)arg2;
- (id)initWithProducts:(id)arg1 context:(long long)arg2 provisioningController:(id)arg3 setupDelegate:(id)arg4;
- (id)initWithProducts:(id)arg1 likelyProductIdentifiers:(id)arg2 context:(long long)arg3;
- (void)linkedApplicationDidChangeState:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)showActivitySpinner;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (BOOL)textFieldShouldClear:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end

