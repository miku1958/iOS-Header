//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOABConfigValue : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    double _doubleValue;
    long long _intValue;
    NSString *_stringValue;
    BOOL _boolValue;
    struct {
        unsigned int has_doubleValue:1;
        unsigned int has_intValue:1;
        unsigned int has_boolValue:1;
    } _flags;
}

@property (nonatomic) BOOL boolValue;
@property (nonatomic) double doubleValue;
@property (nonatomic) BOOL hasBoolValue;
@property (nonatomic) BOOL hasDoubleValue;
@property (nonatomic) BOOL hasIntValue;
@property (readonly, nonatomic) BOOL hasStringValue;
@property (nonatomic) long long intValue;
@property (strong, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
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
- (void)writeTo:(id)arg1;

@end

