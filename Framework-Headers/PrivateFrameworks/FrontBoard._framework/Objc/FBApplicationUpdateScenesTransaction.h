//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoard/FBSynchronizedTransactionGroup.h>

#import <FrontBoard/FBApplicationProcessLaunchTransactionObserver-Protocol.h>
#import <FrontBoard/FBUpdateSceneTransactionObserver-Protocol.h>

@class FBApplicationProcess, FBApplicationProcessLaunchTransaction, FBSSceneClientIdentity, NSMutableArray, NSString;

@interface FBApplicationUpdateScenesTransaction : FBSynchronizedTransactionGroup <FBApplicationProcessLaunchTransactionObserver, FBUpdateSceneTransactionObserver>
{
    FBSSceneClientIdentity *_clientIdentity;
    FBApplicationProcessLaunchTransaction *_processLaunchTransaction;
    BOOL _processLaunched;
    BOOL _waitsForSceneCommits;
    NSMutableArray *_updateSceneTransactions;
    NSMutableArray *_pendingUpdateSceneBlocks;
}

@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) FBApplicationProcess *process;
@property (readonly) Class superclass;
@property (nonatomic) BOOL waitsForSceneCommits; // @synthesize waitsForSceneCommits=_waitsForSceneCommits;

- (void).cxx_destruct;
- (BOOL)_canBeInterrupted;
- (id)_customizedDescriptionProperties;
- (void)_didComplete;
- (void)_didRemoveChildTransaction:(id)arg1;
- (void)_executeSceneUpdatesIfAppropriate;
- (void)_noteDidCommitUpdateForScene:(id)arg1;
- (void)_noteWillCommitUpdateForScene:(id)arg1;
- (void)_performSynchronizedCommit:(id)arg1;
- (BOOL)_shouldFailForChildTransaction:(id)arg1;
- (void)_updateSceneWithIdentity:(id)arg1 parameters:(id)arg2 transitionContext:(id)arg3;
- (void)_willAddChildTransaction:(id)arg1;
- (void)_willFailWithReason:(id)arg1;
- (void)_willInterruptWithReason:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)init;
- (id)initWithApplicationBundleID:(id)arg1 executionContextProvider:(CDUnknownBlockType)arg2;
- (id)initWithClientIdentity:(id)arg1 executionContextProvider:(CDUnknownBlockType)arg2;
- (id)initWithProcessIdentity:(id)arg1 executionContextProvider:(CDUnknownBlockType)arg2;
- (void)removeObserver:(id)arg1;
- (void)transaction:(id)arg1 didLaunchProcess:(id)arg2;
- (void)transaction:(id)arg1 willLaunchProcess:(id)arg2;
- (void)updateSceneTransactionDidCommitUpdate:(id)arg1;
- (void)updateSceneTransactionDidCreateScene:(id)arg1;
- (void)updateSceneTransactionWillCommitUpdate:(id)arg1;
- (void)updateSceneTransactionWillUpdateScene:(id)arg1;
- (void)updateSceneWithIdentifier:(id)arg1 parameters:(id)arg2 transitionContext:(id)arg3;
- (void)updateSceneWithIdentity:(id)arg1 parameters:(id)arg2 transitionContext:(id)arg3;

@end
