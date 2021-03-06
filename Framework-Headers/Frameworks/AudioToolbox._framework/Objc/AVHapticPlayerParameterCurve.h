//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AudioToolbox/NSSecureCoding-Protocol.h>

@class NSArray;

@interface AVHapticPlayerParameterCurve : NSObject <NSSecureCoding>
{
    unsigned long long _type;
    double _time;
    unsigned long long _shape;
    NSArray *_controlPoints;
}

@property (readonly) NSArray *controlPoints;
@property unsigned long long shape; // @synthesize shape=_shape;
@property double time; // @synthesize time=_time;
@property unsigned long long type; // @synthesize type=_type;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 relativeTime:(double)arg2 shape:(unsigned long long)arg3 controlPoints:(id)arg4;

@end

