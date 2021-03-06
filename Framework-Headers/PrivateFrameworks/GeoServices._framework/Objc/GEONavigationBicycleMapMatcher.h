//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEONavigationMapMatcher.h>

@interface GEONavigationBicycleMapMatcher : GEONavigationMapMatcher
{
    unsigned long long _numProgressionsOffRoute;
    BOOL _useMatchedCoordinateForMatching;
}

@property (nonatomic) BOOL useMatchedCoordinateForMatching; // @synthesize useMatchedCoordinateForMatching=_useMatchedCoordinateForMatching;

- (double)_approximateMaxSpeedForRoad:(CDStruct_4da79865 *)arg1;
- (CDStruct_c3b9c2ee)_coordinateFromLocation:(id)arg1;
- (double)_courseFromLocation:(id)arg1;
- (BOOL)_locationMeetsSpeedThresholdForRoadMatch:(id)arg1 distanceFromRoute:(double)arg2;
- (id)_routeMatcherForRoute:(id)arg1;
- (BOOL)_shouldConsiderRoadMatch:(id)arg1 overRouteMatch:(id)arg2 forLocation:(id)arg3;
- (id)matchLocation:(id)arg1 transportType:(int)arg2;
- (int)transportType;

@end

