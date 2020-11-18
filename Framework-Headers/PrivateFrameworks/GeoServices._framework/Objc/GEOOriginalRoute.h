//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSData;

@interface GEOOriginalRoute : PBCodable <NSCopying>
{
    NSData *_originalDirectionsResponseID;
    int _originalRoutePurpose;
    NSData *_routeHandle;
    unsigned int _routeIndex;
    struct {
        unsigned int originalRoutePurpose:1;
        unsigned int routeIndex:1;
    } _has;
}

@property (readonly, nonatomic) BOOL hasOriginalDirectionsResponseID;
@property (nonatomic) BOOL hasOriginalRoutePurpose;
@property (readonly, nonatomic) BOOL hasRouteHandle;
@property (nonatomic) BOOL hasRouteIndex;
@property (strong, nonatomic) NSData *originalDirectionsResponseID; // @synthesize originalDirectionsResponseID=_originalDirectionsResponseID;
@property (nonatomic) int originalRoutePurpose; // @synthesize originalRoutePurpose=_originalRoutePurpose;
@property (strong, nonatomic) NSData *routeHandle; // @synthesize routeHandle=_routeHandle;
@property (nonatomic) unsigned int routeIndex; // @synthesize routeIndex=_routeIndex;

- (int)StringAsOriginalRoutePurpose:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)originalRoutePurposeAsString:(int)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

