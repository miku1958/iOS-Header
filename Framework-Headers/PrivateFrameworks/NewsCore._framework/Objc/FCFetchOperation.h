//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class FCFetchOperationResult, NSObject;
@protocol OS_dispatch_queue;

@interface FCFetchOperation : FCOperation
{
    FCFetchOperationResult *_result;
    BOOL _wifiOnly;
    BOOL _shouldFailOnMissingObjects;
    BOOL _canSendFetchCompletionSynchronously;
    unsigned long long _cachePolicy;
    double _maximumCachedAge;
    CDUnknownBlockType _fetchCompletionBlock;
    NSObject<OS_dispatch_queue> *_fetchCompletionQueue;
}

@property unsigned long long cachePolicy; // @synthesize cachePolicy=_cachePolicy;
@property BOOL canSendFetchCompletionSynchronously; // @synthesize canSendFetchCompletionSynchronously=_canSendFetchCompletionSynchronously;
@property (copy) CDUnknownBlockType fetchCompletionBlock; // @synthesize fetchCompletionBlock=_fetchCompletionBlock;
@property (strong) NSObject<OS_dispatch_queue> *fetchCompletionQueue; // @synthesize fetchCompletionQueue=_fetchCompletionQueue;
@property double maximumCachedAge; // @synthesize maximumCachedAge=_maximumCachedAge;
@property (readonly) FCFetchOperationResult *result; // @synthesize result=_result;
@property BOOL shouldFailOnMissingObjects; // @synthesize shouldFailOnMissingObjects=_shouldFailOnMissingObjects;
@property BOOL wifiOnly; // @synthesize wifiOnly=_wifiOnly;

- (void).cxx_destruct;
- (void)cancel;
- (void)finishExecutingWithError:(id)arg1;
- (void)finishExecutingWithFetchedObject:(id)arg1;
- (void)finishExecutingWithResult:(id)arg1;
- (void)finishExecutingWithStatus:(unsigned long long)arg1;
- (void)finishFromEarlyCancellation;
- (id)init;
- (void)operationDidFinishWithError:(id)arg1;
- (void)takeInputsFromFetchOperation:(id)arg1;

@end

