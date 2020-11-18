//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDHealthService.h>

@interface HDFitnessMachineService : HDHealthService
{
    unsigned long long _machineType;
}

@property (readonly, nonatomic) unsigned long long machineType; // @synthesize machineType=_machineType;

+ (id)_allCharacteristicClasses;
+ (id)_characteristicsMap;
+ (id)implementedProperties;
+ (long long)serviceType;
+ (id)serviceUUID;
+ (unsigned long long)typeFromAdvertisementData:(id)arg1;
- (void)peripheral:(id)arg1 didDiscoverCharacteristic:(id)arg2;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 updateTime:(id)arg3 error:(id)arg4;
- (BOOL)processAdvertisementData:(id)arg1;
- (void)readProperty:(id)arg1;
- (id)servicesInProfile;

@end
