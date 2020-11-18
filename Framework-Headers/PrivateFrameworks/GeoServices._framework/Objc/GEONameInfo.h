//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString;

@interface GEONameInfo : PBCodable <NSCopying>
{
    NSString *_locale;
    NSString *_name;
    NSString *_phoneticName;
    int _phoneticType;
    NSString *_shield;
    int _shieldType;
    int _signType;
    struct {
        unsigned int phoneticType:1;
        unsigned int shieldType:1;
        unsigned int signType:1;
    } _has;
}

@property (readonly, nonatomic) BOOL hasLocale;
@property (readonly, nonatomic) BOOL hasName;
@property (readonly, nonatomic) BOOL hasPhoneticName;
@property (nonatomic) BOOL hasPhoneticType;
@property (readonly, nonatomic) BOOL hasShield;
@property (nonatomic) BOOL hasShieldType;
@property (nonatomic) BOOL hasSignType;
@property (strong, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property (strong, nonatomic) NSString *name; // @synthesize name=_name;
@property (strong, nonatomic) NSString *phoneticName; // @synthesize phoneticName=_phoneticName;
@property (nonatomic) int phoneticType; // @synthesize phoneticType=_phoneticType;
@property (strong, nonatomic) NSString *shield; // @synthesize shield=_shield;
@property (nonatomic) int shieldType; // @synthesize shieldType=_shieldType;
@property (nonatomic) int signType; // @synthesize signType=_signType;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

