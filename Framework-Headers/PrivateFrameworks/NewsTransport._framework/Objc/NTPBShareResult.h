//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString, NTPBChannelData, NTPBIssueData, NTPBIssueExposureData, NTPBWidgetEngagement;

@interface NTPBShareResult : PBCodable <NSCopying>
{
    long long _backendArticleVersionInt64;
    long long _personalizationTreatmentId;
    long long _previousArticlePublisherArticleVersion;
    long long _publisherArticleVersionInt64;
    NSData *_articleSessionId;
    int _articleType;
    NSData *_articleViewingSessionId;
    int _backendArticleVersion;
    NSString *_campaignId;
    NSString *_campaignType;
    NTPBChannelData *_channelData;
    int _characterCount;
    NSString *_contentId;
    int _contentType;
    NSString *_creativeId;
    NSString *_externalWeblinkUrl;
    NSString *_feedId;
    int _feedType;
    NSData *_feedViewExposureId;
    NSMutableArray *_fractionalCohortMemberships;
    NSString *_groupFeedId;
    int _groupType;
    NSData *_groupViewExposureId;
    NSString *_iadNativeAd;
    NSString *_iadNativeCampaign;
    NSString *_iadNativeCampaignAd;
    NSString *_iadNativeLine;
    NSString *_iosActivityType;
    NTPBIssueData *_issueData;
    NTPBIssueExposureData *_issueExposureData;
    NSString *_language;
    NSMutableArray *_namedEntities;
    NSString *_nativeCampaignData;
    int _nextArticleAffordanceType;
    NSString *_nextArticleAffordanceTypeFeedId;
    NSString *_notificationId;
    NSString *_previousArticleId;
    NSString *_previousArticleVersion;
    int _publisherArticleVersion;
    NSString *_referencedArticleId;
    int _resultType;
    NSString *_sectionHeadlineId;
    int _shareLocation;
    int _shareMethod;
    NSString *_sourceChannelId;
    NSString *_surfacedByChannelId;
    NSString *_surfacedBySectionId;
    NSString *_surfacedByTopicId;
    int _topStoryType;
    NTPBWidgetEngagement *_widgetEngagement;
    BOOL _fromNextArticleAffordanceTap;
    BOOL _isBreakingNewsArticle;
    BOOL _isCoverArticle;
    BOOL _isDigitalReplicaAd;
    BOOL _isFreeArticle;
    BOOL _isGroupedArticle;
    BOOL _isNativeAd;
    BOOL _isNotificationArticle;
    BOOL _isPaidSubscriberToSourceChannel;
    BOOL _isSearchResult;
    BOOL _isTopStoryArticle;
    BOOL _isUserSubscribedToFeed;
    struct {
        unsigned int backendArticleVersionInt64:1;
        unsigned int personalizationTreatmentId:1;
        unsigned int previousArticlePublisherArticleVersion:1;
        unsigned int publisherArticleVersionInt64:1;
        unsigned int articleType:1;
        unsigned int backendArticleVersion:1;
        unsigned int characterCount:1;
        unsigned int contentType:1;
        unsigned int feedType:1;
        unsigned int groupType:1;
        unsigned int nextArticleAffordanceType:1;
        unsigned int publisherArticleVersion:1;
        unsigned int resultType:1;
        unsigned int shareLocation:1;
        unsigned int shareMethod:1;
        unsigned int topStoryType:1;
        unsigned int fromNextArticleAffordanceTap:1;
        unsigned int isBreakingNewsArticle:1;
        unsigned int isCoverArticle:1;
        unsigned int isDigitalReplicaAd:1;
        unsigned int isFreeArticle:1;
        unsigned int isGroupedArticle:1;
        unsigned int isNativeAd:1;
        unsigned int isNotificationArticle:1;
        unsigned int isPaidSubscriberToSourceChannel:1;
        unsigned int isSearchResult:1;
        unsigned int isTopStoryArticle:1;
        unsigned int isUserSubscribedToFeed:1;
    } _has;
}

