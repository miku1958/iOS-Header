//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotificationsUIKit/NCNotificationListCellDelegate-Protocol.h>
#import <UserNotificationsUIKit/NCNotificationListCoalescingControlsHandlerDelegate-Protocol.h>
#import <UserNotificationsUIKit/NCNotificationListComponent-Protocol.h>
#import <UserNotificationsUIKit/NCNotificationListViewDataSource-Protocol.h>
#import <UserNotificationsUIKit/NCNotificationManagementContentProviderDelegate-Protocol.h>
#import <UserNotificationsUIKit/NCNotificationViewControllerDelegatePrivate-Protocol.h>
#import <UserNotificationsUIKit/NCNotificationViewControllerObserving-Protocol.h>

@class NCNotificationListCache, NCNotificationListCell, NCNotificationListCoalescingControlsCell, NCNotificationListCoalescingHeaderCell, NCNotificationListView, NCNotificationRequest, NCNotificationSectionSettings, NCNotificationSummaryBuilder, NSArray, NSMutableArray, NSMutableDictionary, NSString, _UILegibilitySettings;
@protocol NCNotificationGroupListDelegate;

@interface NCNotificationGroupList : NSObject <NCNotificationListViewDataSource, NCNotificationViewControllerDelegatePrivate, NCNotificationViewControllerObserving, NCNotificationListCellDelegate, NCNotificationListCoalescingControlsHandlerDelegate, NCNotificationManagementContentProviderDelegate, NCNotificationListComponent>
{
    BOOL _deviceAuthenticated;
    BOOL _adjustsFontForContentSizeCategory;
    BOOL _grouped;
    BOOL _clockNotificationGroup;
    BOOL _longLookDismissalFinalFrameCalculatedWithoutWindow;
    NSString *_logDescription;
    id<NCNotificationGroupListDelegate> _delegate;
    NCNotificationListCache *_notificationListCache;
    NSString *_sectionIdentifier;
    NSString *_threadIdentifier;
    NCNotificationSectionSettings *_notificationSectionSettings;
    double _horizontalMarginInset;
    NCNotificationListView *_groupListView;
    NSMutableArray *_orderedRequests;
    NSMutableDictionary *_contentProviders;
    NSMutableDictionary *_clockSnoozeAlarmContentProviders;
    NCNotificationListCoalescingHeaderCell *_headerView;
    NCNotificationListCoalescingControlsCell *_footerView;
    double _headerViewHeight;
    double _footerViewHeight;
    NCNotificationRequest *_leadingNotificationRequest;
    NCNotificationSummaryBuilder *_summaryBuilder;
    _UILegibilitySettings *_legibilitySettings;
    NSString *_backgroundGroupNameBase;
    NCNotificationListCell *_cellRecycledWhilePresentingLongLook;
}

