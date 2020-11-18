//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEORPVisibleTileSet : PBCodable <NSCopying>
{
    struct GEORPVisibleTileKey *_tileKeys;
    unsigned long long _tileKeysCount;
    unsigned long long _tileKeysSpace;
    unsigned int _identifier;
    int _style;
    struct {
        unsigned int identifier:1;
        unsigned int style:1;
    } _has;
}

@property (nonatomic) BOOL hasIdentifier;
@property (nonatomic) BOOL hasStyle;
@property (nonatomic) unsigned int identifier; // @synthesize identifier=_identifier;
@property (nonatomic) int style; // @synthesize style=_style;
@property (readonly, nonatomic) struct GEORPVisibleTileKey *tileKeys;
@property (readonly, nonatomic) unsigned long long tileKeysCount;

- (int)StringAsStyle:(id)arg1;
- (void)addTileKey:(struct GEORPVisibleTileKey)arg1;
- (void)clearTileKeys;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setTileKeys:(struct GEORPVisibleTileKey *)arg1 count:(unsigned long long)arg2;
- (id)styleAsString:(int)arg1;
- (struct GEORPVisibleTileKey)tileKeyAtIndex:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;

@end

