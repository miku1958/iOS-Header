//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CLSLocationOfInterestVisitsCache, NSDateInterval, NSMutableSet;

@interface CLSRoutineService : NSObject
{
    BOOL _routineIsAvailable;
    NSDateInterval *_fetchDateInterval;
    CLSLocationOfInterestVisitsCache *_visitsCache;
    NSMutableSet *_pendingPinningVisitIdentifiers;
    struct CLSRoutineServiceStatisticsStruct _statistics;
}

@property (strong, nonatomic) NSDateInterval *fetchDateInterval; // @synthesize fetchDateInterval=_fetchDateInterval;
@property (strong, nonatomic) NSMutableSet *pendingPinningVisitIdentifiers; // @synthesize pendingPinningVisitIdentifiers=_pendingPinningVisitIdentifiers;
@property (nonatomic) BOOL routineIsAvailable; // @synthesize routineIsAvailable=_routineIsAvailable;
@property (readonly) struct CLSRoutineServiceStatisticsStruct statistics; // @synthesize statistics=_statistics;
@property (strong, nonatomic) CLSLocationOfInterestVisitsCache *visitsCache; // @synthesize visitsCache=_visitsCache;

- (void).cxx_destruct;
- (void)_buildLocationsOfInterestCache;
- (unsigned long long)_devicePlacementTypeForLocationsOfInterestVisits:(id)arg1;
- (double)_disambiguationDistanceForDevicePlacementType:(unsigned long long)arg1;
- (id)_fetchHomeAndWorkLocationsOfInterestWithRoutineManager:(id)arg1;
- (id)_fetchLocationsOfInterestWithinDateInterval:(id)arg1;
- (void)_pinPendingVisits;
- (id)_placemarksFromLocationsOfInterest:(id)arg1;
- (BOOL)hasLocationsOfInterestInformation;
- (id)initWithFetchDateInterval:(id)arg1;
- (void)invalidateLocationsOfInterest;
- (BOOL)isRemoteLocation:(id)arg1 inDateInterval:(id)arg2;
- (id)locationOfInterestAtLocation:(id)arg1;
- (id)locationOfInterestCloseToLocation:(id)arg1 inDateInterval:(id)arg2;
- (id)locationsOfInterestOfType:(long long)arg1;
- (id)placemarksOfInterestOfType:(long long)arg1;
- (void)postProcessLocationsOfInterest;

@end