@property (strong, nonatomic) NSData *articleSessionId; // @synthesize articleSessionId=_articleSessionId;
@property (nonatomic) int articleType; // @synthesize articleType=_articleType;
@property (strong, nonatomic) NSData *articleViewingSessionId; // @synthesize articleViewingSessionId=_articleViewingSessionId;
@property (nonatomic) int backendArticleVersion; // @synthesize backendArticleVersion=_backendArticleVersion;
@property (nonatomic) long long backendArticleVersionInt64; // @synthesize backendArticleVersionInt64=_backendArticleVersionInt64;
@property (strong, nonatomic) NSString *campaignId; // @synthesize campaignId=_campaignId;
@property (strong, nonatomic) NSString *campaignType; // @synthesize campaignType=_campaignType;
@property (strong, nonatomic) NTPBChannelData *channelData; // @synthesize channelData=_channelData;
@property (nonatomic) int characterCount; // @synthesize characterCount=_characterCount;
@property (strong, nonatomic) NSString *contentId; // @synthesize contentId=_contentId;
@property (nonatomic) int contentType; // @synthesize contentType=_contentType;
@property (strong, nonatomic) NSString *creativeId; // @synthesize creativeId=_creativeId;
@property (strong, nonatomic) NSString *externalWeblinkUrl; // @synthesize externalWeblinkUrl=_externalWeblinkUrl;
@property (strong, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
@property (nonatomic) int feedType; // @synthesize feedType=_feedType;
@property (strong, nonatomic) NSData *feedViewExposureId; // @synthesize feedViewExposureId=_feedViewExposureId;
@property (strong, nonatomic) NSMutableArray *fractionalCohortMemberships; // @synthesize fractionalCohortMemberships=_fractionalCohortMemberships;
@property (nonatomic) BOOL fromNextArticleAffordanceTap; // @synthesize fromNextArticleAffordanceTap=_fromNextArticleAffordanceTap;
@property (strong, nonatomic) NSString *groupFeedId; // @synthesize groupFeedId=_groupFeedId;
@property (nonatomic) int groupType; // @synthesize groupType=_groupType;
@property (strong, nonatomic) NSData *groupViewExposureId; // @synthesize groupViewExposureId=_groupViewExposureId;
@property (readonly, nonatomic) BOOL hasArticleSessionId;
@property (nonatomic) BOOL hasArticleType;
@property (readonly, nonatomic) BOOL hasArticleViewingSessionId;
@property (nonatomic) BOOL hasBackendArticleVersion;
@property (nonatomic) BOOL hasBackendArticleVersionInt64;
@property (readonly, nonatomic) BOOL hasCampaignId;
@property (readonly, nonatomic) BOOL hasCampaignType;
@property (readonly, nonatomic) BOOL hasChannelData;
@property (nonatomic) BOOL hasCharacterCount;
@property (readonly, nonatomic) BOOL hasContentId;
@property (nonatomic) BOOL hasContentType;
@property (readonly, nonatomic) BOOL hasCreativeId;
@property (readonly, nonatomic) BOOL hasExternalWeblinkUrl;
@property (readonly, nonatomic) BOOL hasFeedId;
@property (nonatomic) BOOL hasFeedType;
@property (readonly, nonatomic) BOOL hasFeedViewExposureId;
@property (nonatomic) BOOL hasFromNextArticleAffordanceTap;
@property (readonly, nonatomic) BOOL hasGroupFeedId;
@property (nonatomic) BOOL hasGroupType;
@property (readonly, nonatomic) BOOL hasGroupViewExposureId;
@property (readonly, nonatomic) BOOL hasIadNativeAd;
@property (readonly, nonatomic) BOOL hasIadNativeCampaign;
@property (readonly, nonatomic) BOOL hasIadNativeCampaignAd;
@property (readonly, nonatomic) BOOL hasIadNativeLine;
@property (readonly, nonatomic) BOOL hasIosActivityType;
@property (nonatomic) BOOL hasIsBreakingNewsArticle;
@property (nonatomic) BOOL hasIsCoverArticle;
@property (nonatomic) BOOL hasIsDigitalReplicaAd;
@property (nonatomic) BOOL hasIsFreeArticle;
@property (nonatomic) BOOL hasIsGroupedArticle;
@property (nonatomic) BOOL hasIsNativeAd;
@property (nonatomic) BOOL hasIsNotificationArticle;
@property (nonatomic) BOOL hasIsPaidSubscriberToSourceChannel;
@property (nonatomic) BOOL hasIsSearchResult;
@property (nonatomic) BOOL hasIsTopStoryArticle;
@property (nonatomic) BOOL hasIsUserSubscribedToFeed;
@property (readonly, nonatomic) BOOL hasIssueData;
@property (readonly, nonatomic) BOOL hasIssueExposureData;
@property (readonly, nonatomic) BOOL hasLanguage;
@property (readonly, nonatomic) BOOL hasNativeCampaignData;
@property (nonatomic) BOOL hasNextArticleAffordanceType;
@property (readonly, nonatomic) BOOL hasNextArticleAffordanceTypeFeedId;
@property (readonly, nonatomic) BOOL hasNotificationId;
@property (nonatomic) BOOL hasPersonalizationTreatmentId;
@property (readonly, nonatomic) BOOL hasPreviousArticleId;
@property (nonatomic) BOOL hasPreviousArticlePublisherArticleVersion;
@property (readonly, nonatomic) BOOL hasPreviousArticleVersion;
@property (nonatomic) BOOL hasPublisherArticleVersion;
@property (nonatomic) BOOL hasPublisherArticleVersionInt64;
@property (readonly, nonatomic) BOOL hasReferencedArticleId;
@property (nonatomic) BOOL hasResultType;
@property (readonly, nonatomic) BOOL hasSectionHeadlineId;
@property (nonatomic) BOOL hasShareLocation;
@property (nonatomic) BOOL hasShareMethod;
@property (readonly, nonatomic) BOOL hasSourceChannelId;
@property (readonly, nonatomic) BOOL hasSurfacedByChannelId;
@property (readonly, nonatomic) BOOL hasSurfacedBySectionId;
@property (readonly, nonatomic) BOOL hasSurfacedByTopicId;
@property (nonatomic) BOOL hasTopStoryType;
@property (readonly, nonatomic) BOOL hasWidgetEngagement;
@property (strong, nonatomic) NSString *iadNativeAd; // @synthesize iadNativeAd=_iadNativeAd;
@property (strong, nonatomic) NSString *iadNativeCampaign; // @synthesize iadNativeCampaign=_iadNativeCampaign;
@property (strong, nonatomic) NSString *iadNativeCampaignAd; // @synthesize iadNativeCampaignAd=_iadNativeCampaignAd;
@property (strong, nonatomic) NSString *iadNativeLine; // @synthesize iadNativeLine=_iadNativeLine;
@property (strong, nonatomic) NSString *iosActivityType; // @synthesize iosActivityType=_iosActivityType;
@property (nonatomic) BOOL isBreakingNewsArticle; // @synthesize isBreakingNewsArticle=_isBreakingNewsArticle;
@property (nonatomic) BOOL isCoverArticle; // @synthesize isCoverArticle=_isCoverArticle;
@property (nonatomic) BOOL isDigitalReplicaAd; // @synthesize isDigitalReplicaAd=_isDigitalReplicaAd;
@property (nonatomic) BOOL isFreeArticle; // @synthesize isFreeArticle=_isFreeArticle;
@property (nonatomic) BOOL isGroupedArticle; // @synthesize isGroupedArticle=_isGroupedArticle;
@property (nonatomic) BOOL isNativeAd; // @synthesize isNativeAd=_isNativeAd;
@property (nonatomic) BOOL isNotificationArticle; // @synthesize isNotificationArticle=_isNotificationArticle;
@property (nonatomic) BOOL isPaidSubscriberToSourceChannel; // @synthesize isPaidSubscriberToSourceChannel=_isPaidSubscriberToSourceChannel;
@property (nonatomic) BOOL isSearchResult; // @synthesize isSearchResult=_isSearchResult;
@property (nonatomic) BOOL isTopStoryArticle; // @synthesize isTopStoryArticle=_isTopStoryArticle;
@property (nonatomic) BOOL isUserSubscribedToFeed; // @synthesize isUserSubscribedToFeed=_isUserSubscribedToFeed;
@property (strong, nonatomic) NTPBIssueData *issueData; // @synthesize issueData=_issueData;
@property (strong, nonatomic) NTPBIssueExposureData *issueExposureData; // @synthesize issueExposureData=_issueExposureData;
@property (strong, nonatomic) NSString *language; // @synthesize language=_language;
@property (strong, nonatomic) NSMutableArray *namedEntities; // @synthesize namedEntities=_namedEntities;
@property (strong, nonatomic) NSString *nativeCampaignData; // @synthesize nativeCampaignData=_nativeCampaignData;
@property (nonatomic) int nextArticleAffordanceType; // @synthesize nextArticleAffordanceType=_nextArticleAffordanceType;
@property (strong, nonatomic) NSString *nextArticleAffordanceTypeFeedId; // @synthesize nextArticleAffordanceTypeFeedId=_nextArticleAffordanceTypeFeedId;
@property (strong, nonatomic) NSString *notificationId; // @synthesize notificationId=_notificationId;
@property (nonatomic) long long personalizationTreatmentId; // @synthesize personalizationTreatmentId=_personalizationTreatmentId;
@property (strong, nonatomic) NSString *previousArticleId; // @synthesize previousArticleId=_previousArticleId;
@property (nonatomic) long long previousArticlePublisherArticleVersion; // @synthesize previousArticlePublisherArticleVersion=_previousArticlePublisherArticleVersion;
@property (strong, nonatomic) NSString *previousArticleVersion; // @synthesize previousArticleVersion=_previousArticleVersion;
@property (nonatomic) int publisherArticleVersion; // @synthesize publisherArticleVersion=_publisherArticleVersion;
@property (nonatomic) long long publisherArticleVersionInt64; // @synthesize publisherArticleVersionInt64=_publisherArticleVersionInt64;
@property (strong, nonatomic) NSString *referencedArticleId; // @synthesize referencedArticleId=_referencedArticleId;
@property (nonatomic) int resultType; // @synthesize resultType=_resultType;
@property (strong, nonatomic) NSString *sectionHeadlineId; // @synthesize sectionHeadlineId=_sectionHeadlineId;
@property (nonatomic) int shareLocation; // @synthesize shareLocation=_shareLocation;
@property (nonatomic) int shareMethod; // @synthesize shareMethod=_shareMethod;
@property (strong, nonatomic) NSString *sourceChannelId; // @synthesize sourceChannelId=_sourceChannelId;
@property (strong, nonatomic) NSString *surfacedByChannelId; // @synthesize surfacedByChannelId=_surfacedByChannelId;
@property (strong, nonatomic) NSString *surfacedBySectionId; // @synthesize surfacedBySectionId=_surfacedBySectionId;
@property (strong, nonatomic) NSString *surfacedByTopicId; // @synthesize surfacedByTopicId=_surfacedByTopicId;
@property (nonatomic) int topStoryType; // @synthesize topStoryType=_topStoryType;
@property (strong, nonatomic) NTPBWidgetEngagement *widgetEngagement; // @synthesize widgetEngagement=_widgetEngagement;

+ (Class)fractionalCohortMembershipType;
+ (Class)namedEntitiesType;
- (void).cxx_destruct;
- (int)StringAsArticleType:(id)arg1;
- (int)StringAsContentType:(id)arg1;
- (int)StringAsFeedType:(id)arg1;
- (int)StringAsGroupType:(id)arg1;
- (int)StringAsNextArticleAffordanceType:(id)arg1;
- (int)StringAsTopStoryType:(id)arg1;
- (void)addFractionalCohortMembership:(id)arg1;
- (void)addNamedEntities:(id)arg1;
- (id)articleTypeAsString:(int)arg1;
- (void)clearFractionalCohortMemberships;
- (void)clearNamedEntities;
- (id)contentTypeAsString:(int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)feedTypeAsString:(int)arg1;
- (id)fractionalCohortMembershipAtIndex:(unsigned long long)arg1;
- (unsigned long long)fractionalCohortMembershipsCount;
- (id)groupTypeAsString:(int)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)namedEntitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)namedEntitiesCount;
- (id)nextArticleAffordanceTypeAsString:(int)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)topStoryTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

