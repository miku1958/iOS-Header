//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEOBusinessOptions : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_attributeKeys;
    NSMutableArray *_photoOptions;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _maxBusinessResults;
    BOOL _includeBusinessHours;
    BOOL _includeCenter;
    struct {
        unsigned int has_maxBusinessResults:1;
        unsigned int has_includeBusinessHours:1;
        unsigned int has_includeCenter:1;
        unsigned int read_unknownFields:1;
        unsigned int read_attributeKeys:1;
        unsigned int read_photoOptions:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

@property (strong, nonatomic) NSMutableArray *attributeKeys;
@property (nonatomic) BOOL hasIncludeBusinessHours;
@property (nonatomic) BOOL hasIncludeCenter;
@property (nonatomic) BOOL hasMaxBusinessResults;
@property (nonatomic) BOOL includeBusinessHours;
@property (nonatomic) BOOL includeCenter;
@property (nonatomic) int maxBusinessResults;
@property (strong, nonatomic) NSMutableArray *photoOptions;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)attributeKeyType;
+ (BOOL)isValid:(id)arg1;
+ (Class)photoOptionsType;
- (void).cxx_destruct;
- (void)addAttributeKey:(id)arg1;
- (void)addPhotoOptions:(id)arg1;
- (id)attributeKeyAtIndex:(unsigned long long)arg1;
- (unsigned long long)attributeKeysCount;
- (void)clearAttributeKeys;
- (void)clearPhotoOptions;
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
- (BOOL)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)photoOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)photoOptionsCount;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
