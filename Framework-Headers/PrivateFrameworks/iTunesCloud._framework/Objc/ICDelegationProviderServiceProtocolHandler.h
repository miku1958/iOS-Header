//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ICRequestContext, ICUserIdentityStore, NSOperationQueue;
@protocol OS_dispatch_queue;

@interface ICDelegationProviderServiceProtocolHandler : NSObject
{
    NSObject<OS_dispatch_queue> *_calloutQueue;
    ICUserIdentityStore *_identityStore;
    NSOperationQueue *_operationQueue;
    unsigned long long _nextSessionUniqueID;
    ICRequestContext *_requestContext;
}

- (void).cxx_destruct;
- (void)_getPlayInfoRequestWithStartDelegationResponse:(id)arg1 streamContexts:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (unsigned long long)_nextSessionUniqueID;
- (void)getFinishDelegationRequestsWithStartDelegationResponse:(id)arg1 streamContexts:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (void)getStartDelegationRequestForAccountIDs:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)initWithUserIdentityStore:(id)arg1 requestContext:(id)arg2;

@end

