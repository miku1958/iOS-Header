//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariServices/NSObject-Protocol.h>

@class _SFDynamicBarAnimator;

@protocol _SFDynamicBarAnimatorStateObserver <NSObject>

@optional
- (void)dynamicBarAnimatorStateDidChange:(_SFDynamicBarAnimator *)arg1;
- (void)dynamicBarAnimatorWillEnterSteadyState:(_SFDynamicBarAnimator *)arg1;
- (void)dynamicBarAnimatorWillLeaveSteadyState:(_SFDynamicBarAnimator *)arg1;
@end

