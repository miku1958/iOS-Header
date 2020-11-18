//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserNotificationsUIKit/NSObject-Protocol.h>

@class BSAnimationSettings, NCNotificationAction, NCNotificationRequest, NCNotificationViewController, NSDictionary, UIDragInteraction, UIView, UIWindow;
@protocol PLKeyboardHomeAffordanceAssertion, UIDragSession, UIViewSpringAnimationBehaviorDescribing;

@protocol NCNotificationViewControllerDelegate <NSObject>
- (void)notificationViewController:(NCNotificationViewController *)arg1 executeAction:(NCNotificationAction *)arg2 withParameters:(NSDictionary *)arg3 completion:(void (^)(BOOL))arg4;
- (void)notificationViewController:(NCNotificationViewController *)arg1 requestPermissionToExecuteAction:(NCNotificationAction *)arg2 withParameters:(NSDictionary *)arg3 completion:(void (^)(BOOL))arg4;

@optional
- (BSAnimationSettings *)hideHomeAffordanceAnimationSettingsForNotificationViewController:(NCNotificationViewController *)arg1;
- (NSDictionary *)notificationUsageTrackingStateForNotificationViewController:(NCNotificationViewController *)arg1;
- (void)notificationViewController:(NCNotificationViewController *)arg1 dragInteraction:(UIDragInteraction *)arg2 session:(id<UIDragSession>)arg3 didEndWithOperation:(unsigned long long)arg4;
- (void)notificationViewController:(NCNotificationViewController *)arg1 dragInteraction:(UIDragInteraction *)arg2 session:(id<UIDragSession>)arg3 willEndWithOperation:(unsigned long long)arg4;
- (void)notificationViewController:(NCNotificationViewController *)arg1 dragInteraction:(UIDragInteraction *)arg2 sessionWillBegin:(id<UIDragSession>)arg3;
- (struct CGRect)notificationViewController:(NCNotificationViewController *)arg1 finalFrameForDismissingLongLookFromView:(UIView *)arg2;
- (struct CGRect)notificationViewController:(NCNotificationViewController *)arg1 initialFrameForPresentingLongLookFromView:(UIView *)arg2;
- (void)notificationViewController:(NCNotificationViewController *)arg1 isPerformingHoverHighlighting:(BOOL)arg2;
- (id<PLKeyboardHomeAffordanceAssertion>)notificationViewController:(NCNotificationViewController *)arg1 keyboardAssertionForGestureWindow:(UIWindow *)arg2;
- (void)notificationViewController:(NCNotificationViewController *)arg1 requestsExpandingCoalescedBundleForNotificationRequest:(NCNotificationRequest *)arg2;
- (void)notificationViewController:(NCNotificationViewController *)arg1 shouldFinishLongLookTransitionForTrigger:(long long)arg2 withCompletionBlock:(void (^)(BOOL))arg3;
- (long long)notificationViewControllerDateFormatStyle:(NCNotificationViewController *)arg1;
- (BOOL)notificationViewControllerIsCoalescedBundle:(NCNotificationViewController *)arg1;
- (BOOL)notificationViewControllerShouldAllowClickPresentationInteraction:(NCNotificationViewController *)arg1;
- (BOOL)notificationViewControllerShouldAllowDragInteraction:(NCNotificationViewController *)arg1;
- (BOOL)notificationViewControllerShouldAllowLongPressGesture:(NCNotificationViewController *)arg1;
- (BOOL)notificationViewControllerShouldInterpretTapAsDefaultAction:(NCNotificationViewController *)arg1;
- (BOOL)notificationViewControllerShouldPan:(NCNotificationViewController *)arg1;
- (BOOL)notificationViewControllerShouldPerformHoverHighlighting:(NCNotificationViewController *)arg1;
- (BOOL)notificationViewControllerShouldSupportClickPresentationInteraction:(NCNotificationViewController *)arg1;
- (void)notificationViewControllerWillDismissForCancelAction:(NCNotificationViewController *)arg1;
- (id<UIViewSpringAnimationBehaviorDescribing>)settleHomeAffordanceAnimationBehaviorDescriptionForNotificationViewController:(NCNotificationViewController *)arg1;
- (BOOL)showAdditionalMessageLinesForNotificationViewController:(NCNotificationViewController *)arg1;
- (BSAnimationSettings *)unhideHomeAffordanceAnimationSettingsForNotificationViewController:(NCNotificationViewController *)arg1;
@end
