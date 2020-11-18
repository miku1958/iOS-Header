//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, GEOTimezone, PBUnknownFields;

@interface GEOPDPlaceInfo : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    double _area;
    GEOLatLng *_center;
    int _knownAccuracy;
    GEOTimezone *_timezone;
    BOOL _isApproximateCenter;
    struct {
        unsigned int area:1;
        unsigned int knownAccuracy:1;
        unsigned int isApproximateCenter:1;
    } _has;
}

@property (nonatomic) double area; // @synthesize area=_area;
@property (strong, nonatomic) GEOLatLng *center; // @synthesize center=_center;
@property (nonatomic) BOOL hasArea;
@property (readonly, nonatomic) BOOL hasCenter;
@property (nonatomic) BOOL hasIsApproximateCenter;
@property (nonatomic) BOOL hasKnownAccuracy;
@property (readonly, nonatomic) BOOL hasTimezone;
@property (nonatomic) BOOL isApproximateCenter; // @synthesize isApproximateCenter=_isApproximateCenter;
@property (nonatomic) int knownAccuracy; // @synthesize knownAccuracy=_knownAccuracy;
@property (strong, nonatomic) GEOTimezone *timezone; // @synthesize timezone=_timezone;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (id)placeInfoForPlaceData:(id)arg1;
- (void).cxx_destruct;
- (int)StringAsKnownAccuracy:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)knownAccuracyAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
