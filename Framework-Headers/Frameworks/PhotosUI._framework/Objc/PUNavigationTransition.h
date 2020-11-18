//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUViewControllerTransition.h>

@class UINavigationController;

@interface PUNavigationTransition : PUViewControllerTransition
{
    BOOL _wasStatusBarHiddenBeforeTransition;
    double _pushDuration;
    double _popDuration;
    UINavigationController *_navigationController;
    long long __operation;
}

@property (nonatomic, setter=_setOperation:) long long _operation; // @synthesize _operation=__operation;
@property (weak, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property (readonly, nonatomic) double popDuration; // @synthesize popDuration=_popDuration;
@property (readonly, nonatomic) double pushDuration; // @synthesize pushDuration=_pushDuration;
@property (nonatomic) BOOL wasStatusBarHiddenBeforeTransition; // @synthesize wasStatusBarHiddenBeforeTransition=_wasStatusBarHiddenBeforeTransition;

+ (id)animationControllerForOperation:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 inNavigationController:(id)arg4;
+ (BOOL)shouldCrossFadeBottomBarsForNavigationController:(id)arg1;
- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (void)cancelInteractiveTransition;
- (void)completeInteractiveOperation:(long long)arg1 finished:(BOOL)arg2;
- (void)completeTransition:(BOOL)arg1;
- (void)didCompleteTransitionAnimation;
- (void)finishInteractiveTransition;
- (void)imageModulationIntensityDidChange;
- (id)initWithDuration:(double)arg1;
- (id)initWithPushDuration:(double)arg1 popDuration:(double)arg2;
- (void)transitionDidStartOperation:(long long)arg1 animated:(BOOL)arg2 interactive:(BOOL)arg3;
- (double)transitionDuration:(id)arg1;
- (void)transitionWillAnimateOperation:(long long)arg1 interactive:(BOOL)arg2;
- (void)transitionWillStartOperation:(long long)arg1 animated:(BOOL)arg2 interactive:(BOOL)arg3;

@end

