//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSLayoutAnchor.h>

@interface NSLayoutDimension : NSLayoutAnchor
{
}

- (id)anchorByAddingConstant:(double)arg1;
- (id)anchorByAddingDimension:(id)arg1;
- (id)anchorByMultiplyingByConstant:(double)arg1;
- (id)anchorBySubtractingDimension:(id)arg1;
- (id)constraintEqualToAnchor:(id)arg1 multiplier:(double)arg2;
- (id)constraintEqualToAnchor:(id)arg1 multiplier:(double)arg2 constant:(double)arg3;
- (id)constraintEqualToConstant:(double)arg1;
- (id)constraintGreaterThanOrEqualToAnchor:(id)arg1 multiplier:(double)arg2;
- (id)constraintGreaterThanOrEqualToAnchor:(id)arg1 multiplier:(double)arg2 constant:(double)arg3;
- (id)constraintGreaterThanOrEqualToConstant:(double)arg1;
- (id)constraintLessThanOrEqualToAnchor:(id)arg1 multiplier:(double)arg2;
- (id)constraintLessThanOrEqualToAnchor:(id)arg1 multiplier:(double)arg2 constant:(double)arg3;
- (id)constraintLessThanOrEqualToConstant:(double)arg1;
- (BOOL)isCompatibleWithAnchor:(id)arg1;
- (id)minusDimension:(id)arg1;
- (id)plus:(double)arg1;
- (id)plusDimension:(id)arg1;
- (id)relationshipEqualToConstant:(double)arg1;
- (id)relationshipEqualToConstant:(double)arg1 priority:(float)arg2 identifier:(id)arg3;
- (id)relationshipGreaterThanOrEqualToConstant:(double)arg1;
- (id)relationshipGreaterThanOrEqualToConstant:(double)arg1 priority:(float)arg2 identifier:(id)arg3;
- (id)relationshipLessThanOrEqualToConstant:(double)arg1;
- (id)relationshipLessThanOrEqualToConstant:(double)arg1 priority:(float)arg2 identifier:(id)arg3;
- (id)times:(double)arg1;
- (BOOL)validateOtherAttribute:(long long)arg1;

@end

