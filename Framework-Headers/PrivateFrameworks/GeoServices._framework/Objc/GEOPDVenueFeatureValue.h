//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDFeatureBuilding, GEOPDFeaturePOI, GEOPDFeatureVenue, PBUnknownFields;

@interface GEOPDVenueFeatureValue : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOPDFeatureBuilding *_featureBuilding;
    GEOPDFeaturePOI *_featurePoi;
    GEOPDFeatureVenue *_featureVenue;
}

@property (strong, nonatomic) GEOPDFeatureBuilding *featureBuilding; // @synthesize featureBuilding=_featureBuilding;
@property (strong, nonatomic) GEOPDFeaturePOI *featurePoi; // @synthesize featurePoi=_featurePoi;
@property (strong, nonatomic) GEOPDFeatureVenue *featureVenue; // @synthesize featureVenue=_featureVenue;
@property (readonly, nonatomic) BOOL hasFeatureBuilding;
@property (readonly, nonatomic) BOOL hasFeaturePoi;
@property (readonly, nonatomic) BOOL hasFeatureVenue;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

