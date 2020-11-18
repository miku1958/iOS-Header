//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDataObserver-Protocol.h>
#import <HealthDaemon/HDDatabaseProtectedDataObserver-Protocol.h>
#import <HealthDaemon/HKQueryServer-Protocol.h>

@class HDProfile, HKObjectType, HKSampleType, NSDictionary, NSString, NSUUID, _HKFilter;
@protocol HDQueryServerDelegate, NSXPCProxyCreating, OS_dispatch_queue, OS_dispatch_semaphore;

@interface HDQueryServer : NSObject <HDDatabaseProtectedDataObserver, HKQueryServer, HDDataObserver>
{
    NSObject<OS_dispatch_queue> *_unitTestQueryQueue;
    BOOL _unitTestShouldWaitForQueryStart;
    int _unitTestSamplesBeforeSuspend;
    NSObject<OS_dispatch_semaphore> *_unitTestActivationSemaphore;
    NSObject<OS_dispatch_semaphore> *_unitTestProcessSuspendedSemaphore;
    CDUnknownBlockType _unitTestQueryStateHandler;
    CDUnknownBlockType _unitTestBatchLimitSuspendProcessHandler;
    BOOL _didEndActivationTransaction;
    BOOL _observingData;
    NSDictionary *_baseDataEntityEncodingOptions;
    int _shouldFinish;
    int _shouldPause;
    NSUUID *_queryUUID;
    _HKFilter *_filter;
    id<NSXPCProxyCreating> _clientProxy;
    HDProfile *_profile;
    id<HDQueryServerDelegate> _delegate;
    long long _queryState;
    double _collectionInterval;
    HKObjectType *_objectType;
    NSObject<OS_dispatch_queue> *_queryQueue;
}

@property (readonly, nonatomic) id<NSXPCProxyCreating> clientProxy; // @synthesize clientProxy=_clientProxy;
@property (nonatomic) double collectionInterval; // @synthesize collectionInterval=_collectionInterval;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) id<HDQueryServerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) _HKFilter *filter; // @synthesize filter=_filter;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) HKObjectType *objectType; // @synthesize objectType=_objectType;
@property (readonly, weak, nonatomic) HDProfile *profile; // @synthesize profile=_profile;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queryQueue; // @synthesize queryQueue=_queryQueue;
@property (nonatomic) long long queryState; // @synthesize queryState=_queryState;
@property (readonly, nonatomic) NSUUID *queryUUID; // @synthesize queryUUID=_queryUUID;
@property (readonly, nonatomic) HKSampleType *sampleType;
@property (readonly) Class superclass;
@property (copy, nonatomic, getter=_unitTestBatchLimitSuspendProcessHandler, setter=_setUnitTestBatchLimitSuspendProcessHandler:) CDUnknownBlockType unitTestBatchLimitSuspendProcessHandler;
@property (copy, nonatomic, getter=_unitTestQueryStateHandler, setter=_setUnitTestQueryStateHandler:) CDUnknownBlockType unitTestQueryStateHandler;
@property (nonatomic, getter=_unitTestSamplesBeforeSuspend, setter=_setUnitTestSamplesBeforeSuspend:) int unitTestSamplesBeforeSuspend;
@property (nonatomic, getter=_unitTestShouldWaitForQueryStart, setter=_setUnitTestShouldWaitForQueryStart:) BOOL unitTestShouldWaitForQueryStart;

- (void).cxx_destruct;
- (id)_activationTransactionString;
- (void)_batchSamplesWithLimit:(unsigned long long)arg1 anchor:(id)arg2 includeDeletedObjects:(BOOL)arg3 batchHandler:(CDUnknownBlockType)arg4;
- (void)_batchSamplesWithLimit:(unsigned long long)arg1 sortDescriptors:(id)arg2 anchor:(id)arg3 batchHandler:(CDUnknownBlockType)arg4;
- (id)_collectionObserverState;
- (void)_currentWorkoutDidChange:(id)arg1;
- (BOOL)_isAuthorizedToReadType:(id)arg1 withRestrictedSourceIdentifier:(id *)arg2;
- (BOOL)_isAuthorizedToReadType:(id)arg1 withRestrictedSourceIdentifier:(id *)arg2 authorizationAnchor:(id *)arg3;
- (void)_pauseServerValidate:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)_predicateString;
- (id)_queryStateString;
- (void)_queue_beginObservingDataTypes;
- (void)_queue_closeActivationTransactionIfNecessary;
- (void)_queue_endObservingDataTypes;
- (void)_queue_setQueueState:(long long)arg1;
- (void)_queue_start;
- (void)_queue_startDataCollection;
- (void)_queue_startQueryIfNecessary;
- (void)_queue_stop;
- (void)_queue_stopDataCollection;
- (void)_queue_transitionToFinished;
- (void)_queue_transitionToPaused;
- (void)_queue_transitionToRunning;
- (void)_queue_transitionToSuspendedState:(long long)arg1;
- (BOOL)_queue_validateConfiguration:(id *)arg1;
- (id)_sampleTypeToObserveForUpdates;
- (void)_scheduleStartQuery;
- (BOOL)_shouldExecuteWhenProtectedDataIsUnavailable;
- (BOOL)_shouldListenForUpdates;
- (BOOL)_shouldObserveAllSampleTypes;
- (BOOL)_shouldObserveOnPause;
- (BOOL)_shouldStopProcessingQuery;
- (BOOL)_shouldSuspendQuery;
- (void)_unitTestBatchLimitReachedWaitTimeoutSeconds:(unsigned long long)arg1;
- (void)_unitTestInitWithDataObject:(id)arg1 queueTag:(id)arg2;
- (void)_unitTestPrepareToWaitForResumeAction;
- (void)_unitTestProcessResume;
- (void)_unitTestQueryStateChange:(long long)arg1;
- (void)_unitTestResumeActivation;
- (void)_unitTestWaitForResumeActivationTimeoutSeconds:(unsigned long long)arg1;
- (void)activateServerWithCompletion:(CDUnknownBlockType)arg1;
- (void)clientStateChanged;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2;
- (void)deactivateServer;
- (void)deactivateServerWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)diagnosticDescription;
- (id)initWithQueryUUID:(id)arg1 dataObject:(id)arg2 clientProxy:(id)arg3 client:(id)arg4 delegate:(id)arg5 profile:(id)arg6;
- (id)newDataEntityEnumerator;
- (void)onQueue:(CDUnknownBlockType)arg1;
- (void)pauseServer;
- (void)pauseServerValidateWithCompletion:(CDUnknownBlockType)arg1;
- (void)resumeServer;
- (CDUnknownBlockType)sampleAuthorizationFilter;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2;
- (void)scheduleDatabaseAccessOnQueueWithBlock:(CDUnknownBlockType)arg1;

@end
