//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLocation, GEOMapItemStorage, GEOWaypointTyped, NSString, PBDataReader;

@interface GEOCompanionWaypoint : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    GEOMapItemStorage *_mapItem;
    NSString *_searchString;
    GEOWaypointTyped *_waypointTyped;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    BOOL _isCurrentLocation;
    struct {
        unsigned int has_isCurrentLocation:1;
        unsigned int read_mapItem:1;
        unsigned int read_searchString:1;
        unsigned int read_waypointTyped:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

@property (nonatomic) BOOL hasIsCurrentLocation;
@property (readonly, nonatomic) BOOL hasMapItem;
@property (readonly, nonatomic) BOOL hasSearchString;
@property (readonly, nonatomic) BOOL hasWaypointTyped;
@property (nonatomic) BOOL isCurrentLocation;
@property (readonly, nonatomic) GEOLocation *location;
@property (strong, nonatomic) GEOMapItemStorage *mapItem;
@property (strong, nonatomic) NSString *searchString;
@property (strong, nonatomic) GEOWaypointTyped *waypointTyped;

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithComposedWaypoint:(id)arg1;
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

