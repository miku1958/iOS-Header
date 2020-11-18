//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOComposedRoute, GEODirectionsRequest, GEODirectionsResponse, GEORouteAttributes, NSArray, NSDate, NSDictionary, NSMutableArray;

@interface GEOTraceRouteSimulator : NSObject
{
    double _deltaT;
    double _horizontalAccuracy;
    double _verticalAccuracy;
    NSDate *_startTime;
    GEOComposedRoute *_route;
    GEODirectionsRequest *_request;
    GEODirectionsResponse *_response;
    GEORouteAttributes *_routeAttributes;
    unsigned int _routeIndex;
    CDStruct_2c43369c _walkingStart;
    CDStruct_2c43369c _walkingEnd;
    CDStruct_2c43369c _origin;
    CDStruct_2c43369c _destination;
    NSMutableArray *_mutableLocations;
    NSArray *_locations;
    NSDictionary *_pointTimestamps;
    double _duration;
}

@property (nonatomic) double deltaT; // @synthesize deltaT=_deltaT;
@property (nonatomic) CDStruct_c3b9c2ee destination; // @synthesize destination=_destination;
@property (nonatomic) double duration; // @synthesize duration=_duration;
@property (nonatomic) double horizontalAccuracy; // @synthesize horizontalAccuracy=_horizontalAccuracy;
@property (strong, nonatomic) NSArray *locations; // @synthesize locations=_locations;
@property (strong, nonatomic) NSMutableArray *mutableLocations; // @synthesize mutableLocations=_mutableLocations;
@property (nonatomic) CDStruct_c3b9c2ee origin; // @synthesize origin=_origin;
@property (readonly, nonatomic) NSDictionary *pointTimestamps; // @synthesize pointTimestamps=_pointTimestamps;
@property (readonly, nonatomic) GEODirectionsRequest *request; // @synthesize request=_request;
@property (readonly, nonatomic) GEODirectionsResponse *response; // @synthesize response=_response;
@property (readonly, nonatomic) GEOComposedRoute *route; // @synthesize route=_route;
@property (readonly, nonatomic) GEORouteAttributes *routeAttributes; // @synthesize routeAttributes=_routeAttributes;
@property (readonly, nonatomic) unsigned int routeIndex; // @synthesize routeIndex=_routeIndex;
@property (strong, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property (nonatomic) double verticalAccuracy; // @synthesize verticalAccuracy=_verticalAccuracy;
@property (nonatomic) CDStruct_c3b9c2ee walkingEnd; // @synthesize walkingEnd=_walkingEnd;
@property (nonatomic) CDStruct_c3b9c2ee walkingStart; // @synthesize walkingStart=_walkingStart;

- (void).cxx_destruct;
- (void)addLocation:(CDStruct_c3b9c2ee)arg1 withCourse:(double)arg2 altitude:(double)arg3 speed:(double)arg4 transport:(int)arg5;
- (double)estimateDuration;
- (void)generateLocations;
- (void)generateLocationsWithSpeedOverride:(double)arg1;
- (id)initWithRoute:(id)arg1 request:(id)arg2 response:(id)arg3 routeAttributes:(id)arg4 routeIndex:(unsigned int)arg5;
- (id)initWithRoute:(id)arg1 request:(id)arg2 response:(id)arg3 routeAttributes:(id)arg4 routeIndex:(unsigned int)arg5 locations:(id)arg6;
- (void)simulateWalkingFrom:(CDStruct_c3b9c2ee)arg1 to:(CDStruct_c3b9c2ee)arg2;

@end
