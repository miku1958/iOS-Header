//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, GEOMapRegion, GEOPDMapsIdentifier, PBDataReader, PBUnknownFields;

@interface GEORPFeedbackLayoutConfigParameters : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOLatLng *_coordinate;
    GEOMapRegion *_mapRegion;
    GEOPDMapsIdentifier *_mapsId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _formType;
    struct {
        unsigned int has_formType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_coordinate:1;
        unsigned int read_mapRegion:1;
        unsigned int read_mapsId:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_coordinate:1;
        unsigned int wrote_mapRegion:1;
        unsigned int wrote_mapsId:1;
        unsigned int wrote_formType:1;
    } _flags;
}

@property (strong, nonatomic) GEOLatLng *coordinate;
@property (nonatomic) int formType;
@property (readonly, nonatomic) BOOL hasCoordinate;
@property (nonatomic) BOOL hasFormType;
@property (readonly, nonatomic) BOOL hasMapRegion;
@property (readonly, nonatomic) BOOL hasMapsId;
@property (strong, nonatomic) GEOMapRegion *mapRegion;
@property (strong, nonatomic) GEOPDMapsIdentifier *mapsId;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (int)StringAsFormType:(id)arg1;
- (void)_readCoordinate;
- (void)_readMapRegion;
- (void)_readMapsId;
- (void)clearUnknownFields:(BOOL)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)formTypeAsString:(int)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
