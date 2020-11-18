//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOTransitArrivalInfo : PBCodable <NSCopying>
{
    int _destinationLocation;
    struct {
        unsigned int destinationLocation:1;
    } _has;
}

@property (nonatomic) int destinationLocation; // @synthesize destinationLocation=_destinationLocation;
@property (nonatomic) BOOL hasDestinationLocation;

- (int)StringAsDestinationLocation:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)destinationLocationAsString:(int)arg1;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

