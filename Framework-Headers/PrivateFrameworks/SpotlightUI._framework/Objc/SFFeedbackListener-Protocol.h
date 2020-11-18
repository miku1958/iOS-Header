//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpotlightUI/NSObject-Protocol.h>

@class SFCardSectionEngagementFeedback, SFCardViewAppearFeedback, SFCardViewDisappearFeedback, SFClearInputFeedback, SFCustomFeedback, SFDidGoToSearchFeedback, SFDidGoToSiteFeedback, SFEndSearchFeedback, SFErrorFeedback, SFFeedback, SFLateSectionsAppendedFeedback, SFLookupHintRelevancyFeedback, SFRankingFeedback, SFResultEngagementFeedback, SFResultGradingFeedback, SFResultsReceivedAfterTimeoutFeedback, SFSearchViewAppearFeedback, SFSearchViewDisappearFeedback, SFSectionEngagementFeedback, SFStartSearchFeedback, SFSuggestionEngagementFeedback, SFUserReportFeedback, SFVisibleResultsFeedback, SFVisibleSectionHeaderFeedback, SFVisibleSuggestionsFeedback;

@protocol SFFeedbackListener <NSObject>

@optional
- (void)cardViewDidAppear:(SFCardViewAppearFeedback *)arg1;
- (void)cardViewDidDisappear:(SFCardViewDisappearFeedback *)arg1;
- (void)didAppendLateSections:(SFLateSectionsAppendedFeedback *)arg1;
- (void)didClearInput:(SFClearInputFeedback *)arg1;
- (void)didEndSearch:(SFEndSearchFeedback *)arg1;
- (void)didEngageCardSection:(SFCardSectionEngagementFeedback *)arg1;
- (void)didEngageResult:(SFResultEngagementFeedback *)arg1;
- (void)didEngageSection:(SFSectionEngagementFeedback *)arg1;
- (void)didEngageSuggestion:(SFSuggestionEngagementFeedback *)arg1;
- (void)didErrorOccur:(SFErrorFeedback *)arg1;
- (void)didGoToSearch:(SFDidGoToSearchFeedback *)arg1;
- (void)didGoToSite:(SFDidGoToSiteFeedback *)arg1;
- (void)didGradeLookupHintRelevancy:(SFLookupHintRelevancyFeedback *)arg1;
- (void)didGradeResultRelevancy:(SFResultGradingFeedback *)arg1;
- (void)didRankSections:(SFRankingFeedback *)arg1;
- (void)didReceiveResultsAfterTimeout:(SFResultsReceivedAfterTimeoutFeedback *)arg1;
- (void)didReportUserResponseFeedback:(SFUserReportFeedback *)arg1;
- (void)didStartSearch:(SFStartSearchFeedback *)arg1;
- (void)didSubmitUserReportFeedback:(SFUserReportFeedback *)arg1;
- (void)reportFeedback:(SFFeedback *)arg1 queryId:(long long)arg2;
- (void)resultsDidBecomeVisible:(SFVisibleResultsFeedback *)arg1;
- (void)searchViewDidAppear:(SFSearchViewAppearFeedback *)arg1;
- (void)searchViewDidDisappear:(SFSearchViewDisappearFeedback *)arg1;
- (void)sectionHeaderDidBecomeVisible:(SFVisibleSectionHeaderFeedback *)arg1;
- (void)sendCustomFeedback:(SFCustomFeedback *)arg1;
- (void)suggestionsDidBecomeVisible:(SFVisibleSuggestionsFeedback *)arg1;
@end

