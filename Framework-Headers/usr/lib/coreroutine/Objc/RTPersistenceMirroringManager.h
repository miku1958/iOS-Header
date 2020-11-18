//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <coreroutine/RTDiagnosticProvider-Protocol.h>
#import <coreroutine/RTPersistenceMirroringDelegate-Protocol.h>
#import <coreroutine/RTPersistenceMirroringMetricsDelegate-Protocol.h>
#import <coreroutine/RTPersistenceMirroringRequestDelegate-Protocol.h>
#import <coreroutine/RTPurgable-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString, RTAccountManager, RTDefaultsManager, RTInvocationDispatcher, RTPersistenceCloudDeletionEnforcer, RTPersistenceManager, RTPersistenceMirroringRequest, RTPlatform, RTPowerAssertion, RTReachabilityManager, RTTimerManager, RTXPCActivityManager;
@protocol OS_dispatch_queue, OS_os_transaction, RTPersistenceMirroringMetricsDelegate;

@interface RTPersistenceMirroringManager : NSObject <RTPersistenceMirroringMetricsDelegate, RTPersistenceMirroringRequestDelegate, RTPersistenceMirroringDelegate, RTPurgable, RTDiagnosticProvider>
{
    RTDefaultsManager *_defaultsManager;
    RTTimerManager *_timerManager;
    RTAccountManager *_accountManager;
    RTReachabilityManager *_reachabilityManager;
    long long _cloudSyncAuthorizationState;
    long long _currentReachability;
    BOOL _syncDisabledForPerProcessMemoryLimit;
    id<RTPersistenceMirroringMetricsDelegate> _metricsDelegate;
    RTPersistenceManager *_persistenceManager;
    RTPowerAssertion *_powerAssertion;
    NSObject<OS_os_transaction> *_setupTransaction;
    NSMutableDictionary *_mirroringPolicies;
    NSMutableDictionary *_retryTimers;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_pendingMirroringRequests;
    RTPersistenceMirroringRequest *_activeMirroringRequest;
    RTXPCActivityManager *_xpcActivityManager;
    RTPlatform *_platform;
    RTPersistenceCloudDeletionEnforcer *_persistenceCloudDeletionEnforcer;
    RTInvocationDispatcher *_dispatcher;
}

@property (strong, nonatomic) RTPersistenceMirroringRequest *activeMirroringRequest; // @synthesize activeMirroringRequest=_activeMirroringRequest;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) RTInvocationDispatcher *dispatcher; // @synthesize dispatcher=_dispatcher;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (weak) id<RTPersistenceMirroringMetricsDelegate> metricsDelegate; // @synthesize metricsDelegate=_metricsDelegate;
@property (strong, nonatomic) NSMutableDictionary *mirroringPolicies; // @synthesize mirroringPolicies=_mirroringPolicies;
@property (strong, nonatomic) NSMutableArray *pendingMirroringRequests; // @synthesize pendingMirroringRequests=_pendingMirroringRequests;
@property (strong, nonatomic) RTPersistenceCloudDeletionEnforcer *persistenceCloudDeletionEnforcer; // @synthesize persistenceCloudDeletionEnforcer=_persistenceCloudDeletionEnforcer;
@property (strong, nonatomic) RTPersistenceManager *persistenceManager; // @synthesize persistenceManager=_persistenceManager;
@property (strong, nonatomic) RTPlatform *platform; // @synthesize platform=_platform;
@property (strong, nonatomic) RTPowerAssertion *powerAssertion; // @synthesize powerAssertion=_powerAssertion;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (strong, nonatomic) NSMutableDictionary *retryTimers; // @synthesize retryTimers=_retryTimers;
@property (strong, nonatomic) NSObject<OS_os_transaction> *setupTransaction; // @synthesize setupTransaction=_setupTransaction;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (strong, nonatomic) RTXPCActivityManager *xpcActivityManager; // @synthesize xpcActivityManager=_xpcActivityManager;

