//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreMotion/CMLogItem.h>

@class CMAttitude;

@interface CMDeviceMotion : CMLogItem
{
    id _internal;
}

@property (readonly, nonatomic) CMAttitude *attitude;
@property (readonly, nonatomic) BOOL doingBiasEstimation;
@property (readonly, nonatomic) BOOL doingYawCorrection;
@property (readonly, nonatomic) CDStruct_31142d93 gravity;
@property (readonly, nonatomic) double heading;
@property (readonly, nonatomic) double headingAccuracy;
@property (readonly, nonatomic) CDStruct_27fd20ed magneticField;
@property (readonly, nonatomic) int magneticFieldCalibrationLevel;
@property (readonly, nonatomic) CDStruct_31142d93 rotationRate;
@property (readonly, nonatomic) long long sensorLocation;
@property (readonly, nonatomic) CDStruct_31142d93 userAcceleration;

+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeviceMotion:(CDStruct_69e6d857)arg1 internal:(CDStruct_37a3040a)arg2 timestamp:(double)arg3;
- (BOOL)isEqual:(id)arg1;

@end

