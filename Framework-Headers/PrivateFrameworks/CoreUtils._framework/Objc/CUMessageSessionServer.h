//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CoreUtils/NSXPCListenerDelegate-Protocol.h>

@class CUMessageSession, NSString, NSXPCListener, NSXPCListenerEndpoint;
@protocol OS_dispatch_queue;

@interface CUMessageSessionServer : NSObject <NSXPCListenerDelegate>
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _registerRequestHandler;
    CDUnknownBlockType _deregisterRequestHandler;
    CDUnknownBlockType _sendRequestHandler;
    struct NSMutableSet *_xpcConnections;
    NSXPCListenerEndpoint *_xpcEndpoint;
    NSXPCListener *_xpcListener;
    CDUnknownBlockType _invalidationHandler;
    CUMessageSession *_templateSession;
}

@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) CDUnknownBlockType deregisterRequestHandler; // @synthesize deregisterRequestHandler=_deregisterRequestHandler;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property (copy, nonatomic) CDUnknownBlockType registerRequestHandler; // @synthesize registerRequestHandler=_registerRequestHandler;
@property (copy, nonatomic) CDUnknownBlockType sendRequestHandler; // @synthesize sendRequestHandler=_sendRequestHandler;
@property (readonly) Class superclass;
@property (strong, nonatomic) CUMessageSession *templateSession; // @synthesize templateSession=_templateSession;

- (void).cxx_destruct;
- (void)_connectionInvalidated:(id)arg1;
- (void)activate;
- (id)init;
- (void)invalidate;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end
