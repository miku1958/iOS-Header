//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <PassKit/MFMailComposeViewControllerDelegate-Protocol.h>
#import <PassKit/PKPaymentDataProviderDelegate-Protocol.h>
#import <PassKit/PKPaymentVerificationPresentationDelegate-Protocol.h>
#import <PassKit/PSStateRestoration-Protocol.h>
#import <PassKit/UITableViewDataSource-Protocol.h>
#import <PassKit/UITableViewDelegate-Protocol.h>

@class NSArray, NSNumberFormatter, NSObject, NSString, PKPaymentApplication, PKPaymentPass, PKPaymentPassDetailActivationFooterView, PKPaymentVerificationPresentationController, PKPaymentWebService, PKSettingTableCell, PKVerificationRequestRecord, UIColor;
@protocol OS_dispatch_source, PKPassDeleteHandler, PKPassLibraryDataProvider, PKPaymentDataProvider;

@interface PKPaymentPassDetailViewController : UITableViewController <PKPaymentDataProviderDelegate, PKPaymentVerificationPresentationDelegate, UITableViewDataSource, UITableViewDelegate, MFMailComposeViewControllerDelegate, PSStateRestoration>
{
    id<PKPassLibraryDataProvider> _passLibraryDataProvider;
    id<PKPaymentDataProvider> _paymentServiceDataProvider;
    long long _detailViewStyle;
    NSObject<OS_dispatch_source> *_transactionTimer;
    BOOL _deepLinkingEnabled;
    BOOL _passDeletionInProgress;
    PKPaymentPass *_pass;
    PKPaymentApplication *_defaultPaymentApplication;
    PKPaymentWebService *_webService;
    PKPaymentVerificationPresentationController *_verificationPresenter;
    PKVerificationRequestRecord *_verificationRecord;
    PKPaymentPassDetailActivationFooterView *_activationFooter;
    NSNumberFormatter *_numberFormatter;
    PKSettingTableCell *_notificationSwitch;
    PKSettingTableCell *_automaticPresentationSwitch;
    NSArray *_sections;
    id<PKPassDeleteHandler> _deleteOverrider;
    UIColor *_primaryTextColor;
    UIColor *_detailTextColor;
    UIColor *_linkTextColor;
    UIColor *_warningTextColor;
    UIColor *_highlightColor;
    NSArray *_transactions;
    NSArray *_paymentApplications;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<PKPassDeleteHandler> deleteOverrider; // @synthesize deleteOverrider=_deleteOverrider;
@property (readonly, copy) NSString *description;
@property (nonatomic) UIColor *detailTextColor; // @synthesize detailTextColor=_detailTextColor;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property (nonatomic) UIColor *linkTextColor; // @synthesize linkTextColor=_linkTextColor;
@property (strong, nonatomic) NSArray *paymentApplications; // @synthesize paymentApplications=_paymentApplications;
@property (nonatomic) UIColor *primaryTextColor; // @synthesize primaryTextColor=_primaryTextColor;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *transactions; // @synthesize transactions=_transactions;
@property (nonatomic) UIColor *warningTextColor; // @synthesize warningTextColor=_warningTextColor;

- (void)_activationFooterPressed:(id)arg1;
- (id)_activationFooterView;
- (id)_automaticPresentationCell;
- (void)_automaticPresentationSwitchChanged:(id)arg1;
- (id)_billingAddressCell;
- (void)_callIssuer;
- (id)_cardInfoCells;
- (id)_cellForPassStateSection;
- (id)_defaultCell;
- (id)_deleteCardCell;
- (id)_deviceAccountNumberCell;
- (id)_deviceSpecificLocalizedStringKeyForKey:(id)arg1;
- (void)_didSelectBillingAddress;
- (void)_didSelectContactBankSection;
- (void)_didSelectDeleteCard;
- (void)_didSelectPassStateSection;
- (void)_didSelectPaymentApplicationSectionRowAtIndexPath:(id)arg1;
- (void)_didSelectPrivacySectionAtRow:(long long)arg1;
- (void)_didSelectTransactionAtRow:(long long)arg1;
- (BOOL)_doesTableContainSection:(long long)arg1;
- (void)_done:(id)arg1;
- (void)_emailIssuer;
- (id)_footerTextForPassStateSection;
- (id)_footerViewForPassStateSection;
- (double)_footerViewHeightForPassStateSectionWithTableView:(id)arg1;
- (id)_headerTitleForPassStateSection;
- (double)_heightForPassStateSectionWithTableView:(id)arg1;
- (unsigned long long)_indexOfSection:(long long)arg1;
- (id)_infoCell:(id)arg1;
- (id)_infoCell:(id)arg1 withDetailText:(id)arg2;
- (id)_linkCellWithText:(id)arg1;
- (id)_linkedAppCell;
- (id)_moreTransactionsCell;
- (id)_notificationServicesCell;
- (void)_notificationSwitchChanged:(id)arg1;
- (long long)_numberOfRowsForPassStateSection;
- (void)_openIssuerWebsite;
- (void)_passSettingsChanged:(id)arg1;
- (id)_paymentApplicationsCellForIndexPath:(id)arg1;
- (void)_presentMerchantDetailsViewWithTransaction:(id)arg1 forCell:(id)arg2;
- (id)_privacyTermsCells;
- (void)_reloadPassAndView;
- (void)_reloadTransactionSection;
- (void)_reloadTransactionsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_reloadView;
- (void)_setPlaceholderColorForCell:(id)arg1;
- (void)_setupSections;
- (BOOL)_shouldShowAutomaticPresentation;
- (BOOL)_shouldShowContactCell;
- (BOOL)_shouldShowPrivacyPolicyCell;
- (BOOL)_shouldShowTermsCell;
- (id)_subtitleCell;
- (id)_transactionCellForIndexPath:(id)arg1;
- (void)_updateTransactionsArrayWithTransaction:(id)arg1;
- (BOOL)canBeShownFromSuspendedState;
- (void)dealloc;
- (void)didChangeVerificationPresentation;
- (id)initWithPass:(id)arg1 webService:(id)arg2 style:(long long)arg3 dataProvider:(id)arg4;
- (id)initWithPass:(id)arg1 webService:(id)arg2 style:(long long)arg3 passLibraryDataProvider:(id)arg4 paymentServiceDataProvider:(id)arg5;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableTransactionService:(BOOL)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveTransaction:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didRemoveTransactionWithIdentifier:(id)arg2;
- (void)presentVerificationViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end

