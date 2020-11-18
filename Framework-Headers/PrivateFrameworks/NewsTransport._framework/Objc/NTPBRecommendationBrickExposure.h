//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface NTPBRecommendationBrickExposure : PBCodable <NSCopying>
{
    NSString *_feedId;
    int _feedType;
    NSMutableArray *_recommendedFeedIds;
    struct {
        unsigned int feedType:1;
    } _has;
}

@property (strong, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
@property (nonatomic) int feedType; // @synthesize feedType=_feedType;
@property (readonly, nonatomic) BOOL hasFeedId;
@property (nonatomic) BOOL hasFeedType;
@property (strong, nonatomic) NSMutableArray *recommendedFeedIds; // @synthesize recommendedFeedIds=_recommendedFeedIds;

+ (Class)recommendedFeedIdsType;
- (void).cxx_destruct;
- (int)StringAsFeedType:(id)arg1;
- (void)addRecommendedFeedIds:(id)arg1;
- (void)clearRecommendedFeedIds;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)feedTypeAsString:(int)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)recommendedFeedIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)recommendedFeedIdsCount;
- (void)writeTo:(id)arg1;

@end
