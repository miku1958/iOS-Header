//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PassKitUI/PKCodeAcquisitionDelegate-Protocol.h>
#import <PassKitUI/PKGroupsControllerDelegate-Protocol.h>
#import <PassKitUI/PKPassGroupStackViewDatasource-Protocol.h>
#import <PassKitUI/PKPassGroupStackViewDelegate-Protocol.h>
#import <PassKitUI/PKPassPersonalizationViewControllerDelegate-Protocol.h>
#import <PassKitUI/PKPaymentServiceDelegate-Protocol.h>
#import <PassKitUI/UIScrollViewDelegate-Protocol.h>

@class NSMutableArray, NSString, NSTimer, PKGroupsController, PKPassGroupStackView, PKPaymentService, UIImageView;

@interface PKPassGroupsViewController : UIViewController <PKGroupsControllerDelegate, PKPassGroupStackViewDatasource, PKPassGroupStackViewDelegate, UIScrollViewDelegate, PKPaymentServiceDelegate, PKCodeAcquisitionDelegate, PKPassPersonalizationViewControllerDelegate>
{
    UIImageView *_statusBarGradient;
    PKPassGroupStackView *_groupStackView;
    PKGroupsController *_groupsController;
    PKPaymentService *_paymentService;
    unsigned long long _modalCardIndex;
    long long _presentationState;
    NSTimer *_allowDimmingTimer;
    NSTimer *_passViewedNotificationTimer;
    NSMutableArray *_blocksQueuedForUpdateCompletion;
    BOOL _viewAppeared;
    BOOL _viewAppearedBefore;
    BOOL _passesAreOutdated;
    BOOL _reloadingPasses;
    BOOL _backgroundMode;
    BOOL _handleFieldDetection;
    BOOL _welcomeStateEnabled;
    unsigned long long _suppressedContent;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, strong, nonatomic) PKPassGroupStackView *groupStackView;
@property BOOL handleFieldDetection; // @synthesize handleFieldDetection=_handleFieldDetection;
@property (readonly) unsigned long long hash;
@property BOOL passesAreOutdated; // @synthesize passesAreOutdated=_passesAreOutdated;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long suppressedContent; // @synthesize suppressedContent=_suppressedContent;
@property (nonatomic, getter=isWelcomeStateEnabled) BOOL welcomeStateEnabled; // @synthesize welcomeStateEnabled=_welcomeStateEnabled;

+ (void)beginSuppressingFooter;
+ (void)beginTrackingAction;
+ (void)endSuppressingFooter;
+ (void)endTrackingAction;
+ (BOOL)isPerformingAction;
- (void).cxx_destruct;
- (void)_applyPresentationState;
- (void)_clearPassViewedNotificationTimer;
- (void)_dismissPresentedVCsWithRequirements:(unsigned long long)arg1 performAction:(CDUnknownBlockType)arg2;
- (void)_handleApplicationDidEnterBackground:(id)arg1;
- (void)_handleApplicationWillEnterForeground:(id)arg1;
- (void)_handleFooterSupressionChange:(id)arg1;
- (void)_handleNotifyToken:(int)arg1;
- (void)_handleStatusBarChange:(id)arg1;
- (void)_localeDidChangeNotification:(id)arg1;
- (id)_passPendingActivationToPresent;
- (void)_passViewedNotificationTimerFired;
- (void)_presentAddPassesControllerWithPasses:(id)arg1;
- (void)_presentGroupWithIndex:(unsigned long long)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_presentWithUpdatedPasses:(CDUnknownBlockType)arg1;
- (void)_regionConfigurationDidChangeNotification;
- (void)_startPassViewedNotificationTimer;
- (void)_updateFooterSupression;
- (void)_updateStatusBarGradientOpacity:(BOOL)arg1;
- (void)addSimulatorPassWithURL:(id)arg1;
- (void)addVASPassWithIdentifier:(id)arg1;
- (void)allowIdleTimer;
- (void)cardsChanged:(id)arg1;
- (void)codeAcquisitionController:(id)arg1 didAddPass:(id)arg2;
- (void)codeAcquisitionController:(id)arg1 didFinishWithPass:(id)arg2;
- (void)codeAcquisitionController:(id)arg1 willAddPass:(id)arg2;
- (void)codeAcquisitionControllerDidCancel:(id)arg1;
- (void)dealloc;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (id)groupAtIndex:(unsigned long long)arg1;
- (void)groupStackView:(id)arg1 deleteConfirmedForPass:(id)arg2;
- (void)groupStackView:(id)arg1 didTransitionToState:(long long)arg2 animated:(BOOL)arg3;
- (void)groupStackView:(id)arg1 groupDidMoveFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (id)groupStackView:(id)arg1 headerForPassType:(unsigned long long)arg2;
- (BOOL)groupStackView:(id)arg1 requiresHeaderForPassType:(unsigned long long)arg2;
- (id)groupStackView:(id)arg1 subheaderForPassType:(unsigned long long)arg2;
- (void)groupStackView:(id)arg1 transitioningToState:(long long)arg2 animated:(BOOL)arg3;
- (void)groupStackViewDidBeginReordering:(id)arg1;
- (void)groupStackViewDidEndReordering:(id)arg1;
- (BOOL)groupStackViewShouldAllowReordering:(id)arg1;
- (BOOL)groupStackViewShouldShowHeaderViews:(id)arg1;
- (void)groupsController:(id)arg1 didInsertGroup:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)groupsController:(id)arg1 didMoveGroup:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4;
- (void)groupsController:(id)arg1 didRemoveGroup:(id)arg2 atIndex:(unsigned long long)arg3;
- (unsigned long long)indexOfGroup:(id)arg1;
- (unsigned long long)indexOfSeparationGroup;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithGroupsController:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (unsigned long long)numberOfGroups;
- (void)passPersonalizationViewController:(id)arg1 didFinishPersonalizingPass:(id)arg2;
- (BOOL)passesGrowWhenFlipped;
- (void)paymentDeviceDidEnterFieldWithProperties:(id)arg1;
- (long long)preferredStatusBarStyle;
- (BOOL)prefersStatusBarHidden;
- (void)presentAutomaticPresentationControllerForPassWithUniqueID:(id)arg1;
- (void)presentGroupTable;
- (void)presentGroupTableAnimated:(BOOL)arg1;
- (void)presentInitialState;
- (void)presentOffscreenAnimated:(BOOL)arg1 split:(BOOL)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)presentOffscreenAnimated:(BOOL)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)presentOnscreen:(BOOL)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)presentPassWithFieldProperties:(id)arg1 animated:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)presentPassWithFieldProperties:(id)arg1 fieldPassUniqueIdentifiers:(id)arg2 animated:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)presentPassWithUniqueID:(id)arg1 animated:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)presentPassWithUniqueID:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)presentPassWithUpdateUserNotificationIdentifier:(id)arg1;
- (void)presentPaymentSetup;
- (void)presentPileOffscreen;
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
- (void)startPaymentPreflight:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)terminateFieldDetect;
- (void)updateLockscreenIdleTimer;
- (void)updatePassesIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateRegionSupportIfNecessary;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;

@end
