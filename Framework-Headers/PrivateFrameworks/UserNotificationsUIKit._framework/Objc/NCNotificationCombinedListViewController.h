//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserNotificationsUIKit/NCNotificationListViewController.h>

#import <UserNotificationsUIKit/NCNotificationListSectionHeaderViewDelegate-Protocol.h>
#import <UserNotificationsUIKit/NCNotificationSectionListDelegate-Protocol.h>
#import <UserNotificationsUIKit/UIGestureRecognizerDelegate-Protocol.h>

@class NCAnimationCoordinator, NCNotificationListSectionHeaderView, NCNotificationListSectionRevealHintView, NCNotificationListStalenessEventTracker, NCNotificationPriorityList, NSMutableSet, NSString, _UILegibilitySettings, _UIStatesFeedbackGenerator;
@protocol NCNotificationSectionList, UIViewControllerTransitionCoordinator;

@interface NCNotificationCombinedListViewController : NCNotificationListViewController <NCNotificationSectionListDelegate, NCNotificationListSectionHeaderViewDelegate, UIGestureRecognizerDelegate>
{
    BOOL _showingNotificationsHistory;
    BOOL _didPlayRevealHaptic;
    BOOL _shouldLimitTargetContentOffsetForNotificationListReveal;
    BOOL _collectionViewRectExpanded;
    BOOL _notificationHistoryRevealedStateLocked;
    BOOL _notificationHistorySectionNeedsReload;
    BOOL _performingBatchedSectionListOperations;
    BOOL _shouldPerformReloadForBatchedOperations;
    BOOL _shouldAllowNotificationsHistoryReveal;
    int _revealListTriggerState;
    NCNotificationPriorityList *_notificationPriorityList;
    id<NCNotificationSectionList> _notificationSectionList;
    NCAnimationCoordinator *_requestOperationAnimationCoordinator;
    id<UIViewControllerTransitionCoordinator> _lastDismissalTransitionCoordinator;
    NCNotificationListSectionHeaderView *_headerViewInClearState;
    NCNotificationListSectionHeaderView *_headerViewInForceTouchState;
    NCNotificationListSectionRevealHintView *_revealHintView;
    double _prioritySectionLowestPosition;
    _UIStatesFeedbackGenerator *_revealFeedbackGenerator;
    NCNotificationListStalenessEventTracker *_notificationListStalenessEventTracker;
    NSMutableSet *_notificationRequestsRemovedFromNotificationCenterDestination;
    _UILegibilitySettings *_legibilitySettings;
}

