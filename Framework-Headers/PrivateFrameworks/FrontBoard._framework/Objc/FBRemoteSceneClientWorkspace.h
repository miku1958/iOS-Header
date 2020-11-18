//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <FrontBoard/FBApplicationProcessLaunchTransactionObserver-Protocol.h>
#import <FrontBoard/FBSceneClientProvider-Protocol.h>
#import <FrontBoard/FBUISceneClientDelegate-Protocol.h>
#import <FrontBoard/FBUISceneClientWorkspace-Protocol.h>

@class FBApplicationProcessLaunchTransaction, FBSceneClientProviderInvalidationAction, FBUISceneClientIdentity, FBWorkspace, NSMutableDictionary, NSString;
@protocol FBUIProcess;

@interface FBRemoteSceneClientWorkspace : NSObject <FBApplicationProcessLaunchTransactionObserver, FBUISceneClientDelegate, FBUISceneClientWorkspace, FBSceneClientProvider>
{
    FBUISceneClientIdentity *_clientIdentity;
    FBWorkspace *_processWorkspace;
    NSMutableDictionary *_hostsByIdentifer;
    NSMutableDictionary *_clientsByIdentity;
    NSMutableDictionary *_handlerByIdentity;
    FBApplicationProcessLaunchTransaction *_launchTransaction;
    FBSceneClientProviderInvalidationAction *_invalidationAction;
    BOOL _invalidated;
}

@property (readonly, copy, nonatomic) FBUISceneClientIdentity *clientIdentity; // @synthesize clientIdentity=_clientIdentity;
@property (readonly, strong, nonatomic) id<FBUIProcess> clientProcess;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) FBWorkspace *processWorkspace; // @synthesize processWorkspace=_processWorkspace;
@property (readonly) Class superclass;

- (id)_createSceneClientForIdentity:(id)arg1;
- (void)_processLaunched:(id)arg1;
- (id)_processWorkspace;
- (id)_sceneClientForIdentity:(id)arg1;
- (void)beginTransaction;
- (id)clientForSceneIdentity:(id)arg1;
- (id)createHostForSceneWithIdentity:(id)arg1 initialParameters:(id)arg2;
- (void)dealloc;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)didInvalidateSceneClient:(id)arg1;
- (void)endTransaction;
- (id)initWithClientIdentity:(id)arg1;
- (void)initialize;
- (void)invalidate;
- (id)registerHost:(id)arg1;
- (void)registerInvalidationAction:(id)arg1;
- (void)registerSceneWithIdentity:(id)arg1 acquisitionHandler:(CDUnknownBlockType)arg2;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)transaction:(id)arg1 willLaunchProcess:(id)arg2;
- (void)transactionDidComplete:(id)arg1;
- (void)unregisterHost:(id)arg1;

@end

