//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSString;

@interface NTPBReportConcern : PBCodable <NSCopying>
{
    int _articleFeedCellHostType;
    int _articleFeedCellSection;
    NSString *_articleParentFeedId;
    int _articleParentFeedType;
    int _backendArticleVersion;
    NSString *_clientId;
    NSString *_concernComments;
    int _concernReason;
    NSString *_contentId;
    int _contentType;
    int _feedFeedType;
    NSString *_feedPresentationSearchString;
    int _feedViewPresentationReason;
    int _publisherArticleVersion;
    NSString *_referencedArticleId;
    int _reportVersion;
    NSString *_userId;
    BOOL _isUserSubscribedToFeed;
    struct {
        unsigned int articleFeedCellHostType:1;
        unsigned int articleFeedCellSection:1;
        unsigned int articleParentFeedType:1;
        unsigned int backendArticleVersion:1;
        unsigned int concernReason:1;
        unsigned int contentType:1;
        unsigned int feedFeedType:1;
        unsigned int feedViewPresentationReason:1;
        unsigned int publisherArticleVersion:1;
        unsigned int isUserSubscribedToFeed:1;
    } _has;
}

@property (nonatomic) int articleFeedCellHostType; // @synthesize articleFeedCellHostType=_articleFeedCellHostType;
@property (nonatomic) int articleFeedCellSection; // @synthesize articleFeedCellSection=_articleFeedCellSection;
@property (strong, nonatomic) NSString *articleParentFeedId; // @synthesize articleParentFeedId=_articleParentFeedId;
@property (nonatomic) int articleParentFeedType; // @synthesize articleParentFeedType=_articleParentFeedType;
@property (nonatomic) int backendArticleVersion; // @synthesize backendArticleVersion=_backendArticleVersion;
@property (strong, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
@property (strong, nonatomic) NSString *concernComments; // @synthesize concernComments=_concernComments;
@property (nonatomic) int concernReason; // @synthesize concernReason=_concernReason;
@property (strong, nonatomic) NSString *contentId; // @synthesize contentId=_contentId;
@property (nonatomic) int contentType; // @synthesize contentType=_contentType;
@property (nonatomic) int feedFeedType; // @synthesize feedFeedType=_feedFeedType;
@property (strong, nonatomic) NSString *feedPresentationSearchString; // @synthesize feedPresentationSearchString=_feedPresentationSearchString;
@property (nonatomic) int feedViewPresentationReason; // @synthesize feedViewPresentationReason=_feedViewPresentationReason;
@property (nonatomic) BOOL hasArticleFeedCellHostType;
@property (nonatomic) BOOL hasArticleFeedCellSection;
@property (readonly, nonatomic) BOOL hasArticleParentFeedId;
@property (nonatomic) BOOL hasArticleParentFeedType;
@property (nonatomic) BOOL hasBackendArticleVersion;
@property (readonly, nonatomic) BOOL hasClientId;
@property (readonly, nonatomic) BOOL hasConcernComments;
@property (nonatomic) BOOL hasConcernReason;
@property (readonly, nonatomic) BOOL hasContentId;
@property (nonatomic) BOOL hasContentType;
@property (nonatomic) BOOL hasFeedFeedType;
@property (readonly, nonatomic) BOOL hasFeedPresentationSearchString;
@property (nonatomic) BOOL hasFeedViewPresentationReason;
@property (nonatomic) BOOL hasIsUserSubscribedToFeed;
@property (nonatomic) BOOL hasPublisherArticleVersion;
@property (readonly, nonatomic) BOOL hasReferencedArticleId;
@property (readonly, nonatomic) BOOL hasUserId;
@property (nonatomic) BOOL isUserSubscribedToFeed; // @synthesize isUserSubscribedToFeed=_isUserSubscribedToFeed;
@property (nonatomic) int publisherArticleVersion; // @synthesize publisherArticleVersion=_publisherArticleVersion;
@property (strong, nonatomic) NSString *referencedArticleId; // @synthesize referencedArticleId=_referencedArticleId;
@property (nonatomic) int reportVersion; // @synthesize reportVersion=_reportVersion;
@property (strong, nonatomic) NSString *userId; // @synthesize userId=_userId;

- (void).cxx_destruct;
- (int)StringAsArticleFeedCellHostType:(id)arg1;
- (int)StringAsArticleFeedCellSection:(id)arg1;
- (int)StringAsArticleParentFeedType:(id)arg1;
- (int)StringAsContentType:(id)arg1;
- (int)StringAsFeedFeedType:(id)arg1;
- (int)StringAsFeedViewPresentationReason:(id)arg1;
- (id)articleFeedCellHostTypeAsString:(int)arg1;
- (id)articleFeedCellSectionAsString:(int)arg1;
- (id)articleParentFeedTypeAsString:(int)arg1;
- (id)contentTypeAsString:(int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)feedFeedTypeAsString:(int)arg1;
- (id)feedViewPresentationReasonAsString:(int)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

