//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKSectionTableViewController.h>

#import <PassKitUI/CNAvatarViewDelegate-Protocol.h>
#import <PassKitUI/MFMailComposeViewControllerDelegate-Protocol.h>
#import <PassKitUI/PKCommutePlanRenewalReminderSetupViewControllerDelegate-Protocol.h>
#import <PassKitUI/PKLowBalanceReminderSetupViewControllerDelegate-Protocol.h>
#import <PassKitUI/PKPassHeaderViewDelegate-Protocol.h>
#import <PassKitUI/PKPaymentDataProviderDelegate-Protocol.h>
#import <PassKitUI/PKPaymentSetupDelegate-Protocol.h>
#import <PassKitUI/PKPaymentVerificationControllerDelegate-Protocol.h>
#import <PassKitUI/PKPeerPaymentAccountResolutionControllerDelegate-Protocol.h>
#import <PassKitUI/PKPeerPaymentContactResolverDelegate-Protocol.h>
#import <PassKitUI/PKPeerPaymentPerformActionViewControllerDelegate-Protocol.h>
#import <PassKitUI/PKPerformActionViewControllerDelegate-Protocol.h>
#import <PassKitUI/PSStateRestoration-Protocol.h>
#import <PassKitUI/UITableViewDataSource-Protocol.h>
#import <PassKitUI/UITableViewDelegate-Protocol.h>
#import <PassKitUI/UIViewControllerPreviewingDelegate-Protocol.h>

@class NSArray, NSDateComponentsFormatter, NSDateFormatter, NSIndexPath, NSMutableDictionary, NSNumber, NSNumberFormatter, NSObject, NSString, PKExpressPassInformation, PKLinkedApplication, PKPassHeaderView, PKPaymentApplication, PKPaymentPass, PKPaymentPassDetailActivationFooterView, PKPaymentTransactionCellController, PKPaymentVerificationController, PKPaymentWebService, PKPeerPaymentAccount, PKPeerPaymentAccountResolutionController, PKPeerPaymentContactResolver, PKPeerPaymentController, PKPeerPaymentPerformActionViewController, PKPeerPaymentPreferences, PKPeerPaymentWebService, PKSettingTableCell, PKSpinnerHeaderView, PKTransitPassProperties, UIColor, UISegmentedControl, UIView, UIVisualEffectView;
@protocol OS_dispatch_source, PKPassDeleteHandler, PKPassLibraryDataProvider, PKPaymentDataProvider;

