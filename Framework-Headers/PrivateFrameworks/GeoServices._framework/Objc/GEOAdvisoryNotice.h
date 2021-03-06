//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOAdvisoryCard, GEOFormattedString, PBDataReader, PBUnknownFields;

@interface GEOAdvisoryNotice : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_9f2792e4 _incidentIndexs;
    GEOAdvisoryCard *_advisoryCard;
    GEOFormattedString *_noticeText;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    BOOL _shouldAlwaysShowAdvisoryCard;
    struct {
        unsigned int has_shouldAlwaysShowAdvisoryCard:1;
        unsigned int read_unknownFields:1;
        unsigned int read_incidentIndexs:1;
        unsigned int read_advisoryCard:1;
        unsigned int read_noticeText:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

@property (strong, nonatomic) GEOAdvisoryCard *advisoryCard;
@property (readonly, nonatomic) BOOL hasAdvisoryCard;
@property (readonly, nonatomic) BOOL hasNoticeText;
@property (nonatomic) BOOL hasShouldAlwaysShowAdvisoryCard;
@property (readonly, nonatomic) unsigned int *incidentIndexs;
@property (readonly, nonatomic) unsigned long long incidentIndexsCount;
@property (strong, nonatomic) GEOFormattedString *noticeText;
@property (nonatomic) BOOL shouldAlwaysShowAdvisoryCard;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)addIncidentIndex:(unsigned int)arg1;
- (void)clearIncidentIndexs;
- (void)clearUnknownFields:(BOOL)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (unsigned int)incidentIndexAtIndex:(unsigned long long)arg1;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setIncidentIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (void)writeTo:(id)arg1;

@end

