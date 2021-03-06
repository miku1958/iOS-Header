//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesCloud/ICDelegationConsumerNetServiceDelegate-Protocol.h>
#import <iTunesCloud/ICDelegationServiceConnectionDelegate-Protocol.h>

@class ICDelegationConsumerNetService, ICDelegationConsumerServiceProtocolHandler, ICDelegationConsumerServiceRequest, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ICDelegationConsumerServiceSession : NSObject <ICDelegationConsumerNetServiceDelegate, ICDelegationServiceConnectionDelegate>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableArray *_acceptedConnections;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    ICDelegationConsumerNetService *_netService;
    NSMutableArray *_pendingUserIdentities;
    ICDelegationConsumerServiceProtocolHandler *_protocolHandler;
    NSMutableDictionary *_sessionIDToRequestInfoMap;
    NSObject<OS_dispatch_source> *_timeoutDispatchSource;
    ICDelegationConsumerServiceRequest *_request;
    CDUnknownBlockType _responseHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) ICDelegationConsumerServiceRequest *request; // @synthesize request=_request;
@property (readonly, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleTimeout;
- (void)_stop;
- (void)dealloc;
- (void)delegationConsumerNetService:(id)arg1 didAcceptConnectionWithInputStream:(id)arg2 outputStream:(id)arg3;
- (void)delegationServiceConnection:(id)arg1 didEncouterError:(id)arg2;
- (BOOL)delegationServiceConnection:(id)arg1 didReceiveRequest:(id)arg2;
- (void)delegationServiceConnectionDidClose:(id)arg1;
- (id)initWithRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)start;
- (void)stop;

@end

