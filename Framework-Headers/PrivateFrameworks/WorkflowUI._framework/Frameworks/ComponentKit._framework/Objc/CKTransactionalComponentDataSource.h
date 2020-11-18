//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ComponentKit/CKComponentDebugReflowListener-Protocol.h>
#import <ComponentKit/CKComponentStateListener-Protocol.h>

@class CKTransactionalComponentDataSourceListenerAnnouncer, CKTransactionalComponentDataSourceState, NSMutableArray, NSString, NSThread;
@protocol OS_dispatch_queue;

@interface CKTransactionalComponentDataSource : NSObject <CKComponentStateListener, CKComponentDebugReflowListener>
{
    CKTransactionalComponentDataSourceState *_state;
    CKTransactionalComponentDataSourceListenerAnnouncer *_announcer;
    unordered_map_097a8478 _pendingAsynchronousStateUpdates;
    unordered_map_097a8478 _pendingSynchronousStateUpdates;
    NSMutableArray *_pendingAsynchronousModifications;
    NSThread *_workThreadOverride;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_applyModificationPair:(id)arg1;
- (id)_cancelEnqueuedModificationsOfType:(Class)arg1;
- (void)_enqueueModification:(id)arg1;
- (void)_processStateUpdates;
- (void)_startFirstAsynchronousModification;
- (void)_synchronouslyApplyChange:(id)arg1;
- (void)addListener:(id)arg1;
- (void)applyChangeset:(id)arg1 mode:(unsigned long long)arg2 userInfo:(id)arg3;
- (void)componentScopeHandleWithIdentifier:(int)arg1 rootIdentifier:(int)arg2 didReceiveStateUpdate:(CDUnknownBlockType)arg3 mode:(unsigned long long)arg4;
- (void)didReceiveReflowComponentsRequest;
- (id)initWithConfiguration:(id)arg1;
- (void)reloadWithMode:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)removeListener:(id)arg1;
- (id)state;
- (void)updateConfiguration:(id)arg1 mode:(unsigned long long)arg2 userInfo:(id)arg3;

@end
