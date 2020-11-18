//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SceneKit/JSExport-Protocol.h>

@class SCNPhysicsBody;

@protocol SCNPhysicsBallSocketJointJSExport <JSExport>

@property (nonatomic) struct SCNVector3 anchorA;
@property (nonatomic) struct SCNVector3 anchorB;
@property (readonly, nonatomic) SCNPhysicsBody *bodyA;
@property (readonly, nonatomic) SCNPhysicsBody *bodyB;

+ (id)jointWithBody:(SCNPhysicsBody *)arg1 anchor:(struct SCNVector3)arg2;
+ (id)jointWithBodyA:(SCNPhysicsBody *)arg1 anchorA:(struct SCNVector3)arg2 bodyB:(SCNPhysicsBody *)arg3 anchorB:(struct SCNVector3)arg4;
@end

