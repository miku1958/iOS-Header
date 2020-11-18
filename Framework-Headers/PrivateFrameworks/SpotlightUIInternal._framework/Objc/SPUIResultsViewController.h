//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUI/SearchUIResultsViewController.h>

#import <SpotlightUIInternal/SPSearchAgentDelegate-Protocol.h>
#import <SpotlightUIInternal/SPUIResultsViewTestingDelegate-Protocol.h>

@class NSArray, SFResultSection, SFSearchResult;
@protocol SPUIResultsViewDelegate;

@interface SPUIResultsViewController : SearchUIResultsViewController <SPSearchAgentDelegate, SPUIResultsViewTestingDelegate>
{
    unsigned long long _startTime;
    BOOL _hasResultsWaitingToUpdate;
    CDUnknownBlockType didFinishGettingAllResultsHandler;
    NSArray *_resultSections;
    SFResultSection *_suggestionsSection;
    SFResultSection *_searchThroughSection;
    unsigned long long _previousQueryId;
}

@property (readonly) SFSearchResult *actualSearchSuggestionResult;
@property (weak, nonatomic) id<SPUIResultsViewDelegate> delegate; // @dynamic delegate;
@property (copy, nonatomic) CDUnknownBlockType didFinishGettingAllResultsHandler; // @synthesize didFinishGettingAllResultsHandler;
@property BOOL hasResultsWaitingToUpdate; // @synthesize hasResultsWaitingToUpdate=_hasResultsWaitingToUpdate;
@property unsigned long long previousQueryId; // @synthesize previousQueryId=_previousQueryId;
@property (strong) NSArray *resultSections; // @synthesize resultSections=_resultSections;
@property (strong) SFResultSection *searchThroughSection; // @synthesize searchThroughSection=_searchThroughSection;
@property (strong) SFResultSection *suggestionsSection; // @synthesize suggestionsSection=_suggestionsSection;

- (void).cxx_destruct;
- (BOOL)_hasRealSuggestions;
- (void)_pushSectionsUpdate;
- (void)_truncateResultsSectionToFit;
- (void)clearSuggestionSection;
- (id)initWithSearchModel:(id)arg1;
- (BOOL)isResultOriginalSearchSuggestion:(id)arg1;
- (void)searchAgentClearedResults:(id)arg1;
- (void)searchAgentFinishedQueryWithoutAdditionalResults:(id)arg1;
- (void)searchAgentUpdatedResults:(id)arg1;
- (void)searchUpdatedWithString:(id)arg1 tokenEntity:(id)arg2 queryId:(unsigned long long)arg3 wantsCompletions:(BOOL)arg4;

@end
