//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, GEOTimezone;

@interface GEOPDPlaceInfo : PBCodable <NSCopying>
{
    double _area;
    GEOLatLng *_center;
    GEOTimezone *_timezone;
    BOOL _isApproximateCenter;
    struct {
        unsigned int area:1;
        unsigned int isApproximateCenter:1;
    } _has;
}

@property (nonatomic) double area; // @synthesize area=_area;
@property (strong, nonatomic) GEOLatLng *center; // @synthesize center=_center;
@property (nonatomic) BOOL hasArea;
@property (readonly, nonatomic) BOOL hasCenter;
@property (nonatomic) BOOL hasIsApproximateCenter;
@property (readonly, nonatomic) BOOL hasTimezone;
@property (nonatomic) BOOL isApproximateCenter; // @synthesize isApproximateCenter=_isApproximateCenter;
@property (strong, nonatomic) GEOTimezone *timezone; // @synthesize timezone=_timezone;

+ (id)placeInfoForPlaceData:(id)arg1;
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
