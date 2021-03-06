//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RunningBoard/NSObject-Protocol.h>

@class NSArray, NSObject, NSSet, RBProcess, RBProcessState, RBProcessStateChangeSet, RBSProcessIdentity, RBSProcessMonitorConfiguration, RBSProcessPredicate;
@protocol OS_dispatch_queue, RBProcessMonitorObserving;

@protocol RBProcessMonitoring <NSObject>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *monitorSerializationQueue;

- (void)addObserver:(id<RBProcessMonitorObserving>)arg1;
- (void)didAddProcess:(RBProcess *)arg1 withState:(RBProcessState *)arg2;
- (void)didRemoveProcess:(RBProcess *)arg1 withState:(RBProcessState *)arg2;
- (void)didResolvePreventLaunchPredicates:(NSSet *)arg1;
- (void)didUpdateProcessStates:(RBProcessStateChangeSet *)arg1;
- (NSSet *)preventLaunchPredicates;
- (void)removeObserver:(id<RBProcessMonitorObserving>)arg1;
- (void)removeStateForProcessIdentity:(RBSProcessIdentity *)arg1;
- (NSArray *)statesMatchingConfiguration:(RBSProcessMonitorConfiguration *)arg1;
- (NSArray *)statesMatchingPredicate:(RBSProcessPredicate *)arg1;
- (void)suppressUpdatesForIdentity:(RBSProcessIdentity *)arg1;
- (void)trackStateForProcessIdentity:(RBSProcessIdentity *)arg1;
- (void)unsuppressUpdatesForIdentity:(RBSProcessIdentity *)arg1;
@end