@property (nonatomic) BOOL adjustsFontForContentSizeCategory; // @synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory;
@property (readonly, nonatomic) NSArray *allNotificationRequests;
@property (copy, nonatomic) NSString *backgroundGroupNameBase; // @synthesize backgroundGroupNameBase=_backgroundGroupNameBase;
@property (strong, nonatomic) NCNotificationListCell *cellRecycledWhilePresentingLongLook; // @synthesize cellRecycledWhilePresentingLongLook=_cellRecycledWhilePresentingLongLook;
@property (nonatomic, getter=isClockNotificationGroup) BOOL clockNotificationGroup; // @synthesize clockNotificationGroup=_clockNotificationGroup;
@property (strong, nonatomic) NSMutableDictionary *clockSnoozeAlarmContentProviders; // @synthesize clockSnoozeAlarmContentProviders=_clockSnoozeAlarmContentProviders;
@property (readonly, nonatomic) BOOL containsNonPersistentNotificationRequests;
@property (strong, nonatomic) NSMutableDictionary *contentProviders; // @synthesize contentProviders=_contentProviders;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) NSArray *criticalAlerts;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<NCNotificationGroupListDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDeviceAuthenticated) BOOL deviceAuthenticated; // @synthesize deviceAuthenticated=_deviceAuthenticated;
@property (strong, nonatomic) NCNotificationListCoalescingControlsCell *footerView; // @synthesize footerView=_footerView;
@property (nonatomic) double footerViewHeight; // @synthesize footerViewHeight=_footerViewHeight;
@property (strong, nonatomic) NCNotificationListView *groupListView; // @synthesize groupListView=_groupListView;
@property (nonatomic, getter=isGrouped) BOOL grouped; // @synthesize grouped=_grouped;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NCNotificationListCoalescingHeaderCell *headerView; // @synthesize headerView=_headerView;
@property (nonatomic) double headerViewHeight; // @synthesize headerViewHeight=_headerViewHeight;
@property (nonatomic) double horizontalMarginInset; // @synthesize horizontalMarginInset=_horizontalMarginInset;
@property (strong, nonatomic) NCNotificationRequest *leadingNotificationRequest; // @synthesize leadingNotificationRequest=_leadingNotificationRequest;
@property (strong, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property (copy, nonatomic) NSString *logDescription; // @synthesize logDescription=_logDescription;
@property (nonatomic) BOOL longLookDismissalFinalFrameCalculatedWithoutWindow; // @synthesize longLookDismissalFinalFrameCalculatedWithoutWindow=_longLookDismissalFinalFrameCalculatedWithoutWindow;
@property (readonly, nonatomic) unsigned long long notificationCount;
@property (strong, nonatomic) NCNotificationListCache *notificationListCache; // @synthesize notificationListCache=_notificationListCache;
@property (strong, nonatomic) NCNotificationSectionSettings *notificationSectionSettings; // @synthesize notificationSectionSettings=_notificationSectionSettings;
@property (strong, nonatomic) NSMutableArray *orderedRequests; // @synthesize orderedRequests=_orderedRequests;
@property (readonly, nonatomic) NSArray *persistentNotificationRequests;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (readonly, nonatomic) NSString *sectionIdentifier; // @synthesize sectionIdentifier=_sectionIdentifier;
@property (strong, nonatomic) NCNotificationSummaryBuilder *summaryBuilder; // @synthesize summaryBuilder=_summaryBuilder;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *threadIdentifier; // @synthesize threadIdentifier=_threadIdentifier;

- (void).cxx_destruct;
- (id)_cachedCellForNotificationRequest:(id)arg1 createNewIfNecessary:(BOOL)arg2 shouldConfigure:(BOOL)arg3;
- (double)_cachedHeightForNotificationRequest:(id)arg1 isLeadingNotificationRequest:(BOOL)arg2;
- (void)_clearNotificationRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)_clockSnoozeAlarmNotificationStaticContentProviderForNotificationRequest:(id)arg1 viewController:(id)arg2;
- (long long)_compareNotificationRequest:(id)arg1 withNotificationRequest:(id)arg2;
- (id)_currentCellForNotificationRequest:(id)arg1;
- (unsigned long long)_existingIndexForNotificationRequest:(id)arg1;
- (void)_hintSideSwipeForDefaultActionForNotificationRequest:(id)arg1;
- (unsigned long long)_insertionIndexForNotificationRequest:(id)arg1;
- (void)_invalidateSnoozeAlarmNotificationStaticContentProviderTimerForNotificationRequest:(id)arg1;
- (BOOL)_isContentRevealedForNotificationRequest:(id)arg1;
- (unsigned long long)_lockScreenPersistenceForNotificationRequest:(id)arg1;
- (unsigned long long)_lockScreenPriorityForNotificationRequest:(id)arg1;
- (void)_performAction:(id)arg1 forNotificationRequest:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_performDefaultActionForNotificationRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_reloadNotificationCellAtIndex:(unsigned long long)arg1;
- (void)_reloadNotificationViewForNotificationRequest:(id)arg1;
- (void)_reloadRecycledGroupedNotificationCells;
- (void)_reloadRecycledNotificationCellForRequest:(id)arg1;
- (void)_scrollToTopIfNecessaryAndPerformBlock:(CDUnknownBlockType)arg1;
- (void)_toggleGroupedState;
- (void)_updateSummaryTextForNewLeadingNotificationRequest:(id)arg1 oldLeadingNotificationRequest:(id)arg2;
- (BOOL)adjustForContentSizeCategoryChange;
- (void)adjustForLegibilitySettingsChange:(id)arg1;
- (long long)compare:(id)arg1;
- (id)containerViewForCoalescingControlsHandlerPreviewInteractionPresentedContent:(id)arg1;
- (id)footerViewForNotificationList:(id)arg1;
- (double)footerViewHeightForNotificationList:(id)arg1;
- (id)headerViewForNotificationList:(id)arg1;
- (double)headerViewHeightForNotificationList:(id)arg1;
- (id)hideHomeAffordanceAnimationSettingsForNotificationViewController:(id)arg1;
- (id)initWithSectionIdentifier:(id)arg1 threadIdentifier:(id)arg2;
- (void)insertNotificationRequest:(id)arg1;
- (BOOL)isGroupForNotificationRequest:(id)arg1;
- (BOOL)isLeadingNotificationRequest:(id)arg1;
- (void)longLookDidDismissForNotificationViewController:(id)arg1;
- (void)longLookWillDismissForNotificationViewController:(id)arg1;
- (void)longLookWillPresentForNotificationViewController:(id)arg1;
- (BOOL)matchesGroup:(id)arg1;
- (void)mergeNotificationRequests:(id)arg1;
- (void)modifyNotificationRequest:(id)arg1;
- (void)notificationListCell:(id)arg1 didMoveToNewXPosition:(double)arg2;
- (BOOL)notificationListCell:(id)arg1 shouldPanHorizontallyWithTouch:(id)arg2;
- (void)notificationListCellDidHideCellActions:(id)arg1 resetCellScrollPosition:(BOOL)arg2 animated:(BOOL)arg3;
- (void)notificationListCellDidRevealCellActions:(id)arg1;
- (void)notificationListCellDidSignificantUserInteraction:(id)arg1;
- (void)notificationListCellRequestsDefaultAction:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)notificationListCellRequestsDismissAction:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)notificationListCellRequestsPresentingLongLook:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)notificationListCellRequestsPresentingManagementView:(id)arg1 withPresentingView:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)notificationListCellRequestsSectionSettings:(id)arg1 sectionIdentifier:(id)arg2;
- (BOOL)notificationListCellShouldPerformClipping:(id)arg1;
- (void)notificationListCoalescingControlsHandler:(id)arg1 didTransitionToClearState:(BOOL)arg2;
- (void)notificationListCoalescingControlsHandlerDidBeginPreviewInteraction:(id)arg1;
- (void)notificationListCoalescingControlsHandlerDidDismissPreviewInteractionPresentedContent:(id)arg1;
- (void)notificationListCoalescingControlsHandlerDidPresentPreviewInteractionPresentedContent:(id)arg1;
- (void)notificationListCoalescingControlsHandlerRequestsClearingAllNotifications:(id)arg1;
- (void)notificationListCoalescingControlsHandlerRequestsClearingNotifications:(id)arg1;
- (void)notificationListCoalescingControlsHandlerRequestsRestackingNotifications:(id)arg1;
- (double)notificationListView:(id)arg1 heightForItemAtIndex:(unsigned long long)arg2;
- (id)notificationListView:(id)arg1 viewForItemAtIndex:(unsigned long long)arg2;
- (BOOL)notificationListViewIsGroup:(id)arg1;
- (unsigned long long)notificationListViewNumberOfItems:(id)arg1;
- (void)notificationManagementContentProvider:(id)arg1 requestsPresentingNotificationManagementViewType:(unsigned long long)arg2 forNotificationRequest:(id)arg3 withPresentingView:(id)arg4;
- (id)notificationUsageTrackingStateForNotificationViewController:(id)arg1;
- (id)notificationViewController:(id)arg1 auxiliaryOptionsContentProviderForNotificationRequest:(id)arg2 withLongLook:(BOOL)arg3;
- (void)notificationViewController:(id)arg1 executeAction:(id)arg2 withParameters:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (struct CGRect)notificationViewController:(id)arg1 finalFrameForDismissingLongLookFromView:(id)arg2;
- (struct CGRect)notificationViewController:(id)arg1 initialFrameForPresentingLongLookFromView:(id)arg2;
- (id)notificationViewController:(id)arg1 keyboardAssertionForGestureWindow:(id)arg2;
- (void)notificationViewController:(id)arg1 requestPermissionToExecuteAction:(id)arg2 withParameters:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)notificationViewController:(id)arg1 requestsExpandingCoalescedBundleForNotificationRequest:(id)arg2;
- (void)notificationViewController:(id)arg1 shouldFinishLongLookTransitionForTrigger:(long long)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (id)notificationViewController:(id)arg1 staticContentProviderForNotificationRequest:(id)arg2;
- (long long)notificationViewControllerDateFormatStyle:(id)arg1;
- (void)notificationViewControllerDidEndUserInteraction:(id)arg1;
- (BOOL)notificationViewControllerIsCoalescedBundle:(id)arg1;
- (BOOL)notificationViewControllerShouldAllowClickPresentationInteraction:(id)arg1;
- (BOOL)notificationViewControllerShouldAllowLongPressGesture:(id)arg1;
- (BOOL)notificationViewControllerShouldInterpretTapAsDefaultAction:(id)arg1;
- (void)notificationViewControllerWillBeginUserInteraction:(id)arg1;
- (void)notificationViewControllerWillDismissForCancelAction:(id)arg1;
- (void)recycleView:(id)arg1;
- (void)reloadNotificationRequest:(id)arg1;
- (void)removeNotificationRequest:(id)arg1;
- (void)setGrouped:(BOOL)arg1 animated:(BOOL)arg2;
- (id)settleHomeAffordanceAnimationBehaviorDescriptionForNotificationViewController:(id)arg1;
- (BOOL)showAdditionalMessageLinesForNotificationViewController:(id)arg1;
- (id)unhideHomeAffordanceAnimationSettingsForNotificationViewController:(id)arg1;
- (void)updateNotificationSectionSettings:(id)arg1 previousSectionSettings:(id)arg2;
- (void)willTearDownNotificationListCell:(id)arg1;

@end
