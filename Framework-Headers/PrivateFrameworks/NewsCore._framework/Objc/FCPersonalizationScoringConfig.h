//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/NSCopying-Protocol.h>
#import <NewsCore/NSSecureCoding-Protocol.h>

@class FCPersonalizationCohortConfig;

@interface FCPersonalizationScoringConfig : NSObject <NSCopying, NSSecureCoding>
{
    double _articleLengthAggregateWeight;
    double _articleReadPenalty;
    double _audioMultiplierForFreeUsers;
    double _audioMultiplierForTrialUsers;
    double _audioMultiplierForPaidUsers;
    double _autofavoritedVoteCoefficient;
    double _baselineRatePrior;
    double _bundleFreeMultiplierForFreeUsers;
    double _bundleFreeMultiplierForTrialUsers;
    double _bundleFreeMultiplierForPaidUsers;
    double _bundlePaidMultiplierForFreeUsers;
    double _bundlePaidMultiplierForTrialUsers;
    double _bundlePaidMultiplierForPaidUsers;
    double _channelTopicDiversificationInitialPenalty;
    double _channelTopicDiversificationPenalty;
    double _channelTopicDiversificationPenaltyHalfLife;
    double _conversionCoefficientForFreeUsers;
    double _conversionCoefficientForTrialUsers;
    double _conversionCoefficientForPaidUsers;
    FCPersonalizationCohortConfig *_conversionCohort;
    double _ctrWithOneAutofavorited;
    double _ctrWithOneSubscribed;
    double _ctrWithSubscribedChannel;
    double _ctrWithThreeAutofavorited;
    double _ctrWithThreeSubscribed;
    double _ctrWithTwoAutofavorited;
    double _ctrWithTwoSubscribed;
    double _ctrWithZeroAutofavorited;
    double _ctrWithZeroSubscribed;
    double _decayFactor;
    double _democratizationFactor;
    double _diversificationInitialPenalty;
    double _diversificationPenalty;
    double _diversificationPenaltyHalfLife;
    double _featuredMultiplierForFreeUsers;
    double _featuredMultiplierForTrialUsers;
    double _featuredMultiplierForPaidUsers;
    double _evergreenMultiplierForFreeUsers;
    double _evergreenMultiplierForTrialUsers;
    double _evergreenMultiplierForPaidUsers;
    double _firstPassHalfLifeCoefficient;
    double _firstPassEvergreenHalfLifeCoefficient;
    double _firstPassDiversificationPenalty;
    double _firstPassArticleFilter;
    double _globalScoreCoefficientFree;
    double _globalScoreCoefficientPaid;
    double _globalScoreCoefficientHalfLife;
    double _globalScoreCoefficientInitialMultiplier;
    double _headlineSeenPenalty;
    double _halfLifeCoefficient;
    double _evergreenHalfLifeCoefficient;
    double _mutedVoteCoefficient;
    double _personalizationCoefficient;
    double _publisherAggregateWeight;
    double _sparseTagsPenalty;
    double _subscribedChannelScoreCoefficient;
    double _subscribedTopicsScoreCoefficient;
    FCPersonalizationCohortConfig *_userCohort;
}

