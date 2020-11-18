//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UINavigationBarTransitionContext.h>

__attribute__((visibility("hidden")))
@interface _UINavigationBarTransitionContextPop : _UINavigationBarTransitionContext
{
    struct CGRect _endingNewTitleViewFrame;
    struct CGRect _endingNewBackButtonFrame;
    struct CGSize _titleTransitionDistance;
    double _titleTransitionAdjustment;
}

- (void)_animateBackgroundView;
- (void)_animateContentView;
- (void)_animateLargeTitleView;
- (void)_animateScaleTransition;
- (void)_animateSearchBar;
- (void)_finishWithFinalLayout:(id)arg1 invalidLayout:(id)arg2;
- (void)_prepareBackgroundView;
- (void)_prepareContentView;
- (void)_prepareLargeTitleView;
- (void)_prepareScaleTransition;
- (void)_prepareSearchBar;
- (void)animate;
- (void)cancel;
- (void)complete;
- (void)prepare;
- (int)transition;
- (id)viewUsingEaseInCurve;

@end

