//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOTransitShieldDataSource-Protocol.h>
#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPBTransitShield : PBCodable <GEOTransitShieldDataSource, NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_shieldColor;
    NSString *_shieldText;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _shieldEnumValue;
    struct {
        unsigned int has_shieldEnumValue:1;
        unsigned int read_unknownFields:1;
        unsigned int read_shieldColor:1;
        unsigned int read_shieldText:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasShieldColor;
@property (nonatomic) BOOL hasShieldEnumValue;
@property (readonly, nonatomic) BOOL hasShieldText;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSString *shieldColor;
@property (readonly, nonatomic) NSString *shieldColorString;
@property (nonatomic) unsigned int shieldEnumValue;
@property (readonly, nonatomic) NSString *shieldText;
@property (strong, nonatomic) NSString *shieldText;
@property (readonly, nonatomic) long long shieldType;
@property (readonly) Class superclass;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