@property (nonatomic) double articleLengthAggregateWeight; // @synthesize articleLengthAggregateWeight=_articleLengthAggregateWeight;
@property (nonatomic) double articleReadPenalty; // @synthesize articleReadPenalty=_articleReadPenalty;
@property (nonatomic) double audioMultiplierForFreeUsers; // @synthesize audioMultiplierForFreeUsers=_audioMultiplierForFreeUsers;
@property (nonatomic) double audioMultiplierForPaidUsers; // @synthesize audioMultiplierForPaidUsers=_audioMultiplierForPaidUsers;
@property (nonatomic) double audioMultiplierForTrialUsers; // @synthesize audioMultiplierForTrialUsers=_audioMultiplierForTrialUsers;
@property (nonatomic) double autofavoritedVoteCoefficient; // @synthesize autofavoritedVoteCoefficient=_autofavoritedVoteCoefficient;
@property (nonatomic) double baselineRatePrior; // @synthesize baselineRatePrior=_baselineRatePrior;
@property (nonatomic) double bundleFreeMultiplierForFreeUsers; // @synthesize bundleFreeMultiplierForFreeUsers=_bundleFreeMultiplierForFreeUsers;
@property (nonatomic) double bundleFreeMultiplierForPaidUsers; // @synthesize bundleFreeMultiplierForPaidUsers=_bundleFreeMultiplierForPaidUsers;
@property (nonatomic) double bundleFreeMultiplierForTrialUsers; // @synthesize bundleFreeMultiplierForTrialUsers=_bundleFreeMultiplierForTrialUsers;
@property (nonatomic) double bundlePaidMultiplierForFreeUsers; // @synthesize bundlePaidMultiplierForFreeUsers=_bundlePaidMultiplierForFreeUsers;
@property (nonatomic) double bundlePaidMultiplierForPaidUsers; // @synthesize bundlePaidMultiplierForPaidUsers=_bundlePaidMultiplierForPaidUsers;
@property (nonatomic) double bundlePaidMultiplierForTrialUsers; // @synthesize bundlePaidMultiplierForTrialUsers=_bundlePaidMultiplierForTrialUsers;
@property (nonatomic) double channelTopicDiversificationInitialPenalty; // @synthesize channelTopicDiversificationInitialPenalty=_channelTopicDiversificationInitialPenalty;
@property (nonatomic) double channelTopicDiversificationPenalty; // @synthesize channelTopicDiversificationPenalty=_channelTopicDiversificationPenalty;
@property (nonatomic) double channelTopicDiversificationPenaltyHalfLife; // @synthesize channelTopicDiversificationPenaltyHalfLife=_channelTopicDiversificationPenaltyHalfLife;
@property (nonatomic) double conversionCoefficientForFreeUsers; // @synthesize conversionCoefficientForFreeUsers=_conversionCoefficientForFreeUsers;
@property (nonatomic) double conversionCoefficientForPaidUsers; // @synthesize conversionCoefficientForPaidUsers=_conversionCoefficientForPaidUsers;
@property (nonatomic) double conversionCoefficientForTrialUsers; // @synthesize conversionCoefficientForTrialUsers=_conversionCoefficientForTrialUsers;
@property (strong, nonatomic) FCPersonalizationCohortConfig *conversionCohort; // @synthesize conversionCohort=_conversionCohort;
@property (nonatomic) double ctrWithOneAutofavorited; // @synthesize ctrWithOneAutofavorited=_ctrWithOneAutofavorited;
@property (nonatomic) double ctrWithOneSubscribed; // @synthesize ctrWithOneSubscribed=_ctrWithOneSubscribed;
@property (nonatomic) double ctrWithSubscribedChannel; // @synthesize ctrWithSubscribedChannel=_ctrWithSubscribedChannel;
@property (nonatomic) double ctrWithThreeAutofavorited; // @synthesize ctrWithThreeAutofavorited=_ctrWithThreeAutofavorited;
@property (nonatomic) double ctrWithThreeSubscribed; // @synthesize ctrWithThreeSubscribed=_ctrWithThreeSubscribed;
@property (nonatomic) double ctrWithTwoAutofavorited; // @synthesize ctrWithTwoAutofavorited=_ctrWithTwoAutofavorited;
@property (nonatomic) double ctrWithTwoSubscribed; // @synthesize ctrWithTwoSubscribed=_ctrWithTwoSubscribed;
@property (nonatomic) double ctrWithZeroAutofavorited; // @synthesize ctrWithZeroAutofavorited=_ctrWithZeroAutofavorited;
@property (nonatomic) double ctrWithZeroSubscribed; // @synthesize ctrWithZeroSubscribed=_ctrWithZeroSubscribed;
@property (nonatomic) double decayFactor; // @synthesize decayFactor=_decayFactor;
@property (nonatomic) double democratizationFactor; // @synthesize democratizationFactor=_democratizationFactor;
@property (nonatomic) double diversificationInitialPenalty; // @synthesize diversificationInitialPenalty=_diversificationInitialPenalty;
@property (nonatomic) double diversificationPenalty; // @synthesize diversificationPenalty=_diversificationPenalty;
@property (nonatomic) double diversificationPenaltyHalfLife; // @synthesize diversificationPenaltyHalfLife=_diversificationPenaltyHalfLife;
@property (nonatomic) double evergreenHalfLifeCoefficient; // @synthesize evergreenHalfLifeCoefficient=_evergreenHalfLifeCoefficient;
@property (nonatomic) double evergreenMultiplierForFreeUsers; // @synthesize evergreenMultiplierForFreeUsers=_evergreenMultiplierForFreeUsers;
@property (nonatomic) double evergreenMultiplierForPaidUsers; // @synthesize evergreenMultiplierForPaidUsers=_evergreenMultiplierForPaidUsers;
@property (nonatomic) double evergreenMultiplierForTrialUsers; // @synthesize evergreenMultiplierForTrialUsers=_evergreenMultiplierForTrialUsers;
@property (nonatomic) double featuredMultiplierForFreeUsers; // @synthesize featuredMultiplierForFreeUsers=_featuredMultiplierForFreeUsers;
@property (nonatomic) double featuredMultiplierForPaidUsers; // @synthesize featuredMultiplierForPaidUsers=_featuredMultiplierForPaidUsers;
@property (nonatomic) double featuredMultiplierForTrialUsers; // @synthesize featuredMultiplierForTrialUsers=_featuredMultiplierForTrialUsers;
@property (nonatomic) double firstPassArticleFilter; // @synthesize firstPassArticleFilter=_firstPassArticleFilter;
@property (nonatomic) double firstPassDiversificationPenalty; // @synthesize firstPassDiversificationPenalty=_firstPassDiversificationPenalty;
@property (nonatomic) double firstPassEvergreenHalfLifeCoefficient; // @synthesize firstPassEvergreenHalfLifeCoefficient=_firstPassEvergreenHalfLifeCoefficient;
@property (nonatomic) double firstPassHalfLifeCoefficient; // @synthesize firstPassHalfLifeCoefficient=_firstPassHalfLifeCoefficient;
@property (nonatomic) double globalScoreCoefficientFree; // @synthesize globalScoreCoefficientFree=_globalScoreCoefficientFree;
@property (nonatomic) double globalScoreCoefficientHalfLife; // @synthesize globalScoreCoefficientHalfLife=_globalScoreCoefficientHalfLife;
@property (nonatomic) double globalScoreCoefficientInitialMultiplier; // @synthesize globalScoreCoefficientInitialMultiplier=_globalScoreCoefficientInitialMultiplier;
@property (nonatomic) double globalScoreCoefficientPaid; // @synthesize globalScoreCoefficientPaid=_globalScoreCoefficientPaid;
@property (nonatomic) double halfLifeCoefficient; // @synthesize halfLifeCoefficient=_halfLifeCoefficient;
@property (nonatomic) double headlineSeenPenalty; // @synthesize headlineSeenPenalty=_headlineSeenPenalty;
@property (nonatomic) double mutedVoteCoefficient; // @synthesize mutedVoteCoefficient=_mutedVoteCoefficient;
@property (nonatomic) double personalizationCoefficient; // @synthesize personalizationCoefficient=_personalizationCoefficient;
@property (nonatomic) double publisherAggregateWeight; // @synthesize publisherAggregateWeight=_publisherAggregateWeight;
@property (nonatomic) double sparseTagsPenalty; // @synthesize sparseTagsPenalty=_sparseTagsPenalty;
@property (nonatomic) double subscribedChannelScoreCoefficient; // @synthesize subscribedChannelScoreCoefficient=_subscribedChannelScoreCoefficient;
@property (nonatomic) double subscribedTopicsScoreCoefficient; // @synthesize subscribedTopicsScoreCoefficient=_subscribedTopicsScoreCoefficient;
@property (strong, nonatomic) FCPersonalizationCohortConfig *userCohort; // @synthesize userCohort=_userCohort;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithArticleLengthAggregateWeight:(double)arg1 articleReadPenalty:(double)arg2 audioMultiplierForFreeUsers:(double)arg3 audioMultiplierForTrialUsers:(double)arg4 audioMultiplierForPaidUsers:(double)arg5 autofavoritedVoteCoefficient:(double)arg6 baselineRatePrior:(double)arg7 bundleFreeMultiplierForFreeUsers:(double)arg8 bundleFreeMultiplierForTrialUsers:(double)arg9 bundleFreeMultiplierForPaidUsers:(double)arg10 bundlePaidMultiplierForFreeUsers:(double)arg11 bundlePaidMultiplierForTrialUsers:(double)arg12 bundlePaidMultiplierForPaidUsers:(double)arg13 channelTopicDiversificationInitialPenalty:(double)arg14 channelTopicDiversificationPenalty:(double)arg15 channelTopicDiversificationPenaltyHalfLife:(double)arg16 conversionCoefficientForFreeUsers:(double)arg17 conversionCoefficientForTrialUsers:(double)arg18 conversionCoefficientForPaidUsers:(double)arg19 conversionCohort:(id)arg20 ctrWithOneAutofavorited:(double)arg21 ctrWithOneSubscribed:(double)arg22 ctrWithSubscribedChannel:(double)arg23 ctrWithThreeAutofavorited:(double)arg24 ctrWithThreeSubscribed:(double)arg25 ctrWithTwoAutofavorited:(double)arg26 ctrWithTwoSubscribed:(double)arg27 ctrWithZeroAutofavorited:(double)arg28 ctrWithZeroSubscribed:(double)arg29 decayFactor:(double)arg30 democratizationFactor:(double)arg31 diversificationInitialPenalty:(double)arg32 diversificationPenalty:(double)arg33 diversificationPenaltyHalfLife:(double)arg34 featuredMultiplierForFreeUsers:(double)arg35 featuredMultiplierForTrialUsers:(double)arg36 featuredMultiplierForPaidUsers:(double)arg37 evergreenMultiplierForFreeUsers:(double)arg38 evergreenMultiplierForTrialUsers:(double)arg39 evergreenMultiplierForPaidUsers:(double)arg40 firstPassHalfLifeCoefficient:(double)arg41 firstPassEvergreenHalfLifeCoefficient:(double)arg42 firstPassDiversificationPenalty:(double)arg43 firstPassArticleFilter:(double)arg44 globalScoreCoefficientFree:(double)arg45 globalScoreCoefficientPaid:(double)arg46 globalScoreCoefficientHalfLife:(double)arg47 globalScoreCoefficientInitialMultiplier:(double)arg48 headlineSeenPenalty:(double)arg49 halfLifeCoefficient:(double)arg50 evergreenHalfLifeCoefficient:(double)arg51 mutedVoteCoefficient:(double)arg52 personalizationCoefficient:(double)arg53 publisherAggregateWeight:(double)arg54 sparseTagsPenalty:(double)arg55 subscribedChannelScoreCoefficient:(double)arg56 subscribedTopicsScoreCoefficient:(double)arg57 userCohort:(id)arg58;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfigDictionary:(id)arg1;
- (id)initWithConfigDictionary:(id)arg1 defaultConfig:(id)arg2;

@end

