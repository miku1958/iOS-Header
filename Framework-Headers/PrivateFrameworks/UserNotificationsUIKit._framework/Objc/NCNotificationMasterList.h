//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotificationsUIKit/NCNotificationListComponent-Protocol.h>
#import <UserNotificationsUIKit/NCNotificationListRevealCoordinatorDelegate-Protocol.h>
#import <UserNotificationsUIKit/NCNotificationListViewDataSource-Protocol.h>
#import <UserNotificationsUIKit/NCNotificationManagementSuggestionManagerDelegate-Protocol.h>
#import <UserNotificationsUIKit/NCNotificationStructuredSectionListDelegate-Protocol.h>
#import <UserNotificationsUIKit/UIGestureRecognizerDelegate-Protocol.h>
#import <UserNotificationsUIKit/UIScrollViewDelegate-Protocol.h>

@class NCNotificationListCache, NCNotificationListRevealCoordinator, NCNotificationListStalenessEventTracker, NCNotificationListView, NCNotificationManagementSuggestionManager, NCNotificationStructuredSectionList, NSMutableArray, NSString;
@protocol NCNotificationMasterListDelegate;

@interface NCNotificationMasterList : NSObject <NCNotificationListViewDataSource, NCNotificationListRevealCoordinatorDelegate, UIScrollViewDelegate, UIGestureRecognizerDelegate, NCNotificationStructuredSectionListDelegate, NCNotificationManagementSuggestionManagerDelegate, NCNotificationListComponent>
{
    BOOL _deviceAuthenticated;
    BOOL _adjustsFontForContentSizeCategory;
    BOOL _notificationHistoryRevealed;
    BOOL _shouldAllowNotificationHistoryReveal;
    BOOL _missedSectionActive;
    NSString *_logDescription;
    id<NCNotificationMasterListDelegate> _delegate;
    NCNotificationListView *_masterListView;
    NCNotificationManagementSuggestionManager *_suggestionManager;
    NSMutableArray *_notificationSections;
    NCNotificationListRevealCoordinator *_revealCoordinator;
    NCNotificationListCache *_notificationListCache;
    NCNotificationListStalenessEventTracker *_notificationListStalenessEventTracker;
    NCNotificationStructuredSectionList *_incomingSectionList;
    NCNotificationStructuredSectionList *_historySectionList;
    NCNotificationStructuredSectionList *_missedSectionList;
    CDUnknownBlockType _scrollCompletionBlock;
    double _scrollCompletionBlockOffsetThreshold;
}

