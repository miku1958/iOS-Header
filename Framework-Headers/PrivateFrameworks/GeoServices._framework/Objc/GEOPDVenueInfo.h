//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDLocatedInsideInfo, GEOPDVenueItemList, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDVenueInfo : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_filterElements;
    GEOPDVenueItemList *_itemList;
    GEOPDLocatedInsideInfo *_locatedInside;
    NSMutableArray *_venueFeatureIds;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _featureType;
    int _goInsideLevel;
    struct {
        unsigned int has_featureType:1;
        unsigned int has_goInsideLevel:1;
        unsigned int read_unknownFields:1;
        unsigned int read_filterElements:1;
        unsigned int read_itemList:1;
        unsigned int read_locatedInside:1;
        unsigned int read_venueFeatureIds:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

@property (nonatomic) int featureType;
@property (strong, nonatomic) NSMutableArray *filterElements;
@property (nonatomic) int goInsideLevel;
@property (nonatomic) BOOL hasFeatureType;
@property (nonatomic) BOOL hasGoInsideLevel;
@property (readonly, nonatomic) BOOL hasItemList;
@property (readonly, nonatomic) BOOL hasLocatedInside;
@property (strong, nonatomic) GEOPDVenueItemList *itemList;
@property (strong, nonatomic) GEOPDLocatedInsideInfo *locatedInside;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (strong, nonatomic) NSMutableArray *venueFeatureIds;

+ (Class)filterElementType;
+ (BOOL)isValid:(id)arg1;
+ (Class)venueFeatureIdType;
+ (id)venueInfoForPlaceData:(id)arg1;
- (void).cxx_destruct;
- (int)StringAsFeatureType:(id)arg1;
- (void)addFilterElement:(id)arg1;
- (void)addVenueFeatureId:(id)arg1;
- (void)clearFilterElements;
- (void)clearUnknownFields:(BOOL)arg1;
- (void)clearVenueFeatureIds;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)featureTypeAsString:(int)arg1;
- (id)filterElementAtIndex:(unsigned long long)arg1;
- (unsigned long long)filterElementsCount;
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
- (id)venueFeatureIdAtIndex:(unsigned long long)arg1;
- (unsigned long long)venueFeatureIdsCount;
- (void)writeTo:(id)arg1;

@end
