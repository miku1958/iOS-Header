//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/SBViewControllerAnimatedTransitioning-Protocol.h>
#import <SpringBoardHome/SBViewControllerRestartableTransitioning-Protocol.h>

@protocol SBViewControllerContextTransitioning;

@protocol SBViewControllerReversibleAnimatedTransitioning <SBViewControllerAnimatedTransitioning, SBViewControllerRestartableTransitioning>
- (void)cancelTransition:(id<SBViewControllerContextTransitioning>)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3;
@end
