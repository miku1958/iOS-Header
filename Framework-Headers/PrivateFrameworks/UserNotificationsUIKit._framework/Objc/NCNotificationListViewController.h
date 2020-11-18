//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>

#import <UserNotificationsUIKit/NCNotificationListCellDelegate-Protocol.h>
#import <UserNotificationsUIKit/NCNotificationListCollectionViewDelegate-Protocol.h>
#import <UserNotificationsUIKit/NCNotificationViewControllerDelegatePrivate-Protocol.h>
#import <UserNotificationsUIKit/UIGestureRecognizerDelegate-Protocol.h>

@class NCAnimationCoordinator, NCNotificationListCell, NCNotificationListTouchEater, NCNotificationViewController, NSHashTable, NSMutableDictionary, NSString;
@protocol NCNotificationListViewControllerDestinationDelegate, NCNotificationListViewControllerUserInteractionDelegate;

@interface NCNotificationListViewController : UICollectionViewController <NCNotificationListCellDelegate, UIGestureRecognizerDelegate, NCNotificationViewControllerDelegatePrivate, NCNotificationListCollectionViewDelegate>
{
    BOOL _backgroundBlurred;
    BOOL _needsReloadData;
    BOOL _notificationRequestRemovedWhilePossiblyInLongLook;
    BOOL _notificationRequestRemovedWhileInLongLook;
    CDStruct_27a46a9e _userInteractionDelegateFlags;
    id<NCNotificationListViewControllerUserInteractionDelegate> _userInteractionDelegate;
    id<NCNotificationListViewControllerDestinationDelegate> _destinationDelegate;
    NCNotificationViewController *_notificationViewControllerForSizing;
    NCNotificationViewController *_viewControllerPresentingLongLook;
    NCNotificationViewController *_viewControllerPossiblyPresentingLongLook;
    NSMutableDictionary *_cellsSizesCaches;
    NSMutableDictionary *_cellsSizesCachesSuppressedContent;
    NSHashTable *_observers;
    NCNotificationListTouchEater *_touchEater;
    NCNotificationListCell *_cellWithRevealedActions;
    NCAnimationCoordinator *_childPreferredContentSizeChangeCoordinator;
    struct UIEdgeInsets _insetMargins;
}

