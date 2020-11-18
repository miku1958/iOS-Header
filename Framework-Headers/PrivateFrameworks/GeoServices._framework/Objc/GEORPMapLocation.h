//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, GEOPDViewportInfo, NSData;

@interface GEORPMapLocation : PBCodable <NSCopying>
{
    GEOLatLng *_coordinate;
    NSData *_image;
    GEOPDViewportInfo *_viewportInfo;
    float _zoomLevel;
    CDStruct_8adc1701 _has;
}

@property (strong, nonatomic) GEOLatLng *coordinate; // @synthesize coordinate=_coordinate;
@property (readonly, nonatomic) BOOL hasCoordinate;
@property (readonly, nonatomic) BOOL hasImage;
@property (readonly, nonatomic) BOOL hasViewportInfo;
@property (nonatomic) BOOL hasZoomLevel;
@property (strong, nonatomic) NSData *image; // @synthesize image=_image;
@property (strong, nonatomic) GEOPDViewportInfo *viewportInfo; // @synthesize viewportInfo=_viewportInfo;
@property (nonatomic) float zoomLevel; // @synthesize zoomLevel=_zoomLevel;

- (void)_setMapMode:(int)arg1 region:(id)arg2;
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
