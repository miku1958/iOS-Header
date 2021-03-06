//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhysicsKit/PKPhysicsJoint.h>

@interface PKPhysicsJointRevolute : PKPhysicsJoint
{
    struct b2RevoluteJointDef _jointDef;
    struct b2RevoluteJoint *_joint;
    struct CGPoint _anchor;
}

@property (readonly) struct CGPoint anchor; // @synthesize anchor=_anchor;
@property (nonatomic) double frictionTorque;
@property (nonatomic) double lowerAngleLimit;
@property (nonatomic) double rotationSpeed;
@property (nonatomic) BOOL shouldEnableLimits;
@property (nonatomic) double upperAngleLimit;

+ (id)jointWithBodyA:(id)arg1 bodyB:(id)arg2 anchor:(struct CGPoint)arg3;
+ (BOOL)supportsSecureCoding;
- (id).cxx_construct;
- (struct b2Joint *)_joint;
- (struct b2JointDef *)_jointDef;
- (void)create;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBodyA:(id)arg1 bodyB:(id)arg2 anchor:(struct CGPoint)arg3;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqualToRevoluteJoint:(id)arg1;
- (void)set_joint:(struct b2Joint *)arg1;

@end

