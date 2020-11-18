//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDPlaceRefinementParameters;

@interface GEOMapItemHandle : PBCodable <NSCopying>
{
    int _handleType;
    GEOPDPlaceRefinementParameters *_placeRefinementParameters;
    struct {
        unsigned int handleType:1;
    } _has;
}

@property (nonatomic) int handleType; // @synthesize handleType=_handleType;
@property (nonatomic) BOOL hasHandleType;
@property (readonly, nonatomic) BOOL hasPlaceRefinementParameters;
@property (strong, nonatomic) GEOPDPlaceRefinementParameters *placeRefinementParameters; // @synthesize placeRefinementParameters=_placeRefinementParameters;

- (int)StringAsHandleType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)handleTypeAsString:(int)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
