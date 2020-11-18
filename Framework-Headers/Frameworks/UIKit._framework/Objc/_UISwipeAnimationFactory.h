//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UISwipeAnimationFactory : NSObject
{
}

+ (id)_animatorForDuration:(double)arg1 initialVelocity:(struct CGVector)arg2 shouldLayoutSubviews:(BOOL)arg3;
+ (id)_animatorForStiffnessFactor:(double)arg1 initialVelocity:(struct CGVector)arg2;
+ (id)animatorForCollapse;
+ (id)animatorForCollapseWithAdditivelyAnimatedViews:(id)arg1;
+ (id)animatorForMoveWithOccurrence:(id)arg1;
+ (id)animatorForScanlineCollapse;
+ (id)animatorForTentativeWithOccurrence:(id)arg1;
+ (id)animatorForTentativeWithOccurrence:(id)arg1 additivelyAnimatedViews:(id)arg2;

@end
