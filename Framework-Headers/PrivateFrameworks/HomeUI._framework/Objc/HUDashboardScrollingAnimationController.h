//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView, UIViewPropertyAnimator;
@protocol HUDashboardScrollingAnimationControllerDelegate;

@interface HUDashboardScrollingAnimationController : NSObject
{
    id<HUDashboardScrollingAnimationControllerDelegate> _delegate;
    UIView *_animatingView;
    double _minimumMargin;
    UIViewPropertyAnimator *_animator;
    unsigned long long _visibilityState;
}

@property (strong, nonatomic) UIView *animatingView; // @synthesize animatingView=_animatingView;
@property (strong, nonatomic) UIViewPropertyAnimator *animator; // @synthesize animator=_animator;
@property (weak, nonatomic) id<HUDashboardScrollingAnimationControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) double minimumMargin; // @synthesize minimumMargin=_minimumMargin;
@property (nonatomic) unsigned long long visibilityState; // @synthesize visibilityState=_visibilityState;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)arg1;
- (void)updateWithCurrentMargin:(double)arg1 animated:(BOOL)arg2;

@end
