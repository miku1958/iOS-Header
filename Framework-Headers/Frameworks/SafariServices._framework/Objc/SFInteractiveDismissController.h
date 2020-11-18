//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIPercentDrivenInteractiveTransition.h>

#import <SafariServices/UIViewControllerAnimatedTransitioning-Protocol.h>
#import <SafariServices/UIViewControllerTransitioningDelegate-Protocol.h>

@class NSString, UIScreenEdgePanGestureRecognizer, UIView, UIViewController;
@protocol SFInteractiveDismissControllerDelegate, UIViewControllerContextTransitioning;

__attribute__((visibility("hidden")))
@interface SFInteractiveDismissController : UIPercentDrivenInteractiveTransition <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning>
{
    id<UIViewControllerContextTransitioning> _transitionContext;
    unsigned long long _dismissMode;
    long long _interactionState;
    double _timestamps[3];
    double _velocities[3];
    double _accelerations[3];
    UIView *_dimmingView;
    UIScreenEdgePanGestureRecognizer *_edgeSwipeGestureRecognizer;
    UIViewController *_viewControllerToBeDismissed;
    UIView *_edgeSwipeView;
    id<SFInteractiveDismissControllerDelegate> _delegate;
    unsigned long long _sampleCount;
    double _totalDistance;
    double _skipTimeStamp;
    double _previousTimeStamp;
    double _previousDisplacement;
    double _previousVelocity;
    double _previousAcceleration;
    double _averageVelocity;
    double _averageAcceleration;
}

@property (nonatomic) double averageAcceleration; // @synthesize averageAcceleration=_averageAcceleration;
@property (nonatomic) double averageVelocity; // @synthesize averageVelocity=_averageVelocity;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SFInteractiveDismissControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIScreenEdgePanGestureRecognizer *edgeSwipeGestureRecognizer; // @synthesize edgeSwipeGestureRecognizer=_edgeSwipeGestureRecognizer;
@property (strong, nonatomic) UIView *edgeSwipeView; // @synthesize edgeSwipeView=_edgeSwipeView;
@property (readonly) unsigned long long hash;
@property (nonatomic) double previousAcceleration; // @synthesize previousAcceleration=_previousAcceleration;
@property (nonatomic) double previousDisplacement; // @synthesize previousDisplacement=_previousDisplacement;
@property (nonatomic) double previousTimeStamp; // @synthesize previousTimeStamp=_previousTimeStamp;
@property (nonatomic) double previousVelocity; // @synthesize previousVelocity=_previousVelocity;
@property (nonatomic) unsigned long long sampleCount; // @synthesize sampleCount=_sampleCount;
@property (nonatomic) double skipTimeStamp; // @synthesize skipTimeStamp=_skipTimeStamp;
@property (readonly) Class superclass;
@property (nonatomic) double totalDistance; // @synthesize totalDistance=_totalDistance;
@property (weak, nonatomic) UIViewController *viewControllerToBeDismissed; // @synthesize viewControllerToBeDismissed=_viewControllerToBeDismissed;

- (void).cxx_destruct;
- (void)_animateDismissalCancelTransition;
- (void)_animateDismissalCompleteTransition;
- (void)_dismissAnimateTransition:(id)arg1;
- (double)_percentComplete:(id)arg1;
- (void)_presentAnimateTransition:(id)arg1;
- (double)_translationCoefficient;
- (void)_updateStatistics:(id)arg1 firstSample:(BOOL)arg2 finalSample:(BOOL)arg3;
- (void)animateTransition:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)cancelInteractiveTransition;
- (void)finishInteractiveTransition;
- (id)init;
- (id)interactionControllerForDismissal:(id)arg1;
- (BOOL)popGesture:(id)arg1 withRemainingDuration:(double)arg2 shouldPopWithVelocity:(double *)arg3;
- (void)startInteractiveTransition:(id)arg1;
- (void)swiped:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (struct CGPoint)translationForStatistics;
- (struct CGPoint)velocityForStatistics;

@end

