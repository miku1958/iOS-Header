//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBDataReader, PBUnknownFields;

@interface GEONameInfo : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_locale;
    NSString *_name;
    NSString *_phoneticName;
    NSString *_shield;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _phoneticType;
    int _shieldType;
    int _signType;
    struct {
        unsigned int has_phoneticType:1;
        unsigned int has_shieldType:1;
        unsigned int has_signType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_locale:1;
        unsigned int read_name:1;
        unsigned int read_phoneticName:1;
        unsigned int read_shield:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_locale:1;
        unsigned int wrote_name:1;
        unsigned int wrote_phoneticName:1;
        unsigned int wrote_shield:1;
        unsigned int wrote_phoneticType:1;
        unsigned int wrote_shieldType:1;
        unsigned int wrote_signType:1;
    } _flags;
}

@property (readonly, nonatomic) BOOL hasLocale;
@property (readonly, nonatomic) BOOL hasName;
@property (readonly, nonatomic) BOOL hasPhoneticName;
@property (nonatomic) BOOL hasPhoneticType;
@property (readonly, nonatomic) BOOL hasShield;
@property (nonatomic) BOOL hasShieldType;
@property (nonatomic) BOOL hasSignType;
@property (strong, nonatomic) NSString *locale;
@property (strong, nonatomic) NSString *name;
@property (strong, nonatomic) NSString *phoneticName;
@property (nonatomic) int phoneticType;
@property (strong, nonatomic) NSString *shield;
@property (nonatomic) int shieldType;
@property (nonatomic) int signType;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (int)StringAsPhoneticType:(id)arg1;
- (int)StringAsSignType:(id)arg1;
- (void)_readLocale;
- (void)_readName;
- (void)_readPhoneticName;
- (void)_readShield;
- (void)clearUnknownFields:(BOOL)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)phoneticTypeAsString:(int)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)signTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
