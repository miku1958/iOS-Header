//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString, NTPBFeedConfiguration, NTPBRecordBase;

@interface NTPBTagRecord : PBCodable <NSCopying>
{
    long long _allowedAdTypes;
    long long _contentProvider;
    unsigned long long _forYouCutoffTime;
    unsigned long long _forYouMaximumArticleCount;
    long long _minimumNewsVersion;
    long long _score;
    unsigned long long _tagNameImageBaselineShift;
    double _tagNameImageScaleFactor;
    NSMutableArray *_allowedStorefrontIds;
    NTPBRecordBase *_base;
    NSMutableArray *_blockedStorefrontIds;
    NSString *_channelDefaultSectionId;
    NSMutableArray *_channelSectionFeedConfigurations;
    NSMutableArray *_channelSectionIds;
    NSString *_coverArticleListId;
    NSString *_coverImageURL;
    NTPBFeedConfiguration *_feedConfiguration;
    NSMutableArray *_iAdCategories;
    NSMutableArray *_iAdKeywords;
    NSString *_logoURL;
    NSString *_name;
    NSString *_nameImageForDarkBackgroundURL;
    NSString *_nameImageMaskURL;
    NSString *_nameImageMaskWidgetHQURL;
    NSString *_nameImageMaskWidgetLQURL;
    NSData *_nameImageMetadata;
    NSString *_nameImageURL;
    NSString *_parentId;
    NSMutableArray *_pinnedArticleIds;
    NSString *_primaryAudience;
    NSString *_publisherPaidAuthorizationURL;
    NSMutableArray *_publisherPaidFeldsparablePurchaseIds;
    NSString *_publisherPaidVerificationURL;
    NSString *_publisherPaidWebaccessURL;
    NSMutableArray *_purchaseOfferableConfigurations;
    NSMutableArray *_relatedChannelIds;
    NSMutableArray *_relatedChannelIdsForOnboardings;
    NSMutableArray *_relatedTopicIds;
    NSMutableArray *_relatedTopicIdsForOnboardings;
    NSString *_replacementId;
    NSString *_templateJson;
    int _type;
    BOOL _hideAccessoryText;
    BOOL _isDeprecated;
    BOOL _isExplicitContent;
    BOOL _isNotificationEnabled;
    BOOL _isPublic;
    BOOL _publisherPaidLeakyPaywallOptOut;
    BOOL _publisherPaidWebOptIn;
    struct {
        unsigned int allowedAdTypes:1;
        unsigned int contentProvider:1;
        unsigned int forYouCutoffTime:1;
        unsigned int forYouMaximumArticleCount:1;
        unsigned int minimumNewsVersion:1;
        unsigned int score:1;
        unsigned int tagNameImageBaselineShift:1;
        unsigned int tagNameImageScaleFactor:1;
        unsigned int type:1;
        unsigned int hideAccessoryText:1;
        unsigned int isDeprecated:1;
        unsigned int isExplicitContent:1;
        unsigned int isNotificationEnabled:1;
        unsigned int isPublic:1;
        unsigned int publisherPaidLeakyPaywallOptOut:1;
        unsigned int publisherPaidWebOptIn:1;
    } _has;
}

