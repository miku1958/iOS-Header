//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class NSArray, NSDictionary, NSError, NSMutableArray, NSMutableDictionary;
@protocol FCContentContext;

@interface FCBatchedRecordChainFetchOperation : FCOperation
{
    unsigned long long _maxBatchSize;
    id<FCContentContext> _context;
    NSArray *_topLevelRecordIDs;
    NSDictionary *_linkKeysByRecordType;
    NSDictionary *_cachePoliciesByRecordType;
    CDUnknownBlockType _dynamicCachePolicyBlock;
    NSArray *_additionalRecordSources;
    CDUnknownBlockType _cachedRecordsLookupBlock;
    CDUnknownBlockType _recordChainCompletionHandler;
    NSMutableArray *_remainingRecordIDBatches;
    NSMutableDictionary *_resultHeldRecordsByType;
    NSError *_operationError;
}

@property (strong, nonatomic) NSArray *additionalRecordSources; // @synthesize additionalRecordSources=_additionalRecordSources;
@property (copy, nonatomic) NSDictionary *cachePoliciesByRecordType; // @synthesize cachePoliciesByRecordType=_cachePoliciesByRecordType;
@property (copy, nonatomic) CDUnknownBlockType cachedRecordsLookupBlock; // @synthesize cachedRecordsLookupBlock=_cachedRecordsLookupBlock;
@property (strong, nonatomic) id<FCContentContext> context; // @synthesize context=_context;
@property (copy, nonatomic) CDUnknownBlockType dynamicCachePolicyBlock; // @synthesize dynamicCachePolicyBlock=_dynamicCachePolicyBlock;
@property (copy, nonatomic) NSDictionary *linkKeysByRecordType; // @synthesize linkKeysByRecordType=_linkKeysByRecordType;
@property (nonatomic) unsigned long long maxBatchSize; // @synthesize maxBatchSize=_maxBatchSize;
@property (strong, nonatomic) NSError *operationError; // @synthesize operationError=_operationError;
@property (copy, nonatomic) CDUnknownBlockType recordChainCompletionHandler; // @synthesize recordChainCompletionHandler=_recordChainCompletionHandler;
@property (strong, nonatomic) NSMutableArray *remainingRecordIDBatches; // @synthesize remainingRecordIDBatches=_remainingRecordIDBatches;
@property (strong, nonatomic) NSMutableDictionary *resultHeldRecordsByType; // @synthesize resultHeldRecordsByType=_resultHeldRecordsByType;
@property (copy, nonatomic) NSArray *topLevelRecordIDs; // @synthesize topLevelRecordIDs=_topLevelRecordIDs;

- (void).cxx_destruct;
- (void)_continueRefreshing;
- (id)init;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (void)resetForRetry;
- (BOOL)validateOperation;

@end

