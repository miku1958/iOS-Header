//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class ICSearchQuery, ICTopHitSearchQuery, NSArray, NSError, NSMutableArray, NSMutableDictionary, NSString;

@interface ICSearchQueryOperation : NSOperation
{
    BOOL _modernResultsOnly;
    BOOL _performTopHitSearch;
    BOOL _performNLSearch;
    BOOL _allowEmptySearchString;
    CDUnknownBlockType _foundItemsHandler;
    NSMutableArray *_results;
    NSError *_error;
    long long _requestIndex;
    NSString *_searchString;
    NSArray *_searchSuggestions;
    ICSearchQuery *_defaultQuery;
    ICSearchQuery *_fuzzyQuery;
    ICSearchQuery *_substringQuery;
    ICSearchQuery *_nlQuery;
    ICSearchQuery *_spellingQuery;
    ICTopHitSearchQuery *_topHitQuery;
    NSMutableArray *_relatedWordQueries;
    NSMutableDictionary *_resultsDictionary;
    NSMutableDictionary *_uniqueIdentifiersOfAttachmentsFoundInNotes;
    NSString *_suggestionsQueryString;
    NSString *_keyboardLanguage;
    unsigned long long _rankingStrategy;
}

@property (readonly, nonatomic) BOOL allowEmptySearchString; // @synthesize allowEmptySearchString=_allowEmptySearchString;
@property (strong, nonatomic) ICSearchQuery *defaultQuery; // @synthesize defaultQuery=_defaultQuery;
@property (strong, nonatomic) NSError *error; // @synthesize error=_error;
@property (copy, nonatomic) CDUnknownBlockType foundItemsHandler; // @synthesize foundItemsHandler=_foundItemsHandler;
@property (strong, nonatomic) ICSearchQuery *fuzzyQuery; // @synthesize fuzzyQuery=_fuzzyQuery;
@property (copy, nonatomic) NSString *keyboardLanguage; // @synthesize keyboardLanguage=_keyboardLanguage;
@property (nonatomic) BOOL modernResultsOnly; // @synthesize modernResultsOnly=_modernResultsOnly;
@property (strong, nonatomic) ICSearchQuery *nlQuery; // @synthesize nlQuery=_nlQuery;
@property (nonatomic) BOOL performNLSearch; // @synthesize performNLSearch=_performNLSearch;
@property (nonatomic) BOOL performTopHitSearch; // @synthesize performTopHitSearch=_performTopHitSearch;
@property (nonatomic) unsigned long long rankingStrategy; // @synthesize rankingStrategy=_rankingStrategy;
@property (strong, nonatomic) NSMutableArray *relatedWordQueries; // @synthesize relatedWordQueries=_relatedWordQueries;
@property (nonatomic) long long requestIndex; // @synthesize requestIndex=_requestIndex;
@property (strong, nonatomic) NSMutableArray *results; // @synthesize results=_results;
@property (strong, nonatomic) NSMutableDictionary *resultsDictionary; // @synthesize resultsDictionary=_resultsDictionary;
@property (copy, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property (readonly, nonatomic) NSArray *searchSuggestions; // @synthesize searchSuggestions=_searchSuggestions;
@property (strong, nonatomic) ICSearchQuery *spellingQuery; // @synthesize spellingQuery=_spellingQuery;
@property (strong, nonatomic) ICSearchQuery *substringQuery; // @synthesize substringQuery=_substringQuery;
@property (copy, nonatomic) NSString *suggestionsQueryString; // @synthesize suggestionsQueryString=_suggestionsQueryString;
@property (strong, nonatomic) ICTopHitSearchQuery *topHitQuery; // @synthesize topHitQuery=_topHitQuery;
@property (strong, nonatomic) NSMutableDictionary *uniqueIdentifiersOfAttachmentsFoundInNotes; // @synthesize uniqueIdentifiersOfAttachmentsFoundInNotes=_uniqueIdentifiersOfAttachmentsFoundInNotes;

+ (id)exactMatchingQueryStringForTitleSearchString:(id)arg1;
+ (id)fuzzyMatchingQueryStringForSearchString:(id)arg1;
+ (id)highlightStringForAttributedInputs:(id)arg1;
+ (void)initialize;
+ (id)newOperationQueueWithName:(id)arg1;
+ (void)nlSearchQueryWithSearchString:(id)arg1 queryString:(id *)arg2 rankingQueries:(id *)arg3 highlightString:(id *)arg4;
+ (void *)nlpParser;
+ (id)nlpSerialQueue;
+ (id)prefixMatchingQueryStringForSearchString:(id)arg1;
+ (id)searchableItemsFromSortableItems:(id)arg1;
+ (id)substringMatchingQueryStringForSearchString:(id)arg1;
- (void).cxx_destruct;
- (void)appendSortableSearchableItemsToResults:(id)arg1;
- (void)cancel;
- (unsigned long long)countOfNonSpaceCharsInSearchString;
- (id)init;
- (id)initWithQueryString:(id)arg1 rankingQueries:(id)arg2;
- (id)initWithQueryString:(id)arg1 rankingQueries:(id)arg2 performTopHitSearch:(BOOL)arg3 modernResultsOnly:(BOOL)arg4;
- (id)initWithSearchString:(id)arg1 performNLSearch:(BOOL)arg2 performTopHitSearch:(BOOL)arg3 suggestions:(id)arg4;
- (id)initWithSearchString:(id)arg1 performNLSearch:(BOOL)arg2 performTopHitSearch:(BOOL)arg3 suggestions:(id)arg4 modernResultsOnly:(BOOL)arg5;
- (id)initWithUserInput:(id)arg1 performNLSearch:(BOOL)arg2 performTopHitSearch:(BOOL)arg3 modernResultsOnly:(BOOL)arg4;
- (id)jointQueryWithSuggestions:(id)arg1;
- (void)main;
- (void)performPrefixAndFuzzyAndSubstringQueries;
- (void)performRelatedWordQueriesIfNeeded;
- (void)performSpellCheckerAPIQueryIfNeeded;
- (void)performTopHitSearchQuery;
- (id)retrieveNotesOfFoundAttachmentsForSearchResults:(id)arg1;
- (id)runICSearchQuery:(id)arg1;
- (id)suggestionsQueryStringFromSuggestions:(id)arg1;

@end

