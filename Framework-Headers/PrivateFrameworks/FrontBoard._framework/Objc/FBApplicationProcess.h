//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoard/FBProcess.h>

#import <FrontBoard/BKSProcessDelegate-Protocol.h>

@class BKSProcess, BKSProcessAssertion, BSMachPortSendRight, FBApplicationInfo, FBApplicationProcessExitContext, FBProcessCPUStatistics, FBProcessExecutionContext, FBProcessState, FBProcessWatchdog, FBProcessWatchdogEventContext, FBSProcessTerminationRequest, FBSProcessWatchdogPolicy, NSMutableArray, NSMutableSet, NSString;
@protocol FBApplicationProcessDelegate;

@interface FBApplicationProcess : FBProcess <BKSProcessDelegate>
{
    FBApplicationInfo *_applicationInfo;
    FBApplicationProcessExitContext *_exitContext;
    FBProcessExecutionContext *_executionContext;
    FBSProcessTerminationRequest *_terminationRequest;
    FBProcessWatchdogEventContext *_terminationWatchdogContext;
    FBProcessState *_terminationState;
    NSMutableSet *_allowedLockedFilePaths;
    NSMutableArray *_queuedSceneBlocksToExecuteAfterLaunch;
    NSMutableArray *_queue_terminateRequestCompletionBlocks;
    BOOL _attemptedBootstrap;
    BOOL _attemptedFinalizedLaunch;
    BOOL _queue_launchEventReceiptAcknowledged;
    BOOL _bootstrapFailed;
    BOOL _exitedBeforeAttemptingFinalizedLaunch;
    BOOL _pendingExit;
    BOOL _beingDebugged;
    BOOL _waitForDebugger;
    BSMachPortSendRight *_gsEventPort;
    FBProcessWatchdog *_watchdog;
    FBSProcessWatchdogPolicy *_sceneCreateWatchdogPolicy;
    long long _terminationReason;
    FBProcessCPUStatistics *_cpuStatistics;
    double _execTime;
    unsigned long long _htAppIdentifier;
    BKSProcess *_bksProcess;
    BKSProcessAssertion *_launchProcessAssertion;
    BKSProcessAssertion *_viewServiceProcessAssertion;
    BKSProcessAssertion *_continuousProcessAssertion;
    BOOL _recordingAudio;
    BOOL _nowPlayingWithAudio;
    BOOL _connectedToExternalAccessory;
}

@property (readonly, nonatomic) FBApplicationInfo *applicationInfo; // @synthesize applicationInfo=_applicationInfo;
@property (nonatomic, getter=isBeingDebugged) BOOL beingDebugged; // @synthesize beingDebugged=_beingDebugged;
@property (nonatomic, getter=isConnectedToExternalAccessory) BOOL connectedToExternalAccessory; // @synthesize connectedToExternalAccessory=_connectedToExternalAccessory;
@property (readonly, nonatomic, getter=_queue_cpuStatistics) FBProcessCPUStatistics *cpuStatistics; // @synthesize cpuStatistics=_cpuStatistics;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<FBApplicationProcessDelegate> delegate; // @dynamic delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) double elapsedCPUTime;
@property (readonly, nonatomic, getter=_queue_execTime) double execTime;
@property (readonly, copy, nonatomic) FBProcessExecutionContext *executionContext; // @synthesize executionContext=_executionContext;
@property (readonly, nonatomic) FBApplicationProcessExitContext *exitContext;
@property (readonly, nonatomic) BOOL finishedLaunching;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isNowPlayingWithAudio) BOOL nowPlayingWithAudio; // @synthesize nowPlayingWithAudio=_nowPlayingWithAudio;
@property (readonly, nonatomic, getter=isPendingExit) BOOL pendingExit; // @synthesize pendingExit=_pendingExit;
@property (nonatomic, getter=isRecordingAudio) BOOL recordingAudio; // @synthesize recordingAudio=_recordingAudio;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=_queue_terminationReason) long long terminationReason;

