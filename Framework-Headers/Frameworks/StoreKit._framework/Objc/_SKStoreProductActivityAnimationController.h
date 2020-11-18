//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <StoreKit/UIViewControllerAnimatedTransitioning-Protocol.h>

@class NSString;
@protocol UIViewControllerContextTransitioning;

@interface _SKStoreProductActivityAnimationController : NSObject <UIViewControllerAnimatedTransitioning>
{
    id<UIViewControllerContextTransitioning> _transitionContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)animateTransition:(id)arg1;
- (void)endDelayingAnimation;
- (double)transitionDuration:(id)arg1;

@end

