//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDBatchSpatialLookupParameters : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_spatialEventLookups;
    NSMutableArray *_spatialPlaceLookups;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_spatialEventLookups:1;
        unsigned int read_spatialPlaceLookups:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

@property (strong, nonatomic) NSMutableArray *spatialEventLookups;
@property (strong, nonatomic) NSMutableArray *spatialPlaceLookups;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)arg1;
+ (Class)spatialEventLookupType;
+ (Class)spatialPlaceLookupType;
- (void).cxx_destruct;
- (void)addSpatialEventLookup:(id)arg1;
- (void)addSpatialPlaceLookup:(id)arg1;
- (void)clearSpatialEventLookups;
- (void)clearSpatialPlaceLookups;
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
- (id)spatialEventLookupAtIndex:(unsigned long long)arg1;
- (unsigned long long)spatialEventLookupsCount;
- (id)spatialPlaceLookupAtIndex:(unsigned long long)arg1;
- (unsigned long long)spatialPlaceLookupsCount;
- (void)writeTo:(id)arg1;

@end

