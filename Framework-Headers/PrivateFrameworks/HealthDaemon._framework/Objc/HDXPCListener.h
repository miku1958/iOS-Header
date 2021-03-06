//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/NSXPCListenerDelegate-Protocol.h>

@class NSArray, NSMapTable, NSString, NSXPCListener, NSXPCListenerEndpoint;
@protocol HDXPCListenerClientProvider, HDXPCListenerDelegate, OS_dispatch_queue;

@interface HDXPCListener : NSObject <NSXPCListenerDelegate>
{
    NSXPCListener *_underlyingListener;
    struct os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSMapTable *_exportedObjectsByClient;
    id<HDXPCListenerDelegate> _delegate;
    id<HDXPCListenerClientProvider> _clientProvider;
    NSString *_label;
}

@property (readonly, copy) NSArray *allClients;
@property (weak, nonatomic) id<HDXPCListenerClientProvider> clientProvider; // @synthesize clientProvider=_clientProvider;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HDXPCListenerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSXPCListenerEndpoint *endpoint;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *label; // @synthesize label=_label;
@property (readonly) Class superclass;

+ (id)serviceListener;
- (void).cxx_destruct;
- (void)_handleConnectionInvalidationForClient:(id)arg1 exportedObject:(id)arg2;
- (void)_handleInterruptionWithClient:(id)arg1 exportedObject:(id)arg2;
- (void)_handleInvalidationWithClient:(id)arg1 exportedObject:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithLabel:(id)arg1;
- (id)initWithMachServiceName:(id)arg1;
- (id)initWithUnderlyingListener:(id)arg1 label:(id)arg2;
- (void)invalidate;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)resume;
- (void)setConnectionQueue:(id)arg1;
- (void)setQueue:(id)arg1;

@end

