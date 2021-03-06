//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOTileCoordinate, NSMutableArray, PBDataReader;

@interface GEOVLMetadataTile : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    NSMutableArray *_builds;
    GEOTileCoordinate *_coord;
    NSMutableArray *_precisions;
    NSMutableArray *_tiles;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_builds:1;
        unsigned int read_coord:1;
        unsigned int read_precisions:1;
        unsigned int read_tiles:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

@property (strong, nonatomic) NSMutableArray *builds;
@property (strong, nonatomic) GEOTileCoordinate *coord;
@property (readonly, nonatomic) BOOL hasCoord;
@property (strong, nonatomic) NSMutableArray *precisions;
@property (strong, nonatomic) NSMutableArray *tiles;

+ (Class)buildType;
+ (BOOL)isValid:(id)arg1;
+ (Class)precisionType;
+ (Class)tileType;
- (void).cxx_destruct;
- (void)addBuild:(id)arg1;
- (void)addPrecision:(id)arg1;
- (void)addTile:(id)arg1;
- (id)buildAtIndex:(unsigned long long)arg1;
- (unsigned long long)buildsCount;
- (void)clearBuilds;
- (void)clearPrecisions;
- (void)clearTiles;
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
- (id)precisionAtIndex:(unsigned long long)arg1;
- (unsigned long long)precisionsCount;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)tileAtIndex:(unsigned long long)arg1;
- (unsigned long long)tilesCount;
- (void)writeTo:(id)arg1;

@end

