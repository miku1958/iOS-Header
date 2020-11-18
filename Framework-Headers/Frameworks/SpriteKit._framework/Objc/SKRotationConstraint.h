//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpriteKit/SKConstraint.h>

@class SKRange;

__attribute__((visibility("hidden")))
@interface SKRotationConstraint : SKConstraint
{
    SKRange *_zRotationRange;
}

@property (copy) SKRange *zRotationRange; // @synthesize zRotationRange=_zRotationRange;

+ (id)constraintWithZRotationRange:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithZRotationRange:(id)arg1;
- (BOOL)isEqualToRotationConstraint:(id)arg1;

@end