@property (nonatomic) long long allowedAdTypes; // @synthesize allowedAdTypes=_allowedAdTypes;
@property (strong, nonatomic) NSMutableArray *allowedStorefrontIds; // @synthesize allowedStorefrontIds=_allowedStorefrontIds;
@property (strong, nonatomic) NTPBRecordBase *base; // @synthesize base=_base;
@property (strong, nonatomic) NSMutableArray *blockedStorefrontIds; // @synthesize blockedStorefrontIds=_blockedStorefrontIds;
@property (strong, nonatomic) NSString *channelDefaultSectionId; // @synthesize channelDefaultSectionId=_channelDefaultSectionId;
@property (strong, nonatomic) NSMutableArray *channelSectionFeedConfigurations; // @synthesize channelSectionFeedConfigurations=_channelSectionFeedConfigurations;
@property (strong, nonatomic) NSMutableArray *channelSectionIds; // @synthesize channelSectionIds=_channelSectionIds;
@property (nonatomic) long long contentProvider; // @synthesize contentProvider=_contentProvider;
@property (strong, nonatomic) NSString *coverArticleListId; // @synthesize coverArticleListId=_coverArticleListId;
@property (strong, nonatomic) NSString *coverImageURL; // @synthesize coverImageURL=_coverImageURL;
@property (strong, nonatomic) NTPBFeedConfiguration *feedConfiguration; // @synthesize feedConfiguration=_feedConfiguration;
@property (nonatomic) unsigned long long forYouCutoffTime; // @synthesize forYouCutoffTime=_forYouCutoffTime;
@property (nonatomic) unsigned long long forYouMaximumArticleCount; // @synthesize forYouMaximumArticleCount=_forYouMaximumArticleCount;
@property (nonatomic) BOOL hasAllowedAdTypes;
@property (readonly, nonatomic) BOOL hasBase;
@property (readonly, nonatomic) BOOL hasChannelDefaultSectionId;
@property (nonatomic) BOOL hasContentProvider;
@property (readonly, nonatomic) BOOL hasCoverArticleListId;
@property (readonly, nonatomic) BOOL hasCoverImageURL;
@property (readonly, nonatomic) BOOL hasFeedConfiguration;
@property (nonatomic) BOOL hasForYouCutoffTime;
@property (nonatomic) BOOL hasForYouMaximumArticleCount;
@property (nonatomic) BOOL hasHideAccessoryText;
@property (nonatomic) BOOL hasIsDeprecated;
@property (nonatomic) BOOL hasIsExplicitContent;
@property (nonatomic) BOOL hasIsNotificationEnabled;
@property (nonatomic) BOOL hasIsPublic;
@property (readonly, nonatomic) BOOL hasLogoURL;
@property (nonatomic) BOOL hasMinimumNewsVersion;
@property (readonly, nonatomic) BOOL hasName;
@property (readonly, nonatomic) BOOL hasNameImageForDarkBackgroundURL;
@property (readonly, nonatomic) BOOL hasNameImageMaskURL;
@property (readonly, nonatomic) BOOL hasNameImageMaskWidgetHQURL;
@property (readonly, nonatomic) BOOL hasNameImageMaskWidgetLQURL;
@property (readonly, nonatomic) BOOL hasNameImageMetadata;
@property (readonly, nonatomic) BOOL hasNameImageURL;
@property (readonly, nonatomic) BOOL hasParentId;
@property (readonly, nonatomic) BOOL hasPrimaryAudience;
@property (readonly, nonatomic) BOOL hasPublisherPaidAuthorizationURL;
@property (nonatomic) BOOL hasPublisherPaidLeakyPaywallOptOut;
@property (readonly, nonatomic) BOOL hasPublisherPaidVerificationURL;
@property (nonatomic) BOOL hasPublisherPaidWebOptIn;
@property (readonly, nonatomic) BOOL hasPublisherPaidWebaccessURL;
@property (readonly, nonatomic) BOOL hasReplacementId;
@property (nonatomic) BOOL hasScore;
@property (nonatomic) BOOL hasTagNameImageBaselineShift;
@property (nonatomic) BOOL hasTagNameImageScaleFactor;
@property (readonly, nonatomic) BOOL hasTemplateJson;
@property (nonatomic) BOOL hasType;
@property (nonatomic) BOOL hideAccessoryText; // @synthesize hideAccessoryText=_hideAccessoryText;
@property (strong, nonatomic) NSMutableArray *iAdCategories; // @synthesize iAdCategories=_iAdCategories;
@property (strong, nonatomic) NSMutableArray *iAdKeywords; // @synthesize iAdKeywords=_iAdKeywords;
@property (nonatomic) BOOL isDeprecated; // @synthesize isDeprecated=_isDeprecated;
@property (nonatomic) BOOL isExplicitContent; // @synthesize isExplicitContent=_isExplicitContent;
@property (nonatomic) BOOL isNotificationEnabled; // @synthesize isNotificationEnabled=_isNotificationEnabled;
@property (nonatomic) BOOL isPublic; // @synthesize isPublic=_isPublic;
@property (strong, nonatomic) NSString *logoURL; // @synthesize logoURL=_logoURL;
@property (nonatomic) long long minimumNewsVersion; // @synthesize minimumNewsVersion=_minimumNewsVersion;
@property (strong, nonatomic) NSString *name; // @synthesize name=_name;
@property (strong, nonatomic) NSString *nameImageForDarkBackgroundURL; // @synthesize nameImageForDarkBackgroundURL=_nameImageForDarkBackgroundURL;
@property (strong, nonatomic) NSString *nameImageMaskURL; // @synthesize nameImageMaskURL=_nameImageMaskURL;
@property (strong, nonatomic) NSString *nameImageMaskWidgetHQURL; // @synthesize nameImageMaskWidgetHQURL=_nameImageMaskWidgetHQURL;
@property (strong, nonatomic) NSString *nameImageMaskWidgetLQURL; // @synthesize nameImageMaskWidgetLQURL=_nameImageMaskWidgetLQURL;
@property (strong, nonatomic) NSData *nameImageMetadata; // @synthesize nameImageMetadata=_nameImageMetadata;
@property (strong, nonatomic) NSString *nameImageURL; // @synthesize nameImageURL=_nameImageURL;
@property (strong, nonatomic) NSString *parentId; // @synthesize parentId=_parentId;
@property (strong, nonatomic) NSMutableArray *pinnedArticleIds; // @synthesize pinnedArticleIds=_pinnedArticleIds;
@property (strong, nonatomic) NSString *primaryAudience; // @synthesize primaryAudience=_primaryAudience;
@property (strong, nonatomic) NSString *publisherPaidAuthorizationURL; // @synthesize publisherPaidAuthorizationURL=_publisherPaidAuthorizationURL;
@property (strong, nonatomic) NSMutableArray *publisherPaidFeldsparablePurchaseIds; // @synthesize publisherPaidFeldsparablePurchaseIds=_publisherPaidFeldsparablePurchaseIds;
@property (nonatomic) BOOL publisherPaidLeakyPaywallOptOut; // @synthesize publisherPaidLeakyPaywallOptOut=_publisherPaidLeakyPaywallOptOut;
@property (strong, nonatomic) NSString *publisherPaidVerificationURL; // @synthesize publisherPaidVerificationURL=_publisherPaidVerificationURL;
@property (nonatomic) BOOL publisherPaidWebOptIn; // @synthesize publisherPaidWebOptIn=_publisherPaidWebOptIn;
@property (strong, nonatomic) NSString *publisherPaidWebaccessURL; // @synthesize publisherPaidWebaccessURL=_publisherPaidWebaccessURL;
@property (strong, nonatomic) NSMutableArray *purchaseOfferableConfigurations; // @synthesize purchaseOfferableConfigurations=_purchaseOfferableConfigurations;
@property (strong, nonatomic) NSMutableArray *relatedChannelIds; // @synthesize relatedChannelIds=_relatedChannelIds;
@property (strong, nonatomic) NSMutableArray *relatedChannelIdsForOnboardings; // @synthesize relatedChannelIdsForOnboardings=_relatedChannelIdsForOnboardings;
@property (strong, nonatomic) NSMutableArray *relatedTopicIds; // @synthesize relatedTopicIds=_relatedTopicIds;
@property (strong, nonatomic) NSMutableArray *relatedTopicIdsForOnboardings; // @synthesize relatedTopicIdsForOnboardings=_relatedTopicIdsForOnboardings;
@property (strong, nonatomic) NSString *replacementId; // @synthesize replacementId=_replacementId;
@property (nonatomic) long long score; // @synthesize score=_score;
@property (nonatomic) unsigned long long tagNameImageBaselineShift; // @synthesize tagNameImageBaselineShift=_tagNameImageBaselineShift;
@property (nonatomic) double tagNameImageScaleFactor; // @synthesize tagNameImageScaleFactor=_tagNameImageScaleFactor;
@property (strong, nonatomic) NSString *templateJson; // @synthesize templateJson=_templateJson;
@property (nonatomic) int type; // @synthesize type=_type;

