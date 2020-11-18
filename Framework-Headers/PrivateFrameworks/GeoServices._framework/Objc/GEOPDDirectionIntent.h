//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDResolvedItem, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDDirectionIntent : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDResolvedItem *_destination;
    GEOPDResolvedItem *_origin;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _transportType;
    struct {
        unsigned int has_transportType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_destination:1;
        unsigned int read_origin:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_destination:1;
        unsigned int wrote_origin:1;
        unsigned int wrote_transportType:1;
    } _flags;
}

@property (strong, nonatomic) GEOPDResolvedItem *destination;
@property (readonly, nonatomic) BOOL hasDestination;
@property (readonly, nonatomic) BOOL hasOrigin;
@property (nonatomic) BOOL hasTransportType;
@property (strong, nonatomic) GEOPDResolvedItem *origin;
@property (nonatomic) int transportType;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (int)StringAsTransportType:(id)arg1;
- (void)_readDestination;
- (void)_readOrigin;
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
- (id)transportTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
