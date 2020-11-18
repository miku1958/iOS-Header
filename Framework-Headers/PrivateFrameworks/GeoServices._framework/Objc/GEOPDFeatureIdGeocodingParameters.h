//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, PBUnknownFields;

@interface GEOPDFeatureIdGeocodingParameters : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned long long _featureId;
    GEOLatLng *_location;
    struct {
        unsigned int featureId:1;
    } _has;
}

@property (nonatomic) unsigned long long featureId; // @synthesize featureId=_featureId;
@property (nonatomic) BOOL hasFeatureId;
@property (readonly, nonatomic) BOOL hasLocation;
@property (strong, nonatomic) GEOLatLng *location; // @synthesize location=_location;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

