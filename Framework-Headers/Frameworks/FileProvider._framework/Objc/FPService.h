//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FileProvider/FPDLifetimeServicing-Protocol.h>

@class NSXPCConnection, NSXPCInterface;
@protocol FPDLifetimeServicing, NSXPCProxyCreating;

__attribute__((visibility("hidden")))
@interface FPService : NSObject <FPDLifetimeServicing>
{
    id<FPDLifetimeServicing> _extender;
    NSXPCConnection *_connection;
    id<NSXPCProxyCreating> _proxy;
    NSXPCInterface *_interface;
}

@property (readonly) id remoteObjectProxy;
@property (readonly) id synchronousRemoteObjectProxy;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithEndpoint:(id)arg1 interface:(id)arg2 lifetimeExtender:(id)arg3 providerDomainID:(id)arg4;
- (id)initWithProxy:(id)arg1 interface:(id)arg2 lifetimeExtender:(id)arg3 providerDomainID:(id)arg4;
- (void)invalidate;
- (id)remoteObjectProxyCreating;
- (void)stopExtendingLifetime;

@end
