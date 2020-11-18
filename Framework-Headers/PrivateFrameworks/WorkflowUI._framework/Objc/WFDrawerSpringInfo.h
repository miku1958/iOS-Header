//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface WFDrawerSpringInfo : NSObject
{
    double _mass;
    double _stiffness;
    double _damping;
    double _initialVelocity;
    double _undershootTime;
    double _overshootTime;
    double _settlingTime;
}

@property (readonly) double damping; // @synthesize damping=_damping;
@property (readonly) double initialVelocity; // @synthesize initialVelocity=_initialVelocity;
@property (readonly) double mass; // @synthesize mass=_mass;
@property (readonly) double overshootTime; // @synthesize overshootTime=_overshootTime;
@property (readonly) double settlingTime; // @synthesize settlingTime=_settlingTime;
@property (readonly) double stiffness; // @synthesize stiffness=_stiffness;
@property (readonly) double undershootTime; // @synthesize undershootTime=_undershootTime;

- (id)description;
- (id)initWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 initialVelocity:(double)arg4;
- (double)valueAtTime:(double)arg1;

@end
