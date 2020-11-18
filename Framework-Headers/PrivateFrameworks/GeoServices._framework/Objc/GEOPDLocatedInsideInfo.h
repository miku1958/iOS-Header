//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

@interface GEOPDLocatedInsideInfo : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned long long _muid;
    int _featureType;
    struct {
        unsigned int muid:1;
        unsigned int featureType:1;
    } _has;
}

@property (nonatomic) int featureType; // @synthesize featureType=_featureType;
@property (nonatomic) BOOL hasFeatureType;
@property (nonatomic) BOOL hasMuid;
@property (nonatomic) unsigned long long muid; // @synthesize muid=_muid;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (int)StringAsFeatureType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)featureTypeAsString:(int)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
