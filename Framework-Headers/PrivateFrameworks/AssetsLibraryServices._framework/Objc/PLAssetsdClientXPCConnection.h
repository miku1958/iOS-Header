//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssetsLibraryServices/PLXPCProxyCreating-Protocol.h>

@class NSString, NSXPCConnection, PLConnectionDebugger;
@protocol OS_dispatch_queue;

@interface PLAssetsdClientXPCConnection : NSObject <PLXPCProxyCreating>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connection;
    PLConnectionDebugger *_connectionDebugger;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)connectionWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)handleInterruption;
- (void)handleInvalidation;
- (id)init;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;

@end

