//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOTransitRouteDisplayStrings, GEOTransitRouteIdentifier, NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEOTransitRouteUpdate : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_alerts;
    GEOTransitRouteDisplayStrings *_displayStrings;
    GEOTransitRouteIdentifier *_routeIdentifier;
    NSMutableArray *_stepUpdates;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _status;
    struct {
        unsigned int has_status:1;
        unsigned int read_unknownFields:1;
        unsigned int read_alerts:1;
        unsigned int read_displayStrings:1;
        unsigned int read_routeIdentifier:1;
        unsigned int read_stepUpdates:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

@property (strong, nonatomic) NSMutableArray *alerts;
@property (strong, nonatomic) GEOTransitRouteDisplayStrings *displayStrings;
@property (readonly, nonatomic) BOOL hasDisplayStrings;
@property (readonly, nonatomic) BOOL hasRouteIdentifier;
@property (nonatomic) BOOL hasStatus;
@property (strong, nonatomic) GEOTransitRouteIdentifier *routeIdentifier;
@property (nonatomic) int status;
@property (strong, nonatomic) NSMutableArray *stepUpdates;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)alertType;
+ (BOOL)isValid:(id)arg1;
+ (Class)stepUpdateType;
- (void).cxx_destruct;
- (int)StringAsStatus:(id)arg1;
- (id)_logDescription;
- (void)addAlert:(id)arg1;
- (void)addStepUpdate:(id)arg1;
- (id)alertAtIndex:(unsigned long long)arg1;
- (unsigned long long)alertsCount;
- (void)clearAlerts;
- (void)clearStepUpdates;
- (void)clearUnknownFields:(BOOL)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
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
- (id)statusAsString:(int)arg1;
- (id)stepUpdateAtIndex:(unsigned long long)arg1;
- (unsigned long long)stepUpdatesCount;
- (void)writeTo:(id)arg1;

@end

