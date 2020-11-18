//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKPaymentSetupTableViewController.h>

#import <PassKitUI/UITextFieldDelegate-Protocol.h>

@class NSArray, NSMutableDictionary, NSString, PKPeerPaymentBankAccountInformation, PKPeerPaymentFindBankAccountInformationFooterView, PKTableHeaderView, UIButton;
@protocol PKPeerPaymentAddBankAcountInformationViewControllerDelegate;

@interface PKPeerPaymentAddBankAcountInformationViewController : PKPaymentSetupTableViewController <UITextFieldDelegate>
{
    PKTableHeaderView *_tableHeader;
    PKPeerPaymentFindBankAccountInformationFooterView *_footerView;
    UIButton *_deleteBankInformationButton;
    unsigned long long _state;
    PKPeerPaymentBankAccountInformation *_bankInformation;
    NSArray *_cellText;
    NSArray *_cellPlaceholderText;
    NSMutableDictionary *_cells;
    NSString *_accountCountryCode;
    NSMutableDictionary *_userEnteredValues;
    BOOL _isEditingBankInformation;
    BOOL _hasInteractedWithCell;
    id<PKPeerPaymentAddBankAcountInformationViewControllerDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PKPeerPaymentAddBankAcountInformationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_bankInformationTextForRow:(unsigned long long)arg1;
- (BOOL)_cellValuesAreValid;
- (id)_countrySpecificLocalizedStringKeyForKey:(id)arg1;
- (id)_countrySpecificLocalizedStringKeyForKey:(id)arg1 minDigits:(unsigned long long)arg2 maxDigits:(unsigned long long)arg3;
- (id)_countrySpecificLocalizedStringKeyForKey:(id)arg1 numberOfDigits:(unsigned long long)arg2;
- (void)_deleteBankInformation;
- (id)_footerView;
- (id)_headerSubTitle;
- (id)_headerTitle;
- (void)_hideHeaderActivitySpinner;
- (BOOL)_isAccountNumberCellValid;
- (BOOL)_isCellValidAtRow:(unsigned long long)arg1;
- (BOOL)_isRoutingNumberCellValid;
- (unsigned long long)_maxTextLengthForRow:(unsigned long long)arg1;
- (unsigned long long)_minTextLengthForRow:(unsigned long long)arg1;
- (double)_minimumRequiredWidthForCellText:(id)arg1 withFont:(id)arg2;
- (id)_placeholderTextForRow:(unsigned long long)arg1;
- (void)_reloadTableSection;
- (unsigned long long)_rowWithTextField:(id)arg1;
- (void)_setIdleTimerDisabled:(BOOL)arg1 title:(id)arg2 subtitle:(id)arg3;
- (void)_setNavigationBarEnabled:(BOOL)arg1;
- (void)_setNavigationBarItemsHidden:(BOOL)arg1;
- (void)_setState:(unsigned long long)arg1;
- (void)_setTableFooterView;
- (void)_setTableViewHeaderActivitySpinnerAnimated:(BOOL)arg1 title:(id)arg2 subtitle:(id)arg3;
- (void)_setText:(id)arg1 forForCellAtRow:(unsigned long long)arg2;
- (void)_showHeaderActivitySpinner;
- (void)_showHowToFindAccountInformationViewController:(id)arg1;
- (id)_textForRow:(unsigned long long)arg1;
- (void)_updateBankAccountInformationWithValues:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_userEnteredTextForCellAtRow:(unsigned long long)arg1;
- (void)cancel:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithDelegate:(id)arg1 bankInformation:(id)arg2 accountCountryCode:(id)arg3;
- (id)initWithState:(unsigned long long)arg1 delegate:(id)arg2 bankInformation:(id)arg3 accountCountryCode:(id)arg4;
- (void)loadView;
- (void)next:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)pkui_navigationBarTintColor;
- (BOOL)pkui_prefersNavigationBarShadowHidden;
- (void)setHeaderViewTitle:(id)arg1 subtitle:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;

@end

