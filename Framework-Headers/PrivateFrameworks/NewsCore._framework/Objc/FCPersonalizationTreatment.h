//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/NSCopying-Protocol.h>
#import <NewsCore/NSSecureCoding-Protocol.h>

@class NTPBPersonalizationTreatment;

@interface FCPersonalizationTreatment : NSObject <NSSecureCoding, NSCopying>
{
    NTPBPersonalizationTreatment *_pbTreatment;
    double _featureClicksByAction[18];
    double _featureImpressionsByAction[18];
    double _baselineClicksByAction[18];
    double _baselineImpressionsByAction[18];
    BOOL _globalScoreRankingEnabled;
    BOOL _hardAgeBeforeDiversification;
    BOOL _enableOptimizedLayoutIPhone;
    BOOL _enableOptimizedLayoutIPad;
    BOOL _filterOverflowedOrphans;
    long long _treatmentID;
    double _decayFactor;
    double _democratizationFactor;
    double _sliceTimeInterval;
    double _hourlyFlowRateMinimum;
    double _hourlyFlowRateSubscriptionCountBuffer;
    double _hourlyFlowRateDampeningFactor;
    double _hourlyFlowRatePerSubscription;
    long long _extraArticlesToShowUser;
    double _hourlyFlowRateDecayFactor;
    double _hourlyFlowRatePriorWeight;
    double _hourlyFlowRateFloor;
    double _hourlyFlowRateCeiling;
    long long _flowRateDampeningSliceCount;
    double _flowRateMinimumDampeningFactor;
    double _hourlyFlowRateAlpha;
    double _hourlyFlowRateBeta;
    double _hourlyFlowRateGamma;
    double _baselineImpressionPrior;
    double _baselineRatePrior;
    double _featureImpressionPrior;
    double _globalScoreBump;
    double _globalScoreStretchingFactor;
    double _saturatedSubscriptionCountFactor;
    double _subscriptionVoteCoefficient;
    double _personalizationCoefficient;
    double _globalScoreCoefficient;
    double _halfLifeCoefficient;
    double _diversificationPenalty;
    double _publisherDiversificationPenalty;
    long long _publisherTopicIDEventCountMinimum;
    double _presentationImpressionValue;
    double _heavyClickImpressionValue;
    double _likeImpressionValue;
    double _shareImpressionValue;
    double _savedImpressionValue;
    double _subscribeImpressionValue;
    double _subscribeRelatedImpressionValue;
    double _existingSubscriptionImpressionValue;
    double _existingSubscriptionRelatedImpressionValue;
    double _unsubscribeImpressionValue;
    double _tappedImpressionValue;
    double _weakClickImpressionValue;
    double _visitImpressionValue;
    double _dislikeImpressionValue;
    double _recommendationPresentationFeedImpressionValue;
    double _recommendationPresentationExploreImpressionValue;
    double _premiumSubscriptionActivationImpressionValue;
    double _presentationClickValue;
    double _heavyClickClickValue;
    double _likeClickValue;
    double _shareClickValue;
    double _savedClickValue;
    double _subscribeClickValue;
    double _subscribeRelatedClickValue;
    double _existingSubscriptionClickValue;
    double _existingSubscriptionRelatedClickValue;
    double _unsubscribeClickValue;
    double _tappedClickValue;
    double _weakClickClickValue;
    double _visitClickValue;
    double _dislikeClickValue;
    double _recommendationPresentationFeedClickValue;
    double _recommendationPresentationExploreClickValue;
    double _premiumSubscriptionActivationClickValue;
    double _presentationBaselineImpressionValue;
    double _heavyClickBaselineImpressionValue;
    double _likeBaselineImpressionValue;
    double _shareBaselineImpressionValue;
    double _savedBaselineImpressionValue;
    double _subscribeBaselineImpressionValue;
    double _subscribeRelatedBaselineImpressionValue;
    double _existingSubscriptionBaselineImpressionValue;
    double _existingSubscriptionRelatedBaselineImpressionValue;
    double _unsubscribeBaselineImpressionValue;
    double _tappedBaselineImpressionValue;
    double _weakClickBaselineImpressionValue;
    double _visitBaselineImpressionValue;
    double _dislikeBaselineImpressionValue;
    double _recommendationPresentationFeedBaselineImpressionValue;
    double _recommendationPresentationExploreBaselineImpressionValue;
    double _premiumSubscriptionActivationBaselineImpressionValue;
    double _presentationBaselineClickValue;
    double _heavyClickBaselineClickValue;
    double _likeBaselineClickValue;
    double _shareBaselineClickValue;
    double _savedBaselineClickValue;
    double _subscribeBaselineClickValue;
    double _subscribeRelatedBaselineClickValue;
    double _existingSubscriptionBaselineClickValue;
    double _existingSubscriptionRelatedBaselineClickValue;
    double _unsubscribeBaselineClickValue;
    double _tappedBaselineClickValue;
    double _weakClickBaselineClickValue;
    double _visitBaselineClickValue;
    double _dislikeBaselineClickValue;
    double _recommendationPresentationFeedBaselineClickValue;
    double _recommendationPresentationExploreBaselineClickValue;
    double _premiumSubscriptionActivationBaselineClickValue;
    double _subscriptionCatchupDampeningFactor;
    double _heavyClickMinimumDuration;
    double _lowQualityContentThreshold;
    long long _minClusterSizeIPhone;
    long long _maxClusterSizeIPhone;
    long long _minIdealClusterSizeIPhone;
    long long _maxIdealClusterSizeIPhone;
    unsigned long long _optimizedLayoutSizeThresholdIPhone;
    unsigned long long _optimizedLayoutIncrementUnitIPhone;
    long long _maxArticleCombosIPhone;
    long long _heuristicSampleSizeIPhone;
    long long _searchBranchMultiplierIPhone;
    double _searchBranchDecayIPhone;
    long long _heuristicOptionIPhone;
    double _tagSizeCoeffIPhone;
    double _tagPairsCoeffIPhone;
    double _moveNewOrphansCoeffIPhone;
    double _moveSizeCoeffIPhone;
    double _moveAboutnessNoiseStdIPhone;
    double _moveAboutnessWeightRatioIPhone;
    long long _minClusterSizeIPad;
    long long _maxClusterSizeIPad;
    long long _minIdealClusterSizeIPad;
    long long _maxIdealClusterSizeIPad;
    unsigned long long _optimizedLayoutSizeThresholdIPad;
    unsigned long long _optimizedLayoutIncrementUnitIPad;
    long long _maxArticleCombosIPad;
    long long _heuristicSampleSizeIPad;
    long long _searchBranchMultiplierIPad;
    double _searchBranchDecayIPad;
    long long _heuristicOptionIPad;
    double _tagSizeCoeffIPad;
    double _tagPairsCoeffIPad;
    double _moveNewOrphansCoeffIPad;
    double _moveSizeCoeffIPad;
    double _moveAboutnessNoiseStdIPad;
    double _moveAboutnessWeightRatioIPad;
    double _searchTimeLimit;
    double _tagFavoritedCoeff;
    double _utilityWeightAlpha;
    double _utilityWeightBeta;
}

