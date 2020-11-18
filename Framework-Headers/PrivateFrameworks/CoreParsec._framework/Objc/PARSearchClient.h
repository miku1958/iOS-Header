//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreParsec/NSXPCConnectionDelegate-Protocol.h>

@class NSString, NSXPCConnection, NSXPCListenerEndpoint, PARPromise, PARSessionConfiguration;
@protocol OS_dispatch_queue, PARDaemonXPC;

@interface PARSearchClient : NSObject <NSXPCConnectionDelegate>
{
    _Atomic long long _opCounter;
    NSString *_lastQuery;
    _Atomic BOOL _configured;
    PARPromise *_endpointPromise;
    NSObject<OS_dispatch_queue> *_idQueue;
    long long _idState[20];
    id<PARDaemonXPC> _remoteObject;
    NSXPCConnection *_connection;
    PARSessionConfiguration *_config;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (strong) PARSessionConfiguration *config; // @synthesize config=_config;
@property (strong) NSXPCConnection *connection; // @synthesize connection=_connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong) NSXPCListenerEndpoint *endpoint;
@property (readonly) unsigned long long hash;
@property (strong) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (strong) id<PARDaemonXPC> remoteObject; // @synthesize remoteObject=_remoteObject;
@property (readonly) Class superclass;

+ (id)daemonConnection;
- (void).cxx_destruct;
- (void)_invalidateConnection;
- (long long)_queryIdForObject:(id)arg1;
- (void)bag:(CDUnknownBlockType)arg1;
- (void)coalesceQueryId:(long long)arg1;
- (void)configure;
- (void)dealloc;
- (void)feedback:(CDUnknownBlockType)arg1;
- (void)fileHandleAndAttributesForResource:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;
- (id)initWithConnection:(id)arg1 configuration:(id)arg2;
- (void)listSessions:(CDUnknownBlockType)arg1;
- (void)listenToFlusher:(CDUnknownBlockType)arg1;
- (id)replacementObjectForXPCConnection:(id)arg1 encoder:(id)arg2 object:(id)arg3;
- (void)reportEvent:(id)arg1;
- (long long)request:(id)arg1 reply:(CDUnknownBlockType)arg2;

@end
