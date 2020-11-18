//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSString;

@interface NTPBPersonalizationAggregateDelta : PBCodable <NSCopying>
{
    struct {
        unsigned int *list;
        unsigned long long count;
        unsigned long long size;
    } _events;
    double _defaultClicks;
    double _defaultImpressions;
    unsigned long long _timestamp;
    NSString *_featureKey;
    struct {
        unsigned int defaultClicks:1;
        unsigned int defaultImpressions:1;
        unsigned int timestamp:1;
    } _has;
}

@property (nonatomic) double defaultClicks; // @synthesize defaultClicks=_defaultClicks;
@property (nonatomic) double defaultImpressions; // @synthesize defaultImpressions=_defaultImpressions;
@property (readonly, nonatomic) unsigned int *events;
@property (readonly, nonatomic) unsigned long long eventsCount;
@property (strong, nonatomic) NSString *featureKey; // @synthesize featureKey=_featureKey;
@property (nonatomic) BOOL hasDefaultClicks;
@property (nonatomic) BOOL hasDefaultImpressions;
@property (readonly, nonatomic) BOOL hasFeatureKey;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;

- (void)addEvents:(unsigned int)arg1;
- (void)clearEvents;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)eventsAtIndex:(unsigned long long)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setEvents:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (void)writeTo:(id)arg1;

@end
