//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCClassifiable-Protocol.h>
#import <NewsCore/FCFeedElement-Protocol.h>
#import <NewsCore/FCFeedTransformationItem-Protocol.h>
#import <NewsCore/NSCopying-Protocol.h>
#import <NewsCore/NSObject-Protocol.h>

@class FCArticleContentManifest, FCCoverArt, FCHeadlineThumbnail, FCTopStoriesStyleConfiguration, NSArray, NSDate, NSObject, NSString, NSURL;
@protocol FCChannelProviding, FCContentContext;

@protocol FCHeadlineProviding <NSObject, NSCopying, FCFeedElement, FCClassifiable, FCFeedTransformationItem>

@property (readonly, copy, nonatomic) NSString *accessoryText;
@property (readonly, copy, nonatomic) NSArray *allowedStorefrontIDs;
@property (readonly, copy, nonatomic) NSString *articleID;
@property (readonly, nonatomic) unsigned long long backendArticleVersion;
@property (readonly, copy, nonatomic) NSArray *blockedStorefrontIDs;
@property (readonly, copy, nonatomic) NSString *clusterID;
@property (readonly, nonatomic) unsigned long long contentType;
@property (readonly, copy, nonatomic) NSURL *contentURL;
@property (readonly, nonatomic) FCCoverArt *coverArt;
@property (readonly, nonatomic, getter=isDeleted) BOOL deleted;
@property (readonly, copy, nonatomic) NSDate *displayDate;
@property (readonly, copy, nonatomic) NSArray *endOfArticleTopicIDs;
@property (readonly, nonatomic, getter=isFeatureCandidate) BOOL featureCandidate;
@property (readonly, nonatomic) unsigned long long feedOrder;
@property (readonly, nonatomic) double globalUserFeedback;
@property (readonly, nonatomic) BOOL hasThumbnail;
@property (readonly, copy, nonatomic) NSArray *iAdCategories;
@property (readonly, copy, nonatomic) NSArray *iAdKeywords;
@property (readonly, copy, nonatomic) NSArray *iAdSectionIDs;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL isBlockedExplicitContent;
@property (readonly, nonatomic) BOOL isDraft;
@property (readonly, nonatomic) struct CGSize largestThumbnailSize;
@property (readonly, copy, nonatomic) NSDate *lastFetchedDate;
@property (readonly, copy, nonatomic) NSDate *lastModifiedDate;
@property (readonly, copy, nonatomic) NSString *localDraftPath;
@property (readonly, nonatomic) long long minimumNewsVersion;
@property (readonly, copy, nonatomic) NSArray *moreFromPublisherArticleIDs;
@property (readonly, nonatomic) BOOL needsRapidUpdates;
@property (readonly, nonatomic, getter=isPaid) BOOL paid;
@property (readonly, copy, nonatomic) NSString *primaryAudience;
@property (readonly, copy, nonatomic) NSDate *publishDate;
@property (readonly, nonatomic) unsigned long long publisherArticleVersion;
@property (readonly, copy, nonatomic) NSString *referencedArticleID;
@property (readonly, copy, nonatomic) NSArray *relatedArticleIDs;
@property (readonly, copy, nonatomic) NSString *shortExcerpt;
@property (readonly, nonatomic) BOOL showSubscriptionRequiredText;
@property (readonly, copy, nonatomic) NSObject<FCChannelProviding> *sourceChannel;
@property (readonly, copy, nonatomic) NSString *sourceName;
@property (readonly, nonatomic, getter=isSponsored) BOOL sponsored;
@property (readonly, nonatomic) FCTopStoriesStyleConfiguration *storyStyle;
@property (readonly, nonatomic) unsigned long long storyType;
@property (readonly, copy, nonatomic) NSString *surfacedByBinID;
@property (readonly, copy, nonatomic) NSString *surfacedByChannelID;
@property (readonly, copy, nonatomic) NSString *surfacedBySectionID;
@property (readonly, copy, nonatomic) NSString *surfacedByTopicID;
@property (readonly, nonatomic) FCHeadlineThumbnail *thumbnail;
@property (readonly, nonatomic) struct CGRect thumbnailFocalFrame;
@property (readonly, nonatomic) FCHeadlineThumbnail *thumbnailHQ;
@property (readonly, nonatomic) FCHeadlineThumbnail *thumbnailLQ;
@property (readonly, nonatomic) FCHeadlineThumbnail *thumbnailMedium;
@property (readonly, nonatomic) FCHeadlineThumbnail *thumbnailUltraHQ;
@property (readonly, nonatomic) FCHeadlineThumbnail *thumbnailWidget;
@property (readonly, nonatomic) FCHeadlineThumbnail *thumbnailWidgetHQ;
@property (readonly, nonatomic) FCHeadlineThumbnail *thumbnailWidgetLQ;
@property (readonly, nonatomic) double tileProminenceScore;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic, getter=isTopStory) BOOL topStory;
@property (readonly, copy, nonatomic) NSArray *topicFlags;
@property (readonly, copy, nonatomic) NSArray *topicIDs;
@property (readonly, copy, nonatomic) NSArray *topicScores;
@property (readonly, nonatomic) BOOL usesImageOnTopLayout;
@property (readonly, copy, nonatomic) NSString *versionIdentifier;
@property (readonly, nonatomic) double videoDuration;
@property (readonly, nonatomic) NSURL *videoURL;


@optional
- (FCArticleContentManifest *)contentManifestWithContext:(id<FCContentContext>)arg1;
@end

