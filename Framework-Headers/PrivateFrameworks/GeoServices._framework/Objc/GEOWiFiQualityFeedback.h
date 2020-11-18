//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOWiFiQualityFeedback : PBCodable <NSCopying>
{
    unsigned int _maxValue;
    int _type;
    unsigned int _value;
    struct {
        unsigned int has_maxValue:1;
        unsigned int has_type:1;
        unsigned int has_value:1;
    } _flags;
}

@property (nonatomic) BOOL hasMaxValue;
@property (nonatomic) BOOL hasType;
@property (nonatomic) BOOL hasValue;
@property (nonatomic) unsigned int maxValue;
@property (nonatomic) int type;
@property (nonatomic) unsigned int value;

+ (BOOL)isValid:(id)arg1;
- (int)StringAsType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
