//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SceneKit/SCNConstraint.h>

@class SCNNode;

@interface SCNDistanceConstraint : SCNConstraint
{
    SCNNode *_target;
    float _minimumDistance;
    float _maximumDistance;
    BOOL _keepTargetDirection;
    struct SCNVector3 _targetDirection;
    float _maximumDirectionAngle;
}

@property (nonatomic) double maximumDistance;
@property (nonatomic) double minimumDistance;
@property (strong, nonatomic) SCNNode *target;

+ (id)distanceConstraint;
+ (id)distanceConstraintWithTarget:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void)_customDecodingOfSCNDistanceConstraint:(id)arg1;
- (void)_customEncodingOfSCNDistanceConstraint:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)keepTargetDirection;
- (void)setKeepTargetDirection:(BOOL)arg1;
- (void)setTargetDirection:(struct SCNVector3)arg1;
- (struct SCNVector3)targetDirection;

@end
