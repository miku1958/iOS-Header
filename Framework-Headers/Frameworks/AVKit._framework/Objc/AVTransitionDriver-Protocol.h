//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVKit/UIInteraction-Protocol.h>

@class UIGestureRecognizer, UIPanGestureRecognizer;
@protocol AVTransitionDriver, AVTransitionDriverDelegate;

@protocol AVTransitionDriver <UIInteraction>

@property (weak, nonatomic) UIPanGestureRecognizer *contentTransitioningViewGestureRecognizer;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) BOOL lastNonZeroVelocityWasDownward;
@property (readonly, nonatomic) double pinchScale;
@property (readonly, nonatomic) double pinchVelocity;
@property (readonly, nonatomic) double rotation;
@property (readonly, nonatomic) double rotationVelocity;
@property (weak, nonatomic) id<AVTransitionDriverDelegate> transitionDriverDelegate;
@property (readonly, nonatomic) long long transitionInteraction;

- (double)angleOfVelocityInWindow;
- (struct CGPoint)locationInWindow;
- (BOOL)transitionDriver:(id<AVTransitionDriver>)arg1 shouldRequireFailureOfGestureRecognizer:(UIGestureRecognizer *)arg2;
- (struct CGPoint)translationInWindow;
- (struct CGPoint)velocityInWindow;
@end

