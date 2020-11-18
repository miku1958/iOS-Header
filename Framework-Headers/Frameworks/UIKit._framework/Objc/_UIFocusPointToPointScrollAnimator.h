//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/_UIFocusScrollAnimator-Protocol.h>

@class CAMediaTimingFunction, NSString;

__attribute__((visibility("hidden")))
@interface _UIFocusPointToPointScrollAnimator : NSObject <_UIFocusScrollAnimator>
{
    CAMediaTimingFunction *_fancyTimingFunction;
    double _defaultConvergenceRate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double defaultConvergenceRate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL requiresExtendingScrollViewVisibleBounds;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)_animationDurationForDistance:(double)arg1 convergenceRate:(double)arg2;
- (void)cancelPeekAdjustmentForScrollView:(id)arg1 performRollback:(BOOL)arg2;
- (void)cancelScrollingForScrollView:(id)arg1;
- (id)init;
- (BOOL)isAnimatingScrollView:(id)arg1;
- (void)setPeekOffsetAdjustment:(struct CGPoint)arg1 forScrollView:(id)arg2;
- (void)setTargetContentOffset:(struct CGPoint)arg1 forScrollView:(id)arg2 convergenceRate:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (struct CGPoint)targetContentOffsetForScrollView:(id)arg1;
- (struct CGPoint)velocityToScrollFromOffset:(struct CGPoint)arg1 toOffset:(struct CGPoint)arg2;

@end
