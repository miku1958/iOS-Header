//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CAPropertyAnimation.h>

@interface CAPropertyAnimation (TSDCAAnimationAdditions)
- (id)TSD_animationForKeyPath:(id)arg1 atTime:(double)arg2;
- (double)TSD_animationPercentFromAnimationTime:(double)arg1;
- (BOOL)TSD_containsAnimationForKeyPath:(id)arg1;
- (id)p_adjustedResultWithValue:(id)arg1;
- (id)p_interpolatedValueFrom:(id)arg1 to:(id)arg2 percent:(double)arg3;
@end

