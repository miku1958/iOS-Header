//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariServices/_SFDynamicBarAnimatorStateObserver-Protocol.h>

@class _SFDynamicBarAnimator;

@protocol _SFDynamicBarAnimatorDelegate <_SFDynamicBarAnimatorStateObserver>
- (BOOL)dynamicBarAnimator:(_SFDynamicBarAnimator *)arg1 canTransitionToState:(long long)arg2 byDraggingWithOffset:(double)arg3;
- (double)dynamicBarAnimator:(_SFDynamicBarAnimator *)arg1 minimumTopBarHeightForOffset:(double)arg2;
- (void)dynamicBarAnimatorOutputsDidChange:(_SFDynamicBarAnimator *)arg1;
@end
