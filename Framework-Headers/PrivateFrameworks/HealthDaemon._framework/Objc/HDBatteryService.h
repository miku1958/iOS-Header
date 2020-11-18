//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDHealthService.h>

@class CBCharacteristic;

@interface HDBatteryService : HDHealthService
{
    CBCharacteristic *_batteryCharacteristic;
}

@property (strong, nonatomic) CBCharacteristic *batteryCharacteristic; // @synthesize batteryCharacteristic=_batteryCharacteristic;

+ (id)implementedProperties;
+ (long long)serviceType;
+ (id)serviceUUID;
- (void).cxx_destruct;
- (id)handleBatteryLevel:(id)arg1;
- (void)peripheral:(id)arg1 didDiscoverCharacteristic:(id)arg2;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 updateTime:(id)arg3 error:(id)arg4;
- (void)readProperty:(id)arg1;

@end

