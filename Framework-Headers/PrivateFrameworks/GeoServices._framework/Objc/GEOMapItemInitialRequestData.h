//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDPlaceRequestParameters;

__attribute__((visibility("hidden")))
@interface GEOMapItemInitialRequestData : PBCodable <NSCopying>
{
    GEOPDPlaceRequestParameters *_placeRequestParameters;
    int _requestType;
    CDStruct_7c66fec0 _has;
}

@property (readonly, nonatomic) BOOL hasPlaceRequestParameters;
@property (nonatomic) BOOL hasRequestType;
@property (strong, nonatomic) GEOPDPlaceRequestParameters *placeRequestParameters; // @synthesize placeRequestParameters=_placeRequestParameters;
@property (nonatomic) int requestType; // @synthesize requestType=_requestType;

- (void).cxx_destruct;
- (int)StringAsRequestType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)requestTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

