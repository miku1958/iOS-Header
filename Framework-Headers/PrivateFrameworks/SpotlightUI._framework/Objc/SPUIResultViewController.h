//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUI/SearchUIResultViewController.h>

#import <SpotlightUI/SPSearchAgentDelegate-Protocol.h>

@class NSArray, SFResultSection, SFSearchResult;
@protocol SPUIResultViewDelegate;

@interface SPUIResultViewController : SearchUIResultViewController <SPSearchAgentDelegate>
{
    BOOL _hasResultsWaitingToUpdate;
    NSArray *_resultSections;
    SFResultSection *_suggestionsSection;
    SFResultSection *_searchThroughSection;
}

@property (readonly) SFSearchResult *actualSearchSuggestionResult;
@property (weak, nonatomic) id<SPUIResultViewDelegate> delegate; // @dynamic delegate;
@property BOOL hasResultsWaitingToUpdate; // @synthesize hasResultsWaitingToUpdate=_hasResultsWaitingToUpdate;
@property (strong) NSArray *resultSections; // @synthesize resultSections=_resultSections;
@property (strong) SFResultSection *searchThroughSection; // @synthesize searchThroughSection=_searchThroughSection;
@property (strong) SFResultSection *suggestionsSection; // @synthesize suggestionsSection=_suggestionsSection;

+ (unsigned long long)defaultStyle;
- (void).cxx_destruct;
- (BOOL)_hasRealSuggestions;
- (id)_newSuggestionSection;
- (void)_pushSectionsUpdate;
- (void)_truncateResultsSectionToFit;
- (void)_updateCombinedSections;
- (void)clearSuggestionSection;
- (id)initWithSearchModel:(id)arg1;
- (BOOL)isResultOriginalSearchSuggestion:(id)arg1;
- (void)searchAgentClearedResults:(id)arg1;
- (void)searchAgentUpdatedResults:(id)arg1;
- (void)searchStringUpdated:(id)arg1 wantsCompletions:(BOOL)arg2;

@end

