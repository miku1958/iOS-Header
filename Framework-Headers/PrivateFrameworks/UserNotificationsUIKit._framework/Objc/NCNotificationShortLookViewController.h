//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserNotificationsUIKit/NCNotificationViewController.h>

#import <UserNotificationsUIKit/NCBannerPresentationTransitioningDelegateObserver-Protocol.h>
#import <UserNotificationsUIKit/NCLongLookPresentationControllerDelegate-Protocol.h>
#import <UserNotificationsUIKit/NCNotificationPreviewInteractionManagerDelegate-Protocol.h>
#import <UserNotificationsUIKit/NCNotificationViewControllerObserving-Protocol.h>

@class NCBannerPresentationTransitionDelegate, NCNotificationPreviewInteractionManager, NSDate, NSHashTable, NSString, UITapGestureRecognizer, UIView, UIViewController;

@interface NCNotificationShortLookViewController : NCNotificationViewController <NCNotificationViewControllerObserving, NCNotificationPreviewInteractionManagerDelegate, NCBannerPresentationTransitioningDelegateObserver, NCLongLookPresentationControllerDelegate>
{
    NCBannerPresentationTransitionDelegate *_bannerPresentationTransitionDelegate;
    NCNotificationViewController *_longLookNotificationViewController;
    UIView *_contextDefiningContainerView;
    UIViewController *_contextDefiningViewController;
    UITapGestureRecognizer *_tapGesture;
    NSDate *_tapBeginTime;
    UIView *_audioAccessoryView;
    NSHashTable *_audioAccessoryViewObservers;
    BOOL _didScrollPresentLongLookViewController;
    NCNotificationPreviewInteractionManager *_previewInteractionManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=_didScrollPresentLongLookViewController, setter=_setDidScrollPresentLongLookViewController:) BOOL didScrollPresentLongLookViewController; // @synthesize didScrollPresentLongLookViewController=_didScrollPresentLongLookViewController;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic, getter=_presentedLongLookViewController) NCNotificationViewController *presentedLongLookViewController;
@property (strong, nonatomic, getter=_previewInteractionManager) NCNotificationPreviewInteractionManager *previewInteractionManager; // @synthesize previewInteractionManager=_previewInteractionManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureScrollViewIfNecessary;
- (id)_customContentProvidingViewControllerCreateIfNecessary;
- (struct CGRect)_frameForTransitionViewInScrollView;
- (void)_handleTapOnView:(id)arg1;
- (id)_initWithNotificationRequest:(id)arg1 revealingAdditionalContentOnPresentation:(BOOL)arg2;
- (BOOL)_isPresentingCustomContentProvidingViewController;
- (void)_loadExtensionIfNecessary;
- (void)_loadLookView;
- (void)_loadPresentationContainerViewIfNecessary;
- (id)_longLookNotificationViewController;
- (id)_newPreviewInteractionManager;
- (id)_notificationShortLookViewIfLoaded;
- (void)_notificationViewControllerViewDidLoad;
- (void)_presentLongLookAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_presentLongLookForScrollAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_presentLongLookViaPreviewInteraction:(CDUnknownBlockType)arg1;
- (Class)_scrollViewClass;
- (void)_setAudioAccessoryView:(id)arg1;
- (BOOL)_setDelegate:(id)arg1;
- (BOOL)_setNotificationRequest:(id)arg1;
- (BOOL)_shouldPadScrollViewContentSizeHeight;
- (BOOL)_tryDismissingShortLookInScrollView:(id)arg1;
- (void)_updateScrollViewContentSize;
- (void)_updateWithProvidedStaticContent;
- (void)addAudioAccessoryViewObserver:(id)arg1;
- (id)containerViewForPreviewInteractionManager:(id)arg1;
- (void)customContent:(id)arg1 didLoadAudioAccessoryView:(id)arg2;
- (void)customContentDidLoadExtension:(id)arg1;
- (BOOL)didReceiveNotificationRequest:(id)arg1;
- (BOOL)dismissPresentedViewControllerAndClearNotification:(BOOL)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)expandAndPlayAudioMessage;
- (BOOL)hasCommittedToPresentingCustomContentProvidingViewController;
- (id)hideHomeAffordanceAnimationSettingsForLongLookPresentationController:(id)arg1;
- (BOOL)isContentExtensionVisible:(id)arg1;
- (BOOL)isShortLook;
- (struct CGRect)longLookPresentationController:(id)arg1 frameForTransitionViewInPresentationSuperview:(id)arg2;
- (id)longLookViewControllerForPreviewInteractionManager:(id)arg1;
- (void)notificationViewControllerDidDismiss:(id)arg1;
- (void)notificationViewControllerDidPresent:(id)arg1;
- (void)notificationViewControllerWillDismiss:(id)arg1;
- (void)notificationViewControllerWillPresent:(id)arg1;
- (void)presentLongLookAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)previewInteractionManager:(id)arg1 shouldFinishInteractionWithCompletionBlock:(CDUnknownBlockType)arg2;
- (void)previewInteractionManagerDidEndUserInteraction:(id)arg1;
- (BOOL)previewInteractionManagerShouldBeginInteraction:(id)arg1;
- (void)previewInteractionManagerWillBeginUserInteraction:(id)arg1;
- (void)removeAudioAccesoryViewObserver:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setCustomContentHomeAffordanceGestureRecognizer:(id)arg1;
- (void)setCustomContentHomeAffordanceVisible:(BOOL)arg1;
- (void)setInteractionEnabled:(BOOL)arg1;
- (BOOL)shouldRestorePresentingShortLookOnDismiss;
- (id)unhideHomeAffordanceAnimationSettingsForLongLookPresentationController:(id)arg1;
- (void)viewWillLayoutSubviews;
- (BOOL)wantsUseableContainerHeightForTransitionWithDelegate:(id)arg1;

@end