+ (Class)allowedStorefrontIdsType;
+ (Class)blockedStorefrontIdsType;
+ (Class)channelSectionFeedConfigurationsType;
+ (Class)channelSectionIdsType;
+ (Class)iAdCategoriesType;
+ (Class)iAdKeywordsType;
+ (Class)pinnedArticleIdsType;
+ (Class)publisherPaidFeldsparablePurchaseIdsType;
+ (Class)purchaseOfferableConfigurationType;
+ (Class)relatedChannelIdsForOnboardingType;
+ (Class)relatedChannelIdsType;
+ (Class)relatedTopicIdsForOnboardingType;
+ (Class)relatedTopicIdsType;
- (void)addAllowedStorefrontIds:(id)arg1;
- (void)addBlockedStorefrontIds:(id)arg1;
- (void)addChannelSectionFeedConfigurations:(id)arg1;
- (void)addChannelSectionIds:(id)arg1;
- (void)addIAdCategories:(id)arg1;
- (void)addIAdKeywords:(id)arg1;
- (void)addPinnedArticleIds:(id)arg1;
- (void)addPublisherPaidFeldsparablePurchaseIds:(id)arg1;
- (void)addPurchaseOfferableConfiguration:(id)arg1;
- (void)addRelatedChannelIds:(id)arg1;
- (void)addRelatedChannelIdsForOnboarding:(id)arg1;
- (void)addRelatedTopicIds:(id)arg1;
- (void)addRelatedTopicIdsForOnboarding:(id)arg1;
- (id)allowedStorefrontIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)allowedStorefrontIdsCount;
- (id)blockedStorefrontIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)blockedStorefrontIdsCount;
- (id)channelSectionFeedConfigurationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)channelSectionFeedConfigurationsCount;
- (id)channelSectionIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)channelSectionIdsCount;
- (void)clearAllowedStorefrontIds;
- (void)clearBlockedStorefrontIds;
- (void)clearChannelSectionFeedConfigurations;
- (void)clearChannelSectionIds;
- (void)clearIAdCategories;
- (void)clearIAdKeywords;
- (void)clearPinnedArticleIds;
- (void)clearPublisherPaidFeldsparablePurchaseIds;
- (void)clearPurchaseOfferableConfigurations;
- (void)clearRelatedChannelIds;
- (void)clearRelatedChannelIdsForOnboardings;
- (void)clearRelatedTopicIds;
- (void)clearRelatedTopicIdsForOnboardings;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)iAdCategoriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)iAdCategoriesCount;
- (id)iAdKeywordsAtIndex:(unsigned long long)arg1;
- (unsigned long long)iAdKeywordsCount;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)pinnedArticleIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)pinnedArticleIdsCount;
- (id)publisherPaidFeldsparablePurchaseIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)publisherPaidFeldsparablePurchaseIdsCount;
- (id)purchaseOfferableConfigurationAtIndex:(unsigned long long)arg1;
- (unsigned long long)purchaseOfferableConfigurationsCount;
- (BOOL)readFrom:(id)arg1;
- (id)relatedChannelIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)relatedChannelIdsCount;
- (id)relatedChannelIdsForOnboardingAtIndex:(unsigned long long)arg1;
- (unsigned long long)relatedChannelIdsForOnboardingsCount;
- (id)relatedTopicIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)relatedTopicIdsCount;
- (id)relatedTopicIdsForOnboardingAtIndex:(unsigned long long)arg1;
- (unsigned long long)relatedTopicIdsForOnboardingsCount;
- (void)writeTo:(id)arg1;

@end

