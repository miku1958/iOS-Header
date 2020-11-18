//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreMotion/NSCopying-Protocol.h>
#import <CoreMotion/NSSecureCoding-Protocol.h>

@interface CMStrideCalibrationData : NSObject <NSSecureCoding, NSCopying>
{
    long long _state;
    double _kValue;
    double _begin;
    double _end;
}

@property (nonatomic) double begin; // @synthesize begin=_begin;
@property (nonatomic) double end; // @synthesize end=_end;
@property (nonatomic) double kValue; // @synthesize kValue=_kValue;
@property (nonatomic) long long state; // @synthesize state=_state;

+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBegin:(double)arg1 end:(double)arg2 state:(long long)arg3 kValue:(double)arg4;
- (id)initWithCoder:(id)arg1;

@end
