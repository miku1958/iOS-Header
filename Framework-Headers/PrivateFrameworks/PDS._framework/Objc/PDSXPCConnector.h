//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PDS/PDSRemoteVendor-Protocol.h>

@class NSError, NSString;
@protocol PDSRemote, PDSRemote><NSXPCProxyCreating, PDSRemoteInternal, PDSRemoteInternal><NSXPCProxyCreating, PDSXPCConnection, PDSXPCConnectionVendor, PDSXPCHandshake><NSXPCProxyCreating, PDSXPCInterfaceVendor;

@interface PDSXPCConnector : NSObject <PDSRemoteVendor>
{
    struct os_unfair_lock_s _lock;
    NSString *_clientID;
    id<PDSXPCConnection> _XPCConnection;
    id<PDSXPCHandshake><NSXPCProxyCreating> _handshakeProxy;
    id<PDSRemote><NSXPCProxyCreating> _remoteObject;
    id<PDSRemote> _syncRemoteObject;
    id<PDSRemoteInternal><NSXPCProxyCreating> _internalRemoteObject;
    id<PDSRemoteInternal> _syncInternalRemoteObject;
    NSError *_connectionError;
    id<PDSXPCInterfaceVendor> _interfaceVendor;
    id<PDSXPCConnectionVendor> _connectionVendor;
}

@property (strong, nonatomic) id<PDSXPCConnection> XPCConnection; // @synthesize XPCConnection=_XPCConnection;
@property (strong, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
@property (strong, nonatomic) NSError *connectionError; // @synthesize connectionError=_connectionError;
@property (strong, nonatomic) id<PDSXPCConnectionVendor> connectionVendor; // @synthesize connectionVendor=_connectionVendor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) id<PDSXPCHandshake><NSXPCProxyCreating> handshakeProxy; // @synthesize handshakeProxy=_handshakeProxy;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) id<PDSXPCInterfaceVendor> interfaceVendor; // @synthesize interfaceVendor=_interfaceVendor;
@property (strong, nonatomic) id<PDSRemoteInternal><NSXPCProxyCreating> internalRemoteObject; // @synthesize internalRemoteObject=_internalRemoteObject;
@property (nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
@property (strong, nonatomic) id<PDSRemote><NSXPCProxyCreating> remoteObject; // @synthesize remoteObject=_remoteObject;
@property (readonly) Class superclass;
@property (strong, nonatomic) id<PDSRemoteInternal> syncInternalRemoteObject; // @synthesize syncInternalRemoteObject=_syncInternalRemoteObject;
@property (strong, nonatomic) id<PDSRemote> syncRemoteObject; // @synthesize syncRemoteObject=_syncRemoteObject;

- (void).cxx_destruct;
- (id)_genericProxyWithError:(id *)arg1 remoteBlock:(CDUnknownBlockType)arg2;
- (id)_genericSyncProxyWithErrorHandler:(CDUnknownBlockType)arg1 localStorage:(id *)arg2 remoteBlock:(CDUnknownBlockType)arg3;
- (id)_lockedPerformConnectWithBlock:(CDUnknownBlockType)arg1;
- (id)_lockedRemoteInternalObject;
- (id)_lockedRemoteObject;
- (id)_lockedXPCConnection;
- (id)initWithClientID:(id)arg1;
- (id)initWithClientID:(id)arg1 interfaceVendor:(id)arg2 connectionVendor:(id)arg3;
- (id)internalRemoteObjectProxyWithError:(id *)arg1;
- (id)remoteObjectProxyWithError:(id *)arg1;
- (id)synchronousInternalRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (BOOL)validateConnectionWithError:(id *)arg1;

@end

