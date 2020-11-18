//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UITabBarControllerInterruptibleTransitioning-Protocol.h>

@class NSString, UISpringTimingParameters;
@protocol UIViewControllerContextTransitioning;

__attribute__((visibility("hidden")))
@interface _UITabBarTVTransitioner : NSObject <_UITabBarControllerInterruptibleTransitioning>
{
    BOOL _transitionFromRight;
    long long _transitionStyle;
    id<UIViewControllerContextTransitioning> _transitionContext;
    UISpringTimingParameters *_slideTimingParameters;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UISpringTimingParameters *slideTimingParameters; // @synthesize slideTimingParameters=_slideTimingParameters;
@property (readonly) Class superclass;
@property (strong, nonatomic) id<UIViewControllerContextTransitioning> transitionContext; // @synthesize transitionContext=_transitionContext;
@property (nonatomic) BOOL transitionFromRight; // @synthesize transitionFromRight=_transitionFromRight;
@property (nonatomic) long long transitionStyle; // @synthesize transitionStyle=_transitionStyle;

- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (void)finishTransition;
- (id)init;
- (void)interruptTabBarControllerTransition;
- (double)transitionDuration:(id)arg1;

@end

