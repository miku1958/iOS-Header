//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOURLCamera, PBUnknownFields;

@interface GEOStorageCameraView : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOURLCamera *_camera;
    int _mapType;
    struct {
        unsigned int mapType:1;
    } _has;
}

@property (strong, nonatomic) GEOURLCamera *camera; // @synthesize camera=_camera;
@property (readonly, nonatomic) BOOL hasCamera;
@property (nonatomic) BOOL hasMapType;
@property (nonatomic) int mapType; // @synthesize mapType=_mapType;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

- (int)StringAsMapType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)mapTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
