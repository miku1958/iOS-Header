//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PassKitUI/PKForegroundActiveArbiterObserver-Protocol.h>
#import <PassKitUI/PKGroupsControllerDelegate-Protocol.h>
#import <PassKitUI/PKPassGroupStackViewDatasource-Protocol.h>
#import <PassKitUI/PKPassGroupStackViewDelegate-Protocol.h>
#import <PassKitUI/PKPassPersonalizationViewControllerDelegate-Protocol.h>
#import <PassKitUI/PKPaymentServiceDelegate-Protocol.h>
#import <PassKitUI/PKPaymentSetupDelegate-Protocol.h>
#import <PassKitUI/PKPerformActionViewControllerDelegate-Protocol.h>
#import <PassKitUI/UIScrollViewDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSString, NSTimer, PKGroupsController, PKPassGroupStackView, PKPaymentService, PKPeerPaymentService, _UIBackdropView;
@protocol NSObject, PKPassLibraryDataProvider;

@interface PKPassGroupsViewController : UIViewController <PKGroupsControllerDelegate, PKPassGroupStackViewDatasource, PKPassGroupStackViewDelegate, UIScrollViewDelegate, PKForegroundActiveArbiterObserver, PKPaymentServiceDelegate, PKPaymentSetupDelegate, PKPerformActionViewControllerDelegate, PKPassPersonalizationViewControllerDelegate>
{
    long long _backdropStyle;
    PKPassGroupStackView *_groupStackView;
    _UIBackdropView *_headerBackground;
    _UIBackdropView *_footerBackground;
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
    BOOL _updatingBackdropSettings;
    CDStruct_6c46ada8 _headerBackgroundVisibility;
    CDStruct_6c46ada8 _footerBackgroundVisibility;
    unsigned long long _instanceFooterSuppressionCounter;
    id<NSObject> _expressTransactionNotificationObserver;
    id<PKPassLibraryDataProvider> _passLibraryDataProvider;
    PKPeerPaymentService *_peerPaymentService;
    BOOL _handleFieldDetection;
    BOOL _welcomeStateEnabled;
    long long _style;
    PKGroupsController *_groupsController;
    unsigned long long _suppressedContent;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, strong, nonatomic) PKPassGroupStackView *groupStackView;
