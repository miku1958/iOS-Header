//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface NTPBTrendingLanguageConfig : PBCodable <NSCopying>
{
    NSString *_languageTag;
    NSMutableArray *_trendingTopics;
}

@property (readonly, nonatomic) BOOL hasLanguageTag;
@property (strong, nonatomic) NSString *languageTag; // @synthesize languageTag=_languageTag;
@property (strong, nonatomic) NSMutableArray *trendingTopics; // @synthesize trendingTopics=_trendingTopics;

+ (Class)trendingTopicsType;
- (void).cxx_destruct;
- (void)addTrendingTopics:(id)arg1;
- (void)clearTrendingTopics;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)trendingTopicsAtIndex:(unsigned long long)arg1;
- (unsigned long long)trendingTopicsCount;
- (void)writeTo:(id)arg1;

@end
