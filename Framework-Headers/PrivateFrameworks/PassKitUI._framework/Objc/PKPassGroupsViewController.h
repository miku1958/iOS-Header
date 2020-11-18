//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PassKitUI/PKAccountServiceAccountResolutionControllerDelegate-Protocol.h>
#import <PassKitUI/PKDiscoveryDataSourceDelegate-Protocol.h>
#import <PassKitUI/PKForegroundActiveArbiterObserver-Protocol.h>
#import <PassKitUI/PKGroupsControllerDelegate-Protocol.h>
#import <PassKitUI/PKPGSVFooterViewDelegate-Protocol.h>
#import <PassKitUI/PKPGSVSectionHeaderViewDelegate-Protocol.h>
#import <PassKitUI/PKPGSVSectionSubheaderDelegate-Protocol.h>
#import <PassKitUI/PKPassGroupStackViewDatasource-Protocol.h>
#import <PassKitUI/PKPassGroupStackViewDelegate-Protocol.h>
#import <PassKitUI/PKPassPersonalizationViewControllerDelegate-Protocol.h>
#import <PassKitUI/PKPaymentServiceDelegate-Protocol.h>
#import <PassKitUI/PKPaymentSetupDelegate-Protocol.h>
#import <PassKitUI/PKPeerPaymentAccountResolutionControllerDelegate-Protocol.h>
#import <PassKitUI/PKPerformActionViewControllerDelegate-Protocol.h>
#import <PassKitUI/UIScrollViewDelegate-Protocol.h>
#import <PassKitUI/_PKUIKVisibilityBackdropViewDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSString, NSTimer, PKAccountServiceAccountResolutionController, PKDiscoveryDataSource, PKDiscoveryGalleryView, PKGroupsController, PKPassGroupStackView, PKPaymentService, PKPeerPaymentAccountResolutionController, PKPeerPaymentService, _PKUIKVisibilityBackdropView;
@protocol PKPassLibraryDataProvider;

@interface PKPassGroupsViewController : UIViewController <PKGroupsControllerDelegate, PKPassGroupStackViewDatasource, PKPassGroupStackViewDelegate, UIScrollViewDelegate, PKForegroundActiveArbiterObserver, PKPaymentServiceDelegate, PKPaymentSetupDelegate, PKPerformActionViewControllerDelegate, PKPeerPaymentAccountResolutionControllerDelegate, PKAccountServiceAccountResolutionControllerDelegate, PKDiscoveryDataSourceDelegate, _PKUIKVisibilityBackdropViewDelegate, PKPGSVFooterViewDelegate, PKPGSVSectionSubheaderDelegate, PKPGSVSectionHeaderViewDelegate, PKPassPersonalizationViewControllerDelegate>
{
    long long _invalidationStatus;
    PKPassGroupStackView *_groupStackView;
    _PKUIKVisibilityBackdropView *_headerBackground;
    _PKUIKVisibilityBackdropView *_footerBackground;
    double _headerBackgroundVisibility;
    double _footerBackgroundVisibility;
    PKPaymentService *_paymentService;
    unsigned long long _modalCardIndex;
    long long _presentationState;
    NSTimer *_allowDimmingTimer;
    NSTimer *_passViewedNotificationTimer;
    NSMutableArray *_blocksQueuedForUpdateCompletion;
    NSArray *_passUniqueIDsToExcludeFromFiltering;
    BOOL _persistentCardEmulationQueued;
    BOOL _viewAppeared;
    BOOL _viewAppearedBefore;
    BOOL _passesAreOutdated;
    BOOL _reloadingPasses;
    BOOL _backgroundMode;
    BOOL _inFailForward;
    unsigned long long _instanceFooterSuppressionCounter;
    int _expressTransactionNotificationObserver;
    id<PKPassLibraryDataProvider> _passLibraryDataProvider;
    PKPeerPaymentService *_peerPaymentService;
    PKPeerPaymentAccountResolutionController *_peerPaymentAccountResolutionController;
    PKAccountServiceAccountResolutionController *_accountServiceAccountResolutionController;
    PKDiscoveryDataSource *_discoveryDataSource;
    BOOL _inField;
    BOOL _handleFieldDetection;
    BOOL _showingFieldDetectEducation;
    BOOL _welcomeStateEnabled;
    BOOL _externalModalPresentationAllowed;
    long long _style;
    PKGroupsController *_groupsController;
    unsigned long long _suppressedContent;
    PKDiscoveryGalleryView *_discoveryGalleryView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) PKDiscoveryGalleryView *discoveryGalleryView; // @synthesize discoveryGalleryView=_discoveryGalleryView;
