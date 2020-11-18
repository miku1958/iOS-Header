//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEORPFeatureHandle : PBCodable <NSCopying>
{
    CDStruct_1ef3fb1f *_styleAttributes;
    unsigned long long _styleAttributesCount;
    unsigned long long _styleAttributesSpace;
    unsigned int _featureIndex;
    unsigned int _featureTileX;
    unsigned int _featureTileY;
    unsigned int _featureTileZ;
    unsigned int _identifier;
    int _style;
    int _type;
    struct {
        unsigned int featureIndex:1;
        unsigned int featureTileX:1;
        unsigned int featureTileY:1;
        unsigned int featureTileZ:1;
        unsigned int identifier:1;
        unsigned int style:1;
        unsigned int type:1;
    } _has;
}

@property (nonatomic) unsigned int featureIndex; // @synthesize featureIndex=_featureIndex;
@property (nonatomic) unsigned int featureTileX; // @synthesize featureTileX=_featureTileX;
@property (nonatomic) unsigned int featureTileY; // @synthesize featureTileY=_featureTileY;
@property (nonatomic) unsigned int featureTileZ; // @synthesize featureTileZ=_featureTileZ;
@property (nonatomic) BOOL hasFeatureIndex;
@property (nonatomic) BOOL hasFeatureTileX;
@property (nonatomic) BOOL hasFeatureTileY;
@property (nonatomic) BOOL hasFeatureTileZ;
@property (nonatomic) BOOL hasIdentifier;
@property (nonatomic) BOOL hasStyle;
@property (nonatomic) BOOL hasType;
@property (nonatomic) unsigned int identifier; // @synthesize identifier=_identifier;
@property (nonatomic) int style; // @synthesize style=_style;
@property (readonly, nonatomic) CDStruct_1ef3fb1f *styleAttributes;
@property (readonly, nonatomic) unsigned long long styleAttributesCount;
@property (nonatomic) int type; // @synthesize type=_type;

- (void)addStyleAttribute:(CDStruct_1ef3fb1f)arg1;
- (void)clearStyleAttributes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setStyleAttributes:(CDStruct_1ef3fb1f *)arg1 count:(unsigned long long)arg2;
- (CDStruct_1ef3fb1f)styleAttributeAtIndex:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;

@end

