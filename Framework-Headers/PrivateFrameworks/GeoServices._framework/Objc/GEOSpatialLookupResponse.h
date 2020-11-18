//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEOSpatialLookupResponse : PBCodable <NSCopying>
{
    NSMutableArray *_places;
    int _statusCode;
    CDStruct_bcb1eac0 _has;
}

@property (nonatomic) BOOL hasStatusCode;
@property (strong, nonatomic) NSMutableArray *places; // @synthesize places=_places;
@property (nonatomic) int statusCode; // @synthesize statusCode=_statusCode;

+ (Class)placeType;
- (int)StringAsStatusCode:(id)arg1;
- (void)addPlace:(id)arg1;
- (void)clearPlaces;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)placeAtIndex:(unsigned long long)arg1;
- (unsigned long long)placesCount;
- (BOOL)readFrom:(id)arg1;
- (id)statusCodeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
