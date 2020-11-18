//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UICurrentContextPresentationController.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface _UIFullscreenPresentationController : _UICurrentContextPresentationController
{
    UIView *_counterRotatedView;
    double _counterRotatedAngle;
    struct CGRect _counterRotatedOriginalBounds;
    long long _originalOrientation;
    BOOL _presentingViewControllerHandledCounterRotation;
    CDUnknownBlockType finalRotationBlock;
}

- (void).cxx_destruct;
- (void)_adjustOrientationIfNecessaryInWindow:(id)arg1 forViewController:(id)arg2 preservingViewController:(id)arg3;
- (BOOL)_invokesDelegatesOnOrientationChange;
- (void)_placeCounterRotationViewWithView:(id)arg1 inWindow:(id)arg2 fromOrientation:(long long)arg3 toOrientation:(long long)arg4 force:(BOOL)arg5;
- (void)_removeCounterRotation;
- (void)_setPresentedViewController:(id)arg1;
- (BOOL)_shouldPresentedViewControllerControlStatusBarAppearance;
- (BOOL)_shouldRespectDefinesPresentationContext;
- (void)dealloc;
- (void)dismissalTransitionDidEnd:(BOOL)arg1;
- (struct CGRect)frameOfPresentedViewInContainerView;
- (long long)presentationStyle;
- (void)presentationTransitionDidEnd:(BOOL)arg1;
- (BOOL)shouldPresentInFullscreen;
- (BOOL)shouldRemovePresentersView;

@end

