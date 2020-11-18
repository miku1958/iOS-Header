//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEOSupportedTileSets : PBCodable <NSCopying>
{
    NSMutableArray *_tileSets;
}

@property (strong, nonatomic) NSMutableArray *tileSets; // @synthesize tileSets=_tileSets;

+ (Class)tileSetType;
- (void)addTileSet:(id)arg1;
- (void)clearTileSets;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)tileSetAtIndex:(unsigned long long)arg1;
- (unsigned long long)tileSetsCount;
- (void)writeTo:(id)arg1;

@end
