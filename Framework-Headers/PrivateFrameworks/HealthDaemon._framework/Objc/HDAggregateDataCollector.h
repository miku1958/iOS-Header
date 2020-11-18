//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDDataCollector.h>

@class NSDictionary, _HKDataCollectorDelayedOperation;
@protocol HDSensorDatum;

@interface HDAggregateDataCollector : HDDataCollector
{
    _HKDataCollectorDelayedOperation *_historicalFetchOperation;
    id<HDSensorDatum> _lastReceivedSensorDatum;
    BOOL _didReceiveSensorDatum;
    NSDictionary *_lastReceivedSecondaryContext;
    BOOL _fetchingHistoricalData;
    BOOL _needsHistoricalFetch;
    double _maxDatumDuration;
}

@property double maxDatumDuration;

- (void).cxx_destruct;
- (double)_queue_aggregationInterval;
- (void)_queue_beginStreaming;
- (void)_queue_beginUpdates;
- (void)_queue_fetchHistoricalDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)_queue_handleCMDatabaseReset;
- (void)_queue_handleUpdatingHistoricalDataWithCompletion:(CDUnknownBlockType)arg1;
- (id)_queue_lastReceivedSecondaryContext;
- (id)_queue_lastReceivedSensorDatum;
- (double)_queue_maxDatumDuration;
- (void)_queue_processSensorData:(id)arg1 lastSensorDatum:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_queue_processSensorDataBatched:(id)arg1 firstDatum:(id)arg2 lastSensorDatum:(id *)arg3;
- (void)_queue_updateLastReceivedSecondaryContext:(id)arg1;
- (void)_queue_updateLastReceivedSensorDatum:(id)arg1;
- (void)beginUpdatesFromDatum:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)fetchHistoricalSensorDataSinceDatum:(id)arg1 databaseIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)hkObjectsFromSensorData:(id)arg1 baseSensorDatum:(id)arg2 startDate:(id)arg3 endDate:(id)arg4;
- (id)initWithHealthDaemon:(id)arg1;
- (void)updateHistoricalData;
- (void)updateHistoricalDataWithCompletion:(CDUnknownBlockType)arg1;

@end
