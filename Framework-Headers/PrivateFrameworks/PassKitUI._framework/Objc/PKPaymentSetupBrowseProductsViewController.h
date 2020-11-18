//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKPaymentSetupTableViewController.h>

#import <PassKitUI/PKPaymentSetupActivitySpinnerProtocol-Protocol.h>
#import <PassKitUI/UITableViewDelegate-Protocol.h>
#import <PassKitUI/UITextFieldDelegate-Protocol.h>

@class NSString, PKPaymentSetupBrowseProductsModel, PKPaymentSetupProduct, PKSearchableTableHeaderView;
@protocol PKPaymentSetupBrowseProductsViewControllerDelegate;

@interface PKPaymentSetupBrowseProductsViewController : PKPaymentSetupTableViewController <UITableViewDelegate, UITextFieldDelegate, PKPaymentSetupActivitySpinnerProtocol>
{
    PKPaymentSetupBrowseProductsModel *_model;
    PKSearchableTableHeaderView *_headerView;
    id<PKPaymentSetupBrowseProductsViewControllerDelegate> _delegate;
    PKPaymentSetupProduct *_selectedProduct;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PKPaymentSetupBrowseProductsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) PKPaymentSetupBrowseProductsModel *model; // @synthesize model=_model;
@property (readonly, nonatomic) PKPaymentSetupProduct *selectedProduct; // @synthesize selectedProduct=_selectedProduct;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_isLikelySection:(long long)arg1;
- (BOOL)_isUnlikelySection:(long long)arg1;
- (void)_nextTapped:(id)arg1;
- (void)_notifyDelegateDidSelectProduct:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)_productAtIndexPath:(id)arg1;
- (BOOL)_searchUIEnabled;
- (void)_setNavigationBarEnabled:(BOOL)arg1;
- (BOOL)_showLikelySection;
- (void)_updateFilterString:(id)arg1 userInteraction:(BOOL)arg2;
- (void)_updateSelectedProduct:(id)arg1;
- (void)clearSearchField;
- (void)clearSelectedProduct;
- (void)dealloc;
- (id)defaultHeaderViewSubTitle;
- (id)defaultHeaderViewTitle;
- (void)hideActivitySpinner;
- (id)initWithModel:(id)arg1 context:(long long)arg2;
- (id)initWithProducts:(id)arg1 context:(long long)arg2;
- (id)initWithProducts:(id)arg1 likelyProductIdentifiers:(id)arg2 context:(long long)arg3;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)showActivitySpinner;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (BOOL)textFieldShouldClear:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;

@end

