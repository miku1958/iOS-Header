//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CAAnimationGroup.h>

@interface CAAnimationGroup (TSDCAAnimationAdditions)
- (id)TSD_animationForKeyPath:(id)arg1 atTime:(double)arg2;
- (double)TSD_animationPercentByApplyingTimingFunctionForKeyPath:(id)arg1 atTime:(double)arg2;
- (BOOL)TSD_containsAnimationForKeyPath:(id)arg1;
- (id)TSD_valueForKeyPath:(id)arg1 atTime:(double)arg2 animationCache:(id)arg3;
- (void)p_getValue:(id *)arg1 animation:(id *)arg2 animationPercent:(double *)arg3 forKeyPath:(id)arg4 atTime:(double)arg5 animationCache:(id)arg6;
@end
