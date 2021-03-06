//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HKOutstandingFetchOperationManager, NSArray, NSHashTable, NSMutableDictionary, _HKChartCachePendingFetchOperationManager;
@protocol HKChartCacheDataSource, HKChartCachePriorityDelegate;

@interface HKChartCache : NSObject
{
    NSHashTable *_observers;
    NSMutableDictionary *_cachedResultsByIdentifier;
    _HKChartCachePendingFetchOperationManager *_pendingFetchOperationsManager;
    NSMutableDictionary *_resultsLoadedByIdentifier;
    BOOL _shouldBufferFetchOperations;
    id<HKChartCacheDataSource> _dataSource;
    HKOutstandingFetchOperationManager *_operationManager;
    long long _maxRetryCount;
    NSArray *_bufferedIdentifiers;
    id<HKChartCachePriorityDelegate> _priorityDelegateForBufferedIdentifiers;
}

@property (strong, nonatomic) NSArray *bufferedIdentifiers; // @synthesize bufferedIdentifiers=_bufferedIdentifiers;
@property (strong, nonatomic) id<HKChartCacheDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, nonatomic) id dataSourceRespectingType;
@property (nonatomic) long long maxRetryCount; // @synthesize maxRetryCount=_maxRetryCount;
@property (strong, nonatomic) HKOutstandingFetchOperationManager *operationManager; // @synthesize operationManager=_operationManager;
@property (weak, nonatomic) id<HKChartCachePriorityDelegate> priorityDelegateForBufferedIdentifiers; // @synthesize priorityDelegateForBufferedIdentifiers=_priorityDelegateForBufferedIdentifiers;
@property (nonatomic) BOOL shouldBufferFetchOperations; // @synthesize shouldBufferFetchOperations=_shouldBufferFetchOperations;

- (void).cxx_destruct;
- (void)_addFetchOperationsForIdentifiers:(id)arg1 priorityDelegate:(id)arg2;
- (void)_alertObserversDidUpdateResults;
- (void)_handleOperationCompletionWithOperation:(id)arg1 identifier:(id)arg2 priorityDelegate:(id)arg3 results:(id)arg4 error:(id)arg5;
- (id)_operationForIdentifier:(id)arg1 priorityDelegate:(id)arg2;
- (void)_removeFetchOperationsForIdentifiers:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)cachedResultsForIdentifier:(id)arg1;
- (void)fetchResultsForIdentifiers:(id)arg1 priorityDelegate:(id)arg2;
- (id)init;
- (void)invalidateCache;
- (void)invalidateResultsForIdentifiers:(id)arg1;
- (void)removeObserver:(id)arg1;
- (unsigned long long)stateForIdentifier:(id)arg1;

@end