@property (nonatomic, getter=isExternalModalPresentationAllowed) BOOL externalModalPresentationAllowed; // @synthesize externalModalPresentationAllowed=_externalModalPresentationAllowed;
@property (readonly, strong, nonatomic) PKPassGroupStackView *groupStackView;
@property (readonly, nonatomic) PKGroupsController *groupsController; // @synthesize groupsController=_groupsController;
@property BOOL handleFieldDetection; // @synthesize handleFieldDetection=_handleFieldDetection;
@property (readonly) unsigned long long hash;
@property BOOL passesAreOutdated; // @synthesize passesAreOutdated=_passesAreOutdated;
@property (readonly, nonatomic) BOOL presentingPass;
@property (getter=isShowingFieldDetectEducation) BOOL showingFieldDetectEducation; // @synthesize showingFieldDetectEducation=_showingFieldDetectEducation;
@property (readonly, nonatomic) long long style; // @synthesize style=_style;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long suppressedContent; // @synthesize suppressedContent=_suppressedContent;
@property (nonatomic, getter=isWelcomeStateEnabled) BOOL welcomeStateEnabled; // @synthesize welcomeStateEnabled=_welcomeStateEnabled;

+ (void)beginSuppressingFooter;
+ (void)beginTrackingAction;
+ (void)endSuppressingFooter;
+ (void)endTrackingAction;
+ (BOOL)isPerformingAction;
- (void).cxx_destruct;
- (id)_appleCardUpsellAlertWithAccount:(id)arg1;
- (void)_applyPresentationState;
- (id)_barcodePassDetailsViewControllerForBarcodePass:(id)arg1;
- (void)_beginSuppressingInstanceFooter;
- (BOOL)_canPerformExternalModalPresentation;
- (BOOL)_canShowWhileLocked;
- (void)_clearPassViewedNotificationTimer;
- (void)_endSuppressingInstanceFooterWithContext:(id)arg1;
- (void)_handleChildViewControllerRequestingServiceMode:(id)arg1;
- (void)_handleExpressNotification;
- (void)_handleFooterSupressionChange:(id)arg1;
- (void)_handlePeerPaymentAccountDidChangeNotification:(id)arg1;
- (void)_handleProvisioningError:(id)arg1;
- (void)_handleStatusBarChange:(id)arg1;
- (void)_invalidateForType:(long long)arg1;
- (void)_localeDidChangeNotification:(id)arg1;
- (id)_makeDiscoveryGalleryView;
- (id)_passFromGroupsControllerWithUniqueIdentifier:(id)arg1;
- (id)_passPendingActivationToPresent;
- (void)_passViewedNotificationTimerFired;
- (id)_paymentPassDetailsViewControllerForPaymentPass:(id)arg1;
- (id)_paymentSetupNavigationControllerForProvisioningController:(id)arg1;
- (id)_peerPaymentAccountResolutionController;
- (void)_presentAddPassesControllerWithPasses:(id)arg1;
- (void)_presentGroupWithIndex:(unsigned long long)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_presentTransactionDetailsForTransaction:(id)arg1 paymentPass:(id)arg2;
- (void)_presentWithUpdatedPasses:(CDUnknownBlockType)arg1;
- (void)_regionConfigurationDidChangeNotification;
- (void)_registerForExpressTransactionNotifications:(BOOL)arg1;
- (void)_resetToRootAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_setupItemForExpressUpgradeMarket:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_startPassViewedNotificationTimer;
- (void)_updateFooterSuppressionAnimated:(BOOL)arg1;
- (void)_updateFooterSuppressionWithContext:(id)arg1;
- (void)_updatePeerPaymentAccount;
- (void)_warnFailForward;
- (void)accountServiceAccountResolutionController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(BOOL)arg3;
- (void)addSimulatorPassWithURL:(id)arg1;
- (void)addVASPassWithIdentifier:(id)arg1;
- (void)allowIdleTimer;
- (void)dealloc;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)discoveryDataSource:(id)arg1 didUpdateArticleLayouts:(id)arg2;
- (void)dismissPresentedVCsWithRequirements:(unsigned long long)arg1 animated:(BOOL)arg2 performAction:(CDUnknownBlockType)arg3;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (id)featuredGroup;
- (id)footerForGroupStackView:(id)arg1;
- (void)forcePayment;
- (void)foregroundActiveArbiter:(id)arg1 didUpdateForegroundActiveState:(CDStruct_973bafd3)arg2;
- (id)groupAtIndex:(unsigned long long)arg1;
- (void)groupStackView:(id)arg1 deleteConfirmedForPass:(id)arg2;
- (void)groupStackView:(id)arg1 didTransitionToState:(long long)arg2 animated:(BOOL)arg3;
- (void)groupStackView:(id)arg1 groupDidMoveFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (id)groupStackView:(id)arg1 headerForPassType:(unsigned long long)arg2;
- (BOOL)groupStackView:(id)arg1 requiresHeaderForPassType:(unsigned long long)arg2;
- (id)groupStackView:(id)arg1 subheaderForPassType:(unsigned long long)arg2;
- (void)groupStackView:(id)arg1 wantsBottomContentSeparatorWithVisibility:(double)arg2 animated:(BOOL)arg3;
- (void)groupStackView:(id)arg1 wantsTopContentSeparatorWithVisibility:(double)arg2 animated:(BOOL)arg3;
- (BOOL)groupStackView:(id)arg1 willHaveHeaderViewForPassType:(unsigned long long)arg2;
- (void)groupStackViewDidBeginReordering:(id)arg1;
- (void)groupStackViewDidChangeCoachingState:(id)arg1;
- (void)groupStackViewDidEndReordering:(id)arg1;
- (BOOL)groupStackViewShouldAllowReordering:(id)arg1;
- (BOOL)groupStackViewShouldShowHeaderViews:(id)arg1;
- (void)groupStackViewWantsForcedPayment:(id)arg1;
- (void)groupsController:(id)arg1 didInsertGroup:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)groupsController:(id)arg1 didMoveGroup:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4;
- (void)groupsController:(id)arg1 didRemoveGroup:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)groupsControllerShouldExcludePassesWithUniqueIDsFromFiltering:(id)arg1;
- (BOOL)hasDiscoveryContent;
- (unsigned long long)indexOfGroup:(id)arg1;
- (unsigned long long)indexOfSeparationGroup;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithGroupsController:(id)arg1;
- (id)initWithGroupsController:(id)arg1 style:(long long)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)invalidate;
- (BOOL)isInField;
- (void)loadView;
- (unsigned long long)numberOfGroups;
- (void)partiallyInvalidate;
- (id)passForSectionHeaderView:(id)arg1;
- (void)passPersonalizationViewController:(id)arg1 didFinishPersonalizingPass:(id)arg2;
- (void)paymentDeviceDidEnterFieldWithProperties:(id)arg1;
- (void)paymentDeviceDidExitField;
- (void)paymentSetupDidFinish:(id)arg1;
- (void)peerPaymentAccountResolutionController:(id)arg1 requestsDismissCurrentViewControllerAnimated:(BOOL)arg2;
- (void)peerPaymentAccountResolutionController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(BOOL)arg3;
- (void)performActionViewControllerDidCancel:(id)arg1;
- (void)performActionViewControllerDidPerformAction:(id)arg1;
- (long long)preferredStatusBarStyle;
- (BOOL)prefersStatusBarHidden;
- (void)presentAccountServicePaymentWithReferenceIdentifier:(id)arg1 forPassWithUniqueID:(id)arg2;
- (void)presentAccountServiceSchedulePayment:(id)arg1;
- (void)presentActionViewControllerWithUniqueID:(id)arg1 actionType:(unsigned long long)arg2;
- (void)presentAutomaticPresentationControllerForPassWithUniqueID:(id)arg1;
- (void)presentBalanceDetailsForPassUniqueIdentifier:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentCreditPassAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentDailyCashForPassUniqueIdentifier:(id)arg1 dateComponents:(id)arg2 animated:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)presentDefaultPaymentPassAnimated:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)presentDiscoveryArticleForItemWithIdentifier:(id)arg1 referrerIdentifier:(id)arg2 animated:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)presentExpressUpgradeDetailForPassUniqueID:(id)arg1 marketIdentifier:(id)arg2 animated:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)presentGroupTable;
- (void)presentGroupTableAnimated:(BOOL)arg1;
- (void)presentInitialState;
- (void)presentInstallmentPlanWithIdentifier:(id)arg1 forAccountIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentInstallmentPlansForFeature:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentOffscreenAnimated:(BOOL)arg1 split:(BOOL)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)presentOffscreenAnimated:(BOOL)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)presentOnscreen:(BOOL)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)presentPassDetailsAssociatedWithVirtualCardID:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentPassDetailsForHeaderView:(id)arg1;
- (void)presentPassDetailsWithUniqueID:(id)arg1 animated:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)presentPassWithFieldProperties:(id)arg1 animated:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)presentPassWithFieldProperties:(id)arg1 fieldPassUniqueIdentifiers:(id)arg2 animated:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)presentPassWithUniqueID:(id)arg1 animated:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)presentPassWithUniqueID:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)presentPassWithUpdateUserNotificationIdentifier:(id)arg1;
- (void)presentPaymentSetupController;
- (void)presentPaymentSetupInMode:(long long)arg1 referrerIdentifier:(id)arg2 paymentNetwork:(id)arg3 transitNetworkIdentifier:(id)arg4 allowedFeatureIdentifiers:(id)arg5;
- (void)presentPeerPaymentPassAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentPeerPaymentSetupWithCurrencyAmount:(id)arg1 flowState:(unsigned long long)arg2 senderAddress:(id)arg3;
- (void)presentPeerPaymentTermsAcceptance;
- (void)presentPeerPaymentTopUp;
- (void)presentPeerPaymentVerifyIdentity;
- (void)presentPileOffscreen;
- (void)presentSpendingSummaryForPassUniqueIdentifier:(id)arg1 type:(unsigned long long)arg2 unit:(unsigned long long)arg3 animated:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
- (void)presentTransactionDetailsForTransactionWithIdentifier:(id)arg1;
- (void)presentTransactionDetailsForTransactionWithServiceIdentifier:(id)arg1;
- (void)queuePersistentCardEmulation;
- (void)reloadGroupsForGroupStackView:(id)arg1;
- (void)reloadPasses;
- (void)reloadPassesWithCompletion:(CDUnknownBlockType)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)setTableModalPresentationEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)shouldAutorotate;
- (void)shouldUpdateSectionSubheaderView:(id)arg1;
- (void)showStatementForIdentifier:(id)arg1 passUniqueIdentifier:(id)arg2 animated:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)startPaymentPreflight:(id)arg1 withPaymentSetupMode:(long long)arg2 referrerIdentifier:(id)arg3 paymentNetwork:(id)arg4 transitNetworkIdentifier:(id)arg5 allowedFeatureIdentifiers:(id)arg6;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)supportsExternalPresentation;
- (void)transitionToViewController:(id)arg1;
- (void)updateLockscreenIdleTimer;
- (void)updatePassesIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateRegionSupportIfNecessary;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewTapped:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (long long)visibilityBackdropView:(id)arg1 preferredStyleForTraitCollection:(id)arg2;

@end