- (void).cxx_destruct;
- (BOOL)_authorizedToMirror;
- (BOOL)_dataAvailableToMirror;
- (void)_dequeueNextMirroringRequest;
- (void)_enqueueMirroringRequest:(id)arg1 context:(id)arg2;
- (BOOL)_fetchDatabaseChangesForDatabase:(id)arg1 outputURL:(id)arg2 error:(id *)arg3;
- (BOOL)_fetchZoneChangesForDatabase:(id)arg1 outputURL:(id)arg2 error:(id *)arg3;
- (void)_finalizeMirroringRequest:(id)arg1;
- (BOOL)_generateDiagnosticFilesAtURL:(id)arg1 error:(id *)arg2;
- (long long)_mirroringDelegateState;
- (void)_onCloudSyncAuthorizationChange:(id)arg1;
- (void)_onMirroringDelegateInitialization:(id)arg1;
- (void)_onReachabilityChange:(id)arg1;
- (void)_performMirroringRequestWithType:(long long)arg1 affectedStore:(id)arg2 qualityOfService:(long long)arg3 managedObjectContext:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (void)_performPeriodicExportWithHandler:(CDUnknownBlockType)arg1;
- (void)_performPeriodicImportWithHandler:(CDUnknownBlockType)arg1;
- (void)_persistenceAvailabilityDidChange:(id)arg1;
- (void)_prepareRequestForRetryAttempt:(id)arg1 retryInterval:(double)arg2;
- (void)_scheduleRetryAttemptForRequest:(id)arg1 referenceDate:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_startMirroringRequest:(id)arg1 context:(id)arg2;
- (void)_updateMirroringDelegateState;
- (void)collectMetricsFromMirroringRequest:(id)arg1 error:(id)arg2;
- (void)dealloc;
- (BOOL)disableSyncForPerProcessMemoryLimit:(id)arg1 platform:(id)arg2;
- (id)init;
- (id)initWithAccountManager:(id)arg1 defaultsManager:(id)arg2 persistenceManager:(id)arg3 platform:(id)arg4 reachabilityManager:(id)arg5 xpcActivityManager:(id)arg6;
- (id)initWithAccountManager:(id)arg1 persistenceCloudDeletionEnforcer:(id)arg2 persistenceManager:(id)arg3 defaultsManager:(id)arg4 mirroringPolicies:(id)arg5 platform:(id)arg6 reachabilityManager:(id)arg7 timerManager:(id)arg8 xpcActivityManager:(id)arg9;
- (void)mirroringManager:(id)arg1 mirroringRequest:(id)arg2 didFailWithError:(id)arg3;
- (void)mirroringManager:(id)arg1 mirroringRequestDidSucceed:(id)arg2;
- (BOOL)mirroringRequest:(id)arg1 didFailWithError:(id)arg2;
- (void)mirroringRequestDidBegin:(id)arg1;
- (void)mirroringRequestDidSucceed:(id)arg1;
- (void)onCloudSyncAuthorizationChange:(id)arg1;
- (void)onMirroringDelegateInitialization:(id)arg1;
- (void)onReachabilityChange:(id)arg1;
- (id)optionsForQualityOfService:(long long)arg1;
- (void)performMirroringRequestWithType:(long long)arg1 affectedStore:(id)arg2 qualityOfService:(long long)arg3 handler:(CDUnknownBlockType)arg4;
- (void)performMirroringRequestWithType:(long long)arg1 affectedStore:(id)arg2 qualityOfService:(long long)arg3 managedObjectContext:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (void)performPeriodicSyncWithHandler:(CDUnknownBlockType)arg1;
- (void)performPurgeOfType:(long long)arg1 referenceDate:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)persistenceAvailabilityDidChange:(id)arg1;
- (void)registerForXPCActivities;
- (void)sendDiagnosticsToURL:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)setMirroringAttemptMapValue:(BOOL)arg1 buildVersion:(id)arg2;
- (void)shutdown;
- (void)unregisterForXPCActivities;

@end
