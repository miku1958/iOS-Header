//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoRegistry/NSObject-Protocol.h>

@class NSObject, NSString, NSXPCInterface;
@protocol OS_dispatch_queue;

@protocol NRNSXPCConnectionProtocol <NSObject>

@property (strong, nonatomic) NSXPCInterface *exportedInterface;
@property (strong, nonatomic) id exportedObject;
@property (copy, nonatomic) CDUnknownBlockType interruptionHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (readonly, nonatomic) int processIdentifier;
@property (readonly, strong, nonatomic) NSString *processName;
@property (strong, nonatomic) NSXPCInterface *remoteObjectInterface;
@property (readonly, strong, nonatomic) id remoteObjectProxy;

- (void)_setQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (id)initWithMachServiceName:(NSString *)arg1 options:(unsigned long long)arg2;
- (void)invalidate;
- (id)remoteObjectProxyWithErrorHandler:(void (^)(NSError *))arg1;
- (void)resume;
- (void)runCompletionBlock:(void (^)(void))arg1;
- (void)suspend;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(void (^)(NSError *))arg1;
- (id)valueForEntitlement:(NSString *)arg1;
@end

