//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, UINavigationBar;
@protocol UIViewControllerTransitionCoordinator, _UINavigationBarDelegatePrivate;

@interface _UINavigationBarTransitionAssistant : NSObject
{
    long long _animationCount;
    NSMutableArray *_animationIDs;
    BOOL _interruptable;
    BOOL _interactive;
    BOOL _needsLifetimeExtended;
    BOOL _cancelledTransition;
    BOOL _shouldHideBackButtonDuringTransition;
    BOOL _shouldUpdatePromptAfterTransition;
    int _transition;
    id<UIViewControllerTransitionCoordinator> _transitionCoordinator;
    UINavigationBar *_navigationBar;
    id<_UINavigationBarDelegatePrivate> _delegate;
    double _duration;
}

@property (readonly, nonatomic) NSArray *animationIDs; // @synthesize animationIDs=_animationIDs;
@property (readonly, nonatomic) BOOL cancelledCleanUp;
@property (readonly, nonatomic) BOOL cancelledTransition; // @synthesize cancelledTransition=_cancelledTransition;
@property (readonly, weak, nonatomic) id<_UINavigationBarDelegatePrivate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property (readonly, nonatomic) BOOL interactive; // @synthesize interactive=_interactive;
@property (readonly, nonatomic) BOOL interruptable; // @synthesize interruptable=_interruptable;
@property (readonly, weak, nonatomic) UINavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property (nonatomic) BOOL needsLifetimeExtended; // @synthesize needsLifetimeExtended=_needsLifetimeExtended;
@property (readonly, nonatomic) BOOL shouldAnimateAlongside;
@property (readonly, nonatomic) BOOL shouldCrossfade;
@property (nonatomic) BOOL shouldHideBackButtonDuringTransition; // @synthesize shouldHideBackButtonDuringTransition=_shouldHideBackButtonDuringTransition;
@property (nonatomic) BOOL shouldUpdatePromptAfterTransition; // @synthesize shouldUpdatePromptAfterTransition=_shouldUpdatePromptAfterTransition;
@property (readonly, nonatomic) int transition; // @synthesize transition=_transition;
@property (readonly, weak, nonatomic) id<UIViewControllerTransitionCoordinator> transitionCoordinator; // @synthesize transitionCoordinator=_transitionCoordinator;

+ (id)popTransitionAssistantForNavigationBar:(id)arg1 delegate:(id)arg2 crossfade:(BOOL)arg3;
+ (id)pushTransitionAssistantForNavigationBar:(id)arg1 delegate:(id)arg2 crossfade:(BOOL)arg3;
- (void).cxx_destruct;
- (void)_clearAnimationsWithDuration:(double)arg1 curve:(long long)arg2 reverse:(BOOL)arg3;
- (void)_finishTrackingAnimations;
- (void)_getInteractive;
- (void)_getPopDurationAndTransitionAlwaysCrossfade:(BOOL)arg1;
- (void)_getPushDurationAndTransitionAlwaysCrossfade:(BOOL)arg1;
- (void)_getTransitionCoordinator;
- (void)_startTrackingAnimations;
- (void)cancelInteractiveTransitionPercent:(double)arg1 completionSpeed:(double)arg2 completionCurve:(long long)arg3;
- (void)decrementAnimationCount;
- (void)finishInteractiveTransitionPercent:(double)arg1 completionSpeed:(double)arg2 completionCurve:(long long)arg3;
- (void)finishTrackingInteractiveTransition;
- (void)incrementAnimationCount;
- (id)initWithNavigationBar:(id)arg1 delegate:(id)arg2;
- (void)startInteractiveTransition;
- (void)updateInteractiveTransitionPercent:(double)arg1;

@end

