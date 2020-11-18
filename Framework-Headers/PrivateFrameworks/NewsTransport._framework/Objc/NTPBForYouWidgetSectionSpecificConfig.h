//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@interface NTPBForYouWidgetSectionSpecificConfig : PBCodable <NSCopying>
{
    unsigned long long _cutoffTime;
    unsigned long long _headlinesPerFeedFetchCount;
    unsigned long long _subscriptionsFetchCount;
    int _fetchingBin;
    struct {
        unsigned int cutoffTime:1;
        unsigned int headlinesPerFeedFetchCount:1;
        unsigned int subscriptionsFetchCount:1;
        unsigned int fetchingBin:1;
    } _has;
}

@property (nonatomic) unsigned long long cutoffTime; // @synthesize cutoffTime=_cutoffTime;
@property (nonatomic) int fetchingBin; // @synthesize fetchingBin=_fetchingBin;
@property (nonatomic) BOOL hasCutoffTime;
@property (nonatomic) BOOL hasFetchingBin;
@property (nonatomic) BOOL hasHeadlinesPerFeedFetchCount;
@property (nonatomic) BOOL hasSubscriptionsFetchCount;
@property (nonatomic) unsigned long long headlinesPerFeedFetchCount; // @synthesize headlinesPerFeedFetchCount=_headlinesPerFeedFetchCount;
@property (nonatomic) unsigned long long subscriptionsFetchCount; // @synthesize subscriptionsFetchCount=_subscriptionsFetchCount;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

