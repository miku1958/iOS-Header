//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSuggestions/NSObject-Protocol.h>

@class CLLocation, NSDate, NSUUID;

@protocol MapsSuggestionsRoutineConnector <NSObject>
- (void)clearAllVehicleEventsWithHandler:(void (^)(void))arg1;
- (void)fetchLocationOfInterestAtLocation:(CLLocation *)arg1 withHandler:(void (^)(RTLocationOfInterest *, NSError *))arg2;
- (void)fetchLocationOfInterestWithIdentifier:(NSUUID *)arg1 withHandler:(void (^)(RTLocationOfInterest *, NSError *))arg2;
- (void)fetchLocationsOfInterestOfType:(long long)arg1 withHandler:(void (^)(NSArray *, NSError *))arg2;
- (void)fetchLocationsOfInterestVisitedSinceDate:(NSDate *)arg1 withHandler:(void (^)(NSArray *, NSError *))arg2;
- (void)fetchNextPLOIsFromLocation:(CLLocation *)arg1 startDate:(NSDate *)arg2 timeInterval:(double)arg3 withHandler:(void (^)(NSArray *, NSError *))arg4;
- (void)fetchPredictedExitDatesFromLocation:(CLLocation *)arg1 onDate:(NSDate *)arg2 withHandler:(void (^)(NSArray *, NSError *))arg3;
- (void)fetchRoutineModeFromLocation:(CLLocation *)arg1 withHandler:(void (^)(long long, NSError *))arg2;
- (void)removeLocationOfInterestWithIdentifier:(NSUUID *)arg1 handler:(void (^)(NSError *))arg2;
- (void)startMonitoringVehicleEventsWithHandler:(void (^)(NSArray *, NSError *))arg1;
- (void)stopMonitoringVehicleEvents;
@end
