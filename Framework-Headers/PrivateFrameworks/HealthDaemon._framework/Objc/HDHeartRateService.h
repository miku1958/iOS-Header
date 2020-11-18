//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDHealthService.h>

@interface HDHeartRateService : HDHealthService
{
    BOOL _deliverData;
    long long _preferredSensorLocation;
}

@property (nonatomic) long long preferredSensorLocation; // @synthesize preferredSensorLocation=_preferredSensorLocation;

+ (long long)serviceType;
+ (id)serviceUUID;
- (BOOL)deliverData;
- (void)handleBodyLocation:(id)arg1;
- (void)handleHeartRate:(id)arg1;
- (id)initWithDeviceManager:(id)arg1 propertyManager:(id)arg2 healthDaemon:(id)arg3 peripheral:(id)arg4;
- (void)performOperation:(id)arg1 onPeripheral:(id)arg2 withParameters:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)peripheral:(id)arg1 didDiscoverCharacteristic:(id)arg2;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)resetEnergyExpendedOnPeripheral:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setDeliverData:(BOOL)arg1;

@end

