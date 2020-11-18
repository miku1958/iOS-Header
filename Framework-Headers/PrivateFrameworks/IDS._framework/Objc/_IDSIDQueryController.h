//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDS/IDSDaemonListenerProtocol-Protocol.h>

@class NSMapTable, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface _IDSIDQueryController : NSObject <IDSDaemonListenerProtocol>
{
    NSMutableDictionary *_listeners;
    NSMutableDictionary *_idStatusCache;
    NSMutableDictionary *_transactionIDToBlockMap;
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_serviceToken;
    NSMapTable *_delegateToInfo;
    NSMutableDictionary *_listenerIDToServicesMap;
    id _delegateContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;
- (void).cxx_destruct;
- (void)IDQueryCompletedWithFromURI:(id)arg1 idStatusUpdates:(id)arg2 service:(id)arg3 success:(BOOL)arg4 error:(id)arg5;
- (void)___oldDealloc;
- (id)__sendMessage:(id)arg1 queue:(id)arg2 reply:(CDUnknownBlockType)arg3 failBlock:(CDUnknownBlockType)arg4 waitForReply:(BOOL)arg5;
- (id)_cacheForService:(id)arg1;
- (id)_cachedStatusForDestination:(id)arg1 service:(id)arg2;
- (void)_callDelegatesWithBlock:(CDUnknownBlockType)arg1;
- (void)_callDelegatesWithBlock:(CDUnknownBlockType)arg1 delegateMap:(id)arg2;
- (void)_connect;
- (long long)_currentCachedIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3;
- (BOOL)_currentRemoteDevicesForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (id)_delegateMapForListenerID:(id)arg1 service:(id)arg2;
- (void)_disconnectFromQueryService;
- (BOOL)_flushQueryCacheForService:(id)arg1;
- (BOOL)_hasCacheForService:(id)arg1;
- (void)_idStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 allowRenew:(BOOL)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (BOOL)_isListenerWithID:(id)arg1 listeningToService:(id)arg2;
- (void)_purgeIDStatusCache;
- (void)_purgeIDStatusCacheAfter:(double)arg1;
- (BOOL)_refreshIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 allowRefresh:(BOOL)arg4 queue:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)_requestCacheForService:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_requestCachedStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_requestRemoteDevicesForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_requestStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_setCurrentIDStatus:(long long)arg1 forDestination:(id)arg2 service:(id)arg3;
- (void)_updateCacheWithDictionary:(id)arg1 service:(id)arg2;
- (BOOL)_warmupQueryCacheForService:(id)arg1;
- (void)addDelegate:(id)arg1 forService:(id)arg2 listenerID:(id)arg3 queue:(id)arg4;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (void)addListenerID:(id)arg1 forService:(id)arg2;
- (BOOL)currentIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (BOOL)currentIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (BOOL)currentRemoteDevicesForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)daemonDisconnected;
- (void)dealloc;
- (id)init;
- (id)initWithDelegateContext:(id)arg1 queueController:(id)arg2;
- (BOOL)refreshIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (BOOL)refreshIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)removeDelegate:(id)arg1;
- (void)removeDelegate:(id)arg1 forService:(id)arg2 listenerID:(id)arg3;
- (BOOL)removeListenerID:(id)arg1 forService:(id)arg2;

@end

