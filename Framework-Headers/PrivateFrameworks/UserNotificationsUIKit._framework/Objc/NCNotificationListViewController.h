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

@class NCAnimationCoordinator, NCNotificationListCell, NCNotificationListTouchEater, NCNotificationRequest, NCNotificationViewController, NSHashTable, NSMutableDictionary, NSString;
@protocol NCNotificationListViewControllerDestinationDelegate, NCNotificationListViewControllerUserInteractionDelegate;

@interface NCNotificationListViewController : UICollectionViewController <NCNotificationListCellDelegate, UIGestureRecognizerDelegate, NCNotificationViewControllerDelegatePrivate, NCNotificationListCollectionViewDelegate>
{
    BOOL _backgroundBlurred;
    BOOL _supportsSwipeToDefaultAction;
    BOOL _needsReloadData;
    BOOL _notificationRequestRemovedWhileInLongLook;
    CDStruct_8a64f050 _userInteractionDelegateFlags;
    id<NCNotificationListViewControllerUserInteractionDelegate> _userInteractionDelegate;
    id<NCNotificationListViewControllerDestinationDelegate> _destinationDelegate;
    NCNotificationViewController *_notificationViewControllerForSizing;
    NCNotificationViewController *_viewControllerPresentingLongLook;
    NSMutableDictionary *_cellsSizesCaches;
    NSHashTable *_observers;
    NCNotificationListTouchEater *_touchEater;
    NCNotificationListCell *_cellWithRevealedActions;
    NCAnimationCoordinator *_childPreferredContentSizeChangeCoordinator;
    struct UIEdgeInsets _insetMargins;
}

