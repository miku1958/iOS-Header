//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDDataAggregator.h>

@interface HDPassiveDataAggregator : HDDataAggregator
{
}

- (void)dataCollector:(id)arg1 didCollectSensorData:(id)arg2 device:(id)arg3;
- (id)dataObjectsFromSensorDatum:(id)arg1 error:(id *)arg2;
- (Class)sensorDatumClass;

@end

