//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/UIViewControllerAnimatedTransitioning-Protocol.h>

@class NSString, UIPercentDrivenInteractiveTransition;
@protocol UIViewControllerContextTransitioning;

@interface PUViewControllerTransition : NSObject <UIViewControllerAnimatedTransitioning>
{
    double _duration;
    id<UIViewControllerContextTransitioning> _transitionContext;
    UIPercentDrivenInteractiveTransition *_interactiveTransition;
    BOOL _interactive;
    BOOL _startedInteractively;
    double _interactiveProgress;
    double _visibleInteractiveProgress;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) double imageModulationIntensity;
@property (nonatomic, getter=isInteractive, setter=_setInteractive:) BOOL interactive; // @synthesize interactive=_interactive;
@property (nonatomic, setter=_setInteractiveProgress:) double interactiveProgress; // @synthesize interactiveProgress=_interactiveProgress;
@property (nonatomic) BOOL startedInteractively; // @synthesize startedInteractively=_startedInteractively;
@property (readonly) Class superclass;
@property (nonatomic) double visibleInteractiveProgress; // @synthesize visibleInteractiveProgress=_visibleInteractiveProgress;

+ (id)interactionControllerForAnimationController:(id)arg1;
- (void).cxx_destruct;
- (id)_newInteractiveTransition;
- (void)animateTransition:(id)arg1;
- (void)animationEnded:(BOOL)arg1;
- (void)cancelInteractiveTransition;
- (void)completeTransition:(BOOL)arg1;
- (id)containerView;
- (void)didCompleteTransitionAnimation;
- (struct CGRect)finalFromViewFrame;
- (struct CGRect)finalToViewFrame;
- (void)finishInteractiveTransition;
- (id)fromViewController;
- (void)imageModulationIntensityDidChange;
- (id)initWithDuration:(double)arg1;
- (struct CGRect)initialFromViewFrame;
- (struct CGRect)initialToViewFrame;
- (id)interactiveTransition;
- (id)toViewController;
- (id)transitionContext;
- (double)transitionDuration:(id)arg1;
- (void)updateInteractiveTransitionProgress:(double)arg1;
- (void)updateInteractiveTransitionProgress:(double)arg1 visibleTransitionProgress:(double)arg2;

@end

