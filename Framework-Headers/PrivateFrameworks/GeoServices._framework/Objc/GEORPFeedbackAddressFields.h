//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBDataReader, PBUnknownFields;

@interface GEORPFeedbackAddressFields : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_addressBasic;
    NSString *_addressBuilding;
    NSString *_addressFloor;
    NSString *_addressUnit;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_addressBasic:1;
        unsigned int read_addressBuilding:1;
        unsigned int read_addressFloor:1;
        unsigned int read_addressUnit:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

@property (strong, nonatomic) NSString *addressBasic;
@property (strong, nonatomic) NSString *addressBuilding;
@property (strong, nonatomic) NSString *addressFloor;
@property (strong, nonatomic) NSString *addressUnit;
@property (readonly, nonatomic) BOOL hasAddressBasic;
@property (readonly, nonatomic) BOOL hasAddressBuilding;
@property (readonly, nonatomic) BOOL hasAddressFloor;
@property (readonly, nonatomic) BOOL hasAddressUnit;
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
