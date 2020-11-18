//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SceneKit/SCNPhysicsBehavior.h>

@class SCNPhysicsBody, SCNPhysicsWorld;

@interface SCNPhysicsConeTwistJoint : SCNPhysicsBehavior
{
    struct {
        SCNPhysicsBody *bodyA;
        struct SCNMatrix4 frameA;
        SCNPhysicsBody *bodyB;
        struct SCNMatrix4 frameB;
        double maximumAngularLimit1;
        double maximumAngularLimit2;
        double maximumTwistAngle;
    } _definition;
    struct btConeTwistConstraint *_constraint;
    SCNPhysicsWorld *_world;
}

@property (readonly, nonatomic) SCNPhysicsBody *bodyA;
@property (readonly, nonatomic) SCNPhysicsBody *bodyB;
@property (nonatomic) struct SCNMatrix4 frameA;
@property (nonatomic) struct SCNMatrix4 frameB;
@property (nonatomic) double maximumAngularLimit1;
@property (nonatomic) double maximumAngularLimit2;
@property (nonatomic) double maximumTwistAngle;

+ (id)jointWithBody:(id)arg1 frame:(struct SCNMatrix4)arg2;
+ (id)jointWithBodyA:(id)arg1 frameA:(struct SCNMatrix4)arg2 bodyB:(id)arg3 frameB:(struct SCNMatrix4)arg4;
- (void)_addToPhysicsWorld:(id)arg1;
- (void)_willRemoveFromPhysicsWorld:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBody:(id)arg1 frame:(struct SCNMatrix4)arg2;
- (id)initWithBodyA:(id)arg1 frameA:(struct SCNMatrix4)arg2 bodyB:(id)arg3 frameB:(struct SCNMatrix4)arg4;
- (id)initWithCoder:(id)arg1;

@end

