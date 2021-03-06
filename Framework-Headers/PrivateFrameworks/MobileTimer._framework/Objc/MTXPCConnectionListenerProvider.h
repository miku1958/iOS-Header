//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MobileTimer/NSXPCListenerDelegate-Protocol.h>

@class MTXPCConnectionInfo, NSArray, NSMutableSet, NSString, NSXPCListener;
@protocol NAScheduler;

@interface MTXPCConnectionListenerProvider : NSObject <NSXPCListenerDelegate>
{
    MTXPCConnectionInfo *_info;
    id<NAScheduler> _serializer;
    NSString *_requiredEntitlement;
    CDUnknownBlockType _errorHandler;
    NSMutableSet *_clients;
    NSXPCListener *_connectionListener;
}

@property (strong, nonatomic) NSMutableSet *clients; // @synthesize clients=_clients;
@property (readonly, nonatomic) NSArray *connectedClients;
@property (strong, nonatomic) NSXPCListener *connectionListener; // @synthesize connectionListener=_connectionListener;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) MTXPCConnectionInfo *info; // @synthesize info=_info;
@property (copy, nonatomic) NSString *requiredEntitlement; // @synthesize requiredEntitlement=_requiredEntitlement;
@property (strong, nonatomic) id<NAScheduler> serializer; // @synthesize serializer=_serializer;
@property (readonly) Class superclass;

+ (id)providerWithConnectionInfo:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (id)_connectedClients;
- (id)_currentClientForConnection:(id)arg1;
- (void)_didInterruptConnection;
- (void)_didInvalidateConnection:(id)arg1;
- (void)_performBlockOnClientInfos:(CDUnknownBlockType)arg1 excludingClient:(id)arg2;
- (void)addClientConnection:(id)arg1 clientLink:(id)arg2;
- (id)currentClient;
- (void)dealloc;
- (id)initWithConnectionInfo:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)performBlockOnAllClients:(CDUnknownBlockType)arg1;
- (void)performBlockOnAllClients:(CDUnknownBlockType)arg1 excludingClient:(id)arg2;
- (void)performBlockOnAllClients:(CDUnknownBlockType)arg1 excludingCurrent:(BOOL)arg2;
- (void)performBlockOnClientInfos:(CDUnknownBlockType)arg1 excludeCurrent:(BOOL)arg2;
- (void)performBlockOnCurrentClient:(CDUnknownBlockType)arg1;
- (void)removeClientConnection:(id)arg1;
- (void)startListening;
- (void)stopListening;

@end

