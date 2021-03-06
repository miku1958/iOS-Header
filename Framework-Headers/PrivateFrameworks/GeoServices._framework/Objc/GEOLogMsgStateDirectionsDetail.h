//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOLogMsgStateDirectionsDetail : PBCodable <NSCopying>
{
    int _transportType;
    BOOL _isEv;
    struct {
        unsigned int has_transportType:1;
        unsigned int has_isEv:1;
    } _flags;
}

@property (nonatomic) BOOL hasIsEv;
@property (nonatomic) BOOL hasTransportType;
@property (nonatomic) BOOL isEv;
@property (nonatomic) int transportType;

+ (BOOL)isValid:(id)arg1;
- (int)StringAsTransportType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)transportTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

