//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDQueryServer.h>

#import <HealthDaemon/HDDataObserver-Protocol.h>

@class HDStatisticsBuilder, HKStatisticsCollection, NSDate, NSMutableArray, NSNumber, NSString;

@interface HDStatisticsCollectionQueryServer : HDQueryServer <HDDataObserver>
{
    NSNumber *_startAnchor;
    HKStatisticsCollection *_statisticsCollection;
    HDStatisticsBuilder *_statisticsBuilder;
    NSMutableArray *_addedSamples;
    NSNumber *_addedSamplesAnchor;
    BOOL _deliveredInitialResults;
    BOOL _deliversUpdates;
    unsigned long long _mergeStrategy;
    NSDate *_anchorDate;
    unsigned long long _statisticsOptions;
}

@property (readonly, nonatomic) NSDate *anchorDate; // @synthesize anchorDate=_anchorDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) unsigned long long statisticsOptions; // @synthesize statisticsOptions=_statisticsOptions;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_queue_deliverUpdatedStatistics:(id)arg1 error:(id)arg2;
- (void)_queue_fetchAndDeliverAllStatisticsInitial:(BOOL)arg1;
- (BOOL)_queue_objectIsRelevant:(id)arg1;
- (void)_queue_start;
- (void)_queue_updateStatistics;
- (void)_scheduleFetchAndDeliver;
- (void)_scheduleUpdateStatistics;
- (BOOL)_shouldListenForUpdates;
- (id)initWithQueryUUID:(id)arg1 dataObject:(id)arg2 clientProxy:(id)arg3 client:(id)arg4 delegate:(id)arg5 profile:(id)arg6;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2;

@end