@property (nonatomic, getter=isBackgroundBlurred) BOOL backgroundBlurred; // @synthesize backgroundBlurred=_backgroundBlurred;
@property (weak, nonatomic) NCNotificationListCell *cellWithRevealedActions; // @synthesize cellWithRevealedActions=_cellWithRevealedActions;
@property (strong, nonatomic) NSMutableDictionary *cellsSizesCaches; // @synthesize cellsSizesCaches=_cellsSizesCaches;
@property (strong, nonatomic) NCAnimationCoordinator *childPreferredContentSizeChangeCoordinator; // @synthesize childPreferredContentSizeChangeCoordinator=_childPreferredContentSizeChangeCoordinator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) id<NCNotificationListViewControllerDestinationDelegate> destinationDelegate; // @synthesize destinationDelegate=_destinationDelegate;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) struct UIEdgeInsets insetMargins; // @synthesize insetMargins=_insetMargins;
@property (nonatomic) BOOL needsReloadData; // @synthesize needsReloadData=_needsReloadData;
@property (nonatomic) BOOL notificationRequestRemovedWhileInLongLook; // @synthesize notificationRequestRemovedWhileInLongLook=_notificationRequestRemovedWhileInLongLook;
@property (readonly, strong, nonatomic) NCNotificationRequest *notificationRequestWithHintText;
@property (strong, nonatomic) NCNotificationViewController *notificationViewControllerForSizing; // @synthesize notificationViewControllerForSizing=_notificationViewControllerForSizing;
@property (strong, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsSwipeToDefaultAction; // @synthesize supportsSwipeToDefaultAction=_supportsSwipeToDefaultAction;
@property (strong, nonatomic) NCNotificationListTouchEater *touchEater; // @synthesize touchEater=_touchEater;
@property (weak, nonatomic) id<NCNotificationListViewControllerUserInteractionDelegate> userInteractionDelegate; // @synthesize userInteractionDelegate=_userInteractionDelegate;
@property (nonatomic) CDStruct_8a64f050 userInteractionDelegateFlags; // @synthesize userInteractionDelegateFlags=_userInteractionDelegateFlags;
@property (strong, nonatomic) NCNotificationViewController *viewControllerPresentingLongLook; // @synthesize viewControllerPresentingLongLook=_viewControllerPresentingLongLook;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_forceTouchAvailabilityDidChange:(id)arg1;
- (BOOL)_forwardRequestToLongLookIfPresented:(id)arg1 forCoalescedNotification:(id)arg2;
- (id)_groupName;
- (void)_handleEatenTouch:(id)arg1;
- (void)_installTouchEater;
- (BOOL)_isPointInWindowSpace:(struct CGPoint)arg1 insideCell:(id)arg2;
- (id)_materialSettings;
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
- (id)customBackgroundViewForNotificationListCell:(id)arg1;
- (id)customBackgroundViewForNotificationViewController:(id)arg1;
- (BOOL)dismissModalFullScreenAnimated:(BOOL)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)handleEatenTouchBeginStateForGestureRecognizer:(id)arg1;
- (void)handleEatenTouchEndStateForGestureRecognizer:(id)arg1;
- (BOOL)hasContent;
- (BOOL)hasVisibleContent;
- (void)hideRequestsForNotificationSectionIdentifier:(id)arg1 subSectionIdentifier:(id)arg2;
- (id)indexPathForNotificationRequest:(id)arg1;
- (id)init;
- (BOOL)insertNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (BOOL)isContentExtensionVisible:(id)arg1;
- (void)loadView;
- (void)longLookWillPresentForNotificationViewController:(id)arg1;
- (id)materialSettingsForNotificationViewController:(id)arg1;
- (BOOL)modifyNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (void)notificationListCell:(id)arg1 requestsClearingNotificationRequest:(id)arg2;
- (void)notificationListCell:(id)arg1 requestsPerformAction:(id)arg2 forNotificationRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)notificationListCell:(id)arg1 requestsPresentingLongLookForNotificationRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)notificationListCellDidSignificantUserInteraction:(id)arg1;
- (void)notificationListCellHideCellActions:(id)arg1 resetCellScrollPosition:(BOOL)arg2 animated:(BOOL)arg3;
- (void)notificationListCellRevealCellActions:(id)arg1;
- (BOOL)notificationListCellShouldShowActionsForNotificationRequest:(id)arg1;
- (void)notificationListCollectionView:(id)arg1 willSetFrame:(struct CGRect)arg2;
- (id)notificationRequestAtIndexPath:(id)arg1;
- (id)notificationRequestInLongLook;
- (id)notificationRequestsPassingTest:(CDUnknownBlockType)arg1;
- (void)notificationViewController:(id)arg1 didDismissLongLook:(BOOL)arg2;
- (void)notificationViewController:(id)arg1 didPresentLongLook:(BOOL)arg2;
- (void)notificationViewController:(id)arg1 executeAction:(id)arg2 withParameters:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)notificationViewController:(id)arg1 preferredViewControllerForPresentingFromViewController:(id)arg2;
- (void)notificationViewController:(id)arg1 requestPermissionToExecuteAction:(id)arg2 withParameters:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)notificationViewController:(id)arg1 shouldFinishLongLookTransitionWithCompletionBlock:(CDUnknownBlockType)arg2;
- (id)notificationViewController:(id)arg1 staticContentProviderForNotificationRequest:(id)arg2;
- (BOOL)notificationViewControllerShouldAllowInteractionGesture:(id)arg1;
- (BOOL)notificationViewControllerShouldBlurShortLook:(id)arg1;
- (void)notifyContentObservers;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)reloadNotificationRequest:(id)arg1;
- (void)reloadRequestsWithSuppressedContent;
- (void)removeContentObserver:(id)arg1;
- (void)removeNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setTouchEaterEnabled:(BOOL)arg1;
- (BOOL)shouldReceiveTouch:(id)arg1 forGestureRecognizer:(id)arg2;
- (BOOL)showAdditionalMessageLinesForNotificationViewController:(id)arg1;
- (void)showRequestsForNotificationSectionIdentifier:(id)arg1 subSectionIdentifier:(id)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willTearDownNotificationListCell:(id)arg1;

@end

