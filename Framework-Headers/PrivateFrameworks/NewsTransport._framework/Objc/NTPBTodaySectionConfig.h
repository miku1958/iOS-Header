//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSString, NTPBArticleIDsTodaySectionSpecificConfig, NTPBArticleListTodaySectionSpecificConfig, NTPBForYouTodaySectionSpecificConfig, NTPBItemsTodaySectionSpecificConfig, NTPBPersonalizedSectionPresenceConfig, NTPBPersonalizedTodaySectionSpecificConfig, NTPBTagTodaySectionSpecificConfig;

@interface NTPBTodaySectionConfig : PBCodable <NSCopying>
{
    struct {
        unsigned long long *list;
        unsigned long long count;
        unsigned long long size;
    } _queueMemberships;
    unsigned long long _cachedResultCutoffTime;
    unsigned long long _fallbackOrder;
    unsigned long long _interSectionFilteringOptions;
    unsigned long long _intraSectionFilteringOptions;
    unsigned long long _maximumStoriesAllocation;
    unsigned long long _minimumStoriesAllocation;
    unsigned long long _personalizedPresenceFeatureClickPrior;
    unsigned long long _personalizedPresenceFeatureImpressionPrior;
    unsigned long long _seenArticlesMinimumTimeSinceFirstSeenToFilter;
    NTPBArticleIDsTodaySectionSpecificConfig *_articleIDsTodaySectionConfig;
    NTPBArticleListTodaySectionSpecificConfig *_articleListTodaySectionConfig;
    NSString *_backgroundColorDark;
    NSString *_backgroundColorLight;
    NSString *_backgroundGradientColor;
    NSString *_compactName;
    NTPBForYouTodaySectionSpecificConfig *_forYouTodaySectionConfig;
    NSString *_groupActionTitle;
    NSString *_groupActionUrl;
    NSString *_groupNameActionUrl;
    NSString *_identifier;
    NTPBItemsTodaySectionSpecificConfig *_itemsTodaySectionConfig;
    NSString *_mutingTagID;
    NSString *_name;
    NSString *_nameColorDark;
    NSString *_nameColorLight;
    NSString *_personalizationFeatureID;
    NTPBPersonalizedSectionPresenceConfig *_personalizedPresenceConfig;
    NSString *_personalizedPresenceFeatureID;
    NTPBPersonalizedTodaySectionSpecificConfig *_personalizedTodaySectionConfig;
    int _promotionCriterion;
    int _readArticlesFilterMethod;
    NSString *_referralBarName;
    int _sectionType;
    int _seenArticlesFilterMethod;
    NTPBTagTodaySectionSpecificConfig *_tagTodaySectionConfig;
    BOOL _glanceable;
    BOOL _presenceDeterminedByPersonalization;
    BOOL _shownInFavoritesOnlyMode;
    struct {
        unsigned int cachedResultCutoffTime:1;
        unsigned int fallbackOrder:1;
        unsigned int interSectionFilteringOptions:1;
        unsigned int intraSectionFilteringOptions:1;
        unsigned int maximumStoriesAllocation:1;
        unsigned int minimumStoriesAllocation:1;
        unsigned int personalizedPresenceFeatureClickPrior:1;
        unsigned int personalizedPresenceFeatureImpressionPrior:1;
        unsigned int seenArticlesMinimumTimeSinceFirstSeenToFilter:1;
        unsigned int promotionCriterion:1;
        unsigned int readArticlesFilterMethod:1;
        unsigned int sectionType:1;
        unsigned int seenArticlesFilterMethod:1;
        unsigned int glanceable:1;
        unsigned int presenceDeterminedByPersonalization:1;
        unsigned int shownInFavoritesOnlyMode:1;
    } _has;
}

