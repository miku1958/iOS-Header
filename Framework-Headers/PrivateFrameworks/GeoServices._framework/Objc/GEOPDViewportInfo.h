//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOMapRegion, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDViewportInfo : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOMapRegion *_mapRegion;
    int _mapType;
    unsigned int _timeSinceMapViewportChanged;
    struct {
        unsigned int mapType:1;
        unsigned int timeSinceMapViewportChanged:1;
    } _has;
}

@property (readonly, nonatomic) BOOL hasMapRegion;
@property (nonatomic) BOOL hasMapType;
@property (nonatomic) BOOL hasTimeSinceMapViewportChanged;
@property (strong, nonatomic) GEOMapRegion *mapRegion; // @synthesize mapRegion=_mapRegion;
@property (nonatomic) int mapType; // @synthesize mapType=_mapType;
@property (nonatomic) unsigned int timeSinceMapViewportChanged; // @synthesize timeSinceMapViewportChanged=_timeSinceMapViewportChanged;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (id)viewportInfoForTraits:(id)arg1;
- (void).cxx_destruct;
- (int)StringAsMapType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithTraits:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)mapTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

