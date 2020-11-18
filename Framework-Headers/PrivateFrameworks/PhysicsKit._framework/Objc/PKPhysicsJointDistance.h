//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhysicsKit/PKPhysicsJoint.h>

@interface PKPhysicsJointDistance : PKPhysicsJoint
{
    struct b2DistanceJointDef _jointDef;
    struct b2DistanceJoint *_joint;
    struct CGPoint _anchorA;
    struct CGPoint _anchorB;
}

@property (nonatomic) BOOL collideConnected;
@property (nonatomic) double damping;
@property (nonatomic) double frequency;
@property (nonatomic) double length;

+ (id)jointWithBodyA:(id)arg1 bodyB:(id)arg2 anchorA:(struct CGPoint)arg3 anchorB:(struct CGPoint)arg4;
+ (id)jointWithBodyA:(id)arg1 bodyB:(id)arg2 localAnchorA:(struct CGPoint)arg3 localAnchorB:(struct CGPoint)arg4;
+ (BOOL)supportsSecureCoding;
- (id).cxx_construct;
- (struct b2Joint *)_joint;
- (struct b2JointDef *)_jointDef;
- (void)create;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBodyA:(id)arg1 bodyB:(id)arg2 anchorA:(struct CGPoint)arg3 anchorB:(struct CGPoint)arg4;
- (id)initWithBodyA:(id)arg1 bodyB:(id)arg2 localAnchorA:(struct CGPoint)arg3 localAnchorB:(struct CGPoint)arg4;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqualToDistanceJoint:(id)arg1;
- (void)set_joint:(struct b2Joint *)arg1;

@end

