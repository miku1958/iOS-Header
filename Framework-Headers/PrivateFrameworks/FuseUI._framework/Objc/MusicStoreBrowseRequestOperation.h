//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPStoreModelRequestOperation.h>

@class NSMapTable, NSObject, NSOperation, NSOperationQueue;
@protocol OS_dispatch_group;

@interface MusicStoreBrowseRequestOperation : MPStoreModelRequestOperation
{
    BOOL _didInitializeTimeoutIntervalAdditions;
    BOOL _errorReportingDisabled;
    NSOperation *_individualPendingNestedRequestOperation;
    NSObject<OS_dispatch_group> *_nestedRequestOperationsGroup;
    NSOperationQueue *_nestedRequestsOperationQueue;
    unsigned long long _requestType;
    NSMapTable *_sectionsToPendingNestedRequestOperations;
    double _timeoutIntervalAdditions;
}

- (void).cxx_destruct;
- (id)_nestedRequestsOperationQueue;
- (void)_produceCarPlayResponseWithParser:(id)arg1 withNestedRequestsForEmptyBrickSectionsInOperationQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_produceRegularResponseWithParser:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_produceResponseWithParser:(id)arg1 results:(id)arg2 changeDetails:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (double)adjustTimeoutInterval:(double)arg1;
- (void)cancel;
- (id)configurationForLoadingModelDataWithStoreBagDictionary:(id)arg1 error:(id *)arg2;
- (void)execute;
- (void)produceResponseWithLoadedOutput:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

