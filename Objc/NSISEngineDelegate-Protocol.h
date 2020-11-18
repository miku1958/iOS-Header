//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class NSArray, NSISEngine, NSISVariable;
@protocol NSISConstraint;

@protocol NSISEngineDelegate <NSObject>
- (void)constraintsDidChangeInEngine:(NSISEngine *)arg1;
- (NSISVariable *)engine:(NSISEngine *)arg1 markerForConstraintToBreakAmongConstraints:(NSArray *)arg2;
- (void)engine:(NSISEngine *)arg1 willBreakConstraint:(id<NSISConstraint>)arg2 dueToMutuallyExclusiveConstraints:(NSArray *)arg3;
@end

