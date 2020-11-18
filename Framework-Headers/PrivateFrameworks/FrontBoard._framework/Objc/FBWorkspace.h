//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoard/FBSceneClient-Protocol.h>
#import <FrontBoard/FBSceneClientProvider-Protocol.h>

@class BSAuditToken, BSCompoundAssertion, BSServiceConnection, BSServiceConnectionEndpointInjector, FBProcess, FBSSerialQueue, FBSceneClientProviderInvalidationAction, FBWorkspaceEventDispatcherRegistration, NSMutableArray, NSMutableDictionary, NSString, RBSAssertion;
@protocol BSServiceConnectionHost, FBWorkspaceDelegate, OS_dispatch_queue;

@interface FBWorkspace : NSObject <FBSceneClient, FBSceneClientProvider>
{
    id<FBWorkspaceDelegate> _weak_delegate;
    FBProcess *_weak_process;
    FBWorkspaceEventDispatcherRegistration *_lock_eventDispatcher;
    BSServiceConnection<BSServiceConnectionHost> *_lock_connection;
    NSMutableArray *_lock_waitForConnectBlocks;
    NSMutableDictionary *_lock_identifierToSceneMap;
    NSMutableDictionary *_lock_identifierToRemnantsMap;
    NSMutableArray *_lock_pendedRequests;
    struct os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_queue;
    FBSSerialQueue *_workspaceQueue;
    FBSceneClientProviderInvalidationAction *_lock_invalidationAction;
    RBSAssertion *_lock_lifeAssertion;
    RBSAssertion *_lock_afterlifeAssertion;
    long long _lock_activeInterruptionPolicy;
    unsigned char _lock_activeAssertionState;
    BSCompoundAssertion *_compoundAssertion;
    BSServiceConnectionEndpointInjector *_workspaceServiceInjector;
    BOOL _shouldInjectEndpoint;
    BOOL _lock_didReceiveHandshake;
    BOOL _lock_invalidated;
}

@property (readonly, nonatomic) BSAuditToken *auditToken;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<FBWorkspaceDelegate> delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, weak, nonatomic) FBProcess *process;
@property (readonly) Class superclass;

+ (long long)_resolveInterruptionPolicy:(long long)arg1;
- (void).cxx_destruct;
- (void)_lock_enqueueConnectBlock:(CDUnknownBlockType)arg1;
- (void)_lock_fireInvalidationAction;
- (void)_resolveSceneLifecycleStateAndInterruptionPolicy;
- (id)_sceneForIdentifier:(id)arg1;
- (void)_terminateWithReason:(id)arg1;
- (id)_unregisterSceneForIdentifier:(id)arg1;
- (void)_updateProcessAssertionState;
- (void)dealloc;
- (oneway void)handshakeWithRemnants:(id)arg1;
- (void)host:(id)arg1 didInvalidateWithTransitionContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)host:(id)arg1 didReceiveActions:(id)arg2;
- (void)host:(id)arg1 didUpdateSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)init;
- (id)registerHost:(id)arg1 withSpecification:(id)arg2 settings:(id)arg3 initialClientSettings:(id)arg4 fromRemnant:(id)arg5;
- (void)registerInvalidationAction:(id)arg1;
- (oneway void)requestSceneWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)sceneID:(id)arg1 didReceiveActions:(id)arg2;
- (oneway void)sceneID:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 transitionContext:(id)arg3;
- (oneway void)sceneID:(id)arg1 sendMessage:(id)arg2 withResponse:(CDUnknownBlockType)arg3;
- (void)sendActions:(id)arg1;
- (void)unregisterHost:(id)arg1;

@end
