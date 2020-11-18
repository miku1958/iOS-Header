//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoard/BSDescriptionProviding-Protocol.h>
#import <FrontBoard/FBSProcessIdentity-Protocol.h>
#import <FrontBoard/FBSProcessInternal-Protocol.h>
#import <FrontBoard/FBUIProcess-Protocol.h>

@class BSMachPortTaskNameRight, BSProcessDeathWatcher, BSProcessHandle, FBProcessState, FBSProcessHandle, FBWorkspace, NSHashTable, NSString;
@protocol FBProcessDelegate, OS_dispatch_queue;

@interface FBProcess : NSObject <BSDescriptionProviding, FBUIProcess, FBSProcessInternal, FBSProcessIdentity>
{
    NSObject<OS_dispatch_queue> *_queue;
    FBProcessState *_state;
    NSString *_name;
    NSString *_jobLabel;
    NSString *_bundleIdentifier;
    NSString *_executablePath;
    BSProcessHandle *_handle;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    FBWorkspace *_workspace;
    NSHashTable *_observers;
    id<FBProcessDelegate> _delegate;
    long long _backgroundingPolicy;
    BOOL _supportsSuspendOnLock;
    int _pid;
    BOOL _running;
    BSProcessDeathWatcher *_processDeathObserver;
    BOOL _updatingState;
    long long _executableOnSystemPartition;
}

@property (readonly, nonatomic) long long backgroundingPolicy; // @synthesize backgroundingPolicy=_backgroundingPolicy;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<FBProcessDelegate> delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL executableLivesOnSystemPartition;
@property (readonly, nonatomic, getter=isForeground) BOOL foreground;
@property (readonly, strong, nonatomic) FBSProcessHandle *handle;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *jobLabel;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) int pid; // @synthesize pid=_pid;
@property (copy, nonatomic, getter=_queue_executablePath, setter=_queue_setExecutablePath:) NSString *queue_executablePath;
@property (copy, nonatomic, getter=_queue_jobLabel, setter=_queue_setJobLabel:) NSString *queue_jobLabel;
@property (copy, nonatomic, getter=_queue_name, setter=_queue_setName:) NSString *queue_name;
@property (nonatomic, getter=_queue_pid, setter=_queue_setPid:) int queue_pid;
@property (nonatomic, getter=_queue_isRunning, setter=_queue_setRunning:) BOOL queue_running;
@property (nonatomic, getter=_queue_taskState, setter=_queue_setTaskState:) int queue_taskState;
@property (nonatomic, getter=_queue_visibility, setter=_queue_setVisibility:) int queue_visibility;
@property (readonly, nonatomic, getter=isRunning) BOOL running; // @synthesize running=_running;
@property (readonly, copy, nonatomic) FBProcessState *state;
@property (readonly) Class superclass;
@property (nonatomic, getter=_queue_supportsSuspendOnLock, setter=_queue_setSupportsSuspendOnLock:) BOOL supportsSuspendOnLock; // @synthesize supportsSuspendOnLock=_supportsSuspendOnLock;
@property (readonly, strong, nonatomic) BSMachPortTaskNameRight *taskNameRight;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) FBWorkspace *workspace; // @synthesize workspace=_workspace;

- (void).cxx_destruct;
- (id)_createWorkspace;
- (int)_effectiveVisibilityForSceneSettings:(id)arg1 underLock:(BOOL)arg2;
- (int)_effectiveVisibilityForVisibility:(int)arg1 underLock:(BOOL)arg2;
- (BOOL)_isEffectivelyForegroundForSceneSettings:(id)arg1 underLock:(BOOL)arg2;
- (id)_queue;
- (void)_queue_callExitObservers;
- (void)_queue_configureWithHandle:(id)arg1;
- (BOOL)_queue_consideredUnderLock;
- (int)_queue_effectiveVisibilityForVisibility:(int)arg1;
- (void)_queue_enumerateObserversWithBlock:(CDUnknownBlockType)arg1;
- (BOOL)_queue_executableLivesOnSystemPartition;
- (BOOL)_queue_isForeground;
- (id)_queue_newWatchdogForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_queue_noteSceneCreationAcknowledged:(id)arg1;
- (void)_queue_processDidExit;
- (void)_queue_sceneLifecycleStateChanged:(id)arg1;
- (void)_queue_toggleProcessDeathObserver:(BOOL)arg1;
- (void)_queue_updateStateWithBlock:(CDUnknownBlockType)arg1;
- (void)_terminateWithRequest:(id)arg1 forWatchdog:(id)arg2;
- (BOOL)_watchdog:(id)arg1 shouldTerminateWithDeclineReason:(out id *)arg2;
- (id)_watchdog:(id)arg1 terminationRequestForViolatedProvision:(id)arg2 error:(id)arg3;
- (void)_watchdogStarted:(id)arg1;
- (void)_watchdogStopped:(id)arg1;
- (id)_workspace;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (BOOL)hasEntitlement:(id)arg1;
- (id)init;
- (id)initWithBundleID:(id)arg1 pid:(int)arg2 callOutQueue:(id)arg3;
- (id)initWithProcessHandle:(id)arg1 callOutQueue:(id)arg2;
- (BOOL)isApplicationProcess;
- (BOOL)isExtensionProcess;
- (BOOL)isSystemApplicationProcess;
- (void)removeObserver:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)valueForEntitlement:(id)arg1;

@end

