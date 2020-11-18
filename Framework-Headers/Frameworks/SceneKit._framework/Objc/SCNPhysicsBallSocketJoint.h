//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SceneKit/SCNPhysicsBehavior.h>

@class SCNPhysicsBody, SCNPhysicsWorld;

@interface SCNPhysicsBallSocketJoint : SCNPhysicsBehavior
{
    struct {
        SCNPhysicsBody *bodyA;
        SCNPhysicsBody *bodyB;
        struct SCNVector3 anchorA;
        struct SCNVector3 anchorB;
    } _definition;
    struct btPoint2PointConstraint *_constraint;
    SCNPhysicsWorld *_world;
}

@property (nonatomic) struct SCNVector3 anchorA;
@property (nonatomic) struct SCNVector3 anchorB;
@property (readonly, nonatomic) SCNPhysicsBody *bodyA;
@property (readonly, nonatomic) SCNPhysicsBody *bodyB;

+ (id)jointWithBody:(id)arg1 anchor:(struct SCNVector3)arg2;
+ (id)jointWithBodyA:(id)arg1 anchorA:(struct SCNVector3)arg2 bodyB:(id)arg3 anchorB:(struct SCNVector3)arg4;
+ (BOOL)supportsSecureCoding;
- (void)_addToPhysicsWorld:(id)arg1;
- (void)_willRemoveFromPhysicsWorld:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBody:(id)arg1 anchor:(struct SCNVector3)arg2;
- (id)initWithBodyA:(id)arg1 anchorA:(struct SCNVector3)arg2 bodyB:(id)arg3 anchorB:(struct SCNVector3)arg4;
- (id)initWithCoder:(id)arg1;

@end

