//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSSecureCoding-Protocol.h>

@interface _UIViewAnimationAttributes : NSObject <NSSecureCoding>
{
    double _duration;
    double _delay;
    unsigned long long _options;
    BOOL _hasSpringAttributes;
    double _springDamping;
    double _springVelocity;
    double _springMass;
    double _springStiffness;
    long long _curve;
}

@property (readonly, nonatomic, getter=_curve) long long curve; // @synthesize curve=_curve;
@property (readonly, nonatomic, getter=_delay) double delay; // @synthesize delay=_delay;
@property (readonly, nonatomic, getter=_duration) double duration; // @synthesize duration=_duration;
@property (readonly, nonatomic, getter=_hasSpringAttributes) BOOL hasSpringAttributes; // @synthesize hasSpringAttributes=_hasSpringAttributes;
@property (readonly, nonatomic, getter=_springDamping) double springDamping; // @synthesize springDamping=_springDamping;
@property (readonly, nonatomic, getter=_springMass) double springMass; // @synthesize springMass=_springMass;
@property (readonly, nonatomic, getter=_springStiffness) double springStiffness; // @synthesize springStiffness=_springStiffness;
@property (readonly, nonatomic, getter=_springVelocity) double springVelocity; // @synthesize springVelocity=_springVelocity;

+ (BOOL)supportsSecureCoding;
- (long long)curve;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

