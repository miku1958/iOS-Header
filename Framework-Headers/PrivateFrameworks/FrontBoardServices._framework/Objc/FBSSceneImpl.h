//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoardServices/FBSScene.h>

#import <FrontBoardServices/FBSSceneAgentProxy-Protocol.h>
#import <FrontBoardServices/FBSSceneHandle-Protocol.h>
#import <FrontBoardServices/FBSSceneSnapshotRequestDelegate-Protocol.h>

@class FBSSceneClientSettings, FBSSceneSettings, FBSSceneSpecification, FBSSerialQueue, NSMutableArray, NSObject, NSString;
@protocol FBSSceneClientAgent, FBSSceneDelegate, FBSSceneUpdater, OS_dispatch_queue;

@interface FBSSceneImpl : FBSScene <FBSSceneSnapshotRequestDelegate, FBSSceneHandle, FBSSceneAgentProxy>
{
    id<FBSSceneDelegate> _delegate;
    NSString *_identifier;
    FBSSceneSpecification *_specification;
    FBSSceneSettings *_settings;
    FBSSceneClientSettings *_clientSettings;
    id<FBSSceneUpdater> _updater;
    id<FBSSceneClientAgent> _agent;
    CDUnknownBlockType _agentMessageHandler;
    FBSSerialQueue *_callOutQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_layers;
    BOOL _shouldObserveLayers;
    NSMutableArray *_agentSessions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_didCreateWithTransitionContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)_hasAgent;
- (id)_initWithInternalQueue:(id)arg1 callOutQueue:(id)arg2 updater:(id)arg3 identifier:(id)arg4 specification:(id)arg5 settings:(id)arg6 clientSettings:(id)arg7;
- (id)_initWithQueue:(id)arg1 callOutQueue:(id)arg2 identifier:(id)arg3 specification:(id)arg4 settings:(id)arg5 clientSettings:(id)arg6;
- (void)_performDelegateCallOut:(CDUnknownBlockType)arg1;
- (void)_queue_configureReceivedActions:(id)arg1;
- (void)_queue_invalidate;
- (void)_updateLayer:(id)arg1;
- (void)_willDestroyWithTransitionContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)agent:(id)arg1 registerMessageHandler:(CDUnknownBlockType)arg2;
- (void)agent:(id)arg1 sendMessage:(id)arg2 withResponse:(CDUnknownBlockType)arg3;
- (void)attachContext:(id)arg1;
- (void)attachLayer:(id)arg1;
- (void)attachSceneContext:(id)arg1;
- (id)callOutQueue;
- (id)clientProcess;
- (id)clientSettings;
- (void)closeSession:(id)arg1;
- (id)counterpartAgent;
- (void)dealloc;
- (id)delegate;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)detachContext:(id)arg1;
- (void)detachLayer:(id)arg1;
- (void)detachSceneContext:(id)arg1;
- (id)hostProcess;
- (id)identifier;
- (id)initWithCallOutQueue:(id)arg1 identifier:(id)arg2 parameters:(id)arg3;
- (id)initWithQueue:(id)arg1 identifier:(id)arg2 display:(id)arg3 settings:(id)arg4 clientSettings:(id)arg5;
- (BOOL)invalidateSnapshotWithContext:(id)arg1;
- (id)layers;
- (id)openSessionWithName:(id)arg1 executionPolicy:(id)arg2;
- (id)parameters;
- (BOOL)performSnapshotWithContext:(id)arg1;
- (void)sceneLayerDidInvalidate:(id)arg1;
- (void)sceneLayerDidUpdate:(id)arg1;
- (BOOL)sceneLayerShouldObserveUpdates:(id)arg1;
- (void)sendActions:(id)arg1;
- (id)sessionForIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)settings;
- (id)snapshotRequest;
- (BOOL)snapshotRequest:(id)arg1 performWithContext:(id)arg2;
- (BOOL)snapshotRequestAllowSnapshot:(id)arg1;
- (id)specification;
- (void)updateClientSettings:(id)arg1 withTransitionContext:(id)arg2;
- (void)updateClientSettingsWithBlock:(CDUnknownBlockType)arg1;
- (void)updateClientSettingsWithTransitionBlock:(CDUnknownBlockType)arg1;
- (void)updater:(id)arg1 didReceiveActions:(id)arg2;
- (void)updater:(id)arg1 didReceiveMessage:(id)arg2 withResponse:(CDUnknownBlockType)arg3;
- (void)updater:(id)arg1 didUpdateSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 completion:(CDUnknownBlockType)arg5;

@end

