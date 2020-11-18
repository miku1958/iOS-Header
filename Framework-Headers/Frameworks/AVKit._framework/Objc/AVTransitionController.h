//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVKit/AVInteractiveTransitionGestureTrackerDelegate-Protocol.h>
#import <AVKit/UIViewControllerAnimatedTransitioning-Protocol.h>
#import <AVKit/UIViewControllerInteractiveTransitioning-Protocol.h>
#import <AVKit/UIViewControllerTransitioningDelegate-Protocol.h>

@class AVInteractiveTransitionGestureTracker, AVPlayerViewController, AVTransition, NSString;

@interface AVTransitionController : NSObject <AVInteractiveTransitionGestureTrackerDelegate, UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning, UIViewControllerTransitioningDelegate>
{
    long long _state;
    AVTransition *_activeTransition;
    AVInteractiveTransitionGestureTracker *_gestureTracker;
    AVPlayerViewController *_playerViewController;
}

@property (strong, nonatomic) AVTransition *activeTransition; // @synthesize activeTransition=_activeTransition;
@property (readonly, nonatomic) long long completionCurve;
@property (readonly, nonatomic) double completionSpeed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) AVInteractiveTransitionGestureTracker *gestureTracker; // @synthesize gestureTracker=_gestureTracker;
@property (readonly) unsigned long long hash;
@property (readonly, weak, nonatomic) AVPlayerViewController *playerViewController; // @synthesize playerViewController=_playerViewController;
@property (nonatomic) long long state; // @synthesize state=_state;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL wantsInteractiveStart;

- (void).cxx_destruct;
- (id)_animationControllerForPlayerViewController;
- (void)_createActiveTransitionIfNeededForTransitionContext:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)animationEnded:(BOOL)arg1;
- (void)gestureTracker:(id)arg1 didBeginTrackingGesture:(long long)arg2;
- (void)gestureTracker:(id)arg1 didTrackPercentComplete:(double)arg2 translation:(struct CGPoint)arg3 rotation:(double)arg4 locationInWindow:(struct CGPoint)arg5;
- (void)gestureTrackerDidCancelTracking:(id)arg1;
- (void)gestureTrackerDidFinishTracking:(id)arg1;
- (BOOL)gestureTrackerShouldTrackPanToDismiss:(id)arg1;
- (BOOL)gestureTrackerShouldTrackPinchToDismiss:(id)arg1;
- (BOOL)gestureTrackerShouldTrackPinchToPresent:(id)arg1;
- (id)initWithPlayerViewController:(id)arg1;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)interactionControllerForPresentation:(id)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (void)startInteractiveTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;

@end
