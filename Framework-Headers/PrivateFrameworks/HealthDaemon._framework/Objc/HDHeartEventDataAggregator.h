//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDPassiveDataAggregator.h>

@interface HDHeartEventDataAggregator : HDPassiveDataAggregator
{
}

- (id)dataObjectsFromSensorDatum:(id)arg1 error:(id *)arg2;
- (id)objectType;
- (BOOL)queue_didPersistObjects:(id)arg1 lastDatum:(id)arg2 collector:(id)arg3 error:(id *)arg4;
- (Class)sensorDatumClass;

@end
