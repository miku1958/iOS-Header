//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariServices/NSObject-Protocol.h>

@class _SFDynamicBarAnimator;

@protocol _SFDynamicBarAnimatorDelegate <NSObject>
- (BOOL)dynamicBarAnimator:(_SFDynamicBarAnimator *)arg1 canHideBarsByDraggingWithOffset:(double)arg2;
- (void)dynamicBarAnimatorOutputsDidChange:(_SFDynamicBarAnimator *)arg1;
- (void)dynamicBarAnimatorWillEnterSteadyState:(_SFDynamicBarAnimator *)arg1;
- (void)dynamicBarAnimatorWillLeaveSteadyState:(_SFDynamicBarAnimator *)arg1;
@end

