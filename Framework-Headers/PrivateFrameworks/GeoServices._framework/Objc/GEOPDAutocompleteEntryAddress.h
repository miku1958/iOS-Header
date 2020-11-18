//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAutocompleteEntryAddress : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    double _disambiguationRadiusMeters;
    double _distance;
    unsigned long long _opaqueGeoId;
    GEOLatLng *_center;
    int _placeType;
    struct {
        unsigned int disambiguationRadiusMeters:1;
        unsigned int distance:1;
        unsigned int opaqueGeoId:1;
        unsigned int placeType:1;
    } _has;
}

@property (strong, nonatomic) GEOLatLng *center; // @synthesize center=_center;
@property (nonatomic) double disambiguationRadiusMeters; // @synthesize disambiguationRadiusMeters=_disambiguationRadiusMeters;
@property (nonatomic) double distance; // @synthesize distance=_distance;
@property (readonly, nonatomic) BOOL hasCenter;
@property (nonatomic) BOOL hasDisambiguationRadiusMeters;
@property (nonatomic) BOOL hasDistance;
@property (nonatomic) BOOL hasOpaqueGeoId;
@property (nonatomic) BOOL hasPlaceType;
@property (nonatomic) unsigned long long opaqueGeoId; // @synthesize opaqueGeoId=_opaqueGeoId;
@property (nonatomic) int placeType; // @synthesize placeType=_placeType;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (int)StringAsPlaceType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)placeTypeAsString:(int)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

