//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PassKitCore/PDXPCServiceExportedInterface-Protocol.h>

@class NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface PDXPCService : NSObject <PDXPCServiceExportedInterface>
{
    NSXPCConnection *_connection;
    NSString *_className;
    BOOL _callbacksSuspended;
    NSObject<OS_dispatch_queue> *_readWriteQueue;
    int _remoteProcessIdentifier;
    NSString *_remoteProcessApplicationIdentifier;
    NSString *_remoteProcessBundleIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *remoteProcessApplicationIdentifier; // @synthesize remoteProcessApplicationIdentifier=_remoteProcessApplicationIdentifier;
@property (readonly, nonatomic) NSString *remoteProcessBundleIdentifier; // @synthesize remoteProcessBundleIdentifier=_remoteProcessBundleIdentifier;
@property (readonly, nonatomic) int remoteProcessIdentifier; // @synthesize remoteProcessIdentifier=_remoteProcessIdentifier;
@property (readonly) Class superclass;

- (void)clearConnectionReference;
- (id)connection;
- (void)dealloc;
- (id)init;
- (id)initWithConnection:(id)arg1;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)serviceResumed;
- (void)serviceSuspended;

@end

