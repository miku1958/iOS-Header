//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLocalizedString, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPerformer : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_itunesId;
    NSString *_itunesUrl;
    GEOLocalizedString *_name;
    NSString *_performerId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_itunesId:1;
        unsigned int read_itunesUrl:1;
        unsigned int read_name:1;
        unsigned int read_performerId:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_itunesId:1;
        unsigned int wrote_itunesUrl:1;
        unsigned int wrote_name:1;
        unsigned int wrote_performerId:1;
    } _flags;
}

@property (readonly, nonatomic) BOOL hasItunesId;
@property (readonly, nonatomic) BOOL hasItunesUrl;
@property (readonly, nonatomic) BOOL hasName;
@property (readonly, nonatomic) BOOL hasPerformerId;
@property (strong, nonatomic) NSString *itunesId;
@property (strong, nonatomic) NSString *itunesUrl;
@property (strong, nonatomic) GEOLocalizedString *name;
@property (strong, nonatomic) NSString *performerId;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)_readItunesId;
- (void)_readItunesUrl;
- (void)_readName;
- (void)_readPerformerId;
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
