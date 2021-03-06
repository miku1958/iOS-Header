//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowUI/NSObject-Protocol.h>

@class UIView, WFDrawerAnimation, WFDrawerGestureCoordinator;

@protocol WFDrawerGestureCoordinatorDelegate <NSObject>

@property (readonly, nonatomic) UIView *containerView;
@property (readonly, nonatomic) double drawerHeight;
@property (readonly, nonatomic) UIView *drawerView;
@property (readonly, nonatomic) struct CGRect grabberAreaBounds;
@property (readonly, nonatomic) double maximumDrawerHeight;
@property (readonly, nonatomic) double minimumDrawerHeight;

- (void)gestureCoordinator:(WFDrawerGestureCoordinator *)arg1 didContinueInteractionWithDrawerHeight:(double)arg2;
- (void)gestureCoordinator:(WFDrawerGestureCoordinator *)arg1 didFinishInteractionWithVelocity:(double)arg2 acceleration:(double)arg3 animation:(WFDrawerAnimation *)arg4;
- (void)gestureCoordinatorDidBeginInteraction:(WFDrawerGestureCoordinator *)arg1;
@end

