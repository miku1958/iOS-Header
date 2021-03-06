//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class SBViewControllerTransitionContext;

@protocol SBViewControllerTransitionContextDelegate <NSObject>

@optional
- (void)transitionDidBegin:(SBViewControllerTransitionContext *)arg1;
- (void)transitionDidFinish:(SBViewControllerTransitionContext *)arg1;
- (void)transitionDidReverse:(SBViewControllerTransitionContext *)arg1;
- (void)transitionWillBegin:(SBViewControllerTransitionContext *)arg1;
- (void)transitionWillFinish:(SBViewControllerTransitionContext *)arg1;
- (void)transitionWillReverse:(SBViewControllerTransitionContext *)arg1;
@end

