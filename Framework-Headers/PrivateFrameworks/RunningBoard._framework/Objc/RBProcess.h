//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RunningBoard/BSDescriptionProviding-Protocol.h>
#import <RunningBoard/RBSProcessIdentifier-Protocol.h>

@class BSAuditToken, BSMachPortTaskNameRight, NSString, RBLaunchdJob, RBProcessState, RBSProcessExitContext, RBSProcessExitStatus, RBSProcessHandle, RBSProcessIdentifier, RBSProcessIdentity, RBSProcessInstance;
@protocol OS_dispatch_source, RBBundleProperties, RBJetsamBandProviding;

@interface RBProcess : NSObject <RBSProcessIdentifier, BSDescriptionProviding>
{
    int _pid;
    RBLaunchdJob *_job;
    RBSProcessIdentity *_identity;
    RBSProcessHandle *_handle;
    BSMachPortTaskNameRight *_taskNameRight;
    NSString *_logProem;
    id<RBJetsamBandProviding> _jetsamProvider;
    RBProcess *_hostProcess;
    struct os_unfair_lock_s _lock;
    RBProcessState *_lock_appliedState;
    RBProcessState *_lock_state;
    int _appliedJetsamPriority;
    BOOL _platformBinary;
    BOOL _usesSocketMonitoring;
    BOOL _systemPreventsIdleSleep;
    unsigned char _manageFlags;
    NSObject<OS_dispatch_source> *_procSource;
    double _cachedProcessStartTime;
    BOOL _systemShell;
    BOOL _terminating;
    BOOL _suspended;
    int _requestedJetsamPriority;
    RBSProcessIdentifier *_identifier;
    RBSProcessInstance *_instance;
    RBSProcessExitContext *_lastExitContext;
    RBSProcessExitStatus *_intendedExitStatus;
    id<RBBundleProperties> _bundleProperties;
    BSAuditToken *_auditToken;
    NSString *_underlyingAssertion;
    double _processStartTime;
}

@property (readonly, copy, nonatomic) BSAuditToken *auditToken; // @synthesize auditToken=_auditToken;
@property (readonly, nonatomic, getter=isBeingPtraced) BOOL beingPtraced;
@property (readonly, nonatomic) id<RBBundleProperties> bundleProperties; // @synthesize bundleProperties=_bundleProperties;
@property (readonly, nonatomic) int currentJetsamPriority;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) RBSProcessHandle *handle; // @synthesize handle=_handle;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) RBProcess *hostProcess; // @synthesize hostProcess=_hostProcess;
@property (readonly, copy, nonatomic) RBSProcessIdentifier *identifier; // @synthesize identifier=_identifier;
@property (readonly, copy, nonatomic) RBSProcessIdentity *identity; // @synthesize identity=_identity;
@property (readonly, copy, nonatomic) RBSProcessInstance *instance; // @synthesize instance=_instance;
@property (copy, nonatomic) RBSProcessExitStatus *intendedExitStatus; // @synthesize intendedExitStatus=_intendedExitStatus;
@property (readonly, nonatomic) RBLaunchdJob *job; // @synthesize job=_job;
@property (readonly, copy, nonatomic) RBSProcessExitContext *lastExitContext; // @synthesize lastExitContext=_lastExitContext;
@property (readonly, nonatomic, getter=isLifecycleManaged) BOOL lifecycleManaged;
@property (readonly, nonatomic) NSString *logProem; // @synthesize logProem=_logProem;
@property (readonly, nonatomic, getter=isPlatformBinary) BOOL platformBinary; // @synthesize platformBinary=_platformBinary;
@property (readonly, nonatomic) double processStartTime; // @synthesize processStartTime=_processStartTime;
@property (readonly, nonatomic, getter=isReported) BOOL reported;
@property (readonly, nonatomic) int requestedJetsamPriority; // @synthesize requestedJetsamPriority=_requestedJetsamPriority;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isSuspended) BOOL suspended; // @synthesize suspended=_suspended;
@property (readonly, nonatomic, getter=isSystemShell) BOOL systemShell; // @synthesize systemShell=_systemShell;
@property (nonatomic, getter=isTerminating) BOOL terminating; // @synthesize terminating=_terminating;
@property (readonly, nonatomic) NSString *underlyingAssertion; // @synthesize underlyingAssertion=_underlyingAssertion;

- (void).cxx_destruct;
- (void)_applyJetsamLenientModeState:(BOOL)arg1;
- (void)_applyState:(id)arg1;
- (id)_initWithInstance:(id)arg1 taskNameRight:(id)arg2 job:(id)arg3 bundleProperties:(id)arg4 jetsamBandProvider:(id)arg5 initialState:(id)arg6 hostProcess:(id)arg7 properties:(id)arg8 systemPreventsIdleSleep:(BOOL)arg9;
- (id)_lock_allowedLockedFilePaths;
- (void)_lock_applyCPULimits;
- (void)_lock_applyCurrentStateIfPossible;
- (void)_lock_applyGPU;
- (void)_lock_applyJetsamLenientMode;
- (void)_lock_applyJetsamPriority;
- (void)_lock_applyRole;
- (void)_lock_disableCPULimits;
- (id)_lock_lockedFilePathsIgnoringAllowed;
- (void)_lock_restoreCPULimitDefaults;
- (void)_lock_resume;
- (void)_lock_resumeCPUMonitoring;
- (void)_lock_setCPULimits:(CDStruct_1ef3fb1f *)arg1 violationPolicy:(unsigned long long)arg2;
- (void)_lock_shutdownSockets;
- (void)_lock_suspend;
- (BOOL)_lock_terminateWithContext:(id)arg1;
- (BOOL)_sendSignal:(int)arg1;
- (void)_systemPreventIdleSleepStateDidChange:(BOOL)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)init;
- (void)invalidate;
- (void)invokeHandlerOnProcessDeath:(CDUnknownBlockType)arg1 onQueue:(id)arg2;
- (BOOL)matchesProcess:(id)arg1;
- (id)processPredicate;
- (int)rbs_pid;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (BOOL)terminateWithContext:(id)arg1;

@end
