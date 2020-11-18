//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoAnalysis/PHAActivityGovernorDelegate-Protocol.h>
#import <PhotoAnalysis/PHAAnalysisStateObserverDelegate-Protocol.h>
#import <PhotoAnalysis/PHADirtyChangeCoalescerDelegate-Protocol.h>
#import <PhotoAnalysis/PHAJobCoalescerDelegate-Protocol.h>
#import <PhotoAnalysis/PHAJobConstraintsObserverDelegate-Protocol.h>
#import <PhotoAnalysis/PHAWorkerJobDelegate-Protocol.h>
#import <PhotoAnalysis/PLPhotoAnalysisJobServiceProtocol-Protocol.h>

@class NSDictionary, NSMutableArray, NSMutableSet, NSString, PHAActivityGovernor, PHAAnalysisStateObserver, PHADirtyChangeCoalescer, PHAJobCoalescer, PHAJobConstraints, PHAJobConstraintsObserver, PHAJobGenerator, PHAManager, PHAWorkerHealthMonitor, PHAWorkerJob, PHAWorkerWarmer;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction, OS_voucher, PHAJobCoordinatorDelegate;

@interface PHAJobCoordinator : NSObject <PHAJobCoalescerDelegate, PHAJobConstraintsObserverDelegate, PHAWorkerJobDelegate, PHAAnalysisStateObserverDelegate, PHADirtyChangeCoalescerDelegate, PHAActivityGovernorDelegate, PLPhotoAnalysisJobServiceProtocol>
{
    _Atomic int _pendingAsyncTasksCount;
    NSObject<OS_voucher> *_turboModeBoostVoucher;
    BOOL _turboMode;
    BOOL _newConstraintsPending;
    BOOL _shouldIgnoreConstraintChanges;
    PHAJobCoalescer *_jobCoalescer;
    PHADirtyChangeCoalescer *_dirtyCoalescer;
    PHAJobConstraintsObserver *_constraintsObserver;
    double _maxIntervalSinceLastJobReport;
    PHAAnalysisStateObserver *_stateObserver;
    id<PHAJobCoordinatorDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_maintenanceTimer;
    NSDictionary *_workersByType;
    PHAWorkerHealthMonitor *_healthMonitor;
    PHAActivityGovernor *_activityGovernor;
    PHAJobGenerator *_jobGenerator;
    PHAWorkerWarmer *_warmer;
    PHAManager *_manager;
    PHAJobConstraints *_currentConstraints;
    PHAWorkerJob *_currentForegroundJob;
    NSMutableArray *_waitingForegroundJobs;
    PHAWorkerJob *_currentBackgroundJob;
    NSObject<OS_os_transaction> *_runningJobTransaction;
    NSMutableSet *_workerTypesServicedForUserFG;
}

@property (readonly, nonatomic) PHAActivityGovernor *activityGovernor; // @synthesize activityGovernor=_activityGovernor;
@property (nonatomic) BOOL activityGovernorOverride; // @dynamic activityGovernorOverride;
@property (readonly, nonatomic) PHAJobConstraintsObserver *constraintsObserver; // @synthesize constraintsObserver=_constraintsObserver;
@property (strong, nonatomic) PHAWorkerJob *currentBackgroundJob; // @synthesize currentBackgroundJob=_currentBackgroundJob;
@property (copy, nonatomic) PHAJobConstraints *currentConstraints; // @synthesize currentConstraints=_currentConstraints;
@property (strong, nonatomic) PHAWorkerJob *currentForegroundJob; // @synthesize currentForegroundJob=_currentForegroundJob;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PHAJobCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PHADirtyChangeCoalescer *dirtyCoalescer; // @synthesize dirtyCoalescer=_dirtyCoalescer;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) PHAWorkerHealthMonitor *healthMonitor; // @synthesize healthMonitor=_healthMonitor;
@property (readonly, nonatomic) PHAJobCoalescer *jobCoalescer; // @synthesize jobCoalescer=_jobCoalescer;
@property (readonly, nonatomic) PHAJobGenerator *jobGenerator; // @synthesize jobGenerator=_jobGenerator;
@property (readonly, nonatomic) NSObject<OS_dispatch_source> *maintenanceTimer; // @synthesize maintenanceTimer=_maintenanceTimer;
@property (weak, nonatomic) PHAManager *manager; // @synthesize manager=_manager;
@property (nonatomic) double maxIntervalSinceLastJobReport; // @synthesize maxIntervalSinceLastJobReport=_maxIntervalSinceLastJobReport;
@property (nonatomic) BOOL newConstraintsPending; // @synthesize newConstraintsPending=_newConstraintsPending;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly, nonatomic, getter=isQuiescent) BOOL quiescent;
@property (strong, nonatomic) NSObject<OS_os_transaction> *runningJobTransaction; // @synthesize runningJobTransaction=_runningJobTransaction;
@property (nonatomic) BOOL shouldIgnoreConstraintChanges; // @synthesize shouldIgnoreConstraintChanges=_shouldIgnoreConstraintChanges;
@property (readonly, nonatomic) PHAAnalysisStateObserver *stateObserver; // @synthesize stateObserver=_stateObserver;
@property (readonly) Class superclass;
@property (nonatomic, getter=isTurboMode) BOOL turboMode; // @synthesize turboMode=_turboMode;
@property (readonly, nonatomic) NSMutableArray *waitingForegroundJobs; // @synthesize waitingForegroundJobs=_waitingForegroundJobs;
@property (readonly, nonatomic) PHAWorkerWarmer *warmer; // @synthesize warmer=_warmer;
@property (strong, nonatomic) NSMutableSet *workerTypesServicedForUserFG; // @synthesize workerTypesServicedForUserFG=_workerTypesServicedForUserFG;
@property (readonly, nonatomic) NSDictionary *workersByType; // @synthesize workersByType=_workersByType;

