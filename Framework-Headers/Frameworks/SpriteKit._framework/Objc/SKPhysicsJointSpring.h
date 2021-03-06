//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpriteKit/SKPhysicsJoint.h>

@interface SKPhysicsJointSpring : SKPhysicsJoint
{
    double _damping;
    double _frequency;
}

@property (nonatomic) double damping; // @synthesize damping=_damping;
@property (nonatomic) double frequency; // @synthesize frequency=_frequency;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)jointWithBodyA:(id)arg1 bodyB:(id)arg2 anchorA:(struct CGPoint)arg3 anchorB:(struct CGPoint)arg4;
+ (BOOL)supportsSecureCoding;

@end