@property (readonly, nonatomic) PKGroupsController *groupsController; // @synthesize groupsController=_groupsController;
@property BOOL handleFieldDetection; // @synthesize handleFieldDetection=_handleFieldDetection;
@property (readonly) unsigned long long hash;
@property BOOL passesAreOutdated; // @synthesize passesAreOutdated=_passesAreOutdated;
@property (readonly, nonatomic) BOOL presentingPass;
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
- (void)_accessBackgroundStateForType:(long long)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)_accessibilitySettingsDidChange:(id)arg1;
- (void)_applyPresentationState;
- (void)_beginSuppressingInstanceFooter;
- (void)_clearPassViewedNotificationTimer;
- (void)_dismissPresentedVCsWithRequirements:(unsigned long long)arg1 performAction:(CDUnknownBlockType)arg2;
- (void)_endSuppressingInstanceFooterWithContext:(id)arg1;
- (void)_handleChildViewControllerRequestingServiceMode:(id)arg1;
- (void)_handleExpressNotification:(id)arg1;
- (void)_handleFooterSupressionChange:(id)arg1;
- (void)_handlePeerPaymentAccountDidChangeNotification:(id)arg1;
- (void)_handleProvisioningError:(id)arg1;
- (void)_handleStatusBarChange:(id)arg1;
- (void)_localeDidChangeNotification:(id)arg1;
- (id)_passFromGroupsControllerWithUniqueIdentifier:(id)arg1;
- (id)_passPendingActivationToPresent;
- (void)_passViewedNotificationTimerFired;
- (id)_paymentPassDetailsViewControllerForPaymentPass:(id)arg1;
- (id)_paymentSetupNavigationControllerForProvisioningController:(id)arg1;
- (void)_presentAddPassesControllerWithPasses:(id)arg1;
- (void)_presentGroupWithIndex:(unsigned long long)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_presentTransactionDetailsForTransaction:(id)arg1 paymentPass:(id)arg2;
- (void)_presentWithUpdatedPasses:(CDUnknownBlockType)arg1;
- (void)_regionConfigurationDidChangeNotification;
- (void)_registerForExpressTransactionNotifications:(BOOL)arg1;
- (void)_startPassViewedNotificationTimer;
- (void)_updateBackdropSettings;
- (void)_updateBackgroundType:(long long)arg1 toVisibility:(double)arg2 animated:(BOOL)arg3;
- (void)_updateFooterSuppressionAnimated:(BOOL)arg1;
- (void)_updateFooterSuppressionWithContext:(id)arg1;
- (void)_updatePeerPaymentAccount;
- (void)addSimulatorPassWithURL:(id)arg1;
- (void)addVASPassWithIdentifier:(id)arg1;
- (void)allowIdleTimer;
- (void)dealloc;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (id)footerForGroupStackView:(id)arg1;
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
- (void)groupStackViewDidEndReordering:(id)arg1;
- (BOOL)groupStackViewShouldAllowReordering:(id)arg1;
- (BOOL)groupStackViewShouldShowHeaderViews:(id)arg1;
- (void)groupsController:(id)arg1 didInsertGroup:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)groupsController:(id)arg1 didMoveGroup:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4;
- (void)groupsController:(id)arg1 didRemoveGroup:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)groupsControllerShouldExcludePassesWithUniqueIDsFromFiltering:(id)arg1;
- (unsigned long long)indexOfGroup:(id)arg1;
- (unsigned long long)indexOfSeparationGroup;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithGroupsController:(id)arg1;
- (id)initWithGroupsController:(id)arg1 style:(long long)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (unsigned long long)numberOfGroups;
- (void)passPersonalizationViewController:(id)arg1 didFinishPersonalizingPass:(id)arg2;
- (void)paymentDeviceDidEnterFieldWithProperties:(id)arg1;
- (void)paymentSetupDidFinish:(id)arg1;
- (void)performActionViewControllerDidCancel:(id)arg1;
- (void)performActionViewControllerDidPerformAction:(id)arg1;
- (long long)preferredStatusBarStyle;
- (BOOL)prefersStatusBarHidden;
- (void)presentActionViewControllerWithUniqueID:(id)arg1 actionType:(unsigned long long)arg2;
- (void)presentAutomaticPresentationControllerForPassWithUniqueID:(id)arg1;
- (void)presentDefaultPaymentPassAnimated:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)presentGroupTable;
- (void)presentGroupTableAnimated:(BOOL)arg1;
- (void)presentInitialState;
- (void)presentOffscreenAnimated:(BOOL)arg1 split:(BOOL)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)presentOffscreenAnimated:(BOOL)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)presentOnscreen:(BOOL)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)presentPassWithFieldProperties:(id)arg1 animated:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)presentPassWithFieldProperties:(id)arg1 fieldPassUniqueIdentifiers:(id)arg2 animated:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)presentPassWithUniqueID:(id)arg1 animated:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)presentPassWithUniqueID:(id)arg1 animated:(BOOL)arg2 dismissVC:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)presentPassWithUniqueID:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)presentPassWithUniqueID:(id)arg1 context:(id)arg2 dismissVC:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)presentPassWithUpdateUserNotificationIdentifier:(id)arg1;
- (void)presentPaymentPassDetailsWithUniqueID:(id)arg1 animated:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)presentPaymentSetupController;
- (void)presentPaymentSetupInMode:(long long)arg1 referrerIdentifier:(id)arg2 paymentNetwork:(id)arg3;
- (void)presentPileOffscreen;
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
- (void)startPaymentPreflight:(id)arg1 withPaymentSetupMode:(long long)arg2 referrerIdentifier:(id)arg3 paymentNetwork:(id)arg4;
- (unsigned long long)supportedInterfaceOrientations;
- (void)terminateFieldDetect;
- (void)updateLockscreenIdleTimer;
- (void)updatePassesIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateRegionSupportIfNecessary;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;

@end
