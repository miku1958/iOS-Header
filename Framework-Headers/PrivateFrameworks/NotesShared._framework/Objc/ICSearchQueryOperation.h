//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class ICSearchQuery, NSError, NSMutableArray, NSMutableDictionary, NSString;

@interface ICSearchQueryOperation : NSOperation
{
    BOOL _shouldPerformRankingComparison;
    BOOL _modernResultsOnly;
    BOOL _useRankingQueries;
    BOOL _performNLSearch;
    BOOL _allowEmptySearchString;
    CDUnknownBlockType _foundItemsHandler;
    NSMutableArray *_results;
    NSError *_error;
    long long _requestIndex;
    ICSearchQuery *_defaultQuery;
    ICSearchQuery *_substringQuery;
    ICSearchQuery *_nlQuery;
    ICSearchQuery *_spellingQuery;
    NSMutableArray *_relatedWordQueries;
    NSMutableDictionary *_resultsDictionary;
    NSMutableDictionary *_rankingScores;
    NSMutableDictionary *_matchedFields;
    NSMutableDictionary *_isPrefixMatch;
    NSMutableDictionary *_relevancesBitField;
    NSMutableDictionary *_modificationDateBucket;
    NSMutableDictionary *_rankComparison;
    NSString *_searchString;
    NSString *_suggestionsQueryString;
    unsigned long long _rankingStrategy;
}

@property (readonly, nonatomic) BOOL allowEmptySearchString; // @synthesize allowEmptySearchString=_allowEmptySearchString;
@property (strong, nonatomic) ICSearchQuery *defaultQuery; // @synthesize defaultQuery=_defaultQuery;
@property (strong, nonatomic) NSError *error; // @synthesize error=_error;
@property (copy, nonatomic) CDUnknownBlockType foundItemsHandler; // @synthesize foundItemsHandler=_foundItemsHandler;
@property (strong, nonatomic) NSMutableDictionary *isPrefixMatch; // @synthesize isPrefixMatch=_isPrefixMatch;
@property (strong, nonatomic) NSMutableDictionary *matchedFields; // @synthesize matchedFields=_matchedFields;
@property (nonatomic) BOOL modernResultsOnly; // @synthesize modernResultsOnly=_modernResultsOnly;
@property (strong, nonatomic) NSMutableDictionary *modificationDateBucket; // @synthesize modificationDateBucket=_modificationDateBucket;
@property (strong, nonatomic) ICSearchQuery *nlQuery; // @synthesize nlQuery=_nlQuery;
@property (nonatomic) BOOL performNLSearch; // @synthesize performNLSearch=_performNLSearch;
@property (strong, nonatomic) NSMutableDictionary *rankComparison; // @synthesize rankComparison=_rankComparison;
@property (strong, nonatomic) NSMutableDictionary *rankingScores; // @synthesize rankingScores=_rankingScores;
@property (nonatomic) unsigned long long rankingStrategy; // @synthesize rankingStrategy=_rankingStrategy;
@property (strong, nonatomic) NSMutableArray *relatedWordQueries; // @synthesize relatedWordQueries=_relatedWordQueries;
@property (strong, nonatomic) NSMutableDictionary *relevancesBitField; // @synthesize relevancesBitField=_relevancesBitField;
@property (nonatomic) long long requestIndex; // @synthesize requestIndex=_requestIndex;
@property (strong, nonatomic) NSMutableArray *results; // @synthesize results=_results;
@property (strong, nonatomic) NSMutableDictionary *resultsDictionary; // @synthesize resultsDictionary=_resultsDictionary;
@property (strong, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property (nonatomic) BOOL shouldPerformRankingComparison; // @synthesize shouldPerformRankingComparison=_shouldPerformRankingComparison;
@property (strong, nonatomic) ICSearchQuery *spellingQuery; // @synthesize spellingQuery=_spellingQuery;
@property (strong, nonatomic) ICSearchQuery *substringQuery; // @synthesize substringQuery=_substringQuery;
@property (strong, nonatomic) NSString *suggestionsQueryString; // @synthesize suggestionsQueryString=_suggestionsQueryString;
@property (nonatomic) BOOL useRankingQueries; // @synthesize useRankingQueries=_useRankingQueries;

+ (id)exactMatchingQueryStringForTitleSearchString:(id)arg1;
+ (id)highlightStringForAttributedInputs:(id)arg1;
+ (void)initialize;
+ (void)nlSearchQueryWithSearchString:(id)arg1 queryString:(id *)arg2 rankingQueries:(id *)arg3 highlightString:(id *)arg4;
+ (void *)nlpParser;
+ (id)nlpSerialQueue;
+ (id)prefixMatchingQueryStringForSearchString:(id)arg1;
+ (id)queryFields;
+ (id)queryStringForSearchString:(id)arg1 queryFields:(id)arg2 matchType:(unsigned char)arg3;
+ (id)substringMatchingQueryStringForSearchString:(id)arg1;
- (void).cxx_destruct;
- (void)cancel;
- (unsigned long long)countOfNonSpaceCharsInSearchString;
- (id)init;
- (id)initWithQueryString:(id)arg1 rankingQueries:(id)arg2;
- (id)initWithQueryString:(id)arg1 rankingQueries:(id)arg2 modernResultsOnly:(BOOL)arg3;
- (id)initWithSearchString:(id)arg1 useRankingQueries:(BOOL)arg2 performNLSearch:(BOOL)arg3 suggestions:(id)arg4;
- (id)initWithSearchString:(id)arg1 useRankingQueries:(BOOL)arg2 performNLSearch:(BOOL)arg3 suggestions:(id)arg4 modernResultsOnly:(BOOL)arg5;
- (id)initWithUserInput:(id)arg1 useRankingQueries:(BOOL)arg2 performNLSearch:(BOOL)arg3;
- (id)initWithUserInput:(id)arg1 useRankingQueries:(BOOL)arg2 performNLSearch:(BOOL)arg3 modernResultsOnly:(BOOL)arg4;
- (id)jointQueryWithSuggestions:(id)arg1;
- (void)main;
- (unsigned long long)matchedFieldForSearchableItem:(id)arg1;
- (void)performPrefixAndSubstringQueries;
- (void)performRelatedWordQueriesIfNeeded;
- (void)performSpellingQueryIfNeeded;
- (id)rankComparisonForSearchableItem:(id)arg1;
- (double)rankingScoreForSearchableItem:(id)arg1;
- (unsigned long long)relevanceBitFieldForSearchableItem:(id)arg1;
- (void)runQuery:(id)arg1;
- (id)sortedSearchableItemsOfIdentifiers:(id)arg1;
- (id)suggestionsQueryStringFromSuggestions:(id)arg1;
- (id)suggestionsQueryStringFromUserInput:(id)arg1;

@end
