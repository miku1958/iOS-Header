//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString, NTPBAlternateHeadline, NTPBWidgetEngagement;

@interface NTPBMediaEngage : PBCodable <NSCopying>
{
    long long _backendArticleVersionInt64;
    long long _mediaDuration;
    long long _mediaPausePosition;
    long long _mediaResumePosition;
    long long _mediaResumeTimePlayed;
    long long _mediaTimePlayed;
    long long _personalizationTreatmentId;
    long long _previousArticlePublisherArticleVersion;
    long long _publisherArticleVersionInt64;
    NTPBAlternateHeadline *_alternateHeadline;
    NSString *_articleId;
    NSData *_articleSessionId;
    int _articleType;
    NSData *_articleViewingSessionId;
    int _backendArticleVersion;
    int _feedCellSection;
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
    int _loadFailureReason;
    NSString *_mediaId;
    int _mediaPauseLocation;
    int _mediaPauseMethod;
    int _mediaPlayLocation;
    int _mediaPlayMethod;
    int _mediaResumeMethod;
    int _mediaType;
    NSString *_metadata;
    int _muteButtonState;
    NSMutableArray *_namedEntities;
    NSString *_nativeCampaignData;
    float _osVolumeLevel;
    NSString *_previousArticleId;
    NSString *_previousArticleVersion;
    int _publisherArticleVersion;
    int _rankInVideoPlaylist;
    NSString *_referencedArticleId;
    NSString *_sectionHeadlineId;
    NSString *_sourceChannelId;
    NSString *_surfacedByChannelId;
    NSString *_surfacedBySectionId;
    NSString *_surfacedByTopicId;
    int _topStoryType;
    int _userAction;
    int _videoType;
    NTPBWidgetEngagement *_widgetEngagement;
    BOOL _adSupportedChannel;
    BOOL _isBreakingNewsArticle;
    BOOL _isDigitalReplicaAd;
    BOOL _isNativeAd;
    BOOL _isTopStoryArticle;
    BOOL _isUserSubscribedToFeed;
    BOOL _isVideoInFeed;
    struct {
        unsigned int backendArticleVersionInt64:1;
        unsigned int mediaDuration:1;
        unsigned int mediaPausePosition:1;
        unsigned int mediaResumePosition:1;
        unsigned int mediaResumeTimePlayed:1;
        unsigned int mediaTimePlayed:1;
        unsigned int personalizationTreatmentId:1;
        unsigned int previousArticlePublisherArticleVersion:1;
        unsigned int publisherArticleVersionInt64:1;
        unsigned int articleType:1;
        unsigned int backendArticleVersion:1;
        unsigned int feedCellSection:1;
        unsigned int feedType:1;
        unsigned int groupType:1;
        unsigned int loadFailureReason:1;
        unsigned int mediaPauseLocation:1;
        unsigned int mediaPauseMethod:1;
        unsigned int mediaPlayLocation:1;
        unsigned int mediaPlayMethod:1;
        unsigned int mediaResumeMethod:1;
        unsigned int mediaType:1;
        unsigned int muteButtonState:1;
        unsigned int osVolumeLevel:1;
        unsigned int publisherArticleVersion:1;
        unsigned int rankInVideoPlaylist:1;
        unsigned int topStoryType:1;
        unsigned int userAction:1;
        unsigned int videoType:1;
        unsigned int adSupportedChannel:1;
        unsigned int isBreakingNewsArticle:1;
        unsigned int isDigitalReplicaAd:1;
        unsigned int isNativeAd:1;
        unsigned int isTopStoryArticle:1;
        unsigned int isUserSubscribedToFeed:1;
        unsigned int isVideoInFeed:1;
    } _has;
}

