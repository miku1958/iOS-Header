//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOClientNetworkMetrics, PBUnknownFields;

@interface GEOClientMetrics : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOClientNetworkMetrics *_networkMetrics;
    int _offlineReason;
    int _responseSource;
    struct {
        unsigned int has_offlineReason:1;
        unsigned int has_responseSource:1;
    } _flags;
}

@property (readonly, nonatomic) BOOL hasNetworkMetrics;
@property (nonatomic) BOOL hasOfflineReason;
@property (nonatomic) BOOL hasResponseSource;
@property (strong, nonatomic) GEOClientNetworkMetrics *networkMetrics;
@property (nonatomic) int offlineReason;
@property (nonatomic) int responseSource;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (int)StringAsOfflineReason:(id)arg1;
- (int)StringAsResponseSource:(id)arg1;
- (void)clearUnknownFields:(BOOL)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)offlineReasonAsString:(int)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)responseSourceAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
