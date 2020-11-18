//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UISlider.h>

#import <UIKit/UICollisionBehaviorDelegate-Protocol.h>
#import <UIKit/UIDynamicAnimatorDelegate-Protocol.h>

@class NSString, UIDynamicItemBehavior, UIGravityBehavior, UIPushBehavior, UIView, _UIDynamicSliderAnimator;

@interface _UIDynamicSlider : UISlider <UIDynamicAnimatorDelegate, UICollisionBehaviorDelegate>
{
    double _thumbVelocity;
    struct CGPoint _thumbPreviousPoint;
    double _thumbPreviousTime;
    UIView *_thumbDynamicsView;
    _UIDynamicSliderAnimator *_animator;
    UIGravityBehavior *_gravityBehavior;
    UIPushBehavior *_pushBehavior;
    UIDynamicItemBehavior *_itemBehavior;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_clearDynamics;
- (void)_handleConversionToDynamicsTracking;
- (void)_handleDynamicsStep;
- (void)_initializeDynamicsTracking:(id)arg1;
- (void)_updateDynamicsTracking:(id)arg1;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)cancelTouchTracking;
- (void)collisionBehavior:(id)arg1 beganContactForItem:(id)arg2 withBoundaryIdentifier:(id)arg3 atPoint:(struct CGPoint)arg4;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (void)dynamicAnimatorDidPause:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;

@end

