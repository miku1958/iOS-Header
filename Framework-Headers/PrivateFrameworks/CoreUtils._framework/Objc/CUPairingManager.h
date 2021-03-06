//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreUtils/CUPairingManagerXPCInterface-Protocol.h>

@class NSXPCConnection, NSXPCListenerEndpoint;
@protocol OS_dispatch_queue;

@interface CUPairingManager : NSObject <CUPairingManagerXPCInterface>
{
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    BOOL _monitoring;
    unsigned long long _monitorOptions;
    NSXPCConnection *_xpcCnx;
    BOOL _targetUserSession;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _identityCreatedHandler;
    CDUnknownBlockType _identityDeletedHandler;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    CDUnknownBlockType _pairedPeerAddedHandler;
    CDUnknownBlockType _pairedPeerRemovedHandler;
    CDUnknownBlockType _pairedPeerChangedHandler;
    NSXPCListenerEndpoint *_testListenerEndpoint;
}

@property (strong, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType identityCreatedHandler; // @synthesize identityCreatedHandler=_identityCreatedHandler;
@property (copy, nonatomic) CDUnknownBlockType identityDeletedHandler; // @synthesize identityDeletedHandler=_identityDeletedHandler;
@property (copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property (copy, nonatomic) CDUnknownBlockType pairedPeerAddedHandler; // @synthesize pairedPeerAddedHandler=_pairedPeerAddedHandler;
@property (copy, nonatomic) CDUnknownBlockType pairedPeerChangedHandler; // @synthesize pairedPeerChangedHandler=_pairedPeerChangedHandler;
@property (copy, nonatomic) CDUnknownBlockType pairedPeerRemovedHandler; // @synthesize pairedPeerRemovedHandler=_pairedPeerRemovedHandler;
@property (nonatomic) BOOL targetUserSession; // @synthesize targetUserSession=_targetUserSession;
@property (strong, nonatomic) NSXPCListenerEndpoint *testListenerEndpoint; // @synthesize testListenerEndpoint=_testListenerEndpoint;

- (void).cxx_destruct;
- (void)_deletePairingIdentityWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (int)_ensureXPCStarted;
- (void)_findPairedPeer:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_getPairedPeersWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_getPairingIdentityWithOptions:(unsigned long long)arg1 tryCount:(unsigned int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_interrupted;
- (void)_invalidate;
- (void)_invalidated;
- (void)_removePairedPeer:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_savePairedPeer:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_showWithCompletion:(CDUnknownBlockType)arg1;
- (void)_startMonitoringWithOptions:(unsigned long long)arg1;
- (void)dealloc;
- (void)deletePairingIdentityWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)findPairedPeer:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getPairedPeersWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getPairingIdentityWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;
- (void)invalidate;
- (void)pairedPeerAdded:(id)arg1 options:(unsigned long long)arg2;
- (void)pairedPeerChanged:(id)arg1 options:(unsigned long long)arg2;
- (void)pairedPeerRemoved:(id)arg1 options:(unsigned long long)arg2;
- (void)pairingIdentityCreated:(id)arg1 options:(unsigned long long)arg2;
- (void)pairingIdentityDeletedWithOptions:(unsigned long long)arg1;
- (void)removePairedPeer:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)savePairedPeer:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showWithCompletion:(CDUnknownBlockType)arg1;
- (void)startMonitoringWithOptions:(unsigned long long)arg1;

@end

