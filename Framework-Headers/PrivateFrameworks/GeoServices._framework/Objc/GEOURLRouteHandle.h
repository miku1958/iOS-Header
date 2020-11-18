//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSData;

@interface GEOURLRouteHandle : PBCodable <NSCopying>
{
    NSData *_directionsResponseID;
    NSData *_routeID;
    NSData *_transitData;
    NSData *_zilchPoints;
}

@property (strong, nonatomic) NSData *directionsResponseID; // @synthesize directionsResponseID=_directionsResponseID;
@property (readonly, nonatomic) BOOL hasDirectionsResponseID;
@property (readonly, nonatomic) BOOL hasRouteID;
@property (readonly, nonatomic) BOOL hasTransitData;
@property (readonly, nonatomic) BOOL hasZilchPoints;
@property (strong, nonatomic) NSData *routeID; // @synthesize routeID=_routeID;
@property (strong, nonatomic) NSData *transitData; // @synthesize transitData=_transitData;
@property (strong, nonatomic) NSData *zilchPoints; // @synthesize zilchPoints=_zilchPoints;

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
