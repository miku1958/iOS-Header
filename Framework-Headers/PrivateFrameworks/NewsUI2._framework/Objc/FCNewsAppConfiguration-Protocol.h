//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsUI2/FCCoreConfiguration-Protocol.h>
#import <NewsUI2/NFCopying-Protocol.h>

@class FCIAdConfiguration, FCPrefetchConfiguration, NSArray, NSString, NTPBDiscoverMoreVideosInfo;

@protocol FCNewsAppConfiguration <FCCoreConfiguration, NFCopying>

@property (nonatomic, readonly) double adRequestThrottle;
@property (nonatomic, readonly) long long analyticsEndpointMaxPayloadSize;
@property (nonatomic, readonly) NSString *anfRenderingConfiguration;
@property (nonatomic, readonly) double articleDiversificationSimilarityExpectationEnd;
@property (nonatomic, readonly) double articleDiversificationSimilarityExpectationStart;
@property (nonatomic, readonly) double articleDiversificationUniquePublisherExpectationSlope;
@property (nonatomic, readonly) double articleDiversificationUniquePublisherExpectationYIntercept;
@property (nonatomic, readonly) long long articleReadCountThreshold;
@property (nonatomic, readonly) NSString *articleRecirculationComponentPlacementConfigJSON;
@property (nonatomic, readonly) NSString *articleRecirculationConfigJSON;
@property (nonatomic, readonly) long long articleRecirculationPopularFeedQueryTimeRange;
@property (nonatomic, readonly) BOOL articleToolbarCompressionEnabled;
@property (nonatomic, readonly) long long autoRefreshMinimumInterval;
@property (nonatomic, readonly) long long autoScrollToTopFeedTimeout;
@property (nonatomic, readonly) unsigned long long bestOfBundleFeedGroupKind;
@property (nonatomic, readonly) BOOL corryBarHideDiscoverMoreInterstitialForNonOnboardedUsers;
@property (nonatomic, readonly) long long corryBarMaxArticleCountForArticleList;
@property (nonatomic, readonly) long long corryBarMaxArticleCountForSingleArticle;
@property (nonatomic, readonly) long long criticalStorageThreshold;
@property (nonatomic, readonly) BOOL disableThumbnailsForArticleRecirculation;
@property (nonatomic, readonly) long long emailSignupRequiredAppLaunchCount;
@property (nonatomic, readonly) NSString *embedConfigurationAssetID;
@property (nonatomic, readonly) BOOL enableBadgeInSpotlightTabBar;
@property (nonatomic, readonly) BOOL enableLocationBasedAutofavorites;
@property (nonatomic, readonly) NSString *exploreArticleID;
@property (nonatomic, readonly) NSArray *externalAnalyticsConfigurations;
@property (nonatomic, readonly) long long feedContentExposureTestMaximumInterval;
@property (nonatomic, readonly) NSString *feedNavigationConfigJSON;
@property (nonatomic, readonly) BOOL forYouGroupShouldPromoteAccessibleHeadline;
@property (nonatomic, readonly) FCIAdConfiguration *iAdConfig;
@property (nonatomic, readonly) double interstitialAdLoadDelay;
@property (nonatomic, readonly) BOOL isExpired;
@property (nonatomic, readonly) NSString *issueArticleRecirculationConfigJSON;
@property (nonatomic, readonly) unsigned long long likeDislikeBehavior;
@property (nonatomic, readonly) NSString *localAreasMappingResourceId;
@property (nonatomic, readonly) long long lowStorageThreshold;
@property (nonatomic, readonly) long long maximumTrendingGroupSizeiPad;
@property (nonatomic, readonly) long long maximumTrendingGroupSizeiPhone;
@property (nonatomic, readonly) NSArray *mediaSharingBlacklistedChannelIDs;
@property (nonatomic, readonly) long long newFavoriteNotificationAlertsFrequency;
@property (nonatomic, readonly) double newsletterSubscriptionStatusCacheTimeout;
@property (nonatomic, readonly) long long newsletterSubscriptionType;
@property (nonatomic, readonly) long long notificationArticleCacheTimeout;
@property (nonatomic, readonly) long long notificationArticleWithRapidUpdatesCacheTimeout;
@property (nonatomic, readonly) BOOL notificationAssetPrefetchingRequiresWatch;
@property (nonatomic, readonly) BOOL notificationEnableAssetPrefetching;
@property (nonatomic, readonly) NSArray *onboardingFeedIDs;
@property (nonatomic, readonly) double parsecPopulationCeiling;
@property (nonatomic, readonly) double parsecPopulationFloor;
@property (nonatomic, readonly) NSString *personalizationBundleIdMappingResourceId;
@property (nonatomic, readonly) NSString *personalizationFavorabilityResourceId;
@property (nonatomic, readonly) NSString *personalizationUrlMappingResourceId;
@property (nonatomic, readonly) NSString *personalizationWhitelistResourceId;
@property (nonatomic, readonly) FCPrefetchConfiguration *prefetchConfig;
@property (nonatomic, readonly) double prerollLoadingTimeout;
@property (nonatomic, readonly) NTPBDiscoverMoreVideosInfo *shareDiscoverMoreVideosInfo;
@property (nonatomic, readonly) long long stateRestorationAllowedTimeWindow;
@property (nonatomic, readonly) long long subscriptionsGracePeriodForTokenVerificationSeconds;
@property (nonatomic, readonly) long long subscriptionsPlacardGlobalMaximumPerDay;
@property (nonatomic, readonly) long long subscriptionsPlacardPublisherFrequencyInSeconds;
@property (nonatomic, readonly) NSString *tagFeedLayoutConfigurationResourceId;
@property (nonatomic, readonly) BOOL terminateAppOnBackgroundAfterJoiningOrLeavingExperiment;
@property (nonatomic, readonly) double tileProminenceScoreBalanceValue;
@property (nonatomic, readonly) NSArray *topStoriesPublishDates;
@property (nonatomic, readonly) NSString *translationMapResourceID;
@property (nonatomic, readonly) unsigned long long trendingStyle;
@property (nonatomic, readonly) BOOL universalLinksEnabled;
@property (nonatomic, readonly) BOOL userSegmentationInWidgetAllowed;
@property (nonatomic, readonly) NSString *userVectorModelResourceId;
@property (nonatomic, readonly) NSString *userVectorWhitelistResourceId;
@property (nonatomic, readonly) NSString *webEmbedContentBlockerOverrides;
@property (nonatomic, readonly) NSString *webEmbedContentBlockers;
@property (nonatomic, readonly) NSString *widgetConfigID;
@property (nonatomic, readonly) BOOL widgetContentPrefetchEnabled;
@property (nonatomic, readonly) long long widgetMinimumArticleExposureDurationToBePreseenInMilliseconds;
@property (nonatomic, readonly) unsigned int widgetMinimumNumberOfTimesPreseenToBeSeen;


@optional
- (BOOL)isArticleToolbarCompressionEnabled;
@end
