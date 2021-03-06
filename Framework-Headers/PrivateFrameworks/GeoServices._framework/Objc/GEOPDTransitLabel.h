//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOTransitLabelItem-Protocol.h>
#import <GeoServices/NSCopying-Protocol.h>

@class GEOPBTransitArtwork, NSString, PBDataReader, PBUnknownFields;
@protocol GEOTransitArtworkDataSource;

__attribute__((visibility("hidden")))
@interface GEOPDTransitLabel : PBCodable <GEOTransitLabelItem, NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPBTransitArtwork *_labelArtwork;
    NSString *_labelTextString;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _labelType;
    struct {
        unsigned int has_labelType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_labelArtwork:1;
        unsigned int read_labelTextString:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasLabelArtwork;
@property (readonly, nonatomic) BOOL hasLabelTextString;
@property (nonatomic) BOOL hasLabelType;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<GEOTransitArtworkDataSource> labelArtwork; // @dynamic labelArtwork;
@property (strong, nonatomic) GEOPBTransitArtwork *labelArtwork;
@property (readonly, nonatomic) NSString *labelString;
@property (strong, nonatomic) NSString *labelTextString;
@property (nonatomic) int labelType;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (int)StringAsLabelType:(id)arg1;
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
- (id)labelTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

