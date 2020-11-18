//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/NSObject-Protocol.h>

@class SBHIconAnimationSettings, SBHomeScreenIconTransitionAnimator, SBNestingViewController;

@protocol SBHomeScreenIconTransitionAnimatorDelegate <NSObject>
- (SBHIconAnimationSettings *)animator:(SBHomeScreenIconTransitionAnimator *)arg1 animationSettingsForOperation:(unsigned long long)arg2 childViewController:(SBNestingViewController *)arg3;

@optional
- (BOOL)animator:(SBHomeScreenIconTransitionAnimator *)arg1 canAlterViewHierarchyDuringCleanupUsingBlock:(void (^)(void))arg2;
@end