@property (nonatomic, getter=isCollectionViewRectExpanded) BOOL collectionViewRectExpanded; // @synthesize collectionViewRectExpanded=_collectionViewRectExpanded;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didPlayRevealHaptic; // @synthesize didPlayRevealHaptic=_didPlayRevealHaptic;
@property (readonly, nonatomic) struct CGSize effectiveContentSize;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) NCNotificationListSectionHeaderView *headerViewInClearState; // @synthesize headerViewInClearState=_headerViewInClearState;
@property (weak, nonatomic) NCNotificationListSectionHeaderView *headerViewInForceTouchState; // @synthesize headerViewInForceTouchState=_headerViewInForceTouchState;
@property (strong, nonatomic) id<UIViewControllerTransitionCoordinator> lastDismissalTransitionCoordinator; // @synthesize lastDismissalTransitionCoordinator=_lastDismissalTransitionCoordinator;
@property (strong, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property (nonatomic, getter=isNotificationHistoryRevealedStateLocked) BOOL notificationHistoryRevealedStateLocked; // @synthesize notificationHistoryRevealedStateLocked=_notificationHistoryRevealedStateLocked;
@property (nonatomic) BOOL notificationHistorySectionNeedsReload; // @synthesize notificationHistorySectionNeedsReload=_notificationHistorySectionNeedsReload;
@property (strong, nonatomic) NCNotificationListStalenessEventTracker *notificationListStalenessEventTracker; // @synthesize notificationListStalenessEventTracker=_notificationListStalenessEventTracker;
@property (strong, nonatomic) NCNotificationPriorityList *notificationPriorityList; // @synthesize notificationPriorityList=_notificationPriorityList;
@property (strong, nonatomic) NSMutableSet *notificationRequestsRemovedFromNotificationCenterDestination; // @synthesize notificationRequestsRemovedFromNotificationCenterDestination=_notificationRequestsRemovedFromNotificationCenterDestination;
@property (strong, nonatomic) id<NCNotificationSectionList> notificationSectionList; // @synthesize notificationSectionList=_notificationSectionList;
@property (nonatomic, getter=isPerformingBatchedSectionListOperations) BOOL performingBatchedSectionListOperations; // @synthesize performingBatchedSectionListOperations=_performingBatchedSectionListOperations;
@property (nonatomic) double prioritySectionLowestPosition; // @synthesize prioritySectionLowestPosition=_prioritySectionLowestPosition;
@property (strong, nonatomic) NCAnimationCoordinator *requestOperationAnimationCoordinator; // @synthesize requestOperationAnimationCoordinator=_requestOperationAnimationCoordinator;
@property (strong, nonatomic) _UIStatesFeedbackGenerator *revealFeedbackGenerator; // @synthesize revealFeedbackGenerator=_revealFeedbackGenerator;
@property (strong, nonatomic) NCNotificationListSectionRevealHintView *revealHintView; // @synthesize revealHintView=_revealHintView;
@property (nonatomic) int revealListTriggerState; // @synthesize revealListTriggerState=_revealListTriggerState;
@property (nonatomic) BOOL shouldAllowNotificationsHistoryReveal; // @synthesize shouldAllowNotificationsHistoryReveal=_shouldAllowNotificationsHistoryReveal;
@property (nonatomic) BOOL shouldLimitTargetContentOffsetForNotificationListReveal; // @synthesize shouldLimitTargetContentOffsetForNotificationListReveal=_shouldLimitTargetContentOffsetForNotificationListReveal;
@property (nonatomic) BOOL shouldPerformReloadForBatchedOperations; // @synthesize shouldPerformReloadForBatchedOperations=_shouldPerformReloadForBatchedOperations;
@property (nonatomic, getter=isShowingNotificationsHistory) BOOL showingNotificationsHistory; // @synthesize showingNotificationsHistory=_showingNotificationsHistory;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_actuateFeedbackForRevealIfNecessary;
- (void)_actuateFeedbackForRevealInvalidationIfNecessary;
- (double)_adjustedFrictionForRevealAnimation;
- (unsigned long long)_adjustedSectionIndexForCollectionViewOperation:(unsigned long long)arg1;
- (unsigned long long)_adjustedSectionIndexForListOperation:(unsigned long long)arg1;
- (id)_adjustedSectionIndexPathForCollectionViewOperation:(id)arg1;
- (id)_adjustedSectionIndexPathForListOperation:(id)arg1;
- (double)_adjustedTensionForRevealAnimation;
- (void)_clearAllPriorityListNotificationRequests;
- (void)_clearAllSectionListNotificationRequests;
- (void)_configureRevealFeedbackIfNecessary;
- (void)_createRequestOperationAnimationCoordinatorForInitialContentPresentation:(BOOL)arg1;
- (void)_expandCollectionViewVisibleRect;
- (id)_filteredIndexPathsForAnimationFromIndexPaths:(id)arg1;
- (double)_forcedContentSizeHeight;
- (void)_hideNotificationsHistory;
- (BOOL)_isNotificationHistoryTopSectionHeaderVisible;
- (BOOL)_isNotificationRequestForLockScreenNotificationDestination:(id)arg1;
- (BOOL)_isNotificationRequestForNotificationCenterDestination:(id)arg1;
- (BOOL)_isPrioritySectionSizeLessThanFrameForScrollView:(id)arg1;
- (BOOL)_isRevealHintViewVisible;
- (void)_moveNotificationRequestsToHistorySectionPassingTest:(CDUnknownBlockType)arg1 animated:(BOOL)arg2 movedAll:(BOOL)arg3;
- (id)_notificationHistorySectionTopSectionHeader;
- (unsigned long long)_numberOfElementsInPreviousSectionsFromSection:(unsigned long long)arg1;
- (void)_performBatchedSectionListOperations:(CDUnknownBlockType)arg1;
- (void)_performHideAnimationForNotificationCellsWithRevealPercentage:(double)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_performHideAnimationForSectionHeadersWithRevealPercentage:(double)arg1;
- (void)_performNotificationHistorySectionOperation:(CDUnknownBlockType)arg1 animated:(BOOL)arg2 delayAnimation:(BOOL)arg3;
- (void)_performNotificationIncomingSectionOperation:(CDUnknownBlockType)arg1 delayAnimation:(BOOL)arg2;
- (void)_performRequestOperationAlongsideAnimations;
- (void)_performRevealAnimationForNotificationCellsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_performRevealAnimationForSectionHeaders;
- (void)_reloadNotificationHistorySectionIfNecessary;
- (id)_requestSectionsForNotificationRequests:(id)arg1;
- (void)_resetCollectionViewVisibleRectEdgeInsets;
- (void)_resetContentOffset;
- (void)_resetNotificationsHistory;
- (double)_revealAnimationDelayForObjectAtIndexPath:(id)arg1;
- (double)_revealDistanceForScrollView:(id)arg1;
- (double)_revealHintViewPosition;
- (double)_revealHintingCurvePercentageForIndexPath:(id)arg1 revealPercentage:(double)arg2;
- (void)_revealNotificationsHistory;
- (double)_revealPercentageForScrollView:(id)arg1;
- (void)_setShowingNotificationsHistory:(BOOL)arg1;
- (void)_setShowingNotificationsHistory:(BOOL)arg1 animated:(BOOL)arg2;
- (double)_settlingYPositionForRevealForScrollView:(id)arg1;
- (BOOL)_shouldShowRevealHintView;
- (void)_updateCellForRevealPercentage:(double)arg1 atIndexPath:(id)arg2;
- (void)_updateNotificationCellsRevealHintingForRevealPercentage:(double)arg1;
- (void)_updateNotificationHistoryRevealStateIfEmpty;
- (void)_updatePrioritySectionLowestPosition;
- (void)_updateRaiseToListenRequest;
- (void)_updateRevealHintViewForListOperation;
- (void)_updateRevealHintViewIfNotificationsHistoryEmpty;
- (void)_updateRevealHintViewRevealPercentageForScrollView:(id)arg1;
- (void)_updateRevealHintViewTitleDate;
- (void)_updateRevealHintViewTitlePersistence;
- (void)_updateRevealHintingForPercentage:(double)arg1 scrollView:(id)arg2;
- (void)_updateScrollViewForcedContentSizeHeight;
- (void)_updateSectionHeadersRevealHintingForRevealPercentage:(double)arg1;
- (void)_updateShouldAllowNotificationsHistoryReveal;
- (void)_updateSupplementaryView:(id)arg1 layoutAttributes:(id)arg2 forRevealPercentage:(double)arg3 atIndexPath:(id)arg4;
- (double)_yOffsetForRevealPercentage:(double)arg1;
- (id)allNotificationRequests;
- (void)clearAll;
- (void)clearAllNonPersistent;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 performUpdatesAlongsideLayout:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (BOOL)dismissModalFullScreenAnimated:(BOOL)arg1;
- (void)forceNotificationHistoryRevealed:(BOOL)arg1 animated:(BOOL)arg2;
- (void)handleEatenTouchBeginStateForGestureRecognizer:(id)arg1;
- (void)handleEatenTouchEndStateForGestureRecognizer:(id)arg1;
- (BOOL)hasContent;
- (BOOL)hasVisibleContent;
- (void)hideNotificationsFromIncomingSectionListForSectionIdentifier:(id)arg1 subSectionIdentifer:(id)arg2;
- (void)hideRequestsForNotificationSectionIdentifier:(id)arg1 subSectionIdentifier:(id)arg2;
- (id)indexPathForNotificationRequest:(id)arg1;
- (id)init;
- (BOOL)insertNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (void)insertNotificationRequestIntoRecentsSection:(id)arg1 forCoalescedNotification:(id)arg2;
- (void)insertNotificationRequestsInIncomingSection:(id)arg1;
- (void)insertNotificationRequestsInNotificationHistorySection:(id)arg1;
- (BOOL)isNotificationRequestInRecentsSection:(id)arg1;
- (void)listViewControllerPresentedByUserAction;
- (void)longLookDidDismissForNotificationViewController:(id)arg1;
- (void)longLookWillDismissForNotificationViewController:(id)arg1;
- (void)longLookWillPresentForNotificationViewController:(id)arg1;
- (BOOL)modifyNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (void)moveNotificationRequestsToRecentsSectionPassingTest:(CDUnknownBlockType)arg1 animated:(BOOL)arg2;
- (id)notificationRequestAtIndexPath:(id)arg1;
- (void)notificationSectionList:(id)arg1 didInsertNotificationRequest:(id)arg2 atIndexPath:(id)arg3;
- (void)notificationSectionList:(id)arg1 didInsertSectionAtIndex:(unsigned long long)arg2;
- (void)notificationSectionList:(id)arg1 didRemoveNotificationRequest:(id)arg2 atIndexPath:(id)arg3;
- (void)notificationSectionList:(id)arg1 didRemoveSectionAtIndex:(unsigned long long)arg2;
- (void)notificationSectionList:(id)arg1 didRemoveSectionsAtIndices:(id)arg2;
- (void)notificationSectionList:(id)arg1 didReplaceNotificationRequest:(id)arg2 atIndexPath:(id)arg3;
- (void)notificationSectionList:(id)arg1 requestsReloadAtIndices:(id)arg2;
- (void)notificationSectionListNeedsReload:(id)arg1;
- (long long)notificationViewControllerDateFormatStyle:(id)arg1;
- (BOOL)notificationViewControllerShouldInterpretTapAsDefaultAction:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)reloadNotificationRequestsInIncomingSection:(id)arg1;
- (void)reloadNotificationRequestsInNotificationHistorySection:(id)arg1;
- (void)reloadRequestsWithSuppressedContent;
- (void)removeNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (void)removeNotificationRequestFromRecentsSection:(id)arg1 forCoalescedNotification:(id)arg2;
- (void)removeNotificationRequestsInIncomingSection:(id)arg1;
- (void)removeNotificationRequestsInNotificationHistorySection:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)sectionHeaderView:(id)arg1 didReceiveClearActionForSectionIdentifier:(id)arg2;
- (void)sectionHeaderViewDidDismissForceTouchView:(id)arg1;
- (void)sectionHeaderViewDidPresentForceTouchView:(id)arg1;
- (void)sectionHeaderViewDidReceiveClearAllAction:(id)arg1;
- (void)sectionHeaderViewDidTransitionToClearState:(id)arg1;
- (BOOL)shouldReceiveTouch:(id)arg1 forGestureRecognizer:(id)arg2;
- (void)showRequestsForNotificationSectionIdentifier:(id)arg1 subSectionIdentifier:(id)arg2;
- (void)updateForLegibilitySettings:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;

@end

