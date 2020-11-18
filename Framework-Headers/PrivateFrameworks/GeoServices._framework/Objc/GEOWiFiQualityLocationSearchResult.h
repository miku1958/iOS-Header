//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLocation, NSMutableArray, PBDataReader;

@interface GEOWiFiQualityLocationSearchResult : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    NSMutableArray *_ess;
    GEOLocation *_location;
    unsigned long long _tileKey;
    NSMutableArray *_tiles;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _status;
    struct {
        unsigned int has_tileKey:1;
        unsigned int has_status:1;
        unsigned int read_ess:1;
        unsigned int read_location:1;
        unsigned int read_tiles:1;
        unsigned int wrote_ess:1;
        unsigned int wrote_location:1;
        unsigned int wrote_tileKey:1;
        unsigned int wrote_tiles:1;
        unsigned int wrote_status:1;
    } _flags;
}

@property (strong, nonatomic) NSMutableArray *ess;
@property (readonly, nonatomic) BOOL hasLocation;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) BOOL hasTileKey;
@property (strong, nonatomic) GEOLocation *location;
@property (nonatomic) int status;
@property (nonatomic) unsigned long long tileKey;
@property (strong, nonatomic) NSMutableArray *tiles;

+ (Class)essType;
+ (BOOL)isValid:(id)arg1;
+ (Class)tileType;
- (void).cxx_destruct;
- (int)StringAsStatus:(id)arg1;
- (void)_addNoFlagsEss:(id)arg1;
- (void)_addNoFlagsTile:(id)arg1;
- (void)_readEss;
- (void)_readLocation;
- (void)_readTiles;
- (void)addEss:(id)arg1;
- (void)addTile:(id)arg1;
- (void)clearEss;
- (void)clearTiles;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)essAtIndex:(unsigned long long)arg1;
- (unsigned long long)essCount;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)statusAsString:(int)arg1;
- (id)tileAtIndex:(unsigned long long)arg1;
- (unsigned long long)tilesCount;
- (void)writeTo:(id)arg1;

@end
