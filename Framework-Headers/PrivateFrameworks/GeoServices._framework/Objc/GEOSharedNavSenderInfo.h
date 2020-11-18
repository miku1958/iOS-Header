//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBDataReader, PBUnknownFields;

@interface GEOSharedNavSenderInfo : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_fromDisplayName;
    NSString *_fromIdentifier;
    NSString *_localContactIdentifier;
    NSString *_localName;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_fromDisplayName:1;
        unsigned int read_fromIdentifier:1;
        unsigned int read_localContactIdentifier:1;
        unsigned int read_localName:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

@property (strong, nonatomic) NSString *fromDisplayName;
@property (strong, nonatomic) NSString *fromIdentifier;
@property (readonly, nonatomic) BOOL hasFromDisplayName;
@property (readonly, nonatomic) BOOL hasFromIdentifier;
@property (readonly, nonatomic) BOOL hasLocalContactIdentifier;
@property (readonly, nonatomic) BOOL hasLocalName;
@property (strong, nonatomic) NSString *localContactIdentifier;
@property (strong, nonatomic) NSString *localName;
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
- (BOOL)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