@property (nonatomic) BOOL adjustsFontForContentSizeCategory; // @synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<NCNotificationMasterListDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDeviceAuthenticated) BOOL deviceAuthenticated; // @synthesize deviceAuthenticated=_deviceAuthenticated;
@property (readonly, nonatomic) BOOL hasVisibleContentToReveal;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NCNotificationStructuredSectionList *historySectionList; // @synthesize historySectionList=_historySectionList;
@property (strong, nonatomic) NCNotificationStructuredSectionList *incomingSectionList; // @synthesize incomingSectionList=_incomingSectionList;
@property (copy, nonatomic) NSString *logDescription; // @synthesize logDescription=_logDescription;
@property (strong, nonatomic) NCNotificationListView *masterListView; // @synthesize masterListView=_masterListView;
@property (nonatomic, getter=isMissedSectionActive) BOOL missedSectionActive; // @synthesize missedSectionActive=_missedSectionActive;
@property (strong, nonatomic) NCNotificationStructuredSectionList *missedSectionList; // @synthesize missedSectionList=_missedSectionList;
@property (readonly, nonatomic) unsigned long long notificationCount;
@property (nonatomic, getter=isNotificationHistoryRevealed) BOOL notificationHistoryRevealed; // @synthesize notificationHistoryRevealed=_notificationHistoryRevealed;
@property (strong, nonatomic) NCNotificationListCache *notificationListCache; // @synthesize notificationListCache=_notificationListCache;
@property (strong, nonatomic) NCNotificationListStalenessEventTracker *notificationListStalenessEventTracker; // @synthesize notificationListStalenessEventTracker=_notificationListStalenessEventTracker;
@property (strong, nonatomic) NSMutableArray *notificationSections; // @synthesize notificationSections=_notificationSections;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (strong, nonatomic) NCNotificationListRevealCoordinator *revealCoordinator; // @synthesize revealCoordinator=_revealCoordinator;
@property (copy, nonatomic) CDUnknownBlockType scrollCompletionBlock; // @synthesize scrollCompletionBlock=_scrollCompletionBlock;
@property (nonatomic) double scrollCompletionBlockOffsetThreshold; // @synthesize scrollCompletionBlockOffsetThreshold=_scrollCompletionBlockOffsetThreshold;
@property (nonatomic) BOOL shouldAllowNotificationHistoryReveal; // @synthesize shouldAllowNotificationHistoryReveal=_shouldAllowNotificationHistoryReveal;
@property (strong, nonatomic) NCNotificationManagementSuggestionManager *suggestionManager; // @synthesize suggestionManager=_suggestionManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_filterNotificationsInGroupLists:(id)arg1 withDestinationsForSectionList:(id)arg2;
- (void)_insertNotificationRequest:(id)arg1;
- (BOOL)_isNotificationRequest:(id)arg1 forSectionList:(id)arg2;
- (void)_migrateNotificationsFromList:(id)arg1 toList:(id)arg2 passingTest:(CDUnknownBlockType)arg3 hideToList:(BOOL)arg4 clearRequests:(BOOL)arg5 filterPersistentRequests:(BOOL)arg6;
- (id)_newMissedSectionListForReason:(unsigned long long)arg1;
- (id)_newNotificationSectionListWithTitle:(id)arg1 notificationListViewRevealed:(BOOL)arg2 logDescription:(id)arg3;
- (void)_regroupAllNotificationGroups;
- (id)_sectionForNotificationRequest:(id)arg1;
- (void)_setupNotificationSectionLists;
- (BOOL)_shouldDNDDelayDeliveryOfNotificationRequest:(id)arg1;
- (void)_sortNotificationGroupsIfNecessary;
- (void)_updateVisibleRectForContentOffset:(struct CGPoint)arg1;
- (BOOL)adjustForContentSizeCategoryChange;
- (void)adjustForLegibilitySettingsChange:(id)arg1;
- (void)collapseGroupForNotificationRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)expandGroupForNotificationRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)forwardInvocation:(id)arg1;
- (id)init;
- (void)insertNotificationRequest:(id)arg1;
- (void)listViewControllerPresentedByUserAction;
- (void)migrateNotifications;
- (void)modifyNotificationRequest:(id)arg1;
- (void)notificationListComponentRequestsClearingAllNotificationRequests:(id)arg1;
- (void)notificationListRevealCoordinator:(id)arg1 updatedRevealState:(BOOL)arg2;
- (BOOL)notificationListRevealCoordinatorShouldAllowReveal:(id)arg1;
- (double)notificationListView:(id)arg1 heightForItemAtIndex:(unsigned long long)arg2;
- (id)notificationListView:(id)arg1 viewForItemAtIndex:(unsigned long long)arg2;
- (BOOL)notificationListViewIsGroup:(id)arg1;
- (unsigned long long)notificationListViewNumberOfItems:(id)arg1;
- (void)notificationManagementSuggestionManager:(id)arg1 requestsPresentingNotificationManagementViewType:(unsigned long long)arg2 forNotificationRequest:(id)arg3 withPresentingView:(id)arg4;
- (id)notificationManagementSuggestionManager:(id)arg1 requestsSectionSettingsForSectionIdentifier:(id)arg2;
- (void)notificationManagementSuggestionManager:(id)arg1 requestsUpdatingContentForNotificationRequest:(id)arg2;
- (id)notificationRequestWithNotificationIdentifier:(id)arg1 sectionIdentifier:(id)arg2;
- (id)notificationStructuredSectionList:(id)arg1 requestsAuxiliaryOptionsContentProviderForNotificationRequest:(id)arg2 isLongLook:(BOOL)arg3;
- (void)notificationStructuredSectionList:(id)arg1 requestsScrollingToContentOffset:(double)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (BOOL)notificationStructuredSectionList:(id)arg1 shouldFilterNotificationRequest:(id)arg2;
- (BOOL)notificationStructuredSectionList:(id)arg1 shouldScrollToTopForGroupList:(id)arg2;
- (void)notificationsLoadedForSectionIdentifier:(id)arg1;
- (void)recycleView:(id)arg1;
- (void)reloadNotificationRequest:(id)arg1;
- (void)removeNotificationRequest:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)revealCoordinatorDidScrollToReveal:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (id)subListsForNotificationListRevealCoordinator:(id)arg1;
- (void)toggleFilteringForSectionIdentifier:(id)arg1 shouldFilter:(BOOL)arg2;
- (void)toggleMissedSectionActive:(BOOL)arg1 reason:(unsigned long long)arg2;
- (void)updateNotificationSectionSettings:(id)arg1 previousSectionSettings:(id)arg2;

@end

