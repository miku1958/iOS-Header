//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface NTPBReadingListAddRemove : PBCodable <NSCopying>
{
    long long _backendArticleVersionInt64;
    long long _personalizationTreatmentId;
    long long _previousArticlePublisherArticleVersion;
    long long _publisherArticleVersionInt64;
    int _addRemoveReadingListLocation;
    NSString *_articleId;
    int _articleType;
    int _backendArticleVersion;
    NSString *_campaignId;
    NSString *_campaignType;
    int _characterCount;
    NSString *_creativeId;
    int _feedType;
    NSMutableArray *_fractionalCohortMemberships;
    NSString *_groupFeedId;
    int _groupType;
    NSString *_iadNativeAd;
    NSString *_iadNativeCampaign;
    NSString *_iadNativeCampaignAd;
    NSString *_iadNativeLine;
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
    NSString *_sectionHeadlineId;
    NSString *_sourceChannelId;
    NSString *_surfacedByChannelId;
    NSString *_surfacedBySectionId;
    NSString *_surfacedByTopicId;
    int _topStoryType;
    int _userAction;
    BOOL _fromNextArticleAffordanceTap;
    BOOL _isBreakingNewsArticle;
    BOOL _isCoverArticle;
    BOOL _isDigitalReplicaAd;
    BOOL _isFreeArticle;
    BOOL _isGroupedArticle;
    BOOL _isNativeAd;
    BOOL _isNotificationArticle;
    BOOL _isPaidSubscriberToSourceChannel;
    BOOL _isSearchResultArticle;
    BOOL _isTopStoryArticle;
    BOOL _isUserSubscribedToFeed;
    struct {
        unsigned int backendArticleVersionInt64:1;
        unsigned int personalizationTreatmentId:1;
        unsigned int previousArticlePublisherArticleVersion:1;
        unsigned int publisherArticleVersionInt64:1;
        unsigned int addRemoveReadingListLocation:1;
        unsigned int articleType:1;
        unsigned int backendArticleVersion:1;
        unsigned int characterCount:1;
        unsigned int feedType:1;
        unsigned int groupType:1;
        unsigned int nextArticleAffordanceType:1;
        unsigned int publisherArticleVersion:1;
        unsigned int topStoryType:1;
        unsigned int userAction:1;
        unsigned int fromNextArticleAffordanceTap:1;
        unsigned int isBreakingNewsArticle:1;
        unsigned int isCoverArticle:1;
        unsigned int isDigitalReplicaAd:1;
        unsigned int isFreeArticle:1;
        unsigned int isGroupedArticle:1;
        unsigned int isNativeAd:1;
        unsigned int isNotificationArticle:1;
        unsigned int isPaidSubscriberToSourceChannel:1;
        unsigned int isSearchResultArticle:1;
        unsigned int isTopStoryArticle:1;
        unsigned int isUserSubscribedToFeed:1;
    } _has;
}

