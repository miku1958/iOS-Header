//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/_UITabBarControllerInterruptibleTransitioning-Protocol.h>

@class NSString;
@protocol UIViewControllerContextTransitioning;

__attribute__((visibility("hidden")))
@interface _UITabBarTVTransitioner : NSObject <_UITabBarControllerInterruptibleTransitioning>
{
    BOOL _transitionFromRight;
    id<UIViewControllerContextTransitioning> _transitionContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (strong, nonatomic) id<UIViewControllerContextTransitioning> transitionContext; // @synthesize transitionContext=_transitionContext;
@property (nonatomic) BOOL transitionFromRight; // @synthesize transitionFromRight=_transitionFromRight;

- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (void)finishTransition;
- (void)interruptTabBarControllerTransition;
- (double)transitionDuration:(id)arg1;

@end

