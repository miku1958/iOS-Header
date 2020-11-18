//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserNotificationsUIKit/NCNotificationViewController.h>

#import <UserNotificationsUIKit/NCBannerPresentationTransitioningDelegateObserver-Protocol.h>
#import <UserNotificationsUIKit/NCLongLookDefaultPresentationControllerDelegate-Protocol.h>
#import <UserNotificationsUIKit/NCNotificationViewControllerObserving-Protocol.h>
#import <UserNotificationsUIKit/PLClickPresentationInteractionManagerDelegate-Protocol.h>
#import <UserNotificationsUIKit/PLClickPresentationInteractionPresenting-Protocol.h>
#import <UserNotificationsUIKit/PLExpandedPlatterPresentationControllerDelegate-Protocol.h>
#import <UserNotificationsUIKit/PLViewControllerAnimatorDelegate-Protocol.h>
#import <UserNotificationsUIKit/UIDragInteractionDelegate-Protocol.h>

@class NCBannerPresentationTransitionDelegate, NCNotificationLongLookViewController, NSDate, NSString, PLClickPresentationInteractionManager, UIScrollView, UITapGestureRecognizer, UIView, UIViewController;
@protocol UIViewControllerContextTransitioning;

@interface NCNotificationShortLookViewController : NCNotificationViewController <NCNotificationViewControllerObserving, PLViewControllerAnimatorDelegate, UIDragInteractionDelegate, PLClickPresentationInteractionManagerDelegate, NCBannerPresentationTransitioningDelegateObserver, PLExpandedPlatterPresentationControllerDelegate, NCLongLookDefaultPresentationControllerDelegate, PLClickPresentationInteractionPresenting>
{
    NCBannerPresentationTransitionDelegate *_bannerPresentationTransitionDelegate;
    NCNotificationLongLookViewController *_longLookNotificationViewController;
    UIView *_contextDefiningContainerView;
    UIViewController *_contextDefiningViewController;
    UITapGestureRecognizer *_tapGesture;
    NSDate *_tapBeginTime;
    id<UIViewControllerContextTransitioning> _scrollPresentationTransitionContext;
    struct CGRect _finalPresentedFrameOfViewForPreview;
    UIView *_lookViewWrapper;
    long long _trigger;
    BOOL _didScrollPresentLongLookViewController;
    PLClickPresentationInteractionManager *_clickPresentationInteractionManager;
    UIScrollView *_scrollView;
}

@property (readonly, nonatomic) PLClickPresentationInteractionManager *clickPresentationInteractionManager; // @synthesize clickPresentationInteractionManager=_clickPresentationInteractionManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=_didScrollPresentLongLookViewController, setter=_setDidScrollPresentLongLookViewController:) BOOL didScrollPresentLongLookViewController; // @synthesize didScrollPresentLongLookViewController=_didScrollPresentLongLookViewController;
@property (readonly, nonatomic) struct CGRect finalDismissedFrameOfViewForPreview;
@property (readonly, nonatomic) struct CGRect finalPresentedFrameOfViewForPreview;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (readonly, nonatomic) struct CGRect initialPresentedFrameOfViewForPreview;
@property (readonly, nonatomic, getter=_presentedLongLookViewController) NCNotificationViewController *presentedLongLookViewController;
@property (strong, nonatomic, getter=_scrollView) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView *viewForPreview;

- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)_completeScrollPresentation;
- (void)_configureScrollViewIfNecessary;
- (void)_expandCoalescedNotificationBundle;
- (struct CGRect)_frameForTransitionViewInScrollView;
- (void)_handlePresentedContentDismissalWithTrigger:(long long)arg1;
- (void)_handleTapOnView:(id)arg1;
- (id)_initWithNotificationRequest:(id)arg1 revealingAdditionalContentOnPresentation:(BOOL)arg2;
- (BOOL)_isPresentingCustomContentProvidingViewController;
- (void)_loadLookView;
- (void)_loadPresentationContainerViewIfNecessary;
- (id)_longLookNotificationViewController;
- (unsigned long long)_maximumNumberOfPrimaryLargeTextLinesForProvidedStaticContent;
- (unsigned long long)_maximumNumberOfPrimaryTextLinesForProvidedStaticContent;
- (unsigned long long)_maximumNumberOfSecondaryLargeTextLinesForProvidedStaticContent;
- (unsigned long long)_maximumNumberOfSecondaryTextLinesForProvidedStaticContent;
- (unsigned long long)_maximumNumberOfTextLinesForProvidedStaticContentWithDefaultNumber:(unsigned long long)arg1 isPrimary:(BOOL)arg2 isLarge:(BOOL)arg3;
- (id)_newClickPresentationInteractionManager;
- (id)_notificationShortLookViewIfLoaded;
- (void)_notificationViewControllerViewDidLoad;
- (void)_presentLongLookAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_presentLongLookForScrollAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_presentLongLookViaClickPresentationInteraction:(CDUnknownBlockType)arg1;
- (id)_requiredContextIDsForDragSessionInView:(id)arg1;
- (BOOL)_setNotificationRequest:(id)arg1;
- (BOOL)_shouldPadScrollViewContentSizeHeight;
- (BOOL)_shouldUseHapticTouch;
- (BOOL)_tryDismissingShortLookInScrollView:(id)arg1;
- (void)_updateScrollViewContentSize;
- (void)_updateShortLookShadow;
- (void)_updateWithProvidedAuxiliaryOptionsContent;
- (void)clickPresentationInteractionManager:(id)arg1 declinedDismissingPresentedContentWithTrigger:(long long)arg2;
- (BOOL)clickPresentationInteractionManager:(id)arg1 shouldBeginInteractionWithTouchAtLocation:(struct CGPoint)arg2;
- (void)clickPresentationInteractionManager:(id)arg1 shouldFinishInteractionThatReachedForceThreshold:(BOOL)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)clickPresentationInteractionManager:(id)arg1 willDismissPresentedContentWithTrigger:(long long)arg2;
- (void)clickPresentationInteractionManagerDidEndUserInteraction:(id)arg1;
- (BOOL)clickPresentationInteractionManagerShouldAllowLongPressGesture:(id)arg1;
- (void)clickPresentationInteractionManagerWillBeginUserInteraction:(id)arg1;
- (id)containerViewForClickPresentationInteractionManager:(id)arg1;
- (BOOL)didReceiveNotificationRequest:(id)arg1;
- (BOOL)dismissPresentedViewControllerAndClearNotification:(BOOL)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dragInteraction:(id)arg1 item:(id)arg2 willAnimateCancelWithAnimator:(id)arg3;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (id)dragInteraction:(id)arg1 previewForCancellingItem:(id)arg2 withDefault:(id)arg3;
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned long long)arg3;
- (void)dragInteraction:(id)arg1 session:(id)arg2 willEndWithOperation:(unsigned long long)arg3;
- (BOOL)dragInteraction:(id)arg1 sessionIsRestrictedToDraggingApplication:(id)arg2;
- (void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2;
- (void)dragInteraction:(id)arg1 willAnimateLiftWithAnimator:(id)arg2 session:(id)arg3;
- (void)expandAndPlayMedia;
- (struct CGRect)expandedPlatterPresentationController:(id)arg1 frameForTransitionViewInPresentationSuperview:(id)arg2;
- (BOOL)expandedPlatterPresentationControllerShouldProvideBackground:(id)arg1;
- (BOOL)hasCommittedToPresentingCustomContentProvidingViewController;
- (BOOL)isCoalescedNotificationBundle;
- (BOOL)isContentExtensionVisible:(id)arg1;
- (BOOL)isNotPresentingOrHasCommittedToDismissingCustomContentProvidingViewController;
- (BOOL)isShortLook;
- (void)notificationViewControllerDidDismiss:(id)arg1;
- (void)notificationViewControllerDidPresent:(id)arg1;
- (void)notificationViewControllerWillDismiss:(id)arg1;
- (void)notificationViewControllerWillPresent:(id)arg1;
- (void)presentLongLookAnimated:(BOOL)arg1 trigger:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)presentedViewControllerForClickPresentationInteractionManager:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setContentReplacedWithSnapshot:(BOOL)arg1;
- (void)setCustomContentHomeAffordanceGestureRecognizer:(id)arg1;
- (void)setCustomContentHomeAffordanceVisible:(BOOL)arg1;
- (void)setHasShadow:(BOOL)arg1;
- (void)setInteractionEnabled:(BOOL)arg1;
- (void)setMaterialGroupNameBase:(id)arg1;
- (void)setNotificationContentViewHidden:(BOOL)arg1;
- (BOOL)shouldRestorePresentingShortLookOnDismiss;
- (id)transitioningDelegateForClickPresentationInteractionManager:(id)arg1;
- (void)viewControllerAnimator:(id)arg1 didEndPresentationAnimation:(BOOL)arg2 withTransitionContext:(id)arg3;
- (void)viewWillLayoutSubviews;
- (BOOL)wantsUseableContainerBoundsForTransitionWithDelegate:(id)arg1;

@end
