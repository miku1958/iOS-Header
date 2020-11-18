//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, GEOPDBounds, GEOPDMapsIdentifier, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSpatialPlaceLookupResponse : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _categorys;
    GEOPDBounds *_bounds;
    GEOLatLng *_center;
    GEOPDMapsIdentifier *_placeId;
}

@property (strong, nonatomic) GEOPDBounds *bounds; // @synthesize bounds=_bounds;
@property (readonly, nonatomic) int *categorys;
@property (readonly, nonatomic) unsigned long long categorysCount;
@property (strong, nonatomic) GEOLatLng *center; // @synthesize center=_center;
@property (readonly, nonatomic) BOOL hasBounds;
@property (readonly, nonatomic) BOOL hasCenter;
@property (readonly, nonatomic) BOOL hasPlaceId;
@property (strong, nonatomic) GEOPDMapsIdentifier *placeId; // @synthesize placeId=_placeId;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (int)StringAsCategorys:(id)arg1;
- (void)addCategory:(int)arg1;
- (int)categoryAtIndex:(unsigned long long)arg1;
- (id)categorysAsString:(int)arg1;
- (void)clearCategorys;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setCategorys:(int *)arg1 count:(unsigned long long)arg2;
- (void)writeTo:(id)arg1;

@end

