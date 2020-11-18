//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class FCCKDatabase, NSArray, NSError;

@interface FCCKOrderFeedQueryOperation : FCOperation
{
    FCCKDatabase *_database;
    NSArray *_feedRequests;
    NSArray *_desiredKeys;
    unsigned long long _resultsLimit;
    long long _queryPriority;
    NSArray *_articleKeysMappingToTag;
    CDUnknownBlockType _queryCompletionHandler;
    NSArray *_resultFeedItemAndArticleRecords;
    NSArray *_resultTagRecords;
    NSArray *_resultFeedResponses;
    NSError *_resultError;
}

@property (copy, nonatomic) NSArray *articleKeysMappingToTag; // @synthesize articleKeysMappingToTag=_articleKeysMappingToTag;
@property (strong, nonatomic) FCCKDatabase *database; // @synthesize database=_database;
@property (copy, nonatomic) NSArray *desiredKeys; // @synthesize desiredKeys=_desiredKeys;
@property (copy, nonatomic) NSArray *feedRequests; // @synthesize feedRequests=_feedRequests;
@property (copy, nonatomic) CDUnknownBlockType queryCompletionHandler; // @synthesize queryCompletionHandler=_queryCompletionHandler;
@property (nonatomic) long long queryPriority; // @synthesize queryPriority=_queryPriority;
@property (strong, nonatomic) NSError *resultError; // @synthesize resultError=_resultError;
@property (strong, nonatomic) NSArray *resultFeedItemAndArticleRecords; // @synthesize resultFeedItemAndArticleRecords=_resultFeedItemAndArticleRecords;
@property (strong, nonatomic) NSArray *resultFeedResponses; // @synthesize resultFeedResponses=_resultFeedResponses;
@property (strong, nonatomic) NSArray *resultTagRecords; // @synthesize resultTagRecords=_resultTagRecords;
@property (nonatomic) unsigned long long resultsLimit; // @synthesize resultsLimit=_resultsLimit;

- (void).cxx_destruct;
- (id)_constructFeedQuery;
- (id)_feedRelativeDictionaryFromResultsArray:(id)arg1;
- (id)_predicateForPerFeedFieldName:(id)arg1 key:(id)arg2 defaultValue:(id)arg3;
- (void)_processResultsRecord:(id)arg1 feedItemAndArticleRecords:(id)arg2 tagRecords:(id)arg3;
- (id)_requiredKeys;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (void)prepareOperation;
- (void)resetForRetry;
- (BOOL)validateOperation;

@end
