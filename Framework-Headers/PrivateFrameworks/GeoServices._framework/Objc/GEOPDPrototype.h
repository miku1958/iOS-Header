//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPrototype : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_componentType;
    NSMutableArray *_values;
    NSString *_version;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_componentType:1;
        unsigned int read_values:1;
        unsigned int read_version:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

@property (strong, nonatomic) NSString *componentType;
@property (readonly, nonatomic) BOOL hasComponentType;
@property (readonly, nonatomic) BOOL hasVersion;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (strong, nonatomic) NSMutableArray *values;
@property (strong, nonatomic) NSString *version;

+ (BOOL)isValid:(id)arg1;
+ (Class)valueType;
- (void).cxx_destruct;
- (void)addValue:(id)arg1;
- (void)clearUnknownFields:(BOOL)arg1;
- (void)clearValues;
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
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)valueAtIndex:(unsigned long long)arg1;
- (unsigned long long)valuesCount;
- (void)writeTo:(id)arg1;

@end

