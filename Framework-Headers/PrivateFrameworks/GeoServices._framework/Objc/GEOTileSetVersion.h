//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOTileSetVersion : PBCodable <NSCopying>
{
    CDStruct_d66e66b9 *_availableTiles;
    unsigned long long _availableTilesCount;
    unsigned long long _availableTilesSpace;
    CDStruct_8f5f9923 *_genericTiles;
    unsigned long long _genericTilesCount;
    unsigned long long _genericTilesSpace;
    unsigned int _identifier;
    unsigned int _supportedLanguagesVersion;
    unsigned int _timeToLiveSeconds;
    struct {
        unsigned int supportedLanguagesVersion:1;
        unsigned int timeToLiveSeconds:1;
    } _has;
}

@property (readonly, nonatomic) CDStruct_d66e66b9 *availableTiles;
@property (readonly, nonatomic) unsigned long long availableTilesCount;
@property (readonly, nonatomic) CDStruct_8f5f9923 *genericTiles;
@property (readonly, nonatomic) unsigned long long genericTilesCount;
@property (nonatomic) BOOL hasSupportedLanguagesVersion;
@property (nonatomic) BOOL hasTimeToLiveSeconds;
@property (nonatomic) unsigned int identifier; // @synthesize identifier=_identifier;
@property (nonatomic) unsigned int supportedLanguagesVersion; // @synthesize supportedLanguagesVersion=_supportedLanguagesVersion;
@property (nonatomic) unsigned int timeToLiveSeconds; // @synthesize timeToLiveSeconds=_timeToLiveSeconds;

- (void)addAvailableTiles:(CDStruct_d66e66b9)arg1;
- (void)addGenericTile:(CDStruct_8f5f9923)arg1;
- (CDStruct_d66e66b9)availableTilesAtIndex:(unsigned long long)arg1;
- (void)clearAvailableTiles;
- (void)clearGenericTiles;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (CDStruct_8f5f9923)genericTileAtIndex:(unsigned long long)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAvailableTiles:(CDStruct_d66e66b9 *)arg1 count:(unsigned long long)arg2;
- (void)setGenericTiles:(CDStruct_8f5f9923 *)arg1 count:(unsigned long long)arg2;
- (void)writeTo:(id)arg1;

@end