- (void).cxx_destruct;
- (void)_cleanupStuckAnalysisState;
- (id)_defaultWorkersByType;
- (void)_dispatchTransactionAsyncWithName:(const char *)arg1 block:(CDUnknownBlockType)arg2;
- (void)_inq_enforceTimeoutForJob:(id)arg1;
- (void)_inq_enqueueForegroundJob:(id)arg1;
- (void)_inq_handleJobFinished:(id)arg1;
- (void)_inq_handleNoMoreJobsExpected;
- (BOOL)_inq_isQuiescent;
- (void)_inq_launchJob:(id)arg1;
- (id)_inq_nextForegroundJobCanRunAutomatic:(BOOL)arg1 canRunUserFG:(BOOL)arg2 canRunImmediate:(BOOL)arg3;
- (void)_inq_reconsiderWantsFGActivityBasedOnConstraints:(id)arg1;
- (id)_inq_runningJobs;
- (void)_inq_stopJobDueToConstraintOrActivityChange:(id)arg1;
- (void)_inq_stopJobsAfterConstraintOrActivityChange;
- (void)_inq_timeoutJob:(id)arg1;
- (void)_installMaintenanceTimer;
- (id)_nextAdditionalJobForWorkerTypeObj:(id)arg1 scenario:(unsigned long long)arg2;
- (void)_scheduleNextJob;
- (id)_workerForJob:(id)arg1;
- (void)analysisStateObserver:(id)arg1 didChangeAnalysisStateTo:(int)arg2 from:(int)arg3 assetIdentifier:(id)arg4 workerFlags:(int)arg5 workerType:(short)arg6;
- (void)coalescer:(id)arg1 didCoalesce:(id)arg2 forWorkerType:(short)arg3;
- (void)dealloc;
- (void)didFinishJob:(id)arg1;
- (void)enforceTimeouts;
- (void)enqueueForegroundJob:(id)arg1;
- (void)governorDidGrantBackgroundAccess:(id)arg1;
- (void)governorDidGrantForegroundAccess:(id)arg1;
- (void)governorDidRevokeBackgroundAccess:(id)arg1;
- (void)governorDidRevokeForegroundAccess:(id)arg1;
- (id)initWithManager:(id)arg1;
- (id)initWithManager:(id)arg1 initialConstraints:(id)arg2 additionalWorkersByType:(id)arg3;
- (void)jobCoalescer:(id)arg1 didProduceJob:(id)arg2;
- (void)jobConstraintsObserver:(id)arg1 constraintsDidChange:(id)arg2 mask:(id)arg3;
- (id)photoLibrary;
- (void)scheduleAssetForOnDemandAnalysisWithUUID:(id)arg1 workerType:(short)arg2 workerFlags:(int)arg3 context:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)setJobProcessingConstraintsWithValues:(id)arg1 mask:(id)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (id)statusAsDictionary;

@end

