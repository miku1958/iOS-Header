//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface EKTravelEngineUtilities : NSObject
{
}

+ (id)authorizationStatusAsString:(int)arg1;
+ (BOOL)date:(id)arg1 representsApproachingDepartureDateForHypothesis:(id)arg2;
+ (BOOL)date:(id)arg1 representsImmediateDepartureForHypothesis:(id)arg2;
+ (BOOL)date:(id)arg1 representsLatenessForHypothesis:(id)arg2;
+ (id)effectiveTravelAdvisoryTravelTimeDateForHypothesis:(id)arg1;
+ (double)effectiveTravelAdvisoryTravelTimeForHypothesis:(id)arg1;
+ (id)formattedLocationCoordinates:(id)arg1;
+ (long long)geoRouteHypothesisTravelStateForString:(id)arg1;
+ (id)geoTrafficDensityAsString:(unsigned long long)arg1;
+ (unsigned long long)geoTrafficDensityForString:(id)arg1;
+ (id)geoTransportTypeAsString:(int)arg1;
+ (int)geoTransportTypeForCalLocationRoutingMode:(long long)arg1;
+ (int)geoTransportTypeForString:(id)arg1;
+ (double)maximumAllowableTravelTime;
+ (double)minimumAllowableTravelTime;
+ (BOOL)travelStateIndicatesTravelingTowardDestination:(long long)arg1;

@end

