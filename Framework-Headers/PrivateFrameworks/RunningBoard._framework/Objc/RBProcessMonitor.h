//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RunningBoard/RBProcessMonitoring-Protocol.h>
#import <RunningBoard/RBStateCapturing-Protocol.h>

@class NSCountedSet, NSMutableSet, NSSet, NSString, RBProcessIndex, RBProcessMap;
@protocol OS_dispatch_queue, RBStateCaptureManaging;

@interface RBProcessMonitor : NSObject <RBProcessMonitoring, RBStateCapturing>
{
    RBProcessIndex *_processIndex;
    RBProcessMap *_stateMap;
    RBProcessMap *_suppressedState;
    RBProcessMap *_publishedState;
    NSCountedSet *_suppressedIdentities;
    struct os_unfair_lock_s _observersLock;
    NSMutableSet *_observers;
    id<RBStateCaptureManaging> _stateCaptureManager;
    NSSet *_preventLaunchPredicates;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *monitorSerializationQueue; // @synthesize monitorSerializationQueue=_queue;
@property (readonly, copy, nonatomic) NSString *stateCaptureTitle;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)captureState;
- (void)didAddProcess:(id)arg1 withState:(id)arg2;
- (void)didRemoveProcess:(id)arg1 withState:(id)arg2;
- (void)didResolvePreventLaunchPredicates:(id)arg1;
- (void)didUpdateProcessStates:(id)arg1;
- (id)initWithStateCaptureManager:(id)arg1;
- (id)preventLaunchPredicates;
- (void)removeObserver:(id)arg1;
- (void)removeStateForProcessIdentity:(id)arg1;
- (id)statesMatchingConfiguration:(id)arg1;
- (id)statesMatchingPredicate:(id)arg1;
- (void)suppressUpdatesForIdentity:(id)arg1;
- (void)trackStateForProcessIdentity:(id)arg1;
- (void)unsuppressUpdatesForIdentity:(id)arg1;

@end

