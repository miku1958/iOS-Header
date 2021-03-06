//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuickLook/QLPHSwipeDownTracker.h>

#import <QuickLook/QLDismissGestureTracking-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface QLSwipeDownTracker : QLPHSwipeDownTracker <QLDismissGestureTracking>
{
    struct CGRect _initialBounds;
}

@property (readonly, nonatomic) struct CGPoint anchorPoint;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) double dismissalProgress;
@property (readonly, nonatomic) double finalAnimationDuration;
@property (readonly, nonatomic) double finalAnimationSpringDamping;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL shouldFinishDismissal;
@property (readonly) Class superclass;
@property (readonly, nonatomic) struct CGRect trackedBounds;
@property (readonly, nonatomic) struct CGPoint trackedCenter;
@property (readonly, nonatomic) struct CGAffineTransform trackedTransform;
@property (readonly, nonatomic) struct _QLDismissGestureTrackingVelocity trackedVelocity;

- (void)startTrackingCenter:(struct CGPoint)arg1 bounds:(struct CGRect)arg2 transform:(struct CGAffineTransform)arg3 withInitialGestureLocation:(struct CGPoint)arg4;

@end

