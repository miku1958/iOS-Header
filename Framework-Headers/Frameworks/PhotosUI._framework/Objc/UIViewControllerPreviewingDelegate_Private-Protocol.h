//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class UIGestureRecognizer, UIInteractionProgress, UIView, UIViewController;
@protocol UIViewControllerTransitioningDelegate;

@protocol UIViewControllerPreviewingDelegate_Private <NSObject>

@optional
- (void)animateRevealWithInteractionProgress:(UIInteractionProgress *)arg1 forPreviewingAtLocation:(struct CGPoint)arg2 inSourceView:(UIView *)arg3 containerView:(UIView *)arg4;
- (UIViewController *)committedViewControllerForPreviewViewController:(UIViewController *)arg1;
- (void)didDismissPreviewViewController:(UIViewController *)arg1 committing:(BOOL)arg2;
- (void)performCommitTransitionForPreviewViewController:(UIViewController *)arg1 completion:(void (^)(void))arg2;
- (id<UIViewControllerTransitioningDelegate>)previewPresentationTransitioningDelegateForPosition:(struct CGPoint)arg1 inSourceView:(UIView *)arg2;
- (BOOL)shouldStartPreviewingSimultaneouslyWithGestureRecognizer:(UIGestureRecognizer *)arg1;
- (void)willPresentPreviewViewController:(UIViewController *)arg1 forLocation:(struct CGPoint)arg2 inSourceView:(UIView *)arg3;
@end

