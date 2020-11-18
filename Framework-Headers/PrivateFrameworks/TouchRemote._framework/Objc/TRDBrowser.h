//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TouchRemote/NSNetServiceBrowserDelegate-Protocol.h>
#import <TouchRemote/NSNetServiceDelegate-Protocol.h>

@class NSArray, NSMapTable, NSNetServiceBrowser, NSString;
@protocol OS_dispatch_queue;

@interface TRDBrowser : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSNetServiceBrowser *_browser;
    unsigned long long _browsingCount;
    NSMapTable *_netServiceToService;
    NSMapTable *_netServiceToResolvingCompletionHandlers;
    NSMapTable *_XPCConnectionToBrowsingCount;
}

@property (readonly, nonatomic, getter=isBrowsing) BOOL browsing;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSArray *services;
@property (readonly) Class superclass;

+ (id)sharedBrowser;
- (void).cxx_destruct;
- (void)TRXPCD_getServicesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)TRXPCD_startBrowsing;
- (void)TRXPCD_stopBrowsing;
- (void)_callResolvingCompletionHandlersForNetService:(id)arg1 withError:(id)arg2;
- (id)_init;
- (BOOL)_isXPCConnectionBrowsing:(id)arg1;
- (id)_netServiceForService:(id)arg1;
- (void)_resolveNetService:(id)arg1 withTimeout:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_serviceForNetService:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)netService:(id)arg1 didNotResolve:(id)arg2;
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(BOOL)arg3;
- (void)netServiceDidResolveAddress:(id)arg1;
- (void)startBrowsing;
- (void)stopBrowsing;

@end

