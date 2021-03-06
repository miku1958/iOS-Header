//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/NSXPCListenerDelegate-Protocol.h>

@class MNRouteRefreshPolicyScheduler, MNTimeballCache, MNTimeballLocationManager, MNTimeballRoutingProvider, NSLock, NSMutableSet, NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface MNTimeballServer : NSObject <NSXPCListenerDelegate>
{
    NSXPCListener *_listener;
    NSObject<OS_dispatch_queue> *_xpcQueue;
    MNTimeballCache *_cache;
    MNRouteRefreshPolicyScheduler *_scheduler;
    MNTimeballRoutingProvider *_routingProvider;
    MNTimeballLocationManager *_locationManager;
    NSLock *_proxyLock;
    NSMutableSet *_proxies;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)defaultServer;
- (void).cxx_destruct;
- (id)_cache;
- (id)_localProxyForPeer:(id)arg1;
- (void)_navd_addProxy:(id)arg1;
- (id)_navd_localProxyForClient:(id)arg1;
- (void)_navd_removeProxy:(id)arg1;
- (void)_peerDidConnectWithProxy:(id)arg1;
- (void)_peerDidDisconnectWithProxy:(id)arg1;
- (id)_routingProvider;
- (id)_scheduler;
- (void)dealloc;
- (id)init;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end

