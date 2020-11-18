//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray, NSString, NTPBCategory, NTPBCoverArticlesConfig, NTPBTopStoriesConfig;

@interface NTPBLanguageConfig : PBCodable <NSCopying>
{
    NSString *_appleEditorialChannelId;
    NSString *_breakingNewsChannelId;
    NSString *_briefingsTagId;
    NTPBCoverArticlesConfig *_coverArticlesConfig;
    NSString *_editorialGemsSectionId;
    NSString *_exploreArticleId;
    NSString *_featuredStoriesTagId;
    NSString *_forYouConfigId;
    NSString *_hiddenFeedId;
    NSString *_languageTag;
    NSMutableArray *_mediaSharingBlacklistedChannelIds;
    NSMutableArray *_onboardingTagIds;
    NSMutableArray *_preSubscribedFeedIds;
    NSMutableArray *_preSubscribedNotificationsChannelIds;
    NSMutableArray *_recommendedNotificationChannels;
    NTPBCategory *_rootCategory;
    NSString *_savedStoriesTagId;
    NTPBTopStoriesConfig *_topStoriesConfig;
    NSString *_trendingTagId;
    NSString *_widgetSectionConfigId;
}

@property (strong, nonatomic) NSString *appleEditorialChannelId; // @synthesize appleEditorialChannelId=_appleEditorialChannelId;
@property (strong, nonatomic) NSString *breakingNewsChannelId; // @synthesize breakingNewsChannelId=_breakingNewsChannelId;
@property (strong, nonatomic) NSString *briefingsTagId; // @synthesize briefingsTagId=_briefingsTagId;
@property (strong, nonatomic) NTPBCoverArticlesConfig *coverArticlesConfig; // @synthesize coverArticlesConfig=_coverArticlesConfig;
@property (strong, nonatomic) NSString *editorialGemsSectionId; // @synthesize editorialGemsSectionId=_editorialGemsSectionId;
@property (strong, nonatomic) NSString *exploreArticleId; // @synthesize exploreArticleId=_exploreArticleId;
@property (strong, nonatomic) NSString *featuredStoriesTagId; // @synthesize featuredStoriesTagId=_featuredStoriesTagId;
@property (strong, nonatomic) NSString *forYouConfigId; // @synthesize forYouConfigId=_forYouConfigId;
@property (readonly, nonatomic) BOOL hasAppleEditorialChannelId;
@property (readonly, nonatomic) BOOL hasBreakingNewsChannelId;
@property (readonly, nonatomic) BOOL hasBriefingsTagId;
@property (readonly, nonatomic) BOOL hasCoverArticlesConfig;
@property (readonly, nonatomic) BOOL hasEditorialGemsSectionId;
@property (readonly, nonatomic) BOOL hasExploreArticleId;
@property (readonly, nonatomic) BOOL hasFeaturedStoriesTagId;
@property (readonly, nonatomic) BOOL hasForYouConfigId;
@property (readonly, nonatomic) BOOL hasHiddenFeedId;
@property (readonly, nonatomic) BOOL hasLanguageTag;
@property (readonly, nonatomic) BOOL hasRootCategory;
@property (readonly, nonatomic) BOOL hasSavedStoriesTagId;
@property (readonly, nonatomic) BOOL hasTopStoriesConfig;
@property (readonly, nonatomic) BOOL hasTrendingTagId;
@property (readonly, nonatomic) BOOL hasWidgetSectionConfigId;
@property (strong, nonatomic) NSString *hiddenFeedId; // @synthesize hiddenFeedId=_hiddenFeedId;
@property (strong, nonatomic) NSString *languageTag; // @synthesize languageTag=_languageTag;
@property (strong, nonatomic) NSMutableArray *mediaSharingBlacklistedChannelIds; // @synthesize mediaSharingBlacklistedChannelIds=_mediaSharingBlacklistedChannelIds;
@property (strong, nonatomic) NSMutableArray *onboardingTagIds; // @synthesize onboardingTagIds=_onboardingTagIds;
@property (strong, nonatomic) NSMutableArray *preSubscribedFeedIds; // @synthesize preSubscribedFeedIds=_preSubscribedFeedIds;
@property (strong, nonatomic) NSMutableArray *preSubscribedNotificationsChannelIds; // @synthesize preSubscribedNotificationsChannelIds=_preSubscribedNotificationsChannelIds;
@property (strong, nonatomic) NSMutableArray *recommendedNotificationChannels; // @synthesize recommendedNotificationChannels=_recommendedNotificationChannels;
@property (strong, nonatomic) NTPBCategory *rootCategory; // @synthesize rootCategory=_rootCategory;
@property (strong, nonatomic) NSString *savedStoriesTagId; // @synthesize savedStoriesTagId=_savedStoriesTagId;
@property (strong, nonatomic) NTPBTopStoriesConfig *topStoriesConfig; // @synthesize topStoriesConfig=_topStoriesConfig;
@property (strong, nonatomic) NSString *trendingTagId; // @synthesize trendingTagId=_trendingTagId;
@property (strong, nonatomic) NSString *widgetSectionConfigId; // @synthesize widgetSectionConfigId=_widgetSectionConfigId;

+ (Class)mediaSharingBlacklistedChannelIdsType;
+ (Class)onboardingTagIdsType;
+ (Class)preSubscribedFeedIdsType;
+ (Class)preSubscribedNotificationsChannelIdsType;
+ (Class)recommendedNotificationChannelsType;
- (void).cxx_destruct;
- (void)addMediaSharingBlacklistedChannelIds:(id)arg1;
- (void)addOnboardingTagIds:(id)arg1;
- (void)addPreSubscribedFeedIds:(id)arg1;
- (void)addPreSubscribedNotificationsChannelIds:(id)arg1;
- (void)addRecommendedNotificationChannels:(id)arg1;
- (void)clearMediaSharingBlacklistedChannelIds;
- (void)clearOnboardingTagIds;
- (void)clearPreSubscribedFeedIds;
- (void)clearPreSubscribedNotificationsChannelIds;
- (void)clearRecommendedNotificationChannels;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)mediaSharingBlacklistedChannelIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)mediaSharingBlacklistedChannelIdsCount;
- (void)mergeFrom:(id)arg1;
- (id)onboardingTagIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)onboardingTagIdsCount;
- (id)preSubscribedFeedIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)preSubscribedFeedIdsCount;
- (id)preSubscribedNotificationsChannelIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)preSubscribedNotificationsChannelIdsCount;
- (BOOL)readFrom:(id)arg1;
- (id)recommendedNotificationChannelsAtIndex:(unsigned long long)arg1;
- (unsigned long long)recommendedNotificationChannelsCount;
- (void)writeTo:(id)arg1;

@end

