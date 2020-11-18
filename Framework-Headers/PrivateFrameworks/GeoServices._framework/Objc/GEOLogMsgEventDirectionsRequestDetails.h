//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOLogMsgEventDirectionsRequestDetails : PBCodable <NSCopying>
{
    int _destination;
    int _origin;
    int _purpose;
    BOOL _navStarted;
    struct {
        unsigned int has_destination:1;
        unsigned int has_origin:1;
        unsigned int has_purpose:1;
        unsigned int has_navStarted:1;
    } _flags;
}

@property (nonatomic) int destination;
@property (nonatomic) BOOL hasDestination;
@property (nonatomic) BOOL hasNavStarted;
@property (nonatomic) BOOL hasOrigin;
@property (nonatomic) BOOL hasPurpose;
@property (nonatomic) BOOL navStarted;
@property (nonatomic) int origin;
@property (nonatomic) int purpose;

+ (BOOL)isValid:(id)arg1;
- (int)StringAsDestination:(id)arg1;
- (int)StringAsOrigin:(id)arg1;
- (int)StringAsPurpose:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)destinationAsString:(int)arg1;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)originAsString:(int)arg1;
- (id)purposeAsString:(int)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
