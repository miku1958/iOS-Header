//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng;

@interface GEONavigationTransitStopSummary : PBCodable <NSCopying>
{
    GEOLatLng *_coordinate;
    unsigned long long _stopID;
    struct {
        unsigned int has_stopID:1;
    } _flags;
}

@property (strong, nonatomic) GEOLatLng *coordinate;
@property (readonly, nonatomic) BOOL hasCoordinate;
@property (nonatomic) BOOL hasStopID;
@property (nonatomic) unsigned long long stopID;

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)initWithTransitStop:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

