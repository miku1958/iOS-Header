//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/UITimingCurveProvider-Protocol.h>

@class UICubicTimingParameters;

@interface UISpringTimingParameters : NSObject <UITimingCurveProvider>
{
    BOOL _implicitDuration;
    double _dampingRatio;
    double _mass;
    double _stiffness;
    double _damping;
    struct CGVector _initialVelocity;
}

@property (readonly, nonatomic) UICubicTimingParameters *cubicTimingParameters;
@property (nonatomic) double damping; // @synthesize damping=_damping;
@property (readonly, nonatomic) double dampingRatio; // @synthesize dampingRatio=_dampingRatio;
@property (readonly, nonatomic) BOOL implicitDuration; // @synthesize implicitDuration=_implicitDuration;
@property (readonly, nonatomic) struct CGVector initialVelocity; // @synthesize initialVelocity=_initialVelocity;
@property (nonatomic) double mass; // @synthesize mass=_mass;
@property (readonly, nonatomic) double settlingDuration;
@property (readonly, nonatomic) UISpringTimingParameters *springTimingParameters;
@property (nonatomic) double stiffness; // @synthesize stiffness=_stiffness;
@property (readonly, nonatomic) long long timingCurveType;

- (id)_mediaTimingFunction;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)effectiveTimingFunction;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDampingRatio:(double)arg1;
- (id)initWithDampingRatio:(double)arg1 initialVelocity:(struct CGVector)arg2;
- (id)initWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 initialVelocity:(struct CGVector)arg4;

@end

