//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDPlace, GEOPDPlaceRequest, GEORPCuratedCollectionContext, GEORPPoiCorrections, PBDataReader, PBUnknownFields;

@interface GEORPPoiFeedback : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEORPPoiCorrections *_corrections;
    GEOPDPlaceRequest *_placeRequest;
    GEOPDPlace *_place;
    GEORPCuratedCollectionContext *_poiCuratedCollectionContext;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _correctionType;
    BOOL _addOtherPoi;
    struct {
        unsigned int has_correctionType:1;
        unsigned int has_addOtherPoi:1;
        unsigned int read_unknownFields:1;
        unsigned int read_corrections:1;
        unsigned int read_placeRequest:1;
        unsigned int read_place:1;
        unsigned int read_poiCuratedCollectionContext:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

@property (nonatomic) BOOL addOtherPoi;
@property (nonatomic) int correctionType;
@property (strong, nonatomic) GEORPPoiCorrections *corrections;
@property (nonatomic) BOOL hasAddOtherPoi;
@property (nonatomic) BOOL hasCorrectionType;
@property (readonly, nonatomic) BOOL hasCorrections;
@property (readonly, nonatomic) BOOL hasPlace;
@property (readonly, nonatomic) BOOL hasPlaceRequest;
@property (readonly, nonatomic) BOOL hasPoiCuratedCollectionContext;
@property (strong, nonatomic) GEOPDPlace *place;
@property (strong, nonatomic) GEOPDPlaceRequest *placeRequest;
@property (strong, nonatomic) GEORPCuratedCollectionContext *poiCuratedCollectionContext;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (int)StringAsCorrectionType:(id)arg1;
- (void)clearUnknownFields:(BOOL)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)correctionTypeAsString:(int)arg1;
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
- (void)writeTo:(id)arg1;

@end

