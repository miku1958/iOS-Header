//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface GEODirectionService : NSObject
{
}

+ (id)sharedService;
- (id)ticketForDrivingRerouteFromLocation:(id)arg1 originalRoute:(id)arg2 routeAttributes:(id)arg3 stepIndex:(unsigned long long)arg4;
- (id)ticketForDrivingRouteRecall:(id)arg1 waypoints:(id)arg2 maxRouteCount:(unsigned int)arg3 routeAttributes:(id)arg4 feedback:(id)arg5;
- (id)ticketForDrivingWaypoints:(id)arg1 currentLocation:(id)arg2 visibleRegion:(id)arg3 maxRouteCount:(unsigned int)arg4 routeAttributes:(id)arg5 feedback:(id)arg6;
- (id)ticketForTransitRerouteFromLocation:(id)arg1 originalRoute:(id)arg2 stepIndex:(unsigned long long)arg3;
- (id)ticketForTransitRouteRecall:(id)arg1 waypoints:(id)arg2 maxRouteCount:(unsigned int)arg3 routeAttributes:(id)arg4 feedback:(id)arg5;
- (id)ticketForTransitWaypoints:(id)arg1 currentLocation:(id)arg2 visibleRegion:(id)arg3 maxRouteCount:(unsigned int)arg4 routeAttributes:(id)arg5 feedback:(id)arg6;
- (id)ticketForWalkingRerouteFromLocation:(id)arg1 originalRoute:(id)arg2 stepIndex:(unsigned long long)arg3;
- (id)ticketForWalkingRouteRecall:(id)arg1 waypoints:(id)arg2 maxRouteCount:(unsigned int)arg3 routeAttributes:(id)arg4 feedback:(id)arg5;
- (id)ticketForWalkingWaypoints:(id)arg1 currentLocation:(id)arg2 visibleRegion:(id)arg3 maxRouteCount:(unsigned int)arg4 routeAttributes:(id)arg5 feedback:(id)arg6;

@end

