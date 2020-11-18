//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoPassKit/NPKTransientPassAssertionConnectionDelegate-Protocol.h>
#import <NanoPassKit/NSXPCListenerDelegate-Protocol.h>

@class BKSApplicationStateMonitor, NSMutableArray, NSMutableSet, NSString, NSXPCListener;
@protocol NPKTransientPassAssertionServerDelegate, OS_dispatch_queue;

@interface NPKTransientPassAssertionServer : NSObject <NSXPCListenerDelegate, NPKTransientPassAssertionConnectionDelegate>
{
    id<NPKTransientPassAssertionServerDelegate> _delegate;
    NSXPCListener *_xpcListener;
    NSMutableSet *_connections;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_transientPaymentRequests;
    BKSApplicationStateMonitor *_appStateMonitor;
}

@property (strong, nonatomic) BKSApplicationStateMonitor *appStateMonitor; // @synthesize appStateMonitor=_appStateMonitor;
@property (strong, nonatomic) NSMutableSet *connections; // @synthesize connections=_connections;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<NPKTransientPassAssertionServerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSMutableArray *transientPaymentRequests; // @synthesize transientPaymentRequests=_transientPaymentRequests;
@property (strong, nonatomic) NSXPCListener *xpcListener; // @synthesize xpcListener=_xpcListener;

- (void).cxx_destruct;
- (id)_bundleIDForXPCConnection:(id)arg1;
- (void)_handleAppStateChangeWithStateDictionary:(id)arg1;
- (void)_notifyDelegateOfTransientPassChangeToUniqueID:(id)arg1;
- (id)_queue_transientPassUniqueID;
- (void)_updateAppStateMonitor;
- (void)connection:(id)arg1 hasNewTransientPassRequest:(id)arg2;
- (void)connectionDied:(id)arg1;
- (void)handleNewConnection:(id)arg1;
- (id)init;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)transientPassUniqueID;

@end

