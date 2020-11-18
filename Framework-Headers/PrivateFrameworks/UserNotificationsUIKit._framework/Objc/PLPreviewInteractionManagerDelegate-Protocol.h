//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserNotificationsUIKit/NSObject-Protocol.h>

@class PLPreviewInteractionManager, UIView, UIViewController;
@protocol PLPreviewInteractionPresentable, PLViewControllerTransitioningDelegate;

@protocol PLPreviewInteractionManagerDelegate <NSObject>
- (UIViewController<PLPreviewInteractionPresentable> *)presentedViewControllerForPreviewInteractionManager:(PLPreviewInteractionManager *)arg1;

@optional
- (UIView *)containerViewForPreviewInteractionManager:(PLPreviewInteractionManager *)arg1;
- (void)previewInteractionManager:(PLPreviewInteractionManager *)arg1 declinedDismissingPresentedContentWithTrigger:(long long)arg2;
- (BOOL)previewInteractionManager:(PLPreviewInteractionManager *)arg1 shouldBeginInteractionWithTouchAtLocation:(struct CGPoint)arg2;
- (void)previewInteractionManager:(PLPreviewInteractionManager *)arg1 shouldFinishInteractionWithCompletionBlock:(void (^)(BOOL))arg2;
- (void)previewInteractionManager:(PLPreviewInteractionManager *)arg1 willDismissPresentedContentWithTrigger:(long long)arg2;
- (void)previewInteractionManagerDidEndUserInteraction:(PLPreviewInteractionManager *)arg1;
- (BOOL)previewInteractionManagerShouldAutomaticallyTransitionToPreviewAfterDelay:(PLPreviewInteractionManager *)arg1;
- (void)previewInteractionManagerWillBeginUserInteraction:(PLPreviewInteractionManager *)arg1;
- (id<PLViewControllerTransitioningDelegate>)transitioningDelegateForPreviewInteractionManager:(PLPreviewInteractionManager *)arg1;
@end

