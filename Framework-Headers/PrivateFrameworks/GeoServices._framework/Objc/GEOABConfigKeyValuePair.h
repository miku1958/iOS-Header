//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOABConfigValue, NSString, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOABConfigKeyValuePair : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSString *_abConfigKey;
    GEOABConfigValue *_abConfigValue;
    int _abConfigValueType;
    struct {
        unsigned int abConfigValueType:1;
    } _has;
}

@property (strong, nonatomic) NSString *abConfigKey; // @synthesize abConfigKey=_abConfigKey;
@property (strong, nonatomic) GEOABConfigValue *abConfigValue; // @synthesize abConfigValue=_abConfigValue;
@property (nonatomic) int abConfigValueType; // @synthesize abConfigValueType=_abConfigValueType;
@property (readonly, nonatomic) BOOL hasAbConfigKey;
@property (readonly, nonatomic) BOOL hasAbConfigValue;
@property (nonatomic) BOOL hasAbConfigValueType;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (int)StringAsAbConfigValueType:(id)arg1;
- (id)abConfigValueTypeAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