@property (nonatomic) int addRemoveReadingListLocation; // @synthesize addRemoveReadingListLocation=_addRemoveReadingListLocation;
@property (strong, nonatomic) NSString *articleId; // @synthesize articleId=_articleId;
@property (nonatomic) int articleType; // @synthesize articleType=_articleType;
@property (nonatomic) int backendArticleVersion; // @synthesize backendArticleVersion=_backendArticleVersion;
@property (nonatomic) long long backendArticleVersionInt64; // @synthesize backendArticleVersionInt64=_backendArticleVersionInt64;
@property (strong, nonatomic) NSString *campaignId; // @synthesize campaignId=_campaignId;
@property (strong, nonatomic) NSString *campaignType; // @synthesize campaignType=_campaignType;
@property (nonatomic) int characterCount; // @synthesize characterCount=_characterCount;
@property (strong, nonatomic) NSString *creativeId; // @synthesize creativeId=_creativeId;
@property (nonatomic) int feedType; // @synthesize feedType=_feedType;
@property (strong, nonatomic) NSMutableArray *fractionalCohortMemberships; // @synthesize fractionalCohortMemberships=_fractionalCohortMemberships;
@property (nonatomic) BOOL fromNextArticleAffordanceTap; // @synthesize fromNextArticleAffordanceTap=_fromNextArticleAffordanceTap;
@property (strong, nonatomic) NSString *groupFeedId; // @synthesize groupFeedId=_groupFeedId;
@property (nonatomic) int groupType; // @synthesize groupType=_groupType;
@property (nonatomic) BOOL hasAddRemoveReadingListLocation;
@property (readonly, nonatomic) BOOL hasArticleId;
@property (nonatomic) BOOL hasArticleType;
@property (nonatomic) BOOL hasBackendArticleVersion;
@property (nonatomic) BOOL hasBackendArticleVersionInt64;
@property (readonly, nonatomic) BOOL hasCampaignId;
@property (readonly, nonatomic) BOOL hasCampaignType;
@property (nonatomic) BOOL hasCharacterCount;
@property (readonly, nonatomic) BOOL hasCreativeId;
@property (nonatomic) BOOL hasFeedType;
@property (nonatomic) BOOL hasFromNextArticleAffordanceTap;
@property (readonly, nonatomic) BOOL hasGroupFeedId;
@property (nonatomic) BOOL hasGroupType;
@property (readonly, nonatomic) BOOL hasIadNativeAd;
@property (readonly, nonatomic) BOOL hasIadNativeCampaign;
@property (readonly, nonatomic) BOOL hasIadNativeCampaignAd;
@property (readonly, nonatomic) BOOL hasIadNativeLine;
@property (nonatomic) BOOL hasIsBreakingNewsArticle;
@property (nonatomic) BOOL hasIsCoverArticle;
@property (nonatomic) BOOL hasIsDigitalReplicaAd;
@property (nonatomic) BOOL hasIsFreeArticle;
@property (nonatomic) BOOL hasIsGroupedArticle;
@property (nonatomic) BOOL hasIsNativeAd;
@property (nonatomic) BOOL hasIsNotificationArticle;
@property (nonatomic) BOOL hasIsPaidSubscriberToSourceChannel;
@property (nonatomic) BOOL hasIsSearchResultArticle;
@property (nonatomic) BOOL hasIsTopStoryArticle;
@property (nonatomic) BOOL hasIsUserSubscribedToFeed;
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
@property (readonly, nonatomic) BOOL hasSectionHeadlineId;
@property (readonly, nonatomic) BOOL hasSourceChannelId;
@property (readonly, nonatomic) BOOL hasSurfacedByChannelId;
@property (readonly, nonatomic) BOOL hasSurfacedBySectionId;
@property (readonly, nonatomic) BOOL hasSurfacedByTopicId;
@property (nonatomic) BOOL hasTopStoryType;
@property (nonatomic) BOOL hasUserAction;
@property (strong, nonatomic) NSString *iadNativeAd; // @synthesize iadNativeAd=_iadNativeAd;
@property (strong, nonatomic) NSString *iadNativeCampaign; // @synthesize iadNativeCampaign=_iadNativeCampaign;
@property (strong, nonatomic) NSString *iadNativeCampaignAd; // @synthesize iadNativeCampaignAd=_iadNativeCampaignAd;
@property (strong, nonatomic) NSString *iadNativeLine; // @synthesize iadNativeLine=_iadNativeLine;
@property (nonatomic) BOOL isBreakingNewsArticle; // @synthesize isBreakingNewsArticle=_isBreakingNewsArticle;
@property (nonatomic) BOOL isCoverArticle; // @synthesize isCoverArticle=_isCoverArticle;
@property (nonatomic) BOOL isDigitalReplicaAd; // @synthesize isDigitalReplicaAd=_isDigitalReplicaAd;
@property (nonatomic) BOOL isFreeArticle; // @synthesize isFreeArticle=_isFreeArticle;
@property (nonatomic) BOOL isGroupedArticle; // @synthesize isGroupedArticle=_isGroupedArticle;
@property (nonatomic) BOOL isNativeAd; // @synthesize isNativeAd=_isNativeAd;
@property (nonatomic) BOOL isNotificationArticle; // @synthesize isNotificationArticle=_isNotificationArticle;
@property (nonatomic) BOOL isPaidSubscriberToSourceChannel; // @synthesize isPaidSubscriberToSourceChannel=_isPaidSubscriberToSourceChannel;
@property (nonatomic) BOOL isSearchResultArticle; // @synthesize isSearchResultArticle=_isSearchResultArticle;
@property (nonatomic) BOOL isTopStoryArticle; // @synthesize isTopStoryArticle=_isTopStoryArticle;
@property (nonatomic) BOOL isUserSubscribedToFeed; // @synthesize isUserSubscribedToFeed=_isUserSubscribedToFeed;
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
@property (strong, nonatomic) NSString *sectionHeadlineId; // @synthesize sectionHeadlineId=_sectionHeadlineId;
@property (strong, nonatomic) NSString *sourceChannelId; // @synthesize sourceChannelId=_sourceChannelId;
@property (strong, nonatomic) NSString *surfacedByChannelId; // @synthesize surfacedByChannelId=_surfacedByChannelId;
@property (strong, nonatomic) NSString *surfacedBySectionId; // @synthesize surfacedBySectionId=_surfacedBySectionId;
@property (strong, nonatomic) NSString *surfacedByTopicId; // @synthesize surfacedByTopicId=_surfacedByTopicId;
@property (nonatomic) int topStoryType; // @synthesize topStoryType=_topStoryType;
@property (nonatomic) int userAction; // @synthesize userAction=_userAction;

+ (Class)fractionalCohortMembershipType;
+ (Class)namedEntitiesType;
- (void).cxx_destruct;
- (int)StringAsArticleType:(id)arg1;
- (int)StringAsFeedType:(id)arg1;
- (int)StringAsGroupType:(id)arg1;
- (int)StringAsNextArticleAffordanceType:(id)arg1;
- (int)StringAsTopStoryType:(id)arg1;
- (void)addFractionalCohortMembership:(id)arg1;
- (void)addNamedEntities:(id)arg1;
- (id)articleTypeAsString:(int)arg1;
- (void)clearFractionalCohortMemberships;
- (void)clearNamedEntities;
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

