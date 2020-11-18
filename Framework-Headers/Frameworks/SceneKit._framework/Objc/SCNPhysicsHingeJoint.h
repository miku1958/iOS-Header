//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SceneKit/SCNPhysicsBehavior.h>

@class SCNPhysicsBody, SCNPhysicsWorld;

@interface SCNPhysicsHingeJoint : SCNPhysicsBehavior
{
    struct {
        SCNPhysicsBody *bodyA;
        SCNPhysicsBody *bodyB;
        struct SCNVector3 anchorA;
        struct SCNVector3 anchorB;
        struct SCNVector3 axisA;
        struct SCNVector3 axisB;
    } _definition;
    struct btHingeConstraint *_constraint;
    SCNPhysicsWorld *_world;
}

@property (nonatomic) struct SCNVector3 anchorA;
@property (nonatomic) struct SCNVector3 anchorB;
@property (nonatomic) struct SCNVector3 axisA;
@property (nonatomic) struct SCNVector3 axisB;
@property (readonly, nonatomic) SCNPhysicsBody *bodyA;
@property (readonly, nonatomic) SCNPhysicsBody *bodyB;

+ (id)jointWithBody:(id)arg1 axis:(struct SCNVector3)arg2 anchor:(struct SCNVector3)arg3;
+ (id)jointWithBodyA:(id)arg1 axisA:(struct SCNVector3)arg2 anchorA:(struct SCNVector3)arg3 bodyB:(id)arg4 axisB:(struct SCNVector3)arg5 anchorB:(struct SCNVector3)arg6;
- (void)_addToPhysicsWorld:(id)arg1;
- (void)_willRemoveFromPhysicsWorld:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBody:(id)arg1 axis:(struct SCNVector3)arg2 anchor:(struct SCNVector3)arg3;
- (id)initWithBodyA:(id)arg1 axisA:(struct SCNVector3)arg2 anchorA:(struct SCNVector3)arg3 bodyB:(id)arg4 axisB:(struct SCNVector3)arg5 anchorB:(struct SCNVector3)arg6;
- (id)initWithCoder:(id)arg1;

@end

