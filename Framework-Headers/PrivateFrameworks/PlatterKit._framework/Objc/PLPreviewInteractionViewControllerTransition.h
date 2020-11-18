//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PlatterKit/_UIPreviewInteractionViewControllerTransition-Protocol.h>

@class NSString, PLViewControllerAnimator, _PLViewControllerOneToOneTransitionContext;
@protocol UIViewControllerTransitioningDelegate;

@interface PLPreviewInteractionViewControllerTransition : NSObject <_UIPreviewInteractionViewControllerTransition>
{
    id<UIViewControllerTransitioningDelegate> _transitionDelegate;
    _PLViewControllerOneToOneTransitionContext *_transitionContext;
    PLViewControllerAnimator *_animator;
    CDUnknownBlockType _completion;
    BOOL _propagatesPresentingViewTransform;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL propagatesPresentingViewTransform; // @synthesize propagatesPresentingViewTransform=_propagatesPresentingViewTransform;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_animator;
- (void)_configureTransitionContextWithFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;
- (id)_newAnimator;
- (id)initWithTransitionDelegate:(id)arg1 presentingViewController:(id)arg2 presentedViewController:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)performTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;
- (void)performWithCustomAnimator:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)prepareTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)transitionDidEnd:(BOOL)arg1;

@end

