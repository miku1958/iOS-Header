//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDResolvedItem, PBUnknownFields;

@interface GEOPDDirectionIntent : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOPDResolvedItem *_destination;
    GEOPDResolvedItem *_origin;
    int _transportType;
    CDStruct_a995201b _has;
}

@property (strong, nonatomic) GEOPDResolvedItem *destination; // @synthesize destination=_destination;
@property (readonly, nonatomic) BOOL hasDestination;
@property (readonly, nonatomic) BOOL hasOrigin;
@property (nonatomic) BOOL hasTransportType;
@property (strong, nonatomic) GEOPDResolvedItem *origin; // @synthesize origin=_origin;
@property (nonatomic) int transportType; // @synthesize transportType=_transportType;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (int)StringAsTransportType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)transportTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

