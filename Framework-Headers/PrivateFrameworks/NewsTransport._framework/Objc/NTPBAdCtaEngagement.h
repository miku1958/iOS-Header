//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSData, NSString;

@interface NTPBAdCtaEngagement : PBCodable <NSCopying>
{
    long long _videoAdDuration;
    long long _videoAdPlayTime;
    int _adCreativeType;
    int _adCtaEngagemetType;
    int _adEngagementType;
    NSString *_adImpressionId;
    int _adLocation;
    int _adType;
    NSString *_articleId;
    NSData *_articleViewingSessionId;
    NSString *_feedId;
    int _feedType;
    NSData *_feedViewExposureId;
    NSString *_iadAd;
    NSString *_iadCampaign;
    NSString *_iadLine;
    int _newsProductType;
    NSString *_sourceChannelId;
    int _videoAdPlacementPosition;
    int _videoAdType;
    BOOL _videoAdViewComplete;
    struct {
        unsigned int videoAdDuration:1;
        unsigned int videoAdPlayTime:1;
        unsigned int adCreativeType:1;
        unsigned int adCtaEngagemetType:1;
        unsigned int adEngagementType:1;
        unsigned int adLocation:1;
        unsigned int adType:1;
        unsigned int feedType:1;
        unsigned int newsProductType:1;
        unsigned int videoAdPlacementPosition:1;
        unsigned int videoAdType:1;
        unsigned int videoAdViewComplete:1;
    } _has;
}

@property (nonatomic) int adCreativeType; // @synthesize adCreativeType=_adCreativeType;
@property (nonatomic) int adCtaEngagemetType; // @synthesize adCtaEngagemetType=_adCtaEngagemetType;
@property (nonatomic) int adEngagementType; // @synthesize adEngagementType=_adEngagementType;
@property (strong, nonatomic) NSString *adImpressionId; // @synthesize adImpressionId=_adImpressionId;
@property (nonatomic) int adLocation; // @synthesize adLocation=_adLocation;
@property (nonatomic) int adType; // @synthesize adType=_adType;
@property (strong, nonatomic) NSString *articleId; // @synthesize articleId=_articleId;
@property (strong, nonatomic) NSData *articleViewingSessionId; // @synthesize articleViewingSessionId=_articleViewingSessionId;
@property (strong, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
@property (nonatomic) int feedType; // @synthesize feedType=_feedType;
@property (strong, nonatomic) NSData *feedViewExposureId; // @synthesize feedViewExposureId=_feedViewExposureId;
@property (nonatomic) BOOL hasAdCreativeType;
@property (nonatomic) BOOL hasAdCtaEngagemetType;
@property (nonatomic) BOOL hasAdEngagementType;
@property (readonly, nonatomic) BOOL hasAdImpressionId;
@property (nonatomic) BOOL hasAdLocation;
@property (nonatomic) BOOL hasAdType;
@property (readonly, nonatomic) BOOL hasArticleId;
@property (readonly, nonatomic) BOOL hasArticleViewingSessionId;
@property (readonly, nonatomic) BOOL hasFeedId;
@property (nonatomic) BOOL hasFeedType;
@property (readonly, nonatomic) BOOL hasFeedViewExposureId;
@property (readonly, nonatomic) BOOL hasIadAd;
@property (readonly, nonatomic) BOOL hasIadCampaign;
@property (readonly, nonatomic) BOOL hasIadLine;
@property (nonatomic) BOOL hasNewsProductType;
@property (readonly, nonatomic) BOOL hasSourceChannelId;
@property (nonatomic) BOOL hasVideoAdDuration;
@property (nonatomic) BOOL hasVideoAdPlacementPosition;
@property (nonatomic) BOOL hasVideoAdPlayTime;
@property (nonatomic) BOOL hasVideoAdType;
@property (nonatomic) BOOL hasVideoAdViewComplete;
@property (strong, nonatomic) NSString *iadAd; // @synthesize iadAd=_iadAd;
@property (strong, nonatomic) NSString *iadCampaign; // @synthesize iadCampaign=_iadCampaign;
@property (strong, nonatomic) NSString *iadLine; // @synthesize iadLine=_iadLine;
@property (nonatomic) int newsProductType; // @synthesize newsProductType=_newsProductType;
@property (strong, nonatomic) NSString *sourceChannelId; // @synthesize sourceChannelId=_sourceChannelId;
@property (nonatomic) long long videoAdDuration; // @synthesize videoAdDuration=_videoAdDuration;
@property (nonatomic) int videoAdPlacementPosition; // @synthesize videoAdPlacementPosition=_videoAdPlacementPosition;
@property (nonatomic) long long videoAdPlayTime; // @synthesize videoAdPlayTime=_videoAdPlayTime;
@property (nonatomic) int videoAdType; // @synthesize videoAdType=_videoAdType;
@property (nonatomic) BOOL videoAdViewComplete; // @synthesize videoAdViewComplete=_videoAdViewComplete;

- (void).cxx_destruct;
- (int)StringAsAdCreativeType:(id)arg1;
- (int)StringAsAdEngagementType:(id)arg1;
- (int)StringAsAdLocation:(id)arg1;
- (int)StringAsAdType:(id)arg1;
- (int)StringAsFeedType:(id)arg1;
- (int)StringAsNewsProductType:(id)arg1;
- (int)StringAsVideoAdType:(id)arg1;
- (id)adCreativeTypeAsString:(int)arg1;
- (id)adEngagementTypeAsString:(int)arg1;
- (id)adLocationAsString:(int)arg1;
- (id)adTypeAsString:(int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)feedTypeAsString:(int)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)newsProductTypeAsString:(int)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)videoAdTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