@property (nonatomic) BOOL adSupportedChannel; // @synthesize adSupportedChannel=_adSupportedChannel;
@property (strong, nonatomic) NTPBAlternateHeadline *alternateHeadline; // @synthesize alternateHeadline=_alternateHeadline;
@property (strong, nonatomic) NSString *articleId; // @synthesize articleId=_articleId;
@property (strong, nonatomic) NSData *articleSessionId; // @synthesize articleSessionId=_articleSessionId;
@property (nonatomic) int articleType; // @synthesize articleType=_articleType;
@property (strong, nonatomic) NSData *articleViewingSessionId; // @synthesize articleViewingSessionId=_articleViewingSessionId;
@property (nonatomic) int backendArticleVersion; // @synthesize backendArticleVersion=_backendArticleVersion;
@property (nonatomic) long long backendArticleVersionInt64; // @synthesize backendArticleVersionInt64=_backendArticleVersionInt64;
@property (nonatomic) int feedCellSection; // @synthesize feedCellSection=_feedCellSection;
@property (strong, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
@property (nonatomic) int feedType; // @synthesize feedType=_feedType;
@property (strong, nonatomic) NSData *feedViewExposureId; // @synthesize feedViewExposureId=_feedViewExposureId;
@property (strong, nonatomic) NSMutableArray *fractionalCohortMemberships; // @synthesize fractionalCohortMemberships=_fractionalCohortMemberships;
@property (strong, nonatomic) NSString *groupFeedId; // @synthesize groupFeedId=_groupFeedId;
@property (nonatomic) int groupType; // @synthesize groupType=_groupType;
@property (strong, nonatomic) NSData *groupViewExposureId; // @synthesize groupViewExposureId=_groupViewExposureId;
@property (nonatomic) BOOL hasAdSupportedChannel;
@property (readonly, nonatomic) BOOL hasAlternateHeadline;
@property (readonly, nonatomic) BOOL hasArticleId;
@property (readonly, nonatomic) BOOL hasArticleSessionId;
@property (nonatomic) BOOL hasArticleType;
@property (readonly, nonatomic) BOOL hasArticleViewingSessionId;
@property (nonatomic) BOOL hasBackendArticleVersion;
@property (nonatomic) BOOL hasBackendArticleVersionInt64;
@property (nonatomic) BOOL hasFeedCellSection;
@property (readonly, nonatomic) BOOL hasFeedId;
@property (nonatomic) BOOL hasFeedType;
@property (readonly, nonatomic) BOOL hasFeedViewExposureId;
@property (readonly, nonatomic) BOOL hasGroupFeedId;
@property (nonatomic) BOOL hasGroupType;
@property (readonly, nonatomic) BOOL hasGroupViewExposureId;
@property (readonly, nonatomic) BOOL hasIadNativeAd;
@property (readonly, nonatomic) BOOL hasIadNativeCampaign;
@property (readonly, nonatomic) BOOL hasIadNativeCampaignAd;
@property (readonly, nonatomic) BOOL hasIadNativeLine;
@property (nonatomic) BOOL hasIsBreakingNewsArticle;
@property (nonatomic) BOOL hasIsDigitalReplicaAd;
@property (nonatomic) BOOL hasIsNativeAd;
@property (nonatomic) BOOL hasIsTopStoryArticle;
@property (nonatomic) BOOL hasIsUserSubscribedToFeed;
@property (nonatomic) BOOL hasIsVideoInFeed;
@property (nonatomic) BOOL hasLoadFailureReason;
@property (nonatomic) BOOL hasMediaDuration;
@property (readonly, nonatomic) BOOL hasMediaId;
@property (nonatomic) BOOL hasMediaPauseLocation;
@property (nonatomic) BOOL hasMediaPauseMethod;
@property (nonatomic) BOOL hasMediaPausePosition;
@property (nonatomic) BOOL hasMediaPlayLocation;
@property (nonatomic) BOOL hasMediaPlayMethod;
@property (nonatomic) BOOL hasMediaResumeMethod;
@property (nonatomic) BOOL hasMediaResumePosition;
@property (nonatomic) BOOL hasMediaResumeTimePlayed;
@property (nonatomic) BOOL hasMediaTimePlayed;
@property (nonatomic) BOOL hasMediaType;
@property (readonly, nonatomic) BOOL hasMetadata;
@property (nonatomic) BOOL hasMuteButtonState;
@property (readonly, nonatomic) BOOL hasNativeCampaignData;
@property (nonatomic) BOOL hasOsVolumeLevel;
@property (nonatomic) BOOL hasPersonalizationTreatmentId;
@property (readonly, nonatomic) BOOL hasPreviousArticleId;
@property (nonatomic) BOOL hasPreviousArticlePublisherArticleVersion;
@property (readonly, nonatomic) BOOL hasPreviousArticleVersion;
@property (nonatomic) BOOL hasPublisherArticleVersion;
@property (nonatomic) BOOL hasPublisherArticleVersionInt64;
@property (nonatomic) BOOL hasRankInVideoPlaylist;
@property (readonly, nonatomic) BOOL hasReferencedArticleId;
@property (readonly, nonatomic) BOOL hasSectionHeadlineId;
@property (readonly, nonatomic) BOOL hasSourceChannelId;
@property (readonly, nonatomic) BOOL hasSurfacedByChannelId;
@property (readonly, nonatomic) BOOL hasSurfacedBySectionId;
@property (readonly, nonatomic) BOOL hasSurfacedByTopicId;
@property (nonatomic) BOOL hasTopStoryType;
@property (nonatomic) BOOL hasUserAction;
@property (nonatomic) BOOL hasVideoType;
@property (readonly, nonatomic) BOOL hasWidgetEngagement;
@property (strong, nonatomic) NSString *iadNativeAd; // @synthesize iadNativeAd=_iadNativeAd;
@property (strong, nonatomic) NSString *iadNativeCampaign; // @synthesize iadNativeCampaign=_iadNativeCampaign;
@property (strong, nonatomic) NSString *iadNativeCampaignAd; // @synthesize iadNativeCampaignAd=_iadNativeCampaignAd;
@property (strong, nonatomic) NSString *iadNativeLine; // @synthesize iadNativeLine=_iadNativeLine;
@property (nonatomic) BOOL isBreakingNewsArticle; // @synthesize isBreakingNewsArticle=_isBreakingNewsArticle;
@property (nonatomic) BOOL isDigitalReplicaAd; // @synthesize isDigitalReplicaAd=_isDigitalReplicaAd;
@property (nonatomic) BOOL isNativeAd; // @synthesize isNativeAd=_isNativeAd;
@property (nonatomic) BOOL isTopStoryArticle; // @synthesize isTopStoryArticle=_isTopStoryArticle;
@property (nonatomic) BOOL isUserSubscribedToFeed; // @synthesize isUserSubscribedToFeed=_isUserSubscribedToFeed;
@property (nonatomic) BOOL isVideoInFeed; // @synthesize isVideoInFeed=_isVideoInFeed;
@property (nonatomic) int loadFailureReason; // @synthesize loadFailureReason=_loadFailureReason;
@property (nonatomic) long long mediaDuration; // @synthesize mediaDuration=_mediaDuration;
@property (strong, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
@property (nonatomic) int mediaPauseLocation; // @synthesize mediaPauseLocation=_mediaPauseLocation;
@property (nonatomic) int mediaPauseMethod; // @synthesize mediaPauseMethod=_mediaPauseMethod;
@property (nonatomic) long long mediaPausePosition; // @synthesize mediaPausePosition=_mediaPausePosition;
@property (nonatomic) int mediaPlayLocation; // @synthesize mediaPlayLocation=_mediaPlayLocation;
@property (nonatomic) int mediaPlayMethod; // @synthesize mediaPlayMethod=_mediaPlayMethod;
@property (nonatomic) int mediaResumeMethod; // @synthesize mediaResumeMethod=_mediaResumeMethod;
@property (nonatomic) long long mediaResumePosition; // @synthesize mediaResumePosition=_mediaResumePosition;
@property (nonatomic) long long mediaResumeTimePlayed; // @synthesize mediaResumeTimePlayed=_mediaResumeTimePlayed;
@property (nonatomic) long long mediaTimePlayed; // @synthesize mediaTimePlayed=_mediaTimePlayed;
@property (nonatomic) int mediaType; // @synthesize mediaType=_mediaType;
@property (strong, nonatomic) NSString *metadata; // @synthesize metadata=_metadata;
@property (nonatomic) int muteButtonState; // @synthesize muteButtonState=_muteButtonState;
@property (strong, nonatomic) NSMutableArray *namedEntities; // @synthesize namedEntities=_namedEntities;
@property (strong, nonatomic) NSString *nativeCampaignData; // @synthesize nativeCampaignData=_nativeCampaignData;
@property (nonatomic) float osVolumeLevel; // @synthesize osVolumeLevel=_osVolumeLevel;
@property (nonatomic) long long personalizationTreatmentId; // @synthesize personalizationTreatmentId=_personalizationTreatmentId;
@property (strong, nonatomic) NSString *previousArticleId; // @synthesize previousArticleId=_previousArticleId;
@property (nonatomic) long long previousArticlePublisherArticleVersion; // @synthesize previousArticlePublisherArticleVersion=_previousArticlePublisherArticleVersion;
@property (strong, nonatomic) NSString *previousArticleVersion; // @synthesize previousArticleVersion=_previousArticleVersion;
@property (nonatomic) int publisherArticleVersion; // @synthesize publisherArticleVersion=_publisherArticleVersion;
@property (nonatomic) long long publisherArticleVersionInt64; // @synthesize publisherArticleVersionInt64=_publisherArticleVersionInt64;
@property (nonatomic) int rankInVideoPlaylist; // @synthesize rankInVideoPlaylist=_rankInVideoPlaylist;
@property (strong, nonatomic) NSString *referencedArticleId; // @synthesize referencedArticleId=_referencedArticleId;
@property (strong, nonatomic) NSString *sectionHeadlineId; // @synthesize sectionHeadlineId=_sectionHeadlineId;
@property (strong, nonatomic) NSString *sourceChannelId; // @synthesize sourceChannelId=_sourceChannelId;
@property (strong, nonatomic) NSString *surfacedByChannelId; // @synthesize surfacedByChannelId=_surfacedByChannelId;
@property (strong, nonatomic) NSString *surfacedBySectionId; // @synthesize surfacedBySectionId=_surfacedBySectionId;
@property (strong, nonatomic) NSString *surfacedByTopicId; // @synthesize surfacedByTopicId=_surfacedByTopicId;
@property (nonatomic) int topStoryType; // @synthesize topStoryType=_topStoryType;
@property (nonatomic) int userAction; // @synthesize userAction=_userAction;
@property (nonatomic) int videoType; // @synthesize videoType=_videoType;
@property (strong, nonatomic) NTPBWidgetEngagement *widgetEngagement; // @synthesize widgetEngagement=_widgetEngagement;

+ (Class)fractionalCohortMembershipType;
+ (Class)namedEntitiesType;
- (void).cxx_destruct;
- (int)StringAsArticleType:(id)arg1;
- (int)StringAsFeedCellSection:(id)arg1;
- (int)StringAsFeedType:(id)arg1;
- (int)StringAsGroupType:(id)arg1;
- (int)StringAsMediaType:(id)arg1;
- (int)StringAsTopStoryType:(id)arg1;
- (int)StringAsVideoType:(id)arg1;
- (void)addFractionalCohortMembership:(id)arg1;
- (void)addNamedEntities:(id)arg1;
- (id)articleTypeAsString:(int)arg1;
- (void)clearFractionalCohortMemberships;
- (void)clearNamedEntities;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)feedCellSectionAsString:(int)arg1;
- (id)feedTypeAsString:(int)arg1;
- (id)fractionalCohortMembershipAtIndex:(unsigned long long)arg1;
- (unsigned long long)fractionalCohortMembershipsCount;
- (id)groupTypeAsString:(int)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)mediaTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (id)namedEntitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)namedEntitiesCount;
- (BOOL)readFrom:(id)arg1;
- (id)topStoryTypeAsString:(int)arg1;
- (id)videoTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

