//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/FBSWorkspaceClientDelegate-Protocol.h>

@class FBSSerialQueue, FBSWorkspaceClient, NSArray, NSMapTable, NSMutableDictionary, NSString;
@protocol FBSWorkspaceDelegate, OS_dispatch_queue;

@interface FBSWorkspace : NSObject <FBSWorkspaceClientDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    id<FBSWorkspaceDelegate> _delegate;
    FBSWorkspaceClient *_client;
    FBSSerialQueue *_callOutQueue;
    NSObject<OS_dispatch_queue> *_scenesQueue;
    NSMutableDictionary *_scenesByIdentifier;
    NSMapTable *_triggerToFenceNameMap;
    BOOL _synchronizingFence;
    unsigned long long _signpostName;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<FBSWorkspaceDelegate> delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, strong, nonatomic) FBSSerialQueue *queue; // @synthesize queue=_callOutQueue;
@property (readonly, copy, nonatomic) NSArray *scenes;
@property (readonly) Class superclass;

- (id)_client;
- (Class)_clientClass;
- (id)_internalQueue;
- (void)_performDelegateCallOut:(CDUnknownBlockType)arg1;
- (id)_sceneWithIdentifier:(id)arg1;
- (void)client:(id)arg1 handleActions:(id)arg2;
- (void)client:(id)arg1 handleCreateScene:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)client:(id)arg1 handleDestroyScene:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)clientBeginTransaction:(id)arg1;
- (void)clientEndTransaction:(id)arg1;
- (void)clientSystemApplicationTerminated:(id)arg1;
- (void)dealloc;
- (void)enumerateScenesWithBlock:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (id)initWithSerialQueue:(id)arg1;
- (BOOL)isTrackingAnySystemAnimationFence;
- (BOOL)isUIApplicationWorkspace;
- (void)requestDestructionOfScene:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)requestSceneCreationWithIdentifier:(id)arg1 initialClientSettings:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestSceneCreationWithInitialClientSettings:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)requestSystemAnimationFence;
- (id)sceneWithIdentifier:(id)arg1;
- (void)synchronizeSystemAnimationFencesWithCleanUpBlock:(CDUnknownBlockType)arg1;
- (BOOL)trackSystemAnimationFence:(id)arg1;

@end

