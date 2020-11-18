//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FuseUI/UIViewControllerAnimatedTransitioning-Protocol.h>

@class MusicTabBarController, NSString, UIView;

@interface MusicNowPlayingTransitionController : NSObject <UIViewControllerAnimatedTransitioning>
{
    CDUnknownBlockType _transitionStartBlock;
    CDUnknownBlockType _transitionFinishBlock;
    CDUnknownBlockType _transitionStopBlock;
    CDUnknownBlockType _transitionEndBlock;
    CDUnknownBlockType _transitionRubberBandEffectBlock;
    BOOL _hasFinishedTransition;
    UIView *_dimmingView;
    BOOL _dismissal;
    MusicTabBarController *_tabBarController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDismissal) BOOL dismissal; // @synthesize dismissal=_dismissal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (strong, nonatomic) MusicTabBarController *tabBarController; // @synthesize tabBarController=_tabBarController;

- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (void)animateTransition:(id)arg1 withDuration:(double)arg2 initialVelocity:(double)arg3 interactively:(BOOL)arg4 toFinalPositions:(BOOL)arg5 completion:(CDUnknownBlockType)arg6;
- (void)cleanupTransition:(id)arg1;
- (void)prepareTransition:(id)arg1;
- (void)stopAnimation;
- (double)transitionDuration:(id)arg1;
- (void)updateRubberbandingWithDistance:(double)arg1;

@end
