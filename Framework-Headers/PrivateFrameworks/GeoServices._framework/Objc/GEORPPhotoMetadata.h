//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLocation, NSString, PBDataReader, PBUnknownFields;

@interface GEORPPhotoMetadata : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_clientImageUuid;
    GEOLocation *_geotag;
    NSString *_imageDescription;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_clientImageUuid:1;
        unsigned int read_geotag:1;
        unsigned int read_imageDescription:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_clientImageUuid:1;
        unsigned int wrote_geotag:1;
        unsigned int wrote_imageDescription:1;
    } _flags;
}

@property (strong, nonatomic) NSString *clientImageUuid;
@property (strong, nonatomic) GEOLocation *geotag;
@property (readonly, nonatomic) BOOL hasClientImageUuid;
@property (readonly, nonatomic) BOOL hasGeotag;
@property (readonly, nonatomic) BOOL hasImageDescription;
@property (strong, nonatomic) NSString *imageDescription;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)_readClientImageUuid;
- (void)_readGeotag;
- (void)_readImageDescription;
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
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
