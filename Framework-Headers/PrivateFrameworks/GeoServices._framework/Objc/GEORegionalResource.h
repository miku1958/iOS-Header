//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEORegionalResource : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct GEOTileSetRegion *_tileRanges;
    unsigned long long _tileRangesCount;
    unsigned long long _tileRangesSpace;
    NSMutableArray *_attributions;
    NSMutableArray *_iconChecksums;
    NSMutableArray *_icons;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _x;
    unsigned int _y;
    unsigned int _z;
    struct {
        unsigned int has_x:1;
        unsigned int has_y:1;
        unsigned int has_z:1;
        unsigned int read_unknownFields:1;
        unsigned int read_tileRanges:1;
        unsigned int read_attributions:1;
        unsigned int read_iconChecksums:1;
        unsigned int read_icons:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

@property (strong, nonatomic) NSMutableArray *attributions;
@property (nonatomic) BOOL hasX;
@property (nonatomic) BOOL hasY;
@property (nonatomic) BOOL hasZ;
@property (strong, nonatomic) NSMutableArray *iconChecksums;
@property (strong, nonatomic) NSMutableArray *icons;
@property (readonly, nonatomic) struct GEOTileSetRegion *tileRanges;
@property (readonly, nonatomic) unsigned long long tileRangesCount;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (nonatomic) unsigned int x;
@property (nonatomic) unsigned int y;
@property (nonatomic) unsigned int z;

+ (Class)attributionType;
+ (Class)iconChecksumType;
+ (Class)iconType;
+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)addAttribution:(id)arg1;
- (void)addIcon:(id)arg1;
- (void)addIconChecksum:(id)arg1;
- (void)addTileRange:(struct GEOTileSetRegion)arg1;
- (id)attributionAtIndex:(unsigned long long)arg1;
- (unsigned long long)attributionsCount;
- (void)clearAttributions;
- (void)clearIconChecksums;
- (void)clearIcons;
- (void)clearTileRanges;
- (void)clearUnknownFields:(BOOL)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)iconAtIndex:(unsigned long long)arg1;
- (id)iconChecksumAtIndex:(unsigned long long)arg1;
- (unsigned long long)iconChecksumsCount;
- (unsigned long long)iconsCount;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setTileRanges:(struct GEOTileSetRegion *)arg1 count:(unsigned long long)arg2;
- (struct GEOTileSetRegion)tileRangeAtIndex:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;

@end

