//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSError, NSMutableDictionary, NSOperationQueue, SSLookupRequest;
@protocol OS_dispatch_queue;

@interface MPStoreLookupBatcher : NSObject
{
    BOOL _hasCalledCompletionHandler;
    NSOperationQueue *_operationQueue;
    NSMutableDictionary *_completeResponseDictionary;
    NSMutableDictionary *_completeResponseResultsDictionary;
    CDUnknownBlockType _completionHandler;
    NSError *_error;
    NSObject<OS_dispatch_queue> *_serialQueue;
    SSLookupRequest *_lookupRequest;
    unsigned long long _batchSize;
}

@property (nonatomic) unsigned long long batchSize; // @synthesize batchSize=_batchSize;
@property (readonly, nonatomic) SSLookupRequest *lookupRequest; // @synthesize lookupRequest=_lookupRequest;

+ (id)_copyLookupRequest:(id)arg1;
+ (id)_incompleteChildrenIDsForStoreResult:(id)arg1;
- (void).cxx_destruct;
- (void)_batchOperationDidComplete:(id)arg1;
- (void)_callCompletionHandlerIfNecessary;
- (void)_onSerialQueue_mergeResponseDictionaryIntoCompleteResponseDictionary:(id)arg1;
- (id)initWithLookupRequest:(id)arg1;
- (void)performBatchedRequestWithCompletion:(CDUnknownBlockType)arg1;

@end
