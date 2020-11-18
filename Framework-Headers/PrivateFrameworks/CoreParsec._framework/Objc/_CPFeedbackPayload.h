//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_CPFeedbackPayload-Protocol.h>

@class NSData, NSString, _CPCBAEngagementFeedback, _CPCacheHitFeedback, _CPCardSectionEngagementFeedback, _CPCardSectionFeedback, _CPCardViewAppearFeedback, _CPCardViewDisappearFeedback, _CPClearInputFeedback, _CPClientTimingFeedback, _CPConnectionInvalidatedFeedback, _CPCustomFeedback, _CPDidGoToSearchFeedback, _CPDidGoToSiteFeedback, _CPEndLocalSearchFeedback, _CPEndNetworkSearchFeedback, _CPEndSearchFeedback, _CPErrorFeedback, _CPFeedback, _CPLateSectionsAppendedFeedback, _CPLookupHintRelevancyFeedback, _CPMapsCardSectionEngagementFeedback, _CPRankingFeedback, _CPResultEngagementFeedback, _CPResultFeedback, _CPResultGradingFeedback, _CPResultRankingFeedback, _CPResultsReceivedAfterTimeoutFeedback, _CPSearchViewAppearFeedback, _CPSearchViewDisappearFeedback, _CPSectionEngagementFeedback, _CPSectionRankingFeedback, _CPSessionEndFeedback, _CPSessionMissingResultsFeedback, _CPSessionMissingSuggestionsFeedback, _CPSkipSearchFeedback, _CPStartLocalSearchFeedback, _CPStartNetworkSearchFeedback, _CPStartSearchFeedback, _CPStoreCardSectionEngagementFeedback, _CPSuggestionEngagementFeedback, _CPVisibleResultsFeedback, _CPVisibleSectionHeaderFeedback, _CPVisibleSuggestionsFeedback;
@protocol _CPProcessableFeedback;

@interface _CPFeedbackPayload : PBCodable <_CPFeedbackPayload, NSSecureCoding>
{
    _CPFeedback *_feedback;
    _CPSearchViewAppearFeedback *_searchViewAppearFeedback;
    _CPSearchViewDisappearFeedback *_searchViewDisappearFeedback;
    _CPRankingFeedback *_rankingFeedback;
    _CPSectionRankingFeedback *_sectionRankingFeedback;
    _CPResultRankingFeedback *_resultRankingFeedback;
    _CPResultFeedback *_resultFeedback;
    _CPResultEngagementFeedback *_resultEngagementFeedback;
    _CPVisibleResultsFeedback *_visibleResultsFeedback;
    _CPCardSectionFeedback *_cardSectionFeedback;
    _CPMapsCardSectionEngagementFeedback *_mapsCardSectionEngagementFeedback;
    _CPStoreCardSectionEngagementFeedback *_storeCardSectionEngagementFeedback;
    _CPStartSearchFeedback *_startSearchFeedback;
    _CPEndSearchFeedback *_endSearchFeedback;
    _CPStartNetworkSearchFeedback *_startNetworkSearchFeedback;
    _CPEndNetworkSearchFeedback *_endNetworkSearchFeedback;
    _CPStartLocalSearchFeedback *_startLocalSearchFeedback;
    _CPEndLocalSearchFeedback *_endLocalSearchFeedback;
    _CPErrorFeedback *_errorFeedback;
    _CPCustomFeedback *_customFeedback;
    _CPSuggestionEngagementFeedback *_suggestionEngagementFeedback;
    _CPCardViewDisappearFeedback *_cardViewDisappearFeedback;
    _CPVisibleSuggestionsFeedback *_visibleSuggestionsFeedback;
    _CPResultsReceivedAfterTimeoutFeedback *_resultsReceivedAfterTimeoutFeedback;
    _CPLateSectionsAppendedFeedback *_lateSectionsAppendedFeedback;
    _CPClearInputFeedback *_clearInputFeedback;
    _CPSectionEngagementFeedback *_sectionEngagementFeedback;
    _CPVisibleSectionHeaderFeedback *_visibleSectionHeaderFeedback;
    _CPDidGoToSiteFeedback *_didGoToSiteFeedback;
    _CPDidGoToSearchFeedback *_didGoToSearchFeedback;
    _CPSessionMissingResultsFeedback *_sessionMissingResultsFeedback;
    _CPSessionMissingSuggestionsFeedback *_sessionMissingSuggestionsFeedback;
    _CPResultGradingFeedback *_resultGradingFeedback;
    _CPLookupHintRelevancyFeedback *_lookupHintRelevancyFeedback;
    _CPConnectionInvalidatedFeedback *_connectionInvalidatedFeedback;
    _CPCardSectionEngagementFeedback *_cardSectionEngagementFeedback;
    _CPSessionEndFeedback *_sessionEndFeedback;
    _CPCardViewAppearFeedback *_cardViewAppearFeedback;
    _CPSkipSearchFeedback *_skipSearchFeedback;
    _CPCacheHitFeedback *_cacheHitFeedback;
    _CPCBAEngagementFeedback *_cbaEngagementFeedback;
    _CPClientTimingFeedback *_clientTimingFeedback;
    unsigned long long _queryId;
    unsigned long long _whichContained_Feedback;
}

