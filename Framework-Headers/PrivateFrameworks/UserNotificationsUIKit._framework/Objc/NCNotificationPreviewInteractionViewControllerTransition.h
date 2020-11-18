//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotificationsUIKit/_UIPreviewInteractionViewControllerTransition-Protocol.h>

@class NCLongLookAnimator, NSString, _UIViewControllerOneToOneTransitionContext;
@protocol UIViewControllerTransitioningDelegate;

@interface NCNotificationPreviewInteractionViewControllerTransition : NSObject <_UIPreviewInteractionViewControllerTransition>
{
    BOOL _presenting;
    id<UIViewControllerTransitioningDelegate> _transitionDelegate;
    _UIViewControllerOneToOneTransitionContext *_transitionContext;
    NCLongLookAnimator *_animator;
    CDUnknownBlockType _completion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_initForPresentation:(BOOL)arg1 presentingViewController:(id)arg2 presentedViewController:(id)arg3 transitionDelegate:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)initForDismissingViewController:(id)arg1 toViewController:(id)arg2 WithTransitionDelegate:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initForPresentingViewController:(id)arg1 fromViewController:(id)arg2 withTransitionDelegate:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)performTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;
- (void)performWithCustomAnimator:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)prepareTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;
- (void)transitionDidEnd:(BOOL)arg1;

@end
