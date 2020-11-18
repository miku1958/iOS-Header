//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface GEOTileGroup : PBCodable <NSCopying>
{
    CDStruct_d66e66b9 *_hybridUnavailableRegions;
    unsigned long long _hybridUnavailableRegionsCount;
    unsigned long long _hybridUnavailableRegionsSpace;
    CDStruct_3f74b7eb *_regionalResourceIndexs;
    unsigned long long _regionalResourceIndexsCount;
    unsigned long long _regionalResourceIndexsSpace;
    CDStruct_9f2792e4 _attributionIndexs;
    CDStruct_9f2792e4 _fontIndexs;
    CDStruct_9f2792e4 _iconIndexs;
    CDStruct_9f2792e4 _styleSheetIndexs;
    CDStruct_9f2792e4 _textureIndexs;
    CDStruct_9f2792e4 _xmlIndexs;
    CDStruct_c0454aff *_tileSets;
    unsigned long long _tileSetsCount;
    unsigned long long _tileSetsSpace;
    unsigned int _attributionBadgeIndex;
    unsigned int _identifier;
    struct {
        unsigned int attributionBadgeIndex:1;
    } _has;
}

@property (nonatomic) unsigned int attributionBadgeIndex; // @synthesize attributionBadgeIndex=_attributionBadgeIndex;
@property (readonly, nonatomic) unsigned int *attributionIndexs;
@property (readonly, nonatomic) unsigned long long attributionIndexsCount;
@property (readonly, nonatomic) unsigned int *fontIndexs;
@property (readonly, nonatomic) unsigned long long fontIndexsCount;
@property (nonatomic) BOOL hasAttributionBadgeIndex;
@property (readonly, nonatomic) CDStruct_d66e66b9 *hybridUnavailableRegions;
@property (readonly, nonatomic) unsigned long long hybridUnavailableRegionsCount;
@property (readonly, nonatomic) unsigned int *iconIndexs;
@property (readonly, nonatomic) unsigned long long iconIndexsCount;
@property (nonatomic) unsigned int identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) CDStruct_3f74b7eb *regionalResourceIndexs;
@property (readonly, nonatomic) unsigned long long regionalResourceIndexsCount;
@property (readonly, nonatomic) unsigned int *styleSheetIndexs;
@property (readonly, nonatomic) unsigned long long styleSheetIndexsCount;
@property (readonly, nonatomic) unsigned int *textureIndexs;
@property (readonly, nonatomic) unsigned long long textureIndexsCount;
@property (readonly, nonatomic) CDStruct_c0454aff *tileSets;
@property (readonly, nonatomic) unsigned long long tileSetsCount;
@property (readonly, nonatomic) unsigned int *xmlIndexs;
@property (readonly, nonatomic) unsigned long long xmlIndexsCount;

- (void)addAttributionIndex:(unsigned int)arg1;
- (void)addFontIndex:(unsigned int)arg1;
- (void)addHybridUnavailableRegion:(CDStruct_d66e66b9)arg1;
- (void)addIconIndex:(unsigned int)arg1;
- (void)addRegionalResourceIndex:(CDStruct_3f74b7eb)arg1;
- (void)addStyleSheetIndex:(unsigned int)arg1;
- (void)addTextureIndex:(unsigned int)arg1;
- (void)addTileSet:(CDStruct_c0454aff)arg1;
- (void)addXmlIndex:(unsigned int)arg1;
- (unsigned int)attributionIndexAtIndex:(unsigned long long)arg1;
- (void)clearAttributionIndexs;
- (void)clearFontIndexs;
- (void)clearHybridUnavailableRegions;
- (void)clearIconIndexs;
- (void)clearRegionalResourceIndexs;
- (void)clearStyleSheetIndexs;
- (void)clearTextureIndexs;
- (void)clearTileSets;
- (void)clearXmlIndexs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)fontIndexAtIndex:(unsigned long long)arg1;
- (unsigned long long)hash;
- (CDStruct_d66e66b9)hybridUnavailableRegionAtIndex:(unsigned long long)arg1;
- (unsigned int)iconIndexAtIndex:(unsigned long long)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (CDStruct_3f74b7eb)regionalResourceIndexAtIndex:(unsigned long long)arg1;
- (void)setAttributionIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (void)setFontIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (void)setHybridUnavailableRegions:(CDStruct_d66e66b9 *)arg1 count:(unsigned long long)arg2;
- (void)setIconIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (void)setRegionalResourceIndexs:(CDStruct_3f74b7eb *)arg1 count:(unsigned long long)arg2;
- (void)setStyleSheetIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (void)setTextureIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (void)setTileSets:(CDStruct_c0454aff *)arg1 count:(unsigned long long)arg2;
- (void)setXmlIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (unsigned int)styleSheetIndexAtIndex:(unsigned long long)arg1;
- (unsigned int)textureIndexAtIndex:(unsigned long long)arg1;
- (CDStruct_c0454aff)tileSetAtIndex:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;
- (unsigned int)xmlIndexAtIndex:(unsigned long long)arg1;

@end

