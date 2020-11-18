//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDAggregateDataCollector.h>

@class CMPedometer;

@interface HDPedometerDataCollector : HDAggregateDataCollector
{
    CMPedometer *_pedometer;
}

+ (id)createCollectorsForCurrentHardware:(id)arg1;
+ (Class)sensorDatumClass;
- (void).cxx_destruct;
- (id)_queue_pedometer;
- (void)beginUpdatesFromDatum:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)fetchHistoricalSensorDataSinceDatum:(id)arg1 databaseIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)hkObjectsFromSensorData:(id)arg1 baseSensorDatum:(id)arg2 startDate:(id)arg3 endDate:(id)arg4;
- (id)initWithHealthDaemon:(id)arg1;
- (id)pedometer;
- (id)quantitySampleFromPedometerData:(id)arg1 toPedometerData:(id)arg2 startDate:(id)arg3 endDate:(id)arg4;
- (void)setPedometer:(id)arg1;
- (void)stopPerformingUpdatesWithErrorEncountered:(BOOL)arg1;

@end
