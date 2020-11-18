//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOComposedRoutePortion-Protocol.h>
#import <GeoServices/NSSecureCoding-Protocol.h>

@class GEOArrivalParameters, GEOComposedRoute, GEOComposedRouteEVChargingStationInfo, GEOComposedWaypoint, GEOWaypointInfo, NSArray, NSData, NSString;

@interface GEOComposedRouteLeg : NSObject <NSSecureCoding, GEOComposedRoutePortion>
{
    GEOComposedRoute *_route;
    GEOComposedWaypoint *_origin;
    GEOComposedWaypoint *_destination;
    GEOArrivalParameters *_arrivalParameters;
    struct _NSRange _pointRange;
    struct _NSRange _stepRange;
    unsigned int _distance;
    int _drivingSide;
    GEOWaypointInfo *_geoOriginWaypointInfo;
    GEOWaypointInfo *_geoDestinationWaypointInfo;
    NSData *_serverLegIDForAnalytics;
}

@property (readonly, nonatomic) GEOArrivalParameters *arrivalParameters; // @synthesize arrivalParameters=_arrivalParameters;
@property (readonly, nonatomic) double chargingDuration;
@property (readonly, nonatomic) GEOComposedRouteEVChargingStationInfo *chargingStationInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) GEOComposedWaypoint *destination; // @synthesize destination=_destination;
@property (nonatomic) unsigned int distance; // @synthesize distance=_distance;
@property (readonly, nonatomic) int drivingSide; // @synthesize drivingSide=_drivingSide;
@property (readonly, nonatomic) unsigned int endPointIndex;
@property (readonly, nonatomic) unsigned long long endStepIndex;
@property (readonly, nonatomic) double expectedTime;
@property (strong, nonatomic) GEOWaypointInfo *geoDestinationWaypointInfo; // @synthesize geoDestinationWaypointInfo=_geoDestinationWaypointInfo;
@property (strong, nonatomic) GEOWaypointInfo *geoOriginWaypointInfo; // @synthesize geoOriginWaypointInfo=_geoOriginWaypointInfo;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) unsigned long long legIndex;
@property (readonly, nonatomic) GEOComposedWaypoint *origin; // @synthesize origin=_origin;
@property (readonly, nonatomic) unsigned int pointCount;
@property (nonatomic) struct _NSRange pointRange; // @synthesize pointRange=_pointRange;
@property (weak, nonatomic) GEOComposedRoute *route; // @synthesize route=_route;
@property (readonly, nonatomic) NSData *serverLegIDForAnalytics; // @synthesize serverLegIDForAnalytics=_serverLegIDForAnalytics;
@property (readonly, nonatomic) unsigned int startPointIndex;
@property (readonly, nonatomic) unsigned long long startStepIndex;
@property (readonly, nonatomic) unsigned long long stepCount;
@property (nonatomic) struct _NSRange stepRange; // @synthesize stepRange=_stepRange;
@property (readonly, nonatomic) NSArray *steps;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithComposedRoute:(id)arg1 geoRouteLeg:(id)arg2 origin:(id)arg3 destination:(id)arg4 arrivalParameters:(id)arg5;
- (id)initWithComposedRoute:(id)arg1 origin:(id)arg2 destination:(id)arg3 arrivalParameters:(id)arg4;
- (void)setServerLegIDForAnalytics:(id)arg1;

@end
