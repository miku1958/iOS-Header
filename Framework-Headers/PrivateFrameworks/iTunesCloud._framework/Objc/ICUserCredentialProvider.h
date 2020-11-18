//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ICDelegationConsumerService;
@protocol OS_dispatch_queue;

@interface ICUserCredentialProvider : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    long long _delegationDiscoveryCount;
    ICDelegationConsumerService *_delegationConsumerService;
}

+ (id)sharedProvider;
- (void).cxx_destruct;
- (void)_handleCredentialRequestIdentityPropertiesForSession:(id)arg1;
- (void)_handleDelegationAccountUUIDsForSession:(id)arg1;
- (void)_handleIdentityProperties:(id)arg1 forIdentity:(id)arg2 loadingError:(id)arg3 credentialRequest:(id)arg4 session:(id)arg5;
- (void)_handlePendingDelegationRequestsForSession:(id)arg1;
- (void)_handleRequestIndependentPropertiesForSession:(id)arg1;
- (id)init;
- (void)performCredentialRequest:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;
- (void)performCredentialRequests:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;

@end