@property (nonatomic, getter=isBackgroundBlurred) BOOL backgroundBlurred; // @synthesize backgroundBlurred=_backgroundBlurred;
@property (readonly, nonatomic) NSString *backgroundGroupName;
@property (weak, nonatomic) NCNotificationListCell *cellWithRevealedActions; // @synthesize cellWithRevealedActions=_cellWithRevealedActions;
@property (strong, nonatomic) NSMutableDictionary *cellsSizesCaches; // @synthesize cellsSizesCaches=_cellsSizesCaches;
@property (strong, nonatomic) NSMutableDictionary *cellsSizesCachesSuppressedContent; // @synthesize cellsSizesCachesSuppressedContent=_cellsSizesCachesSuppressedContent;
@property (strong, nonatomic) NCAnimationCoordinator *childPreferredContentSizeChangeCoordinator; // @synthesize childPreferredContentSizeChangeCoordinator=_childPreferredContentSizeChangeCoordinator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) id<NCNotificationListViewControllerDestinationDelegate> destinationDelegate; // @synthesize destinationDelegate=_destinationDelegate;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) struct UIEdgeInsets insetMargins; // @synthesize insetMargins=_insetMargins;
@property (readonly, nonatomic) double itemSpacing;
@property (nonatomic) BOOL needsReloadData; // @synthesize needsReloadData=_needsReloadData;
@property (nonatomic) BOOL notificationRequestRemovedWhileInLongLook; // @synthesize notificationRequestRemovedWhileInLongLook=_notificationRequestRemovedWhileInLongLook;
@property (nonatomic) BOOL notificationRequestRemovedWhilePossiblyInLongLook; // @synthesize notificationRequestRemovedWhilePossiblyInLongLook=_notificationRequestRemovedWhilePossiblyInLongLook;
@property (strong, nonatomic) NCNotificationViewController *notificationViewControllerForSizing; // @synthesize notificationViewControllerForSizing=_notificationViewControllerForSizing;
@property (strong, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property (readonly, nonatomic, getter=isPresentingNotificationInLongLook) BOOL presentingNotificationInLongLook;
@property (readonly) Class superclass;
@property (strong, nonatomic) NCNotificationListTouchEater *touchEater; // @synthesize touchEater=_touchEater;
@property (weak, nonatomic) id<NCNotificationListViewControllerUserInteractionDelegate> userInteractionDelegate; // @synthesize userInteractionDelegate=_userInteractionDelegate;
@property (nonatomic) CDStruct_27a46a9e userInteractionDelegateFlags; // @synthesize userInteractionDelegateFlags=_userInteractionDelegateFlags;
@property (strong, nonatomic) NCNotificationViewController *viewControllerPossiblyPresentingLongLook; // @synthesize viewControllerPossiblyPresentingLongLook=_viewControllerPossiblyPresentingLongLook;
@property (strong, nonatomic) NCNotificationViewController *viewControllerPresentingLongLook; // @synthesize viewControllerPresentingLongLook=_viewControllerPresentingLongLook;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_forceTouchAvailabilityDidChange:(id)arg1;
- (BOOL)_forwardRequestToLongLookIfPresented:(id)arg1 forCoalescedNotification:(id)arg2;
- (id)_groupName;
- (void)_handleEatenTouch:(id)arg1;
- (void)_hintSideSwipeForDefaultActionForNotificationRequest:(id)arg1;
- (void)_installTouchEater;
- (BOOL)_isContentSuppressedForNotificationRequest:(id)arg1;
- (BOOL)_isPointInWindowSpace:(struct CGPoint)arg1 insideCell:(id)arg2;
- (id)_notificationRequestForCell:(id)arg1;
- (void)_performCollectionViewOperationBlock:(CDUnknownBlockType)arg1;
- (void)_performCollectionViewOperationBlockIfNecessary:(CDUnknownBlockType)arg1;
- (void)_reloadCollectionViewDataIfNecessary;
- (void)_reloadRequestsAtIndices:(id)arg1;
- (void)_removeCachedSizesForNotificationRequest:(id)arg1;
- (void)addContentObserver:(id)arg1;
- (id)captureOnlyMaterialViewForCurrentState;
- (void)clearAll;
- (void)clearAllNonPersistent;
- (BOOL)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 canPerformAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 performUpdatesAlongsideLayout:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldShowMenuForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (BOOL)dismissModalFullScreenAnimated:(BOOL)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)handleEatenTouchBeginStateForGestureRecognizer:(id)arg1;
- (void)handleEatenTouchEndStateForGestureRecognizer:(id)arg1;
- (BOOL)hasContent;
- (BOOL)hasVisibleContent;
- (id)hideHomeAffordanceAnimationSettingsForNotificationViewController:(id)arg1;
- (void)hideRequestsForNotificationSectionIdentifier:(id)arg1 subSectionIdentifier:(id)arg2;
- (void)hideRequestsForNotificationSectionSettings:(id)arg1;
- (id)indexPathForNotificationRequest:(id)arg1;
- (id)init;
- (BOOL)insertNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (BOOL)isContentExtensionVisible:(id)arg1;
- (BOOL)isNotificationListCellVisibleForNotificationRequest:(id)arg1;
- (void)listViewControllerPresentedByUserAction;
- (void)loadView;
- (void)longLookDidDismissForNotificationViewController:(id)arg1;
- (void)longLookDidPresentForNotificationViewController:(id)arg1;
- (void)longLookWillDismissForNotificationViewController:(id)arg1;
- (void)longLookWillPresentForNotificationViewController:(id)arg1;
- (BOOL)modifyNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (BOOL)notificationListCell:(id)arg1 shouldPanHorizontallyWithTouch:(id)arg2;
- (void)notificationListCellDidHideCellActions:(id)arg1 resetCellScrollPosition:(BOOL)arg2 animated:(BOOL)arg3;
- (void)notificationListCellDidRevealCellActions:(id)arg1;
- (void)notificationListCellDidSignificantUserInteraction:(id)arg1;
- (void)notificationListCellRequestsDefaultAction:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)notificationListCellRequestsDismissAction:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)notificationListCellRequestsPresentingLongLook:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)notificationListCollectionView:(id)arg1 willSetFrame:(struct CGRect)arg2;
- (id)notificationRequestAtIndexPath:(id)arg1;
- (id)notificationRequestInLongLook;
- (id)notificationRequestPossiblyInLongLook;
- (id)notificationRequestsPassingTest:(CDUnknownBlockType)arg1;
- (id)notificationUsageTrackingStateForNotificationViewController:(id)arg1;
- (void)notificationViewController:(id)arg1 executeAction:(id)arg2 withParameters:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)notificationViewController:(id)arg1 requestPermissionToExecuteAction:(id)arg2 withParameters:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)notificationViewController:(id)arg1 shouldFinishLongLookTransitionWithCompletionBlock:(CDUnknownBlockType)arg2;
- (id)notificationViewController:(id)arg1 staticContentProviderForNotificationRequest:(id)arg2;
- (void)notificationViewControllerDidEndUserInteraction:(id)arg1;
- (BOOL)notificationViewControllerShouldAllowInteractionGesture:(id)arg1;
- (BOOL)notificationViewControllerShouldBlurShortLook:(id)arg1;
- (void)notificationViewControllerWillBeginUserInteraction:(id)arg1;
- (void)notifyContentObservers;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)reloadNotificationRequest:(id)arg1;
- (void)reloadNotificationRequests:(id)arg1 clearCachedSizes:(BOOL)arg2;
- (void)reloadRequestsWithSuppressedContent;
- (void)removeContentObserver:(id)arg1;
- (void)removeNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (BOOL)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)setCustomContentHomeAffordanceVisible:(BOOL)arg1 withGestureRecognizer:(id)arg2;
- (void)setTouchEaterEnabled:(BOOL)arg1;
- (id)settleHomeAffordanceAnimationBehaviorDescriptionForNotificationViewController:(id)arg1;
- (BOOL)shouldReceiveTouch:(id)arg1 forGestureRecognizer:(id)arg2;
- (BOOL)showAdditionalMessageLinesForNotificationViewController:(id)arg1;
- (void)showRequestsForNotificationSectionIdentifier:(id)arg1 subSectionIdentifier:(id)arg2;
- (void)showRequestsForNotificationSectionSettings:(id)arg1;
- (id)unhideHomeAffordanceAnimationSettingsForNotificationViewController:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willTearDownNotificationListCell:(id)arg1;

@end
