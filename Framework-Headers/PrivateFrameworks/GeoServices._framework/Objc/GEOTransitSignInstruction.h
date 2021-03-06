//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOComposedRouteStepTransitInstructionMerging-Protocol.h>
#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOTransitSignInstruction : PBCodable <GEOComposedRouteStepTransitInstructionMerging, NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_commandFormatteds;
    NSMutableArray *_detailFormatteds;
    NSMutableArray *_noticeFormatteds;
    NSMutableArray *_priceFormatteds;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_commandFormatteds:1;
        unsigned int read_detailFormatteds:1;
        unsigned int read_noticeFormatteds:1;
        unsigned int read_priceFormatteds:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

@property (strong, nonatomic) NSMutableArray *commandFormatteds;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSMutableArray *detailFormatteds;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMutableArray *noticeFormatteds;
@property (strong, nonatomic) NSMutableArray *priceFormatteds;
@property (readonly) Class superclass;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)commandFormattedType;
+ (Class)detailFormattedType;
+ (BOOL)isValid:(id)arg1;
+ (Class)noticeFormattedType;
+ (Class)priceFormattedType;
- (void).cxx_destruct;
- (void)_transit_prepareForDeepMergeFrom:(id)arg1;
- (void)addCommandFormatted:(id)arg1;
- (void)addDetailFormatted:(id)arg1;
- (void)addNoticeFormatted:(id)arg1;
- (void)addPriceFormatted:(id)arg1;
- (void)clearCommandFormatteds;
- (void)clearDetailFormatteds;
- (void)clearNoticeFormatteds;
- (void)clearPriceFormatteds;
- (void)clearUnknownFields:(BOOL)arg1;
- (id)commandFormattedAtIndex:(unsigned long long)arg1;
- (unsigned long long)commandFormattedsCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)detailFormattedAtIndex:(unsigned long long)arg1;
- (unsigned long long)detailFormattedsCount;
- (id)dictionaryRepresentation;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)noticeFormattedAtIndex:(unsigned long long)arg1;
- (unsigned long long)noticeFormattedsCount;
- (id)priceFormattedAtIndex:(unsigned long long)arg1;
- (unsigned long long)priceFormattedsCount;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

