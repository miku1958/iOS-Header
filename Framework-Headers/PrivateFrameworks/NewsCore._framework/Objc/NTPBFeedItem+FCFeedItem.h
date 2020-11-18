//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsTransport/NTPBFeedItem.h>

#import <NewsCore/FCClassifiable-Protocol.h>
#import <NewsCore/FCFeedTransformationItem-Protocol.h>

@class COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList, COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats, COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector, NSArray, NSDate, NSString;
@protocol FCChannelProviding;

@interface NTPBFeedItem (FCFeedItem) <FCClassifiable, FCFeedTransformationItem>

@property (readonly, nonatomic, getter=isANF) BOOL anf;
@property (readonly, copy, nonatomic) NSString *articleID;
@property (readonly, nonatomic) long long bodyTextLength;
@property (readonly, nonatomic, getter=isBundlePaid) BOOL bundlePaid;
@property (readonly, nonatomic) BOOL canBePurchased;
@property (readonly, copy, nonatomic) NSString *clusterID;
@property (readonly, nonatomic) unsigned long long contentType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isExplicitContent) BOOL explicitContent;
@property (readonly, nonatomic) unsigned long long feedHalfLifeMilliseconds;
@property (readonly, copy, nonatomic) NSString *feedID;
@property (readonly, nonatomic, getter=isFromBlockedStorefront) BOOL fromBlockedStorefront;
@property (readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *globalCohorts;
@property (readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *globalConversionStats;
@property (readonly, nonatomic) double globalUserFeedback;
@property (readonly, nonatomic) unsigned long long halfLife;
@property (readonly, nonatomic) BOOL hasAudioTrack;
@property (readonly, nonatomic) BOOL hasGlobalUserFeedback;
@property (readonly, nonatomic) BOOL hasVideo;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic, getter=isHiddenFromAutoFavorites) BOOL hiddenFromAutoFavorites;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL isFeatured;
@property (readonly, copy, nonatomic) NSString *itemID;
@property (readonly, nonatomic) long long minimumNewsVersion;
@property (readonly, nonatomic) unsigned long long order;
@property (readonly, nonatomic, getter=isPaid) BOOL paid;
@property (readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector *personalizationVector;
@property (readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector *personalizationVectorAlt;
@property (readonly, copy, nonatomic) NSDate *publishDate;
@property (readonly, nonatomic) unsigned long long publishDateMilliseconds;
@property (readonly, nonatomic) long long publisherArticleVersion;
@property (readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *publisherCohorts;
@property (readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *publisherConversionStats;
@property (readonly, copy, nonatomic) NSString *publisherID;
@property (readonly, copy, nonatomic) id<FCChannelProviding> sourceChannel;
@property (readonly, copy, nonatomic) NSString *sourceChannelID;
@property (readonly, copy, nonatomic) NSString *sourceFeedID;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSArray *topicIDs;

+ (id)cloudKitKeysWithRecordSource:(id)arg1;
+ (id)feedItemWithCKFeedItemAndArticleRecord:(id)arg1 storefrontID:(id)arg2 recordSource:(id)arg3;
- (unsigned long long)articleContentType;
- (long long)compareOrder:(id)arg1;
- (long long)compareOrderDescending:(id)arg1;
- (void)enumerateFeaturesWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateTopicCohortsWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateTopicConversionStatsWithBlock:(CDUnknownBlockType)arg1;
- (BOOL)hasFeature:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)mustShow;
@end
