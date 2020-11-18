//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/SBIconAnimatorDelegate-Protocol.h>
#import <SpringBoardHome/SBViewControllerInteractiveAnimatedTransitioning-Protocol.h>

@class NSString, SBHIconAnimationSettings, SBIconAnimator, SBNestingViewController;
@protocol SBHomeScreenIconTransitionAnimatorDelegate, SBViewControllerContextTransitioning;

@interface SBHomeScreenIconTransitionAnimator : NSObject <SBIconAnimatorDelegate, SBViewControllerInteractiveAnimatedTransitioning>
{
    id<SBViewControllerContextTransitioning> _transitionContext;
    unsigned long long _transitionToken;
    SBHIconAnimationSettings *_currentSettings;
    unsigned long long _currentOperation;
    BOOL _receivedFirstInteractiveUpdate;
    BOOL _needsTransitionTokenIncrementOnNextUpdate;
    SBIconAnimator *_iconAnimator;
    SBNestingViewController *_childViewController;
    unsigned long long _operation;
    double _initialDelay;
    id<SBHomeScreenIconTransitionAnimatorDelegate> _delegate;
}

@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly, nonatomic) SBNestingViewController *childViewController; // @synthesize childViewController=_childViewController;
@property (readonly, nonatomic) unsigned long long currentOperation;
@property (readonly, nonatomic) SBHIconAnimationSettings *currentSettings;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SBHomeScreenIconTransitionAnimatorDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) SBIconAnimator *iconAnimator; // @synthesize iconAnimator=_iconAnimator;
@property (nonatomic) double initialDelay; // @synthesize initialDelay=_initialDelay;
@property (readonly, nonatomic) unsigned long long operation; // @synthesize operation=_operation;
@property (readonly, nonatomic, getter=wasRestarted) BOOL restarted;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (void)animationEnded:(BOOL)arg1;
- (void)cancel;
- (void)cancelTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3;
- (void)completeImmediately;
- (void)finishInteractiveTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3;
- (BOOL)iconAnimator:(id)arg1 canAlterViewHierarchyDuringCleanupUsingBlock:(CDUnknownBlockType)arg2;
- (void)iconAnimatorWasInvalidated:(id)arg1;
- (id)initWithIconAnimator:(id)arg1 childViewController:(id)arg2 operation:(unsigned long long)arg3;
- (double)percentComplete;
- (void)restart;
- (void)reverse;
- (BOOL)supportsRestarting;
- (id)transitionAnimationFactory:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)updateTransition:(id)arg1 withPercentComplete:(double)arg2;

@end
