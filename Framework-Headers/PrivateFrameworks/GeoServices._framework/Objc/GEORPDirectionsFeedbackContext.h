//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEORPUserSearchInput, NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEORPDirectionsFeedbackContext : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_directionsRequests;
    NSMutableArray *_directionsResponses;
    NSMutableArray *_directionsWaypointPlaceInfos;
    GEORPUserSearchInput *_endWaypoint;
    GEORPUserSearchInput *_startWaypoint;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_directionsRequests:1;
        unsigned int read_directionsResponses:1;
        unsigned int read_directionsWaypointPlaceInfos:1;
        unsigned int read_endWaypoint:1;
        unsigned int read_startWaypoint:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

@property (strong, nonatomic) NSMutableArray *directionsRequests;
@property (strong, nonatomic) NSMutableArray *directionsResponses;
@property (strong, nonatomic) NSMutableArray *directionsWaypointPlaceInfos;
@property (strong, nonatomic) GEORPUserSearchInput *endWaypoint;
@property (readonly, nonatomic) BOOL hasEndWaypoint;
@property (readonly, nonatomic) BOOL hasStartWaypoint;
@property (strong, nonatomic) GEORPUserSearchInput *startWaypoint;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)directionsRequestType;
+ (Class)directionsResponseType;
+ (Class)directionsWaypointPlaceInfoType;
+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)addDirectionsRequest:(id)arg1;
- (void)addDirectionsResponse:(id)arg1;
- (void)addDirectionsWaypointPlaceInfo:(id)arg1;
- (void)clearDirectionsRequests;
- (void)clearDirectionsResponses;
- (void)clearDirectionsWaypointPlaceInfos;
- (void)clearUnknownFields:(BOOL)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)directionsRequestAtIndex:(unsigned long long)arg1;
- (unsigned long long)directionsRequestsCount;
- (id)directionsResponseAtIndex:(unsigned long long)arg1;
- (unsigned long long)directionsResponsesCount;
- (id)directionsWaypointPlaceInfoAtIndex:(unsigned long long)arg1;
- (unsigned long long)directionsWaypointPlaceInfosCount;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