@property (strong, nonatomic) NTPBArticleIDsTodaySectionSpecificConfig *articleIDsTodaySectionConfig; // @synthesize articleIDsTodaySectionConfig=_articleIDsTodaySectionConfig;
@property (strong, nonatomic) NTPBArticleListTodaySectionSpecificConfig *articleListTodaySectionConfig; // @synthesize articleListTodaySectionConfig=_articleListTodaySectionConfig;
@property (strong, nonatomic) NSString *backgroundColorDark; // @synthesize backgroundColorDark=_backgroundColorDark;
@property (strong, nonatomic) NSString *backgroundColorLight; // @synthesize backgroundColorLight=_backgroundColorLight;
@property (strong, nonatomic) NSString *backgroundGradientColor; // @synthesize backgroundGradientColor=_backgroundGradientColor;
@property (nonatomic) unsigned long long cachedResultCutoffTime; // @synthesize cachedResultCutoffTime=_cachedResultCutoffTime;
@property (strong, nonatomic) NSString *compactName; // @synthesize compactName=_compactName;
@property (nonatomic) unsigned long long fallbackOrder; // @synthesize fallbackOrder=_fallbackOrder;
@property (strong, nonatomic) NTPBForYouTodaySectionSpecificConfig *forYouTodaySectionConfig; // @synthesize forYouTodaySectionConfig=_forYouTodaySectionConfig;
@property (nonatomic) BOOL glanceable; // @synthesize glanceable=_glanceable;
@property (strong, nonatomic) NSString *groupActionTitle; // @synthesize groupActionTitle=_groupActionTitle;
@property (strong, nonatomic) NSString *groupActionUrl; // @synthesize groupActionUrl=_groupActionUrl;
@property (strong, nonatomic) NSString *groupNameActionUrl; // @synthesize groupNameActionUrl=_groupNameActionUrl;
@property (readonly, nonatomic) BOOL hasArticleIDsTodaySectionConfig;
@property (readonly, nonatomic) BOOL hasArticleListTodaySectionConfig;
@property (readonly, nonatomic) BOOL hasBackgroundColorDark;
@property (readonly, nonatomic) BOOL hasBackgroundColorLight;
@property (readonly, nonatomic) BOOL hasBackgroundGradientColor;
@property (nonatomic) BOOL hasCachedResultCutoffTime;
@property (readonly, nonatomic) BOOL hasCompactName;
@property (nonatomic) BOOL hasFallbackOrder;
@property (readonly, nonatomic) BOOL hasForYouTodaySectionConfig;
@property (nonatomic) BOOL hasGlanceable;
@property (readonly, nonatomic) BOOL hasGroupActionTitle;
@property (readonly, nonatomic) BOOL hasGroupActionUrl;
@property (readonly, nonatomic) BOOL hasGroupNameActionUrl;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (nonatomic) BOOL hasInterSectionFilteringOptions;
@property (nonatomic) BOOL hasIntraSectionFilteringOptions;
@property (readonly, nonatomic) BOOL hasItemsTodaySectionConfig;
@property (nonatomic) BOOL hasMaximumStoriesAllocation;
@property (nonatomic) BOOL hasMinimumStoriesAllocation;
@property (readonly, nonatomic) BOOL hasMutingTagID;
@property (readonly, nonatomic) BOOL hasName;
@property (readonly, nonatomic) BOOL hasNameColorDark;
@property (readonly, nonatomic) BOOL hasNameColorLight;
@property (readonly, nonatomic) BOOL hasPersonalizationFeatureID;
@property (readonly, nonatomic) BOOL hasPersonalizedPresenceConfig;
@property (nonatomic) BOOL hasPersonalizedPresenceFeatureClickPrior;
@property (readonly, nonatomic) BOOL hasPersonalizedPresenceFeatureID;
@property (nonatomic) BOOL hasPersonalizedPresenceFeatureImpressionPrior;
@property (readonly, nonatomic) BOOL hasPersonalizedTodaySectionConfig;
@property (nonatomic) BOOL hasPresenceDeterminedByPersonalization;
@property (nonatomic) BOOL hasPromotionCriterion;
@property (nonatomic) BOOL hasReadArticlesFilterMethod;
@property (readonly, nonatomic) BOOL hasReferralBarName;
@property (nonatomic) BOOL hasSectionType;
@property (nonatomic) BOOL hasSeenArticlesFilterMethod;
@property (nonatomic) BOOL hasSeenArticlesMinimumTimeSinceFirstSeenToFilter;
@property (nonatomic) BOOL hasShownInFavoritesOnlyMode;
@property (readonly, nonatomic) BOOL hasTagTodaySectionConfig;
@property (strong, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (nonatomic) unsigned long long interSectionFilteringOptions; // @synthesize interSectionFilteringOptions=_interSectionFilteringOptions;
@property (nonatomic) unsigned long long intraSectionFilteringOptions; // @synthesize intraSectionFilteringOptions=_intraSectionFilteringOptions;
@property (strong, nonatomic) NTPBItemsTodaySectionSpecificConfig *itemsTodaySectionConfig; // @synthesize itemsTodaySectionConfig=_itemsTodaySectionConfig;
@property (nonatomic) unsigned long long maximumStoriesAllocation; // @synthesize maximumStoriesAllocation=_maximumStoriesAllocation;
@property (nonatomic) unsigned long long minimumStoriesAllocation; // @synthesize minimumStoriesAllocation=_minimumStoriesAllocation;
@property (strong, nonatomic) NSString *mutingTagID; // @synthesize mutingTagID=_mutingTagID;
@property (strong, nonatomic) NSString *name; // @synthesize name=_name;
@property (strong, nonatomic) NSString *nameColorDark; // @synthesize nameColorDark=_nameColorDark;
@property (strong, nonatomic) NSString *nameColorLight; // @synthesize nameColorLight=_nameColorLight;
@property (strong, nonatomic) NSString *personalizationFeatureID; // @synthesize personalizationFeatureID=_personalizationFeatureID;
@property (strong, nonatomic) NTPBPersonalizedSectionPresenceConfig *personalizedPresenceConfig; // @synthesize personalizedPresenceConfig=_personalizedPresenceConfig;
@property (nonatomic) unsigned long long personalizedPresenceFeatureClickPrior; // @synthesize personalizedPresenceFeatureClickPrior=_personalizedPresenceFeatureClickPrior;
@property (strong, nonatomic) NSString *personalizedPresenceFeatureID; // @synthesize personalizedPresenceFeatureID=_personalizedPresenceFeatureID;
@property (nonatomic) unsigned long long personalizedPresenceFeatureImpressionPrior; // @synthesize personalizedPresenceFeatureImpressionPrior=_personalizedPresenceFeatureImpressionPrior;
@property (strong, nonatomic) NTPBPersonalizedTodaySectionSpecificConfig *personalizedTodaySectionConfig; // @synthesize personalizedTodaySectionConfig=_personalizedTodaySectionConfig;
@property (nonatomic) BOOL presenceDeterminedByPersonalization; // @synthesize presenceDeterminedByPersonalization=_presenceDeterminedByPersonalization;
@property (nonatomic) int promotionCriterion; // @synthesize promotionCriterion=_promotionCriterion;
@property (readonly, nonatomic) unsigned long long *queueMemberships;
@property (readonly, nonatomic) unsigned long long queueMembershipsCount;
@property (nonatomic) int readArticlesFilterMethod; // @synthesize readArticlesFilterMethod=_readArticlesFilterMethod;
@property (strong, nonatomic) NSString *referralBarName; // @synthesize referralBarName=_referralBarName;
@property (nonatomic) int sectionType; // @synthesize sectionType=_sectionType;
@property (nonatomic) int seenArticlesFilterMethod; // @synthesize seenArticlesFilterMethod=_seenArticlesFilterMethod;
@property (nonatomic) unsigned long long seenArticlesMinimumTimeSinceFirstSeenToFilter; // @synthesize seenArticlesMinimumTimeSinceFirstSeenToFilter=_seenArticlesMinimumTimeSinceFirstSeenToFilter;
@property (nonatomic) BOOL shownInFavoritesOnlyMode; // @synthesize shownInFavoritesOnlyMode=_shownInFavoritesOnlyMode;
@property (strong, nonatomic) NTPBTagTodaySectionSpecificConfig *tagTodaySectionConfig; // @synthesize tagTodaySectionConfig=_tagTodaySectionConfig;

- (void)addQueueMembership:(unsigned long long)arg1;
- (void)clearQueueMemberships;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)queueMembershipAtIndex:(unsigned long long)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setQueueMemberships:(unsigned long long *)arg1 count:(unsigned long long)arg2;
- (void)writeTo:(id)arg1;

@end

