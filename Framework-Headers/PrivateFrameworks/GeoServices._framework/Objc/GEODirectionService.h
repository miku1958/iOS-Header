//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEODirectionsRequester;

@interface GEODirectionService : NSObject
{
    GEODirectionsRequester *_directionsRequester;
}

@property (readonly, nonatomic) GEODirectionsRequester *directionsRequester; // @synthesize directionsRequester=_directionsRequester;

+ (id)sharedService;
- (void).cxx_destruct;
- (id)directionsURL;
- (id)init;
- (id)ticketForCyclingRerouteFromLocation:(id)arg1 originalRoute:(id)arg2 stepIndex:(unsigned long long)arg3 routeCoordinate:(CDStruct_3f2a7a20)arg4 routeAttributes:(id)arg5 originalDirectionsResponseID:(id)arg6 previousRequestTime:(double)arg7 requestingAppIdentifier:(id)arg8;
- (id)ticketForCyclingRouteRecall:(id)arg1 waypoints:(id)arg2 maxRouteCount:(unsigned int)arg3 routeAttributes:(id)arg4 feedback:(id)arg5;
- (id)ticketForCyclingSearchAlongRoute:(id)arg1 currentLocation:(id)arg2 originalRoute:(id)arg3 returnToOriginalDestination:(BOOL)arg4 isReroute:(BOOL)arg5 routeAttributes:(id)arg6;
- (id)ticketForCyclingWaypoints:(id)arg1 currentLocation:(id)arg2 visibleRegion:(id)arg3 maxRouteCount:(unsigned int)arg4 routeAttributes:(id)arg5 feedback:(id)arg6;
- (id)ticketForCyclingWaypoints:(id)arg1 currentLocation:(id)arg2 visibleRegion:(id)arg3 maxRouteCount:(unsigned int)arg4 routeAttributes:(id)arg5 feedback:(id)arg6 sessionID:(struct GEOSessionID)arg7;
- (id)ticketForDrivingDoomFromOrigin:(id)arg1 toDestination:(id)arg2 requestPriority:(id)arg3 routeAttributes:(id)arg4;
- (id)ticketForDrivingRerouteFromLocation:(id)arg1 originalRoute:(id)arg2 originalRequest:(id)arg3 stepIndex:(unsigned long long)arg4 routeCoordinate:(CDStruct_3f2a7a20)arg5 routeAttributes:(id)arg6 originalDirectionsResponseID:(id)arg7 previousRequestTime:(double)arg8 requestingAppIdentifier:(id)arg9 evInfo:(id)arg10;
- (id)ticketForDrivingRouteRecall:(id)arg1 waypoints:(id)arg2 maxRouteCount:(unsigned int)arg3 routeAttributes:(id)arg4 feedback:(id)arg5;
- (id)ticketForDrivingSearchAlongRoute:(id)arg1 currentLocation:(id)arg2 originalRoute:(id)arg3 returnToOriginalDestination:(BOOL)arg4 isReroute:(BOOL)arg5 routeAttributes:(id)arg6;
- (id)ticketForDrivingWaypoints:(id)arg1 currentLocation:(id)arg2 visibleRegion:(id)arg3 maxRouteCount:(unsigned int)arg4 routeAttributes:(id)arg5 feedback:(id)arg6;
- (id)ticketForDrivingWaypoints:(id)arg1 currentLocation:(id)arg2 visibleRegion:(id)arg3 maxRouteCount:(unsigned int)arg4 routeAttributes:(id)arg5 feedback:(id)arg6 sessionID:(struct GEOSessionID)arg7;
- (id)ticketForSearchAlongRoute:(id)arg1 transportType:(int)arg2 currentLocation:(id)arg3 originalRouteZilchPoints:(id)arg4 originalRouteID:(id)arg5 returnToOriginalDestination:(BOOL)arg6 isReroute:(BOOL)arg7 routeAttributes:(id)arg8;
- (id)ticketForTransitRerouteFromLocation:(id)arg1 originalRoute:(id)arg2 stepIndex:(unsigned long long)arg3 routeAttributes:(id)arg4 originalDirectionsResponseID:(id)arg5 previousRequestTime:(double)arg6;
- (id)ticketForTransitRouteRecall:(id)arg1 waypoints:(id)arg2 maxRouteCount:(unsigned int)arg3 routeAttributes:(id)arg4 feedback:(id)arg5;
- (id)ticketForTransitWaypoints:(id)arg1 currentLocation:(id)arg2 visibleRegion:(id)arg3 maxRouteCount:(unsigned int)arg4 routeAttributes:(id)arg5 feedback:(id)arg6;
- (id)ticketForTransitWaypoints:(id)arg1 currentLocation:(id)arg2 visibleRegion:(id)arg3 maxRouteCount:(unsigned int)arg4 routeAttributes:(id)arg5 feedback:(id)arg6 sessionID:(struct GEOSessionID)arg7;
- (id)ticketForWalkingRerouteFromLocation:(id)arg1 originalRoute:(id)arg2 stepIndex:(unsigned long long)arg3 routeCoordinate:(CDStruct_3f2a7a20)arg4 routeAttributes:(id)arg5 originalDirectionsResponseID:(id)arg6 previousRequestTime:(double)arg7 requestingAppIdentifier:(id)arg8;
- (id)ticketForWalkingRouteRecall:(id)arg1 waypoints:(id)arg2 maxRouteCount:(unsigned int)arg3 routeAttributes:(id)arg4 feedback:(id)arg5;
- (id)ticketForWalkingWaypoints:(id)arg1 currentLocation:(id)arg2 visibleRegion:(id)arg3 maxRouteCount:(unsigned int)arg4 routeAttributes:(id)arg5 feedback:(id)arg6;
- (id)ticketForWalkingWaypoints:(id)arg1 currentLocation:(id)arg2 visibleRegion:(id)arg3 maxRouteCount:(unsigned int)arg4 routeAttributes:(id)arg5 feedback:(id)arg6 sessionID:(struct GEOSessionID)arg7;

@end
