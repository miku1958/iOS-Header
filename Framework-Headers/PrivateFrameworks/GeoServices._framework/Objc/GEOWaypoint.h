//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLocation, GEOPlaceSearchRequest, NSMutableArray;

@interface GEOWaypoint : PBCodable <NSCopying>
{
    NSMutableArray *_entryPoints;
    GEOLocation *_location;
    GEOPlaceSearchRequest *_placeSearchRequest;
}

@property (strong, nonatomic) NSMutableArray *entryPoints; // @synthesize entryPoints=_entryPoints;
@property (readonly, nonatomic) BOOL hasLocation;
@property (readonly, nonatomic) BOOL hasPlaceSearchRequest;
@property (strong, nonatomic) GEOLocation *location; // @synthesize location=_location;
@property (strong, nonatomic) GEOPlaceSearchRequest *placeSearchRequest; // @synthesize placeSearchRequest=_placeSearchRequest;

- (void)addEntryPoint:(id)arg1;
- (void)clearEntryPoints;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)entryPointAtIndex:(unsigned long long)arg1;
- (unsigned long long)entryPointsCount;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

