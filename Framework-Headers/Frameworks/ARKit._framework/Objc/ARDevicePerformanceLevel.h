//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ARKit/NSCopying-Protocol.h>

@interface ARDevicePerformanceLevel : NSObject <NSCopying>
{
    unsigned long long _thermalLevel;
    unsigned long long _batteryLevel;
}

@property (readonly, nonatomic) unsigned long long batteryLevel; // @synthesize batteryLevel=_batteryLevel;
@property (readonly, nonatomic) unsigned long long thermalLevel; // @synthesize thermalLevel=_thermalLevel;

+ (unsigned long long)ARDevicethermalStateFromNSProcessInfoThermalState:(long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithNSProcessInfoThermalState:(long long)arg1 initWithBatteryLevel:(unsigned long long)arg2;
- (id)initWithThermalLevel:(unsigned long long)arg1 initWithBatteryLevel:(unsigned long long)arg2;
- (BOOL)isEqual:(id)arg1;

@end
