//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameController/_GCIPCRemoteConnection.h>

#import <GameController/_GCIPCIncomingConnection-Protocol.h>

@class _GCIPCRemoteProcess;
@protocol _GCIPCProcess;

__attribute__((visibility("hidden")))
@interface _GCIPCRemoteIncomingConnection : _GCIPCRemoteConnection <_GCIPCIncomingConnection>
{
    _GCIPCRemoteProcess *_process;
}

@property (readonly, nonatomic, getter=isInvalid) BOOL invalid;
@property (readonly, weak, nonatomic) id<_GCIPCProcess> process; // @synthesize process=_process;

+ (id)sharedConnectionWorkloop;
- (void).cxx_destruct;
- (id)initWithConnection:(id)arg1;
- (id)initWithConnection:(id)arg1 fromProcess:(id)arg2;
- (id)remoteProxy;
- (id)remoteProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)synchronousRemoteProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)valueForEntitlement:(id)arg1;

@end
