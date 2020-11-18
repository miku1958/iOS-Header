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
    int _responseSource;
    struct {
        unsigned int responseSource:1;
    } _has;
}

@property (readonly, nonatomic) BOOL hasNetworkMetrics;
@property (nonatomic) BOOL hasResponseSource;
@property (strong, nonatomic) GEOClientNetworkMetrics *networkMetrics; // @synthesize networkMetrics=_networkMetrics;
@property (nonatomic) int responseSource; // @synthesize responseSource=_responseSource;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (int)StringAsResponseSource:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)responseSourceAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