@property (strong, nonatomic) _CPCacheHitFeedback *cacheHitFeedback; // @synthesize cacheHitFeedback=_cacheHitFeedback;
@property (strong, nonatomic) _CPCardSectionEngagementFeedback *cardSectionEngagementFeedback; // @synthesize cardSectionEngagementFeedback=_cardSectionEngagementFeedback;
@property (strong, nonatomic) _CPCardSectionFeedback *cardSectionFeedback; // @synthesize cardSectionFeedback=_cardSectionFeedback;
@property (strong, nonatomic) _CPCardViewAppearFeedback *cardViewAppearFeedback; // @synthesize cardViewAppearFeedback=_cardViewAppearFeedback;
@property (strong, nonatomic) _CPCardViewDisappearFeedback *cardViewDisappearFeedback; // @synthesize cardViewDisappearFeedback=_cardViewDisappearFeedback;
@property (strong, nonatomic) _CPCBAEngagementFeedback *cbaEngagementFeedback; // @synthesize cbaEngagementFeedback=_cbaEngagementFeedback;
@property (strong, nonatomic) _CPClearInputFeedback *clearInputFeedback; // @synthesize clearInputFeedback=_clearInputFeedback;
@property (strong, nonatomic) _CPClientTimingFeedback *clientTimingFeedback; // @synthesize clientTimingFeedback=_clientTimingFeedback;
@property (readonly, nonatomic) PBCodable<_CPProcessableFeedback> *codable;
@property (strong, nonatomic) _CPConnectionInvalidatedFeedback *connectionInvalidatedFeedback; // @synthesize connectionInvalidatedFeedback=_connectionInvalidatedFeedback;
@property (strong, nonatomic) _CPCustomFeedback *customFeedback; // @synthesize customFeedback=_customFeedback;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) _CPDidGoToSearchFeedback *didGoToSearchFeedback; // @synthesize didGoToSearchFeedback=_didGoToSearchFeedback;
@property (strong, nonatomic) _CPDidGoToSiteFeedback *didGoToSiteFeedback; // @synthesize didGoToSiteFeedback=_didGoToSiteFeedback;
@property (strong, nonatomic) _CPEndLocalSearchFeedback *endLocalSearchFeedback; // @synthesize endLocalSearchFeedback=_endLocalSearchFeedback;
@property (strong, nonatomic) _CPEndNetworkSearchFeedback *endNetworkSearchFeedback; // @synthesize endNetworkSearchFeedback=_endNetworkSearchFeedback;
@property (strong, nonatomic) _CPEndSearchFeedback *endSearchFeedback; // @synthesize endSearchFeedback=_endSearchFeedback;
@property (strong, nonatomic) _CPErrorFeedback *errorFeedback; // @synthesize errorFeedback=_errorFeedback;
@property (strong, nonatomic) _CPFeedback *feedback; // @synthesize feedback=_feedback;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (strong, nonatomic) _CPLateSectionsAppendedFeedback *lateSectionsAppendedFeedback; // @synthesize lateSectionsAppendedFeedback=_lateSectionsAppendedFeedback;
@property (strong, nonatomic) _CPLookupHintRelevancyFeedback *lookupHintRelevancyFeedback; // @synthesize lookupHintRelevancyFeedback=_lookupHintRelevancyFeedback;
@property (strong, nonatomic) _CPMapsCardSectionEngagementFeedback *mapsCardSectionEngagementFeedback; // @synthesize mapsCardSectionEngagementFeedback=_mapsCardSectionEngagementFeedback;
@property (nonatomic) unsigned long long queryId; // @synthesize queryId=_queryId;
@property (strong, nonatomic) _CPRankingFeedback *rankingFeedback; // @synthesize rankingFeedback=_rankingFeedback;
@property (strong, nonatomic) _CPResultEngagementFeedback *resultEngagementFeedback; // @synthesize resultEngagementFeedback=_resultEngagementFeedback;
@property (strong, nonatomic) _CPResultFeedback *resultFeedback; // @synthesize resultFeedback=_resultFeedback;
@property (strong, nonatomic) _CPResultGradingFeedback *resultGradingFeedback; // @synthesize resultGradingFeedback=_resultGradingFeedback;
@property (strong, nonatomic) _CPResultRankingFeedback *resultRankingFeedback; // @synthesize resultRankingFeedback=_resultRankingFeedback;
@property (strong, nonatomic) _CPResultsReceivedAfterTimeoutFeedback *resultsReceivedAfterTimeoutFeedback; // @synthesize resultsReceivedAfterTimeoutFeedback=_resultsReceivedAfterTimeoutFeedback;
@property (strong, nonatomic) _CPSearchViewAppearFeedback *searchViewAppearFeedback; // @synthesize searchViewAppearFeedback=_searchViewAppearFeedback;
@property (strong, nonatomic) _CPSearchViewDisappearFeedback *searchViewDisappearFeedback; // @synthesize searchViewDisappearFeedback=_searchViewDisappearFeedback;
@property (strong, nonatomic) _CPSectionEngagementFeedback *sectionEngagementFeedback; // @synthesize sectionEngagementFeedback=_sectionEngagementFeedback;
@property (strong, nonatomic) _CPSectionRankingFeedback *sectionRankingFeedback; // @synthesize sectionRankingFeedback=_sectionRankingFeedback;
@property (strong, nonatomic) _CPSessionEndFeedback *sessionEndFeedback; // @synthesize sessionEndFeedback=_sessionEndFeedback;
@property (strong, nonatomic) _CPSessionMissingResultsFeedback *sessionMissingResultsFeedback; // @synthesize sessionMissingResultsFeedback=_sessionMissingResultsFeedback;
@property (strong, nonatomic) _CPSessionMissingSuggestionsFeedback *sessionMissingSuggestionsFeedback; // @synthesize sessionMissingSuggestionsFeedback=_sessionMissingSuggestionsFeedback;
@property (strong, nonatomic) _CPSkipSearchFeedback *skipSearchFeedback; // @synthesize skipSearchFeedback=_skipSearchFeedback;
@property (strong, nonatomic) _CPStartLocalSearchFeedback *startLocalSearchFeedback; // @synthesize startLocalSearchFeedback=_startLocalSearchFeedback;
@property (strong, nonatomic) _CPStartNetworkSearchFeedback *startNetworkSearchFeedback; // @synthesize startNetworkSearchFeedback=_startNetworkSearchFeedback;
@property (strong, nonatomic) _CPStartSearchFeedback *startSearchFeedback; // @synthesize startSearchFeedback=_startSearchFeedback;
@property (strong, nonatomic) _CPStoreCardSectionEngagementFeedback *storeCardSectionEngagementFeedback; // @synthesize storeCardSectionEngagementFeedback=_storeCardSectionEngagementFeedback;
@property (strong, nonatomic) _CPSuggestionEngagementFeedback *suggestionEngagementFeedback; // @synthesize suggestionEngagementFeedback=_suggestionEngagementFeedback;
@property (readonly) Class superclass;
@property (readonly, nonatomic) int type;
@property (strong, nonatomic) _CPVisibleResultsFeedback *visibleResultsFeedback; // @synthesize visibleResultsFeedback=_visibleResultsFeedback;
@property (strong, nonatomic) _CPVisibleSectionHeaderFeedback *visibleSectionHeaderFeedback; // @synthesize visibleSectionHeaderFeedback=_visibleSectionHeaderFeedback;
@property (strong, nonatomic) _CPVisibleSuggestionsFeedback *visibleSuggestionsFeedback; // @synthesize visibleSuggestionsFeedback=_visibleSuggestionsFeedback;
@property (readonly, nonatomic) unsigned long long whichContained_Feedback; // @synthesize whichContained_Feedback=_whichContained_Feedback;

- (void).cxx_destruct;
- (void)clearContained_Feedback;
- (id)dictionaryRepresentation;
- (id)initWithCodable:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFeedback:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
