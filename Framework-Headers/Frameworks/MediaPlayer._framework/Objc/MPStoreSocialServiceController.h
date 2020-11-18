//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableSet, NSOperationQueue;
@protocol OS_dispatch_queue;

@interface MPStoreSocialServiceController : NSObject
{
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableSet *_transientStates;
}

+ (id)_internalErrorForHTTPResponseCode:(long long)arg1;
- (void).cxx_destruct;
- (void)_handleTransientStateForPersonDidChangeNotification:(id)arg1;
- (void)_notifyTransientStatesDidChangeWithSnapshot:(id)arg1;
- (void)_performTransientFollowPendingRequestState:(long long)arg1 onPerson:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_performTransientFollowState:(long long)arg1 onPerson:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_populateTransientStatesSnapshot:(id)arg1;
- (void)_queue_transientStatesDidChange;
- (id)_transientStateForPerson:(id)arg1 shouldCreate:(BOOL)arg2;
- (void)_transientStatesDidChange;
- (void)acceptAllFollowRequestsWithCompletion:(CDUnknownBlockType)arg1;
- (void)acceptFollowRequestFromPerson:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)blockPerson:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cancelFollowRequestOnPerson:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)declineFollowRequestFromPerson:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)followPerson:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;
- (void)requestFollowPerson:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (long long)transientFollowPendingRequestStateForPerson:(id)arg1;
- (long long)transientFollowStateForPerson:(id)arg1;
- (void)unblockPerson:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)unfollowPerson:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

