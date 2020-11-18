//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString, NTPBWidgetEngagement;

@interface NTPBMediaView : PBCodable <NSCopying>
{
    long long _backendArticleVersionInt64;
    long long _personalizationTreatmentId;
    long long _previousArticlePublisherArticleVersion;
    long long _publisherArticleVersionInt64;
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
    NSString *_galleryId;
    int _galleryImageCount;
    NSMutableArray *_galleryImageIds;
    int _galleryType;
    NSData *_galleryViewingSessionId;
    NSString *_iadNativeAd;
    NSString *_iadNativeCampaign;
    NSString *_iadNativeCampaignAd;
    NSString *_iadNativeLine;
    NSString *_mediaId;
    int _mediaType;
    NSString *_metadata;
    NSMutableArray *_namedEntities;
    NSString *_previousArticleId;
    NSString *_previousArticleVersion;
    int _publisherArticleVersion;
    NSString *_referencedArticleId;
    NSString *_sectionHeadlineId;
    NSString *_sourceChannelId;
    NSString *_surfacedByChannelId;
    NSString *_surfacedBySectionId;
    NSString *_surfacedByTopicId;
    NTPBWidgetEngagement *_widgetEngagement;
    BOOL _adSupportedChannel;
    BOOL _isDigitalReplicaAd;
    BOOL _isNativeAd;
    BOOL _isUserSubscribedToFeed;
    struct {
        unsigned int backendArticleVersionInt64:1;
        unsigned int personalizationTreatmentId:1;
        unsigned int previousArticlePublisherArticleVersion:1;
        unsigned int publisherArticleVersionInt64:1;
        unsigned int articleType:1;
        unsigned int backendArticleVersion:1;
        unsigned int feedCellSection:1;
        unsigned int feedType:1;
        unsigned int galleryImageCount:1;
        unsigned int galleryType:1;
        unsigned int mediaType:1;
        unsigned int publisherArticleVersion:1;
        unsigned int adSupportedChannel:1;
        unsigned int isDigitalReplicaAd:1;
        unsigned int isNativeAd:1;
        unsigned int isUserSubscribedToFeed:1;
    } _has;
}

@property (nonatomic) BOOL adSupportedChannel; // @synthesize adSupportedChannel=_adSupportedChannel;
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
@property (strong, nonatomic) NSString *galleryId; // @synthesize galleryId=_galleryId;
@property (nonatomic) int galleryImageCount; // @synthesize galleryImageCount=_galleryImageCount;
@property (strong, nonatomic) NSMutableArray *galleryImageIds; // @synthesize galleryImageIds=_galleryImageIds;
@property (nonatomic) int galleryType; // @synthesize galleryType=_galleryType;
@property (strong, nonatomic) NSData *galleryViewingSessionId; // @synthesize galleryViewingSessionId=_galleryViewingSessionId;
@property (nonatomic) BOOL hasAdSupportedChannel;
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
@property (readonly, nonatomic) BOOL hasGalleryId;
@property (nonatomic) BOOL hasGalleryImageCount;
@property (nonatomic) BOOL hasGalleryType;
@property (readonly, nonatomic) BOOL hasGalleryViewingSessionId;
@property (readonly, nonatomic) BOOL hasIadNativeAd;
@property (readonly, nonatomic) BOOL hasIadNativeCampaign;
@property (readonly, nonatomic) BOOL hasIadNativeCampaignAd;
@property (readonly, nonatomic) BOOL hasIadNativeLine;
@property (nonatomic) BOOL hasIsDigitalReplicaAd;
@property (nonatomic) BOOL hasIsNativeAd;
@property (nonatomic) BOOL hasIsUserSubscribedToFeed;
@property (readonly, nonatomic) BOOL hasMediaId;
@property (nonatomic) BOOL hasMediaType;
@property (readonly, nonatomic) BOOL hasMetadata;
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
@property (readonly, nonatomic) BOOL hasWidgetEngagement;
@property (strong, nonatomic) NSString *iadNativeAd; // @synthesize iadNativeAd=_iadNativeAd;
@property (strong, nonatomic) NSString *iadNativeCampaign; // @synthesize iadNativeCampaign=_iadNativeCampaign;
@property (strong, nonatomic) NSString *iadNativeCampaignAd; // @synthesize iadNativeCampaignAd=_iadNativeCampaignAd;
@property (strong, nonatomic) NSString *iadNativeLine; // @synthesize iadNativeLine=_iadNativeLine;
@property (nonatomic) BOOL isDigitalReplicaAd; // @synthesize isDigitalReplicaAd=_isDigitalReplicaAd;
@property (nonatomic) BOOL isNativeAd; // @synthesize isNativeAd=_isNativeAd;
@property (nonatomic) BOOL isUserSubscribedToFeed; // @synthesize isUserSubscribedToFeed=_isUserSubscribedToFeed;
@property (strong, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
@property (nonatomic) int mediaType; // @synthesize mediaType=_mediaType;
@property (strong, nonatomic) NSString *metadata; // @synthesize metadata=_metadata;
@property (strong, nonatomic) NSMutableArray *namedEntities; // @synthesize namedEntities=_namedEntities;
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
@property (strong, nonatomic) NTPBWidgetEngagement *widgetEngagement; // @synthesize widgetEngagement=_widgetEngagement;

+ (Class)fractionalCohortMembershipType;
+ (Class)galleryImageIdsType;
+ (Class)namedEntitiesType;
- (void).cxx_destruct;
- (int)StringAsArticleType:(id)arg1;
- (int)StringAsFeedCellSection:(id)arg1;
- (int)StringAsFeedType:(id)arg1;
- (int)StringAsGalleryType:(id)arg1;
- (int)StringAsMediaType:(id)arg1;
- (void)addFractionalCohortMembership:(id)arg1;
- (void)addGalleryImageIds:(id)arg1;
- (void)addNamedEntities:(id)arg1;
- (id)articleTypeAsString:(int)arg1;
- (void)clearFractionalCohortMemberships;
- (void)clearGalleryImageIds;
- (void)clearNamedEntities;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)feedCellSectionAsString:(int)arg1;
- (id)feedTypeAsString:(int)arg1;
- (id)fractionalCohortMembershipAtIndex:(unsigned long long)arg1;
- (unsigned long long)fractionalCohortMembershipsCount;
- (id)galleryImageIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)galleryImageIdsCount;
- (id)galleryTypeAsString:(int)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)mediaTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (id)namedEntitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)namedEntitiesCount;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

