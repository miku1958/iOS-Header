//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@interface UIView (AVAdditions)
- (id)avkit_ancestorViewPassingTest:(CDUnknownBlockType)arg1;
- (id)avkit_hitTestControlForPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)avkit_hitTestControlForPoint:(struct CGPoint)arg1 withEvent:(id)arg2 bestSoFar:(inout id *)arg3 shortestDistanceSoFar:(inout double *)arg4;
- (BOOL)avkit_isAncestorOfViewPassingTest:(CDUnknownBlockType)arg1;
- (BOOL)avkit_isDescendantOfViewPassingTest:(CDUnknownBlockType)arg1;
- (BOOL)avkit_isInAWindowAndVisible;
@end

