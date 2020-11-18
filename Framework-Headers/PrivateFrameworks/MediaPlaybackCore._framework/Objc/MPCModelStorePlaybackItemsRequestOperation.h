//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPAsyncOperation.h>

@class MPCModelStorePlaybackItemsRequest, NSObject, NSOperationQueue, NSProgress;
@protocol OS_dispatch_queue;

@interface MPCModelStorePlaybackItemsRequestOperation : MPAsyncOperation
{
    NSProgress *_activeProgress;
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_activeProgressQueue;
    MPCModelStorePlaybackItemsRequest *_request;
    CDUnknownBlockType _responseHandler;
}

@property (readonly, copy, nonatomic) MPCModelStorePlaybackItemsRequest *request; // @synthesize request=_request;
@property (readonly, copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;

- (void).cxx_destruct;
- (void)_executeWithUserIdentity:(id)arg1;
- (BOOL)_shouldUseLegacyAccumulator;
- (void)_validateUserIdentityForRequestWithCompletion:(CDUnknownBlockType)arg1;
- (void)cancel;
- (void)execute;
- (id)initWithRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;

@end
