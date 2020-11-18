//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, GEOMapRegion, NSMutableArray, NSString;

@interface GEORPCorrectedLabel : PBCodable <NSCopying>
{
    unsigned long long _uid;
    GEOLatLng *_coordinate;
    NSString *_correctedValue;
    NSMutableArray *_featureHandles;
    GEOMapRegion *_featureRegion;
    NSString *_originalValue;
    BOOL _localizedLabels;
    struct {
        unsigned int uid:1;
        unsigned int localizedLabels:1;
    } _has;
}

@property (strong, nonatomic) GEOLatLng *coordinate; // @synthesize coordinate=_coordinate;
@property (strong, nonatomic) NSString *correctedValue; // @synthesize correctedValue=_correctedValue;
@property (strong, nonatomic) NSMutableArray *featureHandles; // @synthesize featureHandles=_featureHandles;
@property (strong, nonatomic) GEOMapRegion *featureRegion; // @synthesize featureRegion=_featureRegion;
@property (readonly, nonatomic) BOOL hasCoordinate;
@property (readonly, nonatomic) BOOL hasCorrectedValue;
@property (readonly, nonatomic) BOOL hasFeatureRegion;
@property (nonatomic) BOOL hasLocalizedLabels;
@property (readonly, nonatomic) BOOL hasOriginalValue;
@property (nonatomic) BOOL hasUid;
@property (nonatomic) BOOL localizedLabels; // @synthesize localizedLabels=_localizedLabels;
@property (strong, nonatomic) NSString *originalValue; // @synthesize originalValue=_originalValue;
@property (nonatomic) unsigned long long uid; // @synthesize uid=_uid;

+ (Class)featureHandleType;
- (void).cxx_destruct;
- (void)addFeatureHandle:(id)arg1;
- (void)clearFeatureHandles;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)featureHandleAtIndex:(unsigned long long)arg1;
- (unsigned long long)featureHandlesCount;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

