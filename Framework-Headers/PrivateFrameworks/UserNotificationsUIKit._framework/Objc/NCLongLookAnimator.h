//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotificationsUIKit/UIViewControllerAnimatedTransitioning-Protocol.h>

@class NSPointerArray, NSString, UIView;

@interface NCLongLookAnimator : NSObject <UIViewControllerAnimatedTransitioning>
{
    UIView *_sourceView;
    NSPointerArray *_observers;
    BOOL _presenting;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic, getter=isPresenting) BOOL presenting; // @synthesize presenting=_presenting;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_animatePresentation:(BOOL)arg1 withTransitionContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_animationFactoryForLongLookPresentation:(BOOL)arg1;
- (BOOL)_isTransitionAnimated;
- (void)_notifyObserversWithBlock:(CDUnknownBlockType)arg1;
- (id)_presentedViewControllerForPresentation:(BOOL)arg1 withTransitionContext:(id)arg2;
- (id)_presentedViewForPresentation:(BOOL)arg1 withTransitionContext:(id)arg2;
- (id)_presentingViewForPresentation:(BOOL)arg1 withTransitionContext:(id)arg2;
- (id)_sourceViewForPresentation:(BOOL)arg1 withTransitionContext:(id)arg2;
- (void)addObserver:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)initForPresentation:(BOOL)arg1 withSourceView:(id)arg2;
- (void)removeObserver:(id)arg1;
- (double)transitionDuration:(id)arg1;

@end
