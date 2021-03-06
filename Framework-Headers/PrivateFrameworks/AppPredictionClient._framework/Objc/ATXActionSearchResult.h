//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFSearchResult.h>

@class ATXAction, ATXActionResponse, ATXHeroAppPrediction, ATXProactiveSuggestion;

@interface ATXActionSearchResult : SFSearchResult
{
    ATXActionResponse *_actionResponse;
    ATXAction *_atxAction;
    ATXHeroAppPrediction *_heroApp;
    ATXProactiveSuggestion *_proactiveSuggestion;
}

@property (strong, nonatomic) ATXActionResponse *actionResponse; // @synthesize actionResponse=_actionResponse;
@property (readonly, nonatomic) ATXAction *atxAction; // @synthesize atxAction=_atxAction;
@property (readonly, nonatomic) ATXHeroAppPrediction *heroApp; // @synthesize heroApp=_heroApp;
@property (readonly, nonatomic) ATXProactiveSuggestion *proactiveSuggestion; // @synthesize proactiveSuggestion=_proactiveSuggestion;

+ (id)_demoModeActionResponse;
+ (BOOL)_demoModeEnabled;
+ (id)_recentDonationProactiveSuggestionFromScoredAction:(id)arg1 withClientModelId:(id)arg2;
+ (id)_unarchiveATXActionFromSuggestion:(id)arg1;
+ (id)_unarchiveATXHeroAppPredictionFromSuggestion:(id)arg1;
+ (id)_unarchiveObjectFromSuggestion:(id)arg1;
+ (id)actionResponseForDeveloperMode;
+ (id)actionResponseForDeveloperModeWithClientId:(id)arg1 shouldShowRecentDonations:(BOOL)arg2;
+ (id)actionResponseForDeveloperModeWithShouldShowRecentDonations:(BOOL)arg1 shouldShowParameterCombinations:(BOOL)arg2 shouldShowUpcomingMedia:(BOOL)arg3;
+ (id)actionResponseForDeveloperModeWithShouldShowRecentDonations:(BOOL)arg1 shouldShowParameterCombinations:(BOOL)arg2 shouldShowUpcomingMedia:(BOOL)arg3 withClientModelId:(id)arg4;
+ (id)actionSearchResultFromProactiveSuggestion:(id)arg1 actionResponse:(id)arg2 avRoutingSessionHelper:(id)arg3 nowPlayingDataProvider:(id)arg4;
+ (id)actionSearchResultFromScoredAction:(id)arg1 actionResponse:(id)arg2 avRoutingSessionHelper:(id)arg3 nowPlayingDataProvider:(id)arg4;
+ (id)generatedSearchResultForAction:(id)arg1 actionResponse:(id)arg2;
+ (id)generatedSearchResultForProactiveSuggestion:(id)arg1 actionResponse:(id)arg2;
+ (id)mostRecentDonationParameterCombinations;
+ (id)predictedActionSearchResultsWithLimit:(long long)arg1 forBundleIdentifiers:(id)arg2;
+ (id)recentDonationsStarting:(id)arg1 end:(id)arg2 number:(unsigned long long)arg3;
+ (id)recentUpcomingMedia;
+ (BOOL)shouldDisplayRecentActionsOnHomeScreen;
+ (BOOL)shouldDisplayRecentDonationsForTesting;
+ (BOOL)shouldDisplayUpcomingMediaForTesting;
+ (BOOL)shouldDisplayValidParameterCombinations;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_updateInlineCardWithContent:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToActionSearchResult:(id)arg1;
- (void)setAtxAction:(id)arg1;
- (void)setHeroApp:(id)arg1;
- (void)setProactiveSuggestion:(id)arg1;

@end