- (void).cxx_destruct;
- (id)GSEventPort;
- (id)_applicationWorkspace;
- (id)_createWorkspace;
- (long long)_exceptionCodeForKillReason:(int)arg1;
- (void)_queue_addAllowedLockedFilePath:(id)arg1;
- (void)_queue_addAllowedLockedPaths;
- (long long)_queue_bksVisibilityForVisibility:(int)arg1;
- (BOOL)_queue_bootstrapAndExecWithContext:(id)arg1;
- (void)_queue_callExitObservers;
- (void)_queue_cancelWatchdogTimer;
- (id)_queue_composeContextWithValue:(id)arg1 key:(id)arg2;
- (id)_queue_crashReportThermalsInfo;
- (void)_queue_doGracefulKillWithDeliveryConfirmation:(CDUnknownBlockType)arg1;
- (void)_queue_dropContinuousProcessAssertion;
- (void)_queue_dropLaunchProcessAssertion;
- (void)_queue_dropViewServiceAssertion;
- (void)_queue_enumerateApplicationObserversWithBlock:(CDUnknownBlockType)arg1;
- (void)_queue_executeBlockAfterLaunchCompletes:(CDUnknownBlockType)arg1;
- (void)_queue_executeKillForRequest:(id)arg1;
- (void)_queue_executeLaunchCompletionBlocks;
- (void)_queue_executeTerminateRequestCompletionBlocksIfNecessaryForSucccess:(BOOL)arg1;
- (void)_queue_finishLaunch;
- (id)_queue_internalDebugEnvironmentVariables;
- (void)_queue_invalidateBKSProcess;
- (BOOL)_queue_isAllowedLockedFilePath:(id)arg1 standardizedPath:(out id *)arg2;
- (BOOL)_queue_isPlatformExecutable;
- (void)_queue_killForReason:(long long)arg1 andReport:(BOOL)arg2 withDescription:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_queue_killWithSignal:(int)arg1;
- (void)_queue_launchIfNecessary;
- (id)_queue_lockedFilePathsIgnoringAllowed;
- (id)_queue_name;
- (id)_queue_newWatchdogForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)_queue_noteExitedForForceQuit:(BOOL)arg1;
- (void)_queue_noteSceneCreationAcknowledged:(id)arg1;
- (int)_queue_ourTaskStateForBKSTaskState:(long long)arg1;
- (void)_queue_processDidExit;
- (void)_queue_sceneNeedsGracefulExit:(id)arg1 withDeliveryConfirmation:(CDUnknownBlockType)arg2;
- (void)_queue_setTaskState:(int)arg1;
- (void)_queue_setVisibility:(int)arg1;
- (BOOL)_queue_shouldWatchdogWithDeclineReason:(id *)arg1;
- (void)_queue_startWatchdogTimerForContext:(id)arg1;
- (void)_queue_takeLaunchProcessAssertion;
- (void)_queue_terminateWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_terminateWithRequest:(id)arg1 forWatchdog:(id)arg2;
- (BOOL)_watchdog:(id)arg1 shouldTerminateWithDeclineReason:(out id *)arg2;
- (id)_watchdog:(id)arg1 terminationRequestForViolatedProvision:(id)arg2 error:(id)arg3;
- (id)_watchdogProvider;
- (long long)_watchdogReportType;
- (void)_watchdogStarted:(id)arg1;
- (void)_watchdogStopped:(id)arg1;
- (id)_workspace;
- (id)_workspaceServer;
- (BOOL)bootstrapWithContext:(id)arg1;
- (void)dealloc;
- (void)executeBlockAfterLaunchCompletes:(CDUnknownBlockType)arg1;
- (id)initWithApplicationInfo:(id)arg1 callOutQueue:(id)arg2;
- (id)initWithApplicationInfo:(id)arg1 handle:(id)arg2 callOutQueue:(id)arg3;
- (id)initWithBundleID:(id)arg1 pid:(int)arg2 callOutQueue:(id)arg3;
- (BOOL)isApplicationProcess;
- (BOOL)isSystemApplicationProcess;
- (void)killForReason:(long long)arg1 andReport:(BOOL)arg2 withDescription:(id)arg3;
- (void)killForReason:(long long)arg1 andReport:(BOOL)arg2 withDescription:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)launchIfNecessary;
- (void)process:(id)arg1 didExitWithContext:(id)arg2;
- (void)process:(id)arg1 isBeingDebugged:(BOOL)arg2;
- (void)process:(id)arg1 taskStateDidChange:(long long)arg2;
- (void)processWillExpire:(id)arg1;
- (void)setPendingExit:(BOOL)arg1;
- (void)stop;

@end

