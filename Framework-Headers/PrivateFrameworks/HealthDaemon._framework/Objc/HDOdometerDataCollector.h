//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDCoreMotionDataCollector.h>

@class HKQuantityType;

@interface HDOdometerDataCollector : HDCoreMotionDataCollector
{
    HKQuantityType *_distanceType;
}

- (void).cxx_destruct;
- (BOOL)canResumeCollectionFromLastSensorDatum;
- (id)collectedTypes;
- (Class)coreMotionDatumClass;
- (id)initWithProfile:(id)arg1 collectedDistanceType:(id)arg2;
- (id)persistentIdentifier;
- (double)queue_differenceFromDatum:(id)arg1 toDatum:(id)arg2 type:(id)arg3;
- (id)queue_newDataSource;
- (unsigned long long)queue_targetCollectionTypeForRequestedCollectionType:(unsigned long long)arg1;

@end

