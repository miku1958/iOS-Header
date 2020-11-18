//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString;

@interface NTPBMediaExposure : PBCodable <NSCopying>
{
    long long _personalizationTreatmentId;
    NSString *_articleId;
    NSData *_articleSessionId;
    int _articleType;
    NSData *_articleViewingSessionId;
    int _backendArticleVersion;
    int _countOfImagesExposed;
    int _countOfImagesInGallery;
    int _feedCellSection;
    NSString *_feedId;
    int _feedType;
    NSData *_feedViewExposureId;
    int _galleryType;
    NSString *_mediaId;
    int _mediaLocation;
    int _mediaType;
    NSMutableArray *_namedEntities;
    int _publisherArticleVersion;
    NSString *_referencedArticleId;
    NSString *_sectionHeadlineId;
    NSString *_sourceChannelId;
    NSString *_surfacedByChannelId;
    NSString *_surfacedBySectionId;
    NSString *_surfacedByTopicId;
    BOOL _adSupportedChannel;
    BOOL _isDigitalReplicaAd;
    BOOL _isUserSubscribedToFeed;
    BOOL _isVideoInFeed;
    struct {
        unsigned int personalizationTreatmentId:1;
        unsigned int articleType:1;
        unsigned int backendArticleVersion:1;
        unsigned int countOfImagesExposed:1;
        unsigned int countOfImagesInGallery:1;
        unsigned int feedCellSection:1;
        unsigned int feedType:1;
        unsigned int galleryType:1;
        unsigned int mediaLocation:1;
        unsigned int mediaType:1;
        unsigned int publisherArticleVersion:1;
        unsigned int adSupportedChannel:1;
        unsigned int isDigitalReplicaAd:1;
        unsigned int isUserSubscribedToFeed:1;
        unsigned int isVideoInFeed:1;
    } _has;
}

@property (nonatomic) BOOL adSupportedChannel; // @synthesize adSupportedChannel=_adSupportedChannel;
@property (strong, nonatomic) NSString *articleId; // @synthesize articleId=_articleId;
@property (strong, nonatomic) NSData *articleSessionId; // @synthesize articleSessionId=_articleSessionId;
@property (nonatomic) int articleType; // @synthesize articleType=_articleType;
@property (strong, nonatomic) NSData *articleViewingSessionId; // @synthesize articleViewingSessionId=_articleViewingSessionId;
@property (nonatomic) int backendArticleVersion; // @synthesize backendArticleVersion=_backendArticleVersion;
@property (nonatomic) int countOfImagesExposed; // @synthesize countOfImagesExposed=_countOfImagesExposed;
@property (nonatomic) int countOfImagesInGallery; // @synthesize countOfImagesInGallery=_countOfImagesInGallery;
@property (nonatomic) int feedCellSection; // @synthesize feedCellSection=_feedCellSection;
@property (strong, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
@property (nonatomic) int feedType; // @synthesize feedType=_feedType;
@property (strong, nonatomic) NSData *feedViewExposureId; // @synthesize feedViewExposureId=_feedViewExposureId;
@property (nonatomic) int galleryType; // @synthesize galleryType=_galleryType;
@property (nonatomic) BOOL hasAdSupportedChannel;
@property (readonly, nonatomic) BOOL hasArticleId;
@property (readonly, nonatomic) BOOL hasArticleSessionId;
@property (nonatomic) BOOL hasArticleType;
@property (readonly, nonatomic) BOOL hasArticleViewingSessionId;
@property (nonatomic) BOOL hasBackendArticleVersion;
@property (nonatomic) BOOL hasCountOfImagesExposed;
@property (nonatomic) BOOL hasCountOfImagesInGallery;
@property (nonatomic) BOOL hasFeedCellSection;
@property (readonly, nonatomic) BOOL hasFeedId;
@property (nonatomic) BOOL hasFeedType;
@property (readonly, nonatomic) BOOL hasFeedViewExposureId;
@property (nonatomic) BOOL hasGalleryType;
@property (nonatomic) BOOL hasIsDigitalReplicaAd;
@property (nonatomic) BOOL hasIsUserSubscribedToFeed;
@property (nonatomic) BOOL hasIsVideoInFeed;
@property (readonly, nonatomic) BOOL hasMediaId;
@property (nonatomic) BOOL hasMediaLocation;
@property (nonatomic) BOOL hasMediaType;
@property (nonatomic) BOOL hasPersonalizationTreatmentId;
@property (nonatomic) BOOL hasPublisherArticleVersion;
@property (readonly, nonatomic) BOOL hasReferencedArticleId;
@property (readonly, nonatomic) BOOL hasSectionHeadlineId;
@property (readonly, nonatomic) BOOL hasSourceChannelId;
@property (readonly, nonatomic) BOOL hasSurfacedByChannelId;
@property (readonly, nonatomic) BOOL hasSurfacedBySectionId;
@property (readonly, nonatomic) BOOL hasSurfacedByTopicId;
@property (nonatomic) BOOL isDigitalReplicaAd; // @synthesize isDigitalReplicaAd=_isDigitalReplicaAd;
@property (nonatomic) BOOL isUserSubscribedToFeed; // @synthesize isUserSubscribedToFeed=_isUserSubscribedToFeed;
@property (nonatomic) BOOL isVideoInFeed; // @synthesize isVideoInFeed=_isVideoInFeed;
@property (strong, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
@property (nonatomic) int mediaLocation; // @synthesize mediaLocation=_mediaLocation;
@property (nonatomic) int mediaType; // @synthesize mediaType=_mediaType;
@property (strong, nonatomic) NSMutableArray *namedEntities; // @synthesize namedEntities=_namedEntities;
@property (nonatomic) long long personalizationTreatmentId; // @synthesize personalizationTreatmentId=_personalizationTreatmentId;
@property (nonatomic) int publisherArticleVersion; // @synthesize publisherArticleVersion=_publisherArticleVersion;
@property (strong, nonatomic) NSString *referencedArticleId; // @synthesize referencedArticleId=_referencedArticleId;
@property (strong, nonatomic) NSString *sectionHeadlineId; // @synthesize sectionHeadlineId=_sectionHeadlineId;
@property (strong, nonatomic) NSString *sourceChannelId; // @synthesize sourceChannelId=_sourceChannelId;
@property (strong, nonatomic) NSString *surfacedByChannelId; // @synthesize surfacedByChannelId=_surfacedByChannelId;
@property (strong, nonatomic) NSString *surfacedBySectionId; // @synthesize surfacedBySectionId=_surfacedBySectionId;
@property (strong, nonatomic) NSString *surfacedByTopicId; // @synthesize surfacedByTopicId=_surfacedByTopicId;

+ (Class)namedEntitiesType;
- (void).cxx_destruct;
- (int)StringAsArticleType:(id)arg1;
- (int)StringAsFeedCellSection:(id)arg1;
- (int)StringAsFeedType:(id)arg1;
- (int)StringAsGalleryType:(id)arg1;
- (int)StringAsMediaType:(id)arg1;
- (void)addNamedEntities:(id)arg1;
- (id)articleTypeAsString:(int)arg1;
- (void)clearNamedEntities;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)feedCellSectionAsString:(int)arg1;
- (id)feedTypeAsString:(int)arg1;
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