@interface PKPaymentPassDetailViewController : PKSectionTableViewController <MFMailComposeViewControllerDelegate, PKPerformActionViewControllerDelegate, PKLowBalanceReminderSetupViewControllerDelegate, PKCommutePlanRenewalReminderSetupViewControllerDelegate, PKPeerPaymentContactResolverDelegate, PKPeerPaymentPerformActionViewControllerDelegate, PKPeerPaymentAccountResolutionControllerDelegate, CNAvatarViewDelegate, PKPaymentDataProviderDelegate, PKPaymentVerificationControllerDelegate, PKPassHeaderViewDelegate, UIViewControllerPreviewingDelegate, UITableViewDataSource, UITableViewDelegate, PSStateRestoration, PKPaymentSetupDelegate>
{
    id<PKPassLibraryDataProvider> _passLibraryDataProvider;
    id<PKPaymentDataProvider> _paymentServiceDataProvider;
    long long _detailViewStyle;
    NSObject<OS_dispatch_source> *_transactionTimer;
    BOOL _deepLinkingEnabled;
    PKPaymentPass *_pass;
    PKLinkedApplication *_linkedApplication;
    PKPaymentApplication *_defaultPaymentApplication;
    PKPaymentWebService *_webService;
    PKPaymentVerificationController *_verificationController;
    PKPaymentPassDetailActivationFooterView *_activationFooter;
    PKSettingTableCell *_messagesSwitch;
    PKSettingTableCell *_transactionsSwitch;
    PKSettingTableCell *_automaticPresentationSwitch;
    PKSettingTableCell *_expressAccessSwitch;
    NSNumber *_paymentTransactionCellHeightCache;
    PKPaymentTransactionCellController *_transactionCellController;
    NSArray *_transactions;
    NSArray *_transactionCountAndYear;
    NSDateFormatter *_transactionYearFormatter;
    NSNumberFormatter *_transactionCountFormatter;
    NSArray *_devicePaymentApplications;
    NSArray *_contactlessPaymentApplications;
    PKExpressPassInformation *_expressAccessPassInformation;
    BOOL _expressAccessEnabled;
    BOOL _performingCardTransfer;
    PKTransitPassProperties *_transitProperties;
    NSArray *_commuterFields;
    NSDateComponentsFormatter *_commutePlanRenewalReminderTimeIntervalFormatter;
    NSArray *_tabBarSegments;
    double _headerHeight;
    struct UIEdgeInsets _headerContentInset;
    double _tabBarHeight;
    BOOL _changingDefaultPaymentApplication;
    double _previousLayoutTableViewWidth;
    struct CGSize _previousLayoutContentSize;
    NSMutableDictionary *_contextualActionHandlers;
    BOOL _navigationControllerHidesShadow;
    UIView *_headerView;
    PKPassHeaderView *_passHeaderView;
    UIVisualEffectView *_blurView;
    UISegmentedControl *_tabBar;
    UIView *_keyLine;
    BOOL _viewIsDisappearing;
    PKPeerPaymentWebService *_peerPaymentWebService;
    PKPeerPaymentController *_peerPaymentController;
    PKPeerPaymentAccount *_peerPaymentAccount;
    PKPeerPaymentContactResolver *_contactResolver;
    PKPeerPaymentPreferences *_peerPaymentPreferences;
    BOOL _loadingPeerPaymentPreferences;
    PKSpinnerHeaderView *_peerPaymentPreferencesHeaderView;
    PKPeerPaymentPerformActionViewController *_peerPaymentActionViewController;
    NSIndexPath *_loadingPeerPaymentAccountActionIndexPath;
    PKPeerPaymentAccountResolutionController *_peerPaymentAccountResolutionController;
    unsigned long long _peerPaymentAccountResolution;
    BOOL _requestingStatement;
    id<PKPassDeleteHandler> _deleteOverrider;
    UIColor *_primaryTextColor;
    UIColor *_detailTextColor;
    UIColor *_linkTextColor;
    UIColor *_warningTextColor;
    UIColor *_highlightColor;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<PKPassDeleteHandler> deleteOverrider; // @synthesize deleteOverrider=_deleteOverrider;
@property (readonly, copy) NSString *description;
@property (nonatomic) UIColor *detailTextColor; // @synthesize detailTextColor=_detailTextColor;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property (nonatomic) UIColor *linkTextColor; // @synthesize linkTextColor=_linkTextColor;
@property (nonatomic) UIColor *primaryTextColor; // @synthesize primaryTextColor=_primaryTextColor;
@property (readonly) Class superclass;
@property (nonatomic) UIColor *warningTextColor; // @synthesize warningTextColor=_warningTextColor;

- (void).cxx_destruct;
- (void)_activationFooterPressed:(id)arg1;
- (id)_activationFooterView;
- (void)_applyDefaultDynamicStylingToCell:(id)arg1;
- (void)_applyDefaultStaticStylingToCell:(id)arg1;
- (id)_automaticPresentationCellForTableView:(id)arg1;
- (void)_automaticPresentationSwitchChanged:(id)arg1;
- (id)_availableActionCellForIndexPath:(id)arg1 tableView:(id)arg2;
- (id)_availableActions;
- (id)_billingAddressCellForTableView:(id)arg1;
- (void)_callIssuer;
- (BOOL)_canDoManualIdentityVerification;
- (void)_cancelPendingTransactionTimer;
- (unsigned long long)_cardInfoSectionGenerateCellWithOutput:(id *)arg1 forRowIndex:(long long)arg2 tableView:(id)arg3;
- (id)_checkmarkCellWithText:(id)arg1 forTableView:(id)arg2;
- (id)_commuterRouteCellForIndexPath:(id)arg1 tableView:(id)arg2;
- (unsigned long long)_contactBankCellWithOutput:(id *)arg1 forRowIndex:(long long)arg2 tableView:(id)arg3;
- (id)_contactKeysToFetch;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (id)_createTabBarWithSelectedIndex:(long long)arg1;
- (id)_defaultCellWithTextColor:(id)arg1 forTableView:(id)arg2;
- (id)_deleteCardCellForTableView:(id)arg1;
- (id)_deviceAccountNumberCellForIndexPath:(id)arg1 tableView:(id)arg2;
- (void)_didSelectAddMoney;
- (void)_didSelectAutomaticallyAcceptPaymentsPreferenceAtIndexPath:(id)arg1;
- (void)_didSelectAvailableActionAtRow:(long long)arg1;
- (void)_didSelectBillingAddress;
- (void)_didSelectContactBankSectionAtIndexPath:(long long)arg1;
- (void)_didSelectDeleteCard;
- (void)_didSelectPassOperationsSectionAtIndexPath:(id)arg1;
- (void)_didSelectPassStateSection;
- (void)_didSelectPaymentApplicationSectionRowAtIndexPath:(id)arg1;
- (void)_didSelectPeerPaymentAccountActionAtIndexPath:(id)arg1;
- (void)_didSelectPeerPaymentManualIdentityVerificationAtIndexPath:(id)arg1;
- (void)_didSelectPeerPaymentMoneyActionAtRow:(long long)arg1;
- (void)_didSelectPeerPaymentStatementAtIndexPath:(id)arg1;
- (void)_didSelectPrivacySectionAtRow:(long long)arg1;
- (void)_didSelectReminderConfigurationRowAtIndex:(long long)arg1;
- (void)_didSelectTransactionAtRow:(long long)arg1;
- (void)_didSelectTransactionCountByYearAtIndexPath:(id)arg1;
- (void)_didSelectTransferCardAtIndexPath:(id)arg1;
- (void)_didSelectTransferToBank;
- (void)_didSelectTransitTicketAtRow:(long long)arg1;
- (id)_disabledCellWithText:(id)arg1 forTableView:(id)arg2;
- (id)_disclosureCellWithTitle:(id)arg1 forTableView:(id)arg2;
- (void)_done:(id)arg1;
- (void)_doneLoadingPeerPaymentAccountAction;
- (void)_emailIssuer;
- (unsigned long long)_employeeInfoSectionGenerateCellWithOutput:(id *)arg1 forRowIndex:(long long)arg2 tableView:(id)arg3;
- (id)_expressAccessCellForTableView:(id)arg1;
- (void)_expressAccessSwitchChanged:(id)arg1;
- (id)_footerTextForPassStateSection;
- (id)_footerViewForPassStateSection;
- (double)_footerViewHeightForPassStateSectionWithTableView:(id)arg1;
- (void)_handlePeerPaymentAccountDidChangeNotification:(id)arg1;
- (void)_handleProvisioningError:(id)arg1;
- (BOOL)_hasActionOfType:(unsigned long long)arg1;
- (id)_headerTitleForPassStateSection;
- (double)_heightForPassStateSectionWithTableView:(id)arg1;
- (id)_imageViewCellForImage:(id)arg1 contentMode:(long long)arg2 forTableView:(id)arg3;
- (id)_infoCellWithDescription:(id)arg1 forTableView:(id)arg2;
- (id)_infoCellWithPrimaryText:(id)arg1 detailText:(id)arg2 cellStyle:(long long)arg3 forTableView:(id)arg4;
- (id)_infoCellWithPrimaryText:(id)arg1 detailText:(id)arg2 cellStyle:(long long)arg3 reuseIdentifier:(id)arg4 forTableView:(id)arg5;
- (BOOL)_isJapaneseRegion;
- (id)_linkCellWithText:(id)arg1 forTableView:(id)arg2;
- (id)_linkedAppCellForTableView:(id)arg1;
- (id)_linkedApplicationCellForTableView:(id)arg1;
- (id)_messagesSwitchCellForTableView:(id)arg1;
- (void)_messagesSwitchChanged:(id)arg1;
- (id)_moreTransactionsCellForTableView:(id)arg1;
- (void)_normalizeContentOffset;
- (struct CGPoint)_normalizedContentOffsetForTargetOffset:(struct CGPoint)arg1;
- (unsigned long long)_numberOfPeerPaymentBalanceActionsEnabled;
- (double)_offscreenHeaderHeight;
- (void)_openIssuerWebsite;
- (void)_openPaymentSetup;
- (void)_openPaymentSetupWithNetworkWhitelist:(id)arg1 paymentSetupMode:(long long)arg2;
- (unsigned long long)_passOperationsCellWithOutput:(id *)arg1 forRowIndex:(long long)arg2 tableView:(id)arg3;
- (void)_passSettingsChanged:(id)arg1;
- (unsigned long long)_passStateSectionGenerateCellWithOutput:(id *)arg1 forRowIndex:(long long)arg2 tableView:(id)arg3;
- (id)_paymentApplicationsCellForIndexPath:(id)arg1 tableView:(id)arg2;
- (id)_paymentSetupNavigationControllerForProvisioningController:(id)arg1;
- (double)_paymentTransactionCellHeight;
- (id)_peerPaymentAccountActionCellForRowIndex:(long long)arg1 tableView:(id)arg2;
- (id)_peerPaymentAutomaticallyAcceptPaymentsCellForRowIndex:(long long)arg1 tableView:(id)arg2;
- (BOOL)_peerPaymentBalanceActionEnabled:(unsigned long long)arg1;
- (unsigned long long)_peerPaymentBalanceActionForRowIndex:(unsigned long long)arg1;
- (id)_peerPaymentCardInfoCellForRowIndex:(long long)arg1 tableView:(id)arg2;
- (id)_peerPaymentManualIdentityVerificationCellForRowIndex:(long long)arg1 tableView:(id)arg2;
- (id)_peerPaymentMoneyActionCellForRowIndex:(long long)arg1 tableView:(id)arg2;
- (void)_peerPaymentPaymentRequestPreferenceChanged:(id)arg1;
- (id)_peerPaymentStatementCellForTableView:(id)arg1;
- (void)_preflightWatchForTransferWithCompletion:(CDUnknownBlockType)arg1;
- (void)_presentContactBankViewController;
- (void)_presentMerchantDetailsViewWithTransaction:(id)arg1 forCell:(id)arg2;
- (void)_presentNotImplementedAlertWithRadarNumber:(long long)arg1;
- (unsigned long long)_privacyTermsSectionGenerateCellWithOutput:(id *)arg1 forRowIndex:(long long)arg2 tableView:(id)arg3;
- (void)_refreshPaymentApplicationsSelection;
- (void)_reloadPassAndView;
- (void)_reloadTransactionSectionsAnimated:(BOOL)arg1;
- (void)_reloadTransactionsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_reloadView;
- (id)_remindersConfigurationCellForIndexPath:(id)arg1 tableView:(id)arg2;
- (unsigned long long)_rowIndexForPeerPaymentBalanceActionRow:(unsigned long long)arg1;
- (void)_setExpressAccessEnabled:(BOOL)arg1 paymentSetupContext:(long long)arg2 authenticationCredential:(id)arg3;
- (void)_setTransitProperties:(id)arg1;
- (BOOL)_shouldShowAccountActions;
- (BOOL)_shouldShowAutomaticPresentation;
- (BOOL)_shouldShowBillingAddressCell;
- (BOOL)_shouldShowContactCell;
- (BOOL)_shouldShowDeleteCell;
- (BOOL)_shouldShowEmployeeInformation;
- (BOOL)_shouldShowPrivacyPolicyCell;
- (BOOL)_shouldShowServiceMode;
- (BOOL)_shouldShowTermsCell;
- (BOOL)_shouldShowTransferCell;
- (void)_showPeerPaymentActionViewControllerForAction:(unsigned long long)arg1;
- (id)_spinnerCellForTableView:(id)arg1;
- (void)_startPendingTransactionTimer;
- (id)_subtitleCellForTableView:(id)arg1;
- (id)_switchCellWithText:(id)arg1 forTableView:(id)arg2;
- (void)_tabBarSegmentChanged:(id)arg1;
- (BOOL)_transactionCellEditActionsGenerateWithOutput:(id *)arg1 forRowIndex:(long long)arg2 tableView:(id)arg3;
- (id)_transactionCellForIndexPath:(id)arg1 tableView:(id)arg2;
- (id)_transactionCountByYearCellForIndexPath:(id)arg1 tableView:(id)arg2;
- (id)_transactionCountFormatter;
- (BOOL)_transactionDeepLinkingEnabled;
- (id)_transactionDetailViewControllerForTransaction:(id)arg1;
- (BOOL)_transactionSectionsDataIsChangedForNewTransactions:(id)arg1 oldTransactions:(id)arg2 newTransactionCountByYear:(id)arg3 oldTransactionCountByYear:(id)arg4;
- (id)_transactionYearFormatter;
- (id)_transactionsSwitchCellForTableView:(id)arg1;
- (void)_transactionsSwitchChanged:(id)arg1;
- (id)_transferCardCellForTableView:(id)arg1;
- (long long)_transitCellGenerateCellWithOutput:(id *)arg1 forRowIndex:(long long)arg2 tableView:(id)arg3;
- (void)_updateAccessExpressPassInformation;
- (BOOL)_updateHeaderHeightDeterminingLayout:(BOOL)arg1;
- (void)_updatePassProperties;
- (void)_updatePeerPaymentAccount;
- (void)_updatePeerPaymentPreferences;
- (void)_updatePeerPaymentPreferencesSectionVisibilityAndReloadIfNecessary;
- (void)_updatePeerPaymentPreferencesWithNewPreferences:(id)arg1;
- (void)_updateTabBar;
- (void)_updateTabBarWithSegments:(id)arg1;
- (void)_updateTransitProperties;
- (BOOL)canBeShownFromSuspendedState;
- (id)commutePlanRenewalReminderTimeIntervalFormatter;
- (void)commutePlanRenewalReminderValueDidChange:(id)arg1;
- (void)contactsDidChangeForContactResolver:(id)arg1;
- (void)dealloc;
- (void)didChangeVerificationPresentation;
- (id)initWithPass:(id)arg1 webService:(id)arg2 peerPaymentWebService:(id)arg3 style:(long long)arg4 passLibraryDataProvider:(id)arg5 paymentServiceDataProvider:(id)arg6;
- (id)initWithPass:(id)arg1 webService:(id)arg2 style:(long long)arg3 dataProvider:(id)arg4;
- (void)loadView;
- (void)lowBalanceReminderValueDidChange:(id)arg1;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)passHeaderViewDidChangePass:(id)arg1;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableMessageService:(BOOL)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableTransactionService:(BOOL)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveTransaction:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didRemoveTransactionWithIdentifier:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithTransitPassProperties:(id)arg2;
- (void)paymentSetupDidFinish:(id)arg1;
- (void)peerPaymentAccountResolutionController:(id)arg1 requestsDismissCurrentViewControllerAnimated:(BOOL)arg2;
- (void)peerPaymentAccountResolutionController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(BOOL)arg3;
- (void)peerPaymentPerformActionViewControllerDidCancel:(id)arg1;
- (void)peerPaymentPerformActionViewControllerDidPerformAction:(id)arg1;
- (void)performActionViewControllerDidCancel:(id)arg1;
- (void)performActionViewControllerDidPerformAction:(id)arg1;
- (BOOL)pkui_prefersNavigationBarShadowHidden;
- (void)presentTermsAndConditions;
- (void)presentTransactionDetailsForTransaction:(id)arg1 animated:(BOOL)arg2;
- (void)presentVerificationViewController:(id)arg1 animated:(BOOL)arg2;
- (id)presentingViewControllerForAvatarView:(id)arg1;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (long long)rowAnimationForDeletingSection:(unsigned long long)arg1;
- (long long)rowAnimationForInsertingSection:(unsigned long long)arg1;
- (long long)rowAnimationForReloadingSection:(unsigned long long)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (BOOL)shouldMapSection:(unsigned long long)arg1;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)updateActivationFooterViewContents;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end

