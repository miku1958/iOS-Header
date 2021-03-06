//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpriteKit/SKConstraint.h>

@class SKNode, SKRange;

__attribute__((visibility("hidden")))
@interface SKDistanceConstraint : SKConstraint
{
    SKRange *_distanceRange;
    SKNode *_node;
    struct CGPoint _point;
}

@property (copy) SKRange *distanceRange; // @synthesize distanceRange=_distanceRange;
@property (weak) SKNode *node; // @synthesize node=_node;
@property struct CGPoint point; // @synthesize point=_point;

+ (id)constraintWithNode:(id)arg1 distanceRange:(id)arg2;
+ (id)constraintWithPoint:(struct CGPoint)arg1 distanceRange:(id)arg2;
+ (id)constraintWithPoint:(struct CGPoint)arg1 inNode:(id)arg2 distanceRange:(id)arg3;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPoint:(struct CGPoint)arg1 inNode:(id)arg2 distanceRange:(id)arg3;
- (BOOL)isEqualToDistanceConstraint:(id)arg1;

@end

