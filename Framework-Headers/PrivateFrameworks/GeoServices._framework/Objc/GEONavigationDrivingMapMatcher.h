//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEONavigationMapMatcher.h>

@interface GEONavigationDrivingMapMatcher : GEONavigationMapMatcher
{
}

- (double)_approximateMaxSpeedForRoad:(CDStruct_a2ef2718 *)arg1;
- (BOOL)_isParkingLotFormOfWay:(int)arg1;
- (BOOL)_locationMeetsSpeedThresholdForRoadMatch:(id)arg1 distanceFromRoute:(double)arg2;
- (id)_routeMatcherForRoute:(id)arg1;
- (BOOL)_shouldConsiderRoadMatch:(id)arg1 overRouteMatch:(id)arg2 forLocation:(id)arg3;
- (id)matchLocation:(id)arg1 transportType:(int)arg2;
- (int)transportType;

@end
