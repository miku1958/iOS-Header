//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@interface CALayer (PKCAUtilities)
- (id)_pkui_createNextAdditiveAnimationKeyWithKeyPath:(id)arg1;
- (id)pkui_addAdditiveAnimation:(id)arg1;
- (id)pkui_addAdditiveAnimation:(id)arg1 withKeyPath:(id)arg2;
- (id)pkui_additiveAnimationKeyPrefixForKeyPath:(id)arg1;
- (double)pkui_animateToOpacity:(double)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (double)pkui_elapsedDurationForAnimation:(id)arg1;
- (double)pkui_elapsedDurationForAnimationWithKey:(id)arg1;
- (BOOL)pkui_hasAdditiveAnimationForKeyPath:(id)arg1;
- (double)pkui_remainingDurationForAnimation:(id)arg1;
- (double)pkui_remainingDurationForAnimationWithKey:(id)arg1;
@end

