//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDFeatureIdGeocodingParameters : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned long long _featureId;
    GEOLatLng *_location;
    int _formattedAddressType;
    struct {
        unsigned int has_featureId:1;
        unsigned int has_formattedAddressType:1;
    } _flags;
}

@property (nonatomic) unsigned long long featureId;
@property (nonatomic) int formattedAddressType;
@property (nonatomic) BOOL hasFeatureId;
@property (nonatomic) BOOL hasFormattedAddressType;
@property (readonly, nonatomic) BOOL hasLocation;
@property (strong, nonatomic) GEOLatLng *location;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (int)StringAsFormattedAddressType:(id)arg1;
- (void)clearUnknownFields:(BOOL)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)formattedAddressTypeAsString:(int)arg1;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