@property (readonly, nonatomic) double *baselineClicksByAction;
@property (readonly, nonatomic) double baselineImpressionPrior; // @synthesize baselineImpressionPrior=_baselineImpressionPrior;
@property (readonly, nonatomic) double *baselineImpressionsByAction;
@property (readonly, nonatomic) double baselineRatePrior; // @synthesize baselineRatePrior=_baselineRatePrior;
@property (readonly, nonatomic) double decayFactor; // @synthesize decayFactor=_decayFactor;
@property (readonly, nonatomic) double democratizationFactor; // @synthesize democratizationFactor=_democratizationFactor;
@property (readonly, nonatomic) double dislikeBaselineClickValue; // @synthesize dislikeBaselineClickValue=_dislikeBaselineClickValue;
@property (readonly, nonatomic) double dislikeBaselineImpressionValue; // @synthesize dislikeBaselineImpressionValue=_dislikeBaselineImpressionValue;
@property (readonly, nonatomic) double dislikeClickValue; // @synthesize dislikeClickValue=_dislikeClickValue;
@property (readonly, nonatomic) double dislikeImpressionValue; // @synthesize dislikeImpressionValue=_dislikeImpressionValue;
@property (readonly, nonatomic) double diversificationPenalty; // @synthesize diversificationPenalty=_diversificationPenalty;
@property (readonly, nonatomic) BOOL enableOptimizedLayoutIPad; // @synthesize enableOptimizedLayoutIPad=_enableOptimizedLayoutIPad;
@property (readonly, nonatomic) BOOL enableOptimizedLayoutIPhone; // @synthesize enableOptimizedLayoutIPhone=_enableOptimizedLayoutIPhone;
@property (readonly, nonatomic) double existingSubscriptionBaselineClickValue; // @synthesize existingSubscriptionBaselineClickValue=_existingSubscriptionBaselineClickValue;
@property (readonly, nonatomic) double existingSubscriptionBaselineImpressionValue; // @synthesize existingSubscriptionBaselineImpressionValue=_existingSubscriptionBaselineImpressionValue;
@property (readonly, nonatomic) double existingSubscriptionClickValue; // @synthesize existingSubscriptionClickValue=_existingSubscriptionClickValue;
@property (readonly, nonatomic) double existingSubscriptionImpressionValue; // @synthesize existingSubscriptionImpressionValue=_existingSubscriptionImpressionValue;
@property (readonly, nonatomic) double existingSubscriptionRelatedBaselineClickValue; // @synthesize existingSubscriptionRelatedBaselineClickValue=_existingSubscriptionRelatedBaselineClickValue;
@property (readonly, nonatomic) double existingSubscriptionRelatedBaselineImpressionValue; // @synthesize existingSubscriptionRelatedBaselineImpressionValue=_existingSubscriptionRelatedBaselineImpressionValue;
@property (readonly, nonatomic) double existingSubscriptionRelatedClickValue; // @synthesize existingSubscriptionRelatedClickValue=_existingSubscriptionRelatedClickValue;
@property (readonly, nonatomic) double existingSubscriptionRelatedImpressionValue; // @synthesize existingSubscriptionRelatedImpressionValue=_existingSubscriptionRelatedImpressionValue;
@property (readonly, nonatomic) long long extraArticlesToShowUser; // @synthesize extraArticlesToShowUser=_extraArticlesToShowUser;
@property (readonly, nonatomic) double *featureClicksByAction;
@property (readonly, nonatomic) double featureImpressionPrior; // @synthesize featureImpressionPrior=_featureImpressionPrior;
@property (readonly, nonatomic) double *featureImpressionsByAction;
@property (readonly, nonatomic) BOOL filterOverflowedOrphans; // @synthesize filterOverflowedOrphans=_filterOverflowedOrphans;
@property (readonly, nonatomic) long long flowRateDampeningSliceCount; // @synthesize flowRateDampeningSliceCount=_flowRateDampeningSliceCount;
@property (readonly, nonatomic) double flowRateMinimumDampeningFactor; // @synthesize flowRateMinimumDampeningFactor=_flowRateMinimumDampeningFactor;
@property (readonly, nonatomic) double globalScoreBump; // @synthesize globalScoreBump=_globalScoreBump;
@property (readonly, nonatomic) double globalScoreCoefficient; // @synthesize globalScoreCoefficient=_globalScoreCoefficient;
@property (readonly, nonatomic) BOOL globalScoreRankingEnabled; // @synthesize globalScoreRankingEnabled=_globalScoreRankingEnabled;
@property (readonly, nonatomic) double globalScoreStretchingFactor; // @synthesize globalScoreStretchingFactor=_globalScoreStretchingFactor;
@property (readonly, nonatomic) double halfLifeCoefficient; // @synthesize halfLifeCoefficient=_halfLifeCoefficient;
@property (readonly, nonatomic) BOOL hardAgeBeforeDiversification; // @synthesize hardAgeBeforeDiversification=_hardAgeBeforeDiversification;
@property (readonly, nonatomic) double heavyClickBaselineClickValue; // @synthesize heavyClickBaselineClickValue=_heavyClickBaselineClickValue;
@property (readonly, nonatomic) double heavyClickBaselineImpressionValue; // @synthesize heavyClickBaselineImpressionValue=_heavyClickBaselineImpressionValue;
@property (readonly, nonatomic) double heavyClickClickValue; // @synthesize heavyClickClickValue=_heavyClickClickValue;
@property (readonly, nonatomic) double heavyClickImpressionValue; // @synthesize heavyClickImpressionValue=_heavyClickImpressionValue;
@property (readonly, nonatomic) double heavyClickMinimumDuration; // @synthesize heavyClickMinimumDuration=_heavyClickMinimumDuration;
@property (readonly, nonatomic) long long heuristicOptionIPad; // @synthesize heuristicOptionIPad=_heuristicOptionIPad;
@property (readonly, nonatomic) long long heuristicOptionIPhone; // @synthesize heuristicOptionIPhone=_heuristicOptionIPhone;
@property (readonly, nonatomic) long long heuristicSampleSizeIPad; // @synthesize heuristicSampleSizeIPad=_heuristicSampleSizeIPad;
@property (readonly, nonatomic) long long heuristicSampleSizeIPhone; // @synthesize heuristicSampleSizeIPhone=_heuristicSampleSizeIPhone;
@property (readonly, nonatomic) double hourlyFlowRateAlpha; // @synthesize hourlyFlowRateAlpha=_hourlyFlowRateAlpha;
@property (readonly, nonatomic) double hourlyFlowRateBeta; // @synthesize hourlyFlowRateBeta=_hourlyFlowRateBeta;
@property (readonly, nonatomic) double hourlyFlowRateCeiling; // @synthesize hourlyFlowRateCeiling=_hourlyFlowRateCeiling;
@property (readonly, nonatomic) double hourlyFlowRateDampeningFactor; // @synthesize hourlyFlowRateDampeningFactor=_hourlyFlowRateDampeningFactor;
@property (readonly, nonatomic) double hourlyFlowRateDecayFactor; // @synthesize hourlyFlowRateDecayFactor=_hourlyFlowRateDecayFactor;
@property (readonly, nonatomic) double hourlyFlowRateFloor; // @synthesize hourlyFlowRateFloor=_hourlyFlowRateFloor;
@property (readonly, nonatomic) double hourlyFlowRateGamma; // @synthesize hourlyFlowRateGamma=_hourlyFlowRateGamma;
@property (readonly, nonatomic) double hourlyFlowRateMinimum; // @synthesize hourlyFlowRateMinimum=_hourlyFlowRateMinimum;
@property (readonly, nonatomic) double hourlyFlowRatePerSubscription; // @synthesize hourlyFlowRatePerSubscription=_hourlyFlowRatePerSubscription;
@property (readonly, nonatomic) double hourlyFlowRatePriorWeight; // @synthesize hourlyFlowRatePriorWeight=_hourlyFlowRatePriorWeight;
@property (readonly, nonatomic) double hourlyFlowRateSubscriptionCountBuffer; // @synthesize hourlyFlowRateSubscriptionCountBuffer=_hourlyFlowRateSubscriptionCountBuffer;
@property (readonly, nonatomic) double likeBaselineClickValue; // @synthesize likeBaselineClickValue=_likeBaselineClickValue;
@property (readonly, nonatomic) double likeBaselineImpressionValue; // @synthesize likeBaselineImpressionValue=_likeBaselineImpressionValue;
@property (readonly, nonatomic) double likeClickValue; // @synthesize likeClickValue=_likeClickValue;
@property (readonly, nonatomic) double likeImpressionValue; // @synthesize likeImpressionValue=_likeImpressionValue;
@property (readonly, nonatomic) double lowQualityContentThreshold; // @synthesize lowQualityContentThreshold=_lowQualityContentThreshold;
@property (readonly, nonatomic) long long maxArticleCombosIPad; // @synthesize maxArticleCombosIPad=_maxArticleCombosIPad;
@property (readonly, nonatomic) long long maxArticleCombosIPhone; // @synthesize maxArticleCombosIPhone=_maxArticleCombosIPhone;
@property (readonly, nonatomic) long long maxClusterSizeIPad; // @synthesize maxClusterSizeIPad=_maxClusterSizeIPad;
@property (readonly, nonatomic) long long maxClusterSizeIPhone; // @synthesize maxClusterSizeIPhone=_maxClusterSizeIPhone;
@property (readonly, nonatomic) long long maxIdealClusterSizeIPad; // @synthesize maxIdealClusterSizeIPad=_maxIdealClusterSizeIPad;
@property (readonly, nonatomic) long long maxIdealClusterSizeIPhone; // @synthesize maxIdealClusterSizeIPhone=_maxIdealClusterSizeIPhone;
@property (readonly, nonatomic) long long minClusterSizeIPad; // @synthesize minClusterSizeIPad=_minClusterSizeIPad;
@property (readonly, nonatomic) long long minClusterSizeIPhone; // @synthesize minClusterSizeIPhone=_minClusterSizeIPhone;
@property (readonly, nonatomic) long long minIdealClusterSizeIPad; // @synthesize minIdealClusterSizeIPad=_minIdealClusterSizeIPad;
@property (readonly, nonatomic) long long minIdealClusterSizeIPhone; // @synthesize minIdealClusterSizeIPhone=_minIdealClusterSizeIPhone;
@property (readonly, nonatomic) double moveAboutnessNoiseStdIPad; // @synthesize moveAboutnessNoiseStdIPad=_moveAboutnessNoiseStdIPad;
@property (readonly, nonatomic) double moveAboutnessNoiseStdIPhone; // @synthesize moveAboutnessNoiseStdIPhone=_moveAboutnessNoiseStdIPhone;
@property (readonly, nonatomic) double moveAboutnessWeightRatioIPad; // @synthesize moveAboutnessWeightRatioIPad=_moveAboutnessWeightRatioIPad;
@property (readonly, nonatomic) double moveAboutnessWeightRatioIPhone; // @synthesize moveAboutnessWeightRatioIPhone=_moveAboutnessWeightRatioIPhone;
@property (readonly, nonatomic) double moveNewOrphansCoeffIPad; // @synthesize moveNewOrphansCoeffIPad=_moveNewOrphansCoeffIPad;
@property (readonly, nonatomic) double moveNewOrphansCoeffIPhone; // @synthesize moveNewOrphansCoeffIPhone=_moveNewOrphansCoeffIPhone;
@property (readonly, nonatomic) double moveSizeCoeffIPad; // @synthesize moveSizeCoeffIPad=_moveSizeCoeffIPad;
@property (readonly, nonatomic) double moveSizeCoeffIPhone; // @synthesize moveSizeCoeffIPhone=_moveSizeCoeffIPhone;
@property (readonly, nonatomic) unsigned long long optimizedLayoutIncrementUnitIPad; // @synthesize optimizedLayoutIncrementUnitIPad=_optimizedLayoutIncrementUnitIPad;
@property (readonly, nonatomic) unsigned long long optimizedLayoutIncrementUnitIPhone; // @synthesize optimizedLayoutIncrementUnitIPhone=_optimizedLayoutIncrementUnitIPhone;
@property (readonly, nonatomic) unsigned long long optimizedLayoutSizeThresholdIPad; // @synthesize optimizedLayoutSizeThresholdIPad=_optimizedLayoutSizeThresholdIPad;
@property (readonly, nonatomic) unsigned long long optimizedLayoutSizeThresholdIPhone; // @synthesize optimizedLayoutSizeThresholdIPhone=_optimizedLayoutSizeThresholdIPhone;
@property (readonly, nonatomic) double personalizationCoefficient; // @synthesize personalizationCoefficient=_personalizationCoefficient;
@property (readonly, nonatomic) double premiumSubscriptionActivationBaselineClickValue; // @synthesize premiumSubscriptionActivationBaselineClickValue=_premiumSubscriptionActivationBaselineClickValue;
@property (readonly, nonatomic) double premiumSubscriptionActivationBaselineImpressionValue; // @synthesize premiumSubscriptionActivationBaselineImpressionValue=_premiumSubscriptionActivationBaselineImpressionValue;
@property (readonly, nonatomic) double premiumSubscriptionActivationClickValue; // @synthesize premiumSubscriptionActivationClickValue=_premiumSubscriptionActivationClickValue;
@property (readonly, nonatomic) double premiumSubscriptionActivationImpressionValue; // @synthesize premiumSubscriptionActivationImpressionValue=_premiumSubscriptionActivationImpressionValue;
@property (readonly, nonatomic) double presentationBaselineClickValue; // @synthesize presentationBaselineClickValue=_presentationBaselineClickValue;
@property (readonly, nonatomic) double presentationBaselineImpressionValue; // @synthesize presentationBaselineImpressionValue=_presentationBaselineImpressionValue;
@property (readonly, nonatomic) double presentationClickValue; // @synthesize presentationClickValue=_presentationClickValue;
@property (readonly, nonatomic) double presentationImpressionValue; // @synthesize presentationImpressionValue=_presentationImpressionValue;
@property (readonly, nonatomic) double publisherDiversificationPenalty; // @synthesize publisherDiversificationPenalty=_publisherDiversificationPenalty;
@property (readonly, nonatomic) long long publisherTopicIDEventCountMinimum; // @synthesize publisherTopicIDEventCountMinimum=_publisherTopicIDEventCountMinimum;
@property (readonly, nonatomic) double recommendationPresentationExploreBaselineClickValue; // @synthesize recommendationPresentationExploreBaselineClickValue=_recommendationPresentationExploreBaselineClickValue;
@property (readonly, nonatomic) double recommendationPresentationExploreBaselineImpressionValue; // @synthesize recommendationPresentationExploreBaselineImpressionValue=_recommendationPresentationExploreBaselineImpressionValue;
@property (readonly, nonatomic) double recommendationPresentationExploreClickValue; // @synthesize recommendationPresentationExploreClickValue=_recommendationPresentationExploreClickValue;
@property (readonly, nonatomic) double recommendationPresentationExploreImpressionValue; // @synthesize recommendationPresentationExploreImpressionValue=_recommendationPresentationExploreImpressionValue;
@property (readonly, nonatomic) double recommendationPresentationFeedBaselineClickValue; // @synthesize recommendationPresentationFeedBaselineClickValue=_recommendationPresentationFeedBaselineClickValue;
@property (readonly, nonatomic) double recommendationPresentationFeedBaselineImpressionValue; // @synthesize recommendationPresentationFeedBaselineImpressionValue=_recommendationPresentationFeedBaselineImpressionValue;
@property (readonly, nonatomic) double recommendationPresentationFeedClickValue; // @synthesize recommendationPresentationFeedClickValue=_recommendationPresentationFeedClickValue;
@property (readonly, nonatomic) double recommendationPresentationFeedImpressionValue; // @synthesize recommendationPresentationFeedImpressionValue=_recommendationPresentationFeedImpressionValue;
@property (readonly, nonatomic) double saturatedSubscriptionCountFactor; // @synthesize saturatedSubscriptionCountFactor=_saturatedSubscriptionCountFactor;
@property (readonly, nonatomic) double savedBaselineClickValue; // @synthesize savedBaselineClickValue=_savedBaselineClickValue;
@property (readonly, nonatomic) double savedBaselineImpressionValue; // @synthesize savedBaselineImpressionValue=_savedBaselineImpressionValue;
@property (readonly, nonatomic) double savedClickValue; // @synthesize savedClickValue=_savedClickValue;
@property (readonly, nonatomic) double savedImpressionValue; // @synthesize savedImpressionValue=_savedImpressionValue;
@property (readonly, nonatomic) double searchBranchDecayIPad; // @synthesize searchBranchDecayIPad=_searchBranchDecayIPad;
@property (readonly, nonatomic) double searchBranchDecayIPhone; // @synthesize searchBranchDecayIPhone=_searchBranchDecayIPhone;
@property (readonly, nonatomic) long long searchBranchMultiplierIPad; // @synthesize searchBranchMultiplierIPad=_searchBranchMultiplierIPad;
@property (readonly, nonatomic) long long searchBranchMultiplierIPhone; // @synthesize searchBranchMultiplierIPhone=_searchBranchMultiplierIPhone;
@property (readonly, nonatomic) double searchTimeLimit; // @synthesize searchTimeLimit=_searchTimeLimit;
@property (readonly, nonatomic) double shareBaselineClickValue; // @synthesize shareBaselineClickValue=_shareBaselineClickValue;
@property (readonly, nonatomic) double shareBaselineImpressionValue; // @synthesize shareBaselineImpressionValue=_shareBaselineImpressionValue;
@property (readonly, nonatomic) double shareClickValue; // @synthesize shareClickValue=_shareClickValue;
@property (readonly, nonatomic) double shareImpressionValue; // @synthesize shareImpressionValue=_shareImpressionValue;
@property (readonly, nonatomic) double sliceTimeInterval; // @synthesize sliceTimeInterval=_sliceTimeInterval;
@property (readonly, nonatomic) double subscribeBaselineClickValue; // @synthesize subscribeBaselineClickValue=_subscribeBaselineClickValue;
@property (readonly, nonatomic) double subscribeBaselineImpressionValue; // @synthesize subscribeBaselineImpressionValue=_subscribeBaselineImpressionValue;
@property (readonly, nonatomic) double subscribeClickValue; // @synthesize subscribeClickValue=_subscribeClickValue;
@property (readonly, nonatomic) double subscribeImpressionValue; // @synthesize subscribeImpressionValue=_subscribeImpressionValue;
@property (readonly, nonatomic) double subscribeRelatedBaselineClickValue; // @synthesize subscribeRelatedBaselineClickValue=_subscribeRelatedBaselineClickValue;
@property (readonly, nonatomic) double subscribeRelatedBaselineImpressionValue; // @synthesize subscribeRelatedBaselineImpressionValue=_subscribeRelatedBaselineImpressionValue;
@property (readonly, nonatomic) double subscribeRelatedClickValue; // @synthesize subscribeRelatedClickValue=_subscribeRelatedClickValue;
@property (readonly, nonatomic) double subscribeRelatedImpressionValue; // @synthesize subscribeRelatedImpressionValue=_subscribeRelatedImpressionValue;
@property (nonatomic) double subscriptionCatchupDampeningFactor; // @synthesize subscriptionCatchupDampeningFactor=_subscriptionCatchupDampeningFactor;
@property (readonly, nonatomic) double subscriptionVoteCoefficient; // @synthesize subscriptionVoteCoefficient=_subscriptionVoteCoefficient;
@property (readonly, nonatomic) double tagFavoritedCoeff; // @synthesize tagFavoritedCoeff=_tagFavoritedCoeff;
@property (readonly, nonatomic) double tagPairsCoeffIPad; // @synthesize tagPairsCoeffIPad=_tagPairsCoeffIPad;
@property (readonly, nonatomic) double tagPairsCoeffIPhone; // @synthesize tagPairsCoeffIPhone=_tagPairsCoeffIPhone;
@property (readonly, nonatomic) double tagSizeCoeffIPad; // @synthesize tagSizeCoeffIPad=_tagSizeCoeffIPad;
@property (readonly, nonatomic) double tagSizeCoeffIPhone; // @synthesize tagSizeCoeffIPhone=_tagSizeCoeffIPhone;
@property (readonly, nonatomic) double tappedBaselineClickValue; // @synthesize tappedBaselineClickValue=_tappedBaselineClickValue;
@property (readonly, nonatomic) double tappedBaselineImpressionValue; // @synthesize tappedBaselineImpressionValue=_tappedBaselineImpressionValue;
@property (readonly, nonatomic) double tappedClickValue; // @synthesize tappedClickValue=_tappedClickValue;
@property (readonly, nonatomic) double tappedImpressionValue; // @synthesize tappedImpressionValue=_tappedImpressionValue;
@property (readonly, nonatomic) long long treatmentID; // @synthesize treatmentID=_treatmentID;
@property (readonly, nonatomic) double unsubscribeBaselineClickValue; // @synthesize unsubscribeBaselineClickValue=_unsubscribeBaselineClickValue;
@property (readonly, nonatomic) double unsubscribeBaselineImpressionValue; // @synthesize unsubscribeBaselineImpressionValue=_unsubscribeBaselineImpressionValue;
@property (readonly, nonatomic) double unsubscribeClickValue; // @synthesize unsubscribeClickValue=_unsubscribeClickValue;
@property (readonly, nonatomic) double unsubscribeImpressionValue; // @synthesize unsubscribeImpressionValue=_unsubscribeImpressionValue;
@property (readonly, nonatomic) double utilityWeightAlpha; // @synthesize utilityWeightAlpha=_utilityWeightAlpha;
@property (readonly, nonatomic) double utilityWeightBeta; // @synthesize utilityWeightBeta=_utilityWeightBeta;
@property (readonly, nonatomic) double visitBaselineClickValue; // @synthesize visitBaselineClickValue=_visitBaselineClickValue;
@property (readonly, nonatomic) double visitBaselineImpressionValue; // @synthesize visitBaselineImpressionValue=_visitBaselineImpressionValue;
@property (readonly, nonatomic) double visitClickValue; // @synthesize visitClickValue=_visitClickValue;
@property (readonly, nonatomic) double visitImpressionValue; // @synthesize visitImpressionValue=_visitImpressionValue;
@property (readonly, nonatomic) double weakClickBaselineClickValue; // @synthesize weakClickBaselineClickValue=_weakClickBaselineClickValue;
@property (readonly, nonatomic) double weakClickBaselineImpressionValue; // @synthesize weakClickBaselineImpressionValue=_weakClickBaselineImpressionValue;
@property (readonly, nonatomic) double weakClickClickValue; // @synthesize weakClickClickValue=_weakClickClickValue;
@property (readonly, nonatomic) double weakClickImpressionValue; // @synthesize weakClickImpressionValue=_weakClickImpressionValue;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPBPersonalizationTreatment:(id)arg1;

@end

