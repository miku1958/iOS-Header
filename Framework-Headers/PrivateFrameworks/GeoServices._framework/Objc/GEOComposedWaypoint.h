//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, GEOMapItemStorage, GEOWaypointTyped;

@interface GEOComposedWaypoint : PBCodable <NSCopying>
{
    GEOLatLng *_latLng;
    GEOMapItemStorage *_mapItemStorage;
    GEOWaypointTyped *_waypoint;
}

@property (readonly, nonatomic) BOOL hasLatLng;
@property (readonly, nonatomic) BOOL hasMapItemStorage;
@property (readonly, nonatomic) BOOL hasWaypoint;
@property (strong, nonatomic) GEOLatLng *latLng; // @synthesize latLng=_latLng;
@property (strong, nonatomic) GEOMapItemStorage *mapItemStorage; // @synthesize mapItemStorage=_mapItemStorage;
@property (strong, nonatomic) GEOWaypointTyped *waypoint; // @synthesize waypoint=_waypoint;

+ (id)composedWaypointForAddressString:(id)arg1 traits:(id)arg2 clientAttributes:(id)arg3 completionHandler:(CDUnknownBlockType)arg4 networkActivityHandler:(CDUnknownBlockType)arg5;
+ (id)composedWaypointForCurrentLocation:(id)arg1 traits:(id)arg2 auditToken:(id)arg3 completionHandler:(CDUnknownBlockType)arg4 networkActivityHandler:(CDUnknownBlockType)arg5;
+ (id)composedWaypointForCurrentLocation:(id)arg1 traits:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 networkActivityHandler:(CDUnknownBlockType)arg4;
+ (id)composedWaypointForID:(unsigned long long)arg1 traits:(id)arg2 clientAttributes:(id)arg3 completionHandler:(CDUnknownBlockType)arg4 networkActivityHandler:(CDUnknownBlockType)arg5;
+ (id)composedWaypointForIncompleteMapItem:(id)arg1 traits:(id)arg2 clientAttributes:(id)arg3 completionHandler:(CDUnknownBlockType)arg4 networkActivityHandler:(CDUnknownBlockType)arg5;
+ (id)composedWaypointForLocation:(id)arg1 mapItem:(id)arg2 traits:(id)arg3 auditToken:(id)arg4 completionHandler:(CDUnknownBlockType)arg5 networkActivityHandler:(CDUnknownBlockType)arg6;
+ (id)composedWaypointForLocation:(id)arg1 mapItem:(id)arg2 traits:(id)arg3 completionHandler:(CDUnknownBlockType)arg4 networkActivityHandler:(CDUnknownBlockType)arg5;
+ (id)composedWaypointForMapItem:(id)arg1 traits:(id)arg2 auditToken:(id)arg3 clientAttributes:(id)arg4 completionHandler:(CDUnknownBlockType)arg5 networkActivityHandler:(CDUnknownBlockType)arg6;
+ (id)composedWaypointForMapItem:(id)arg1 traits:(id)arg2 clientAttributes:(id)arg3 completionHandler:(CDUnknownBlockType)arg4 networkActivityHandler:(CDUnknownBlockType)arg5;
+ (id)composedWaypointForMapItemToRefine:(id)arg1 traits:(id)arg2 auditToken:(id)arg3 clientAttributes:(id)arg4 completionHandler:(CDUnknownBlockType)arg5 networkActivityHandler:(CDUnknownBlockType)arg6;
+ (id)composedWaypointForMapItemToRefine:(id)arg1 traits:(id)arg2 clientAttributes:(id)arg3 completionHandler:(CDUnknownBlockType)arg4 networkActivityHandler:(CDUnknownBlockType)arg5;
+ (void)composedWaypointForMapServiceResponse:(id)arg1 clientAttributes:(id)arg2 error:(id)arg3 handler:(CDUnknownBlockType)arg4;
+ (id)composedWaypointForSearchString:(id)arg1 completionItem:(id)arg2 traits:(id)arg3 clientAttributes:(id)arg4 clientResolvedCompletionHandler:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6 networkActivityHandler:(CDUnknownBlockType)arg7;
+ (id)composedWaypointForSearchString:(id)arg1 completionItem:(id)arg2 traits:(id)arg3 clientAttributes:(id)arg4 completionHandler:(CDUnknownBlockType)arg5 networkActivityHandler:(CDUnknownBlockType)arg6;
+ (id)composedWaypointForTransitID:(unsigned long long)arg1 coordinate:(CDStruct_c3b9c2ee)arg2 isCurrentLocation:(BOOL)arg3 traits:(id)arg4 clientAttributes:(id)arg5 completionHandler:(CDUnknownBlockType)arg6 networkActivityHandler:(CDUnknownBlockType)arg7;
+ (id)composedWaypointForWaypointTyped:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 networkActivityHandler:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)distanceToWaypoint:(id)arg1;
- (id)geoMapItem;
- (unsigned long long)hash;
- (id)initWithLocation:(id)arg1 isCurrentLocation:(BOOL)arg2;
- (id)initWithMapItem:(id)arg1;
- (BOOL)isCurrentLocation;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isLocationWaypointType;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setIsCurrentLocation:(BOOL)arg1;
- (id)timezone;
- (void)writeTo:(id)arg1;

@end

