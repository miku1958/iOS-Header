//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBDataReader, PBUnknownFields;

@interface GEOLocalizedName : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_languageCode;
    NSString *_nameType;
    NSString *_name;
    NSString *_phoneticName;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _nameRank;
    BOOL _isDefault;
    struct {
        unsigned int has_nameRank:1;
        unsigned int has_isDefault:1;
        unsigned int read_unknownFields:1;
        unsigned int read_languageCode:1;
        unsigned int read_nameType:1;
        unsigned int read_name:1;
        unsigned int read_phoneticName:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

@property (nonatomic) BOOL hasIsDefault;
@property (readonly, nonatomic) BOOL hasLanguageCode;
@property (readonly, nonatomic) BOOL hasName;
@property (nonatomic) BOOL hasNameRank;
@property (readonly, nonatomic) BOOL hasNameType;
@property (readonly, nonatomic) BOOL hasPhoneticName;
@property (nonatomic) BOOL isDefault;
@property (strong, nonatomic) NSString *languageCode;
@property (strong, nonatomic) NSString *name;
@property (nonatomic) unsigned int nameRank;
@property (strong, nonatomic) NSString *nameType;
@property (strong, nonatomic) NSString *phoneticName;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)initWithPlaceDataLocalizedString:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

