//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEORegionalResourceSet : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct GEOTileSetRegion *_regions;
    unsigned long long _regionsCount;
    unsigned long long _regionsSpace;
    NSMutableArray *_resources;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_regions:1;
        unsigned int read_resources:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

@property (readonly, nonatomic) struct GEOTileSetRegion *regions;
@property (readonly, nonatomic) unsigned long long regionsCount;
@property (strong, nonatomic) NSMutableArray *resources;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)arg1;
+ (Class)resourceType;
- (void).cxx_destruct;
- (void)addRegion:(struct GEOTileSetRegion)arg1;
- (void)addResource:(id)arg1;
- (void)clearRegions;
- (void)clearResources;
- (void)clearUnknownFields:(BOOL)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
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
- (struct GEOTileSetRegion)regionAtIndex:(unsigned long long)arg1;
- (id)resourceAtIndex:(unsigned long long)arg1;
- (unsigned long long)resourcesCount;
- (void)setRegions:(struct GEOTileSetRegion *)arg1 count:(unsigned long long)arg2;
- (void)writeTo:(id)arg1;

@end
