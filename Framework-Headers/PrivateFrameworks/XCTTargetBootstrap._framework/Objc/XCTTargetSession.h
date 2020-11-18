//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCTTargetBootstrap/NSXPCListenerDelegate-Protocol.h>
#import <XCTTargetBootstrap/XCTTarget-Protocol.h>

@class NSString, NSXPCConnection, NSXPCListener;
@protocol OS_dispatch_queue, XCTConnectionAccepting;

@interface XCTTargetSession : NSObject <NSXPCListenerDelegate, XCTTarget>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_daemonConnection;
    NSXPCListener *_clientListener;
    id<XCTConnectionAccepting> _connectionHandler;
}

@property (strong) NSXPCListener *clientListener; // @synthesize clientListener=_clientListener;
@property (strong) id<XCTConnectionAccepting> connectionHandler; // @synthesize connectionHandler=_connectionHandler;
@property (strong) NSXPCConnection *daemonConnection; // @synthesize daemonConnection=_daemonConnection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_XCT_requestEndpointWithAutomationSupportLibraryPath:(id)arg1 protocolVersion:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;
- (void)_on_queue_connect;
- (id)_on_queue_getListenerEndpoint;
- (BOOL)_on_queue_loadAutomationSupportLibraryFromPath:(id)arg1 error:(id *)arg2;
- (void)_on_queue_startListeningForClientConnections;
- (void)connect;
- (id)init;
- (id)initWithDaemonConnection:(id)arg1;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end
