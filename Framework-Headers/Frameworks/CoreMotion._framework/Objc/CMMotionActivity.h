//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreMotion/CMLogItem.h>

@class NSDate;

@interface CMMotionActivity : CMLogItem
{
    struct CLMotionActivity fState;
}

@property (readonly, nonatomic) BOOL automotive;
@property (readonly, nonatomic) long long confidence;
@property (readonly, nonatomic) BOOL cycling;
@property (readonly, nonatomic) BOOL running;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) BOOL stationary;
@property (readonly, nonatomic) BOOL unknown;
@property (readonly, nonatomic, getter=isVehicleBTHint) BOOL vehicleBTHint;
@property (readonly, nonatomic, getter=isVehicleBasebandHint) BOOL vehicleBasebandHint;
@property (readonly, nonatomic, getter=isVehicleConnected) BOOL vehicleConnected;
@property (readonly, nonatomic, getter=isVehicleGpsHint) BOOL vehicleGpsHint;
@property (readonly, nonatomic, getter=isVehicleMotionHint) BOOL vehicleMotionHint;
@property (readonly, nonatomic, getter=isVehicleWifiHint) BOOL vehicleWifiHint;
@property (readonly, nonatomic) BOOL walking;

+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMotionActivity:(struct CLMotionActivity)arg1;

@end

