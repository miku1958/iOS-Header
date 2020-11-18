//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NTPBTodayConfig : PBCodable <NSCopying>
{
    unsigned long long _backgroundForYouMinimumUpdateInterval;
    unsigned long long _backgroundTrendingByParsecMinimumUpdateInterval;
    unsigned long long _foregroundForYouMinimumUpdateInterval;
    unsigned long long _foregroundTrendingByParsecMinimumUpdateInterval;
    unsigned long long _widgetSlotsLimit;
    NSMutableArray *_todayQueueConfigs;
    struct {
        unsigned int backgroundForYouMinimumUpdateInterval:1;
        unsigned int backgroundTrendingByParsecMinimumUpdateInterval:1;
        unsigned int foregroundForYouMinimumUpdateInterval:1;
        unsigned int foregroundTrendingByParsecMinimumUpdateInterval:1;
        unsigned int widgetSlotsLimit:1;
    } _has;
}

@property (nonatomic) unsigned long long backgroundForYouMinimumUpdateInterval; // @synthesize backgroundForYouMinimumUpdateInterval=_backgroundForYouMinimumUpdateInterval;
@property (nonatomic) unsigned long long backgroundTrendingByParsecMinimumUpdateInterval; // @synthesize backgroundTrendingByParsecMinimumUpdateInterval=_backgroundTrendingByParsecMinimumUpdateInterval;
@property (nonatomic) unsigned long long foregroundForYouMinimumUpdateInterval; // @synthesize foregroundForYouMinimumUpdateInterval=_foregroundForYouMinimumUpdateInterval;
@property (nonatomic) unsigned long long foregroundTrendingByParsecMinimumUpdateInterval; // @synthesize foregroundTrendingByParsecMinimumUpdateInterval=_foregroundTrendingByParsecMinimumUpdateInterval;
@property (nonatomic) BOOL hasBackgroundForYouMinimumUpdateInterval;
@property (nonatomic) BOOL hasBackgroundTrendingByParsecMinimumUpdateInterval;
@property (nonatomic) BOOL hasForegroundForYouMinimumUpdateInterval;
@property (nonatomic) BOOL hasForegroundTrendingByParsecMinimumUpdateInterval;
@property (nonatomic) BOOL hasWidgetSlotsLimit;
@property (strong, nonatomic) NSMutableArray *todayQueueConfigs; // @synthesize todayQueueConfigs=_todayQueueConfigs;
@property (nonatomic) unsigned long long widgetSlotsLimit; // @synthesize widgetSlotsLimit=_widgetSlotsLimit;

+ (Class)todayQueueConfigsType;
- (void)addTodayQueueConfigs:(id)arg1;
- (void)clearTodayQueueConfigs;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)todayQueueConfigsAtIndex:(unsigned long long)arg1;
- (unsigned long long)todayQueueConfigsCount;
- (void)writeTo:(id)arg1;

@end
