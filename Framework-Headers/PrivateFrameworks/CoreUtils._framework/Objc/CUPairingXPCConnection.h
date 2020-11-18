//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CoreUtils/CUPairingDaemonXPCInterface-Protocol.h>

@class CUPairingDaemon, NSXPCConnection;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CUPairingXPCConnection : NSObject <CUPairingDaemonXPCInterface>
{
    CUPairingDaemon *_daemon;
    BOOL _pmEntitledDeleteIdentity;
    BOOL _pmEntitledRead;
    BOOL _pmEntitledRemovePeer;
    BOOL _pmEntitledWrite;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSXPCConnection *_xpcCnx;
}

- (void).cxx_destruct;
- (int)_entitled:(id)arg1 state:(BOOL *)arg2 label:(id)arg3;
- (void)connectionInvalidated;
- (void)deletePairingIdentityWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)findPairedPeer:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getPairedPeersWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getPairingIdentityWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removePairedPeer:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)savePairedPeer:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showWithCompletion:(CDUnknownBlockType)arg1;

@end

