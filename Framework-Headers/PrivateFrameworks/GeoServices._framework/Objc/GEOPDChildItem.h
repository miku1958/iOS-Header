//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDChildAction, GEOPDChildPlace, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDChildItem : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDChildAction *_childAction;
    GEOPDChildPlace *_childPlace;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _childItemType;
    struct {
        unsigned int has_childItemType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_childAction:1;
        unsigned int read_childPlace:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_childAction:1;
        unsigned int wrote_childPlace:1;
        unsigned int wrote_childItemType:1;
    } _flags;
}

@property (strong, nonatomic) GEOPDChildAction *childAction;
@property (nonatomic) int childItemType;
@property (strong, nonatomic) GEOPDChildPlace *childPlace;
@property (readonly, nonatomic) BOOL hasChildAction;
@property (nonatomic) BOOL hasChildItemType;
@property (readonly, nonatomic) BOOL hasChildPlace;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (int)StringAsChildItemType:(id)arg1;
- (void)_readChildAction;
- (void)_readChildPlace;
- (id)childItemTypeAsString:(int)arg1;
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
