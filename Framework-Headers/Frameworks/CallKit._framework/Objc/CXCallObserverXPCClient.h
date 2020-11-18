//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CallKit/CXCallObserverDataSource-Protocol.h>

@class NSDictionary, NSHashTable, NSMutableDictionary, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CXCallObserverXPCClient : NSObject <CXCallObserverDataSource>
{
    BOOL _clientsShouldConnect;
    int _clientsShouldConnectToken;
    NSObject<OS_dispatch_queue> *_concurrentQueue;
    NSMutableDictionary *_mutableCallUUIDToCallMap;
    NSHashTable *_delegates;
    NSXPCConnection *_connection;
}

@property (readonly, copy, nonatomic) NSDictionary *callUUIDToCallMap;
@property (nonatomic) BOOL clientsShouldConnect; // @synthesize clientsShouldConnect=_clientsShouldConnect;
@property (nonatomic) int clientsShouldConnectToken; // @synthesize clientsShouldConnectToken=_clientsShouldConnectToken;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *concurrentQueue; // @synthesize concurrentQueue=_concurrentQueue;
@property (strong, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSHashTable *delegates; // @synthesize delegates=_delegates;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSMutableDictionary *mutableCallUUIDToCallMap; // @synthesize mutableCallUUIDToCallMap=_mutableCallUUIDToCallMap;
@property (readonly) Class superclass;

+ (void)releaseSharedXPCClient;
+ (id)sharedXPCClient;
+ (id)sharedXPCClientSemaphore;
- (void).cxx_destruct;
- (void)_addOrUpdateCall:(id)arg1;
- (id)_init;
- (void)_invalidate;
- (void)_markAllCallsAsEnded;
- (id)_remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1 isSynchronous:(BOOL)arg2;
- (void)_removeCall:(id)arg1;
- (void)_requestCalls;
- (void)addDelegate:(id)arg1;
- (oneway void)addOrUpdateCall:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (oneway void)removeCall:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (void)requestTransaction:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
