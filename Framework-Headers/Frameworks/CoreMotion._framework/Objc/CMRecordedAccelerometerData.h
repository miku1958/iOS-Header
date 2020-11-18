//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreMotion/CMAccelerometerData.h>

@class NSDate;

@interface CMRecordedAccelerometerData : CMAccelerometerData
{
    double _startDateValue;
    CDStruct_31142d93 _accelerationValue;
    double _timestampValue;
    unsigned long long _identifier;
}

@property (readonly) unsigned long long identifier; // @synthesize identifier=_identifier;
@property (readonly) NSDate *startDate;

+ (BOOL)supportsSecureCoding;
- (CDStruct_31142d93)acceleration;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(struct CMAccel100 *)arg1 timestamp:(unsigned long long)arg2 walltime:(double)arg3 identifier:(unsigned long long)arg4;
- (void)resetWithData:(struct CMAccel100 *)arg1 timestamp:(unsigned long long)arg2 walltime:(double)arg3 identifier:(unsigned long long)arg4;
- (double)timestamp;

@end

