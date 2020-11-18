//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOLogFrameworkMetricItem : PBCodable <NSCopying>
{
    unsigned long long _metricItemSize;
    unsigned int _metricItemCount;
    unsigned int _metricItemIdHash;
    unsigned int _metricItemQueueTime;
    unsigned int _metricItemRetryCount;
    int _metricItemType;
    struct {
        unsigned int has_metricItemSize:1;
        unsigned int has_metricItemCount:1;
        unsigned int has_metricItemIdHash:1;
        unsigned int has_metricItemQueueTime:1;
        unsigned int has_metricItemRetryCount:1;
        unsigned int has_metricItemType:1;
    } _flags;
}

@property (nonatomic) BOOL hasMetricItemCount;
@property (nonatomic) BOOL hasMetricItemIdHash;
@property (nonatomic) BOOL hasMetricItemQueueTime;
@property (nonatomic) BOOL hasMetricItemRetryCount;
@property (nonatomic) BOOL hasMetricItemSize;
@property (nonatomic) BOOL hasMetricItemType;
@property (nonatomic) unsigned int metricItemCount;
@property (nonatomic) unsigned int metricItemIdHash;
@property (nonatomic) unsigned int metricItemQueueTime;
@property (nonatomic) unsigned int metricItemRetryCount;
@property (nonatomic) unsigned long long metricItemSize;
@property (nonatomic) int metricItemType;

+ (BOOL)isValid:(id)arg1;
- (int)StringAsMetricItemType:(id)arg1;
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
- (id)metricItemTypeAsString:(int)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
