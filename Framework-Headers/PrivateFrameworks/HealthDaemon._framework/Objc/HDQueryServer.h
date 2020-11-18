//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDataObserver-Protocol.h>
#import <HealthDaemon/HDDatabaseProtectedDataObserver-Protocol.h>
#import <HealthDaemon/HKQueryServer-Protocol.h>

@class HKSampleType, NSString, NSUUID, _HKFilter;
@protocol HDHealthDaemon, HDQueryServerDelegate, NSXPCProxyCreating, OS_dispatch_queue;

@interface HDQueryServer : NSObject <HDDatabaseProtectedDataObserver, HKQueryServer, HDDataObserver>
{
    BOOL _didEndActivationTransaction;
    int _shouldDeactivate;
    int _pauseRequested;
    int _observingData;
    NSUUID *_queryUUID;
    HKSampleType *_sampleType;
    _HKFilter *_filter;
    id<NSXPCProxyCreating> _clientProxy;
    id<HDHealthDaemon> _daemon;
    id<HDQueryServerDelegate> _delegate;
    long long _queryState;
    NSObject<OS_dispatch_queue> *_queryQueue;
}

@property (readonly, nonatomic) id<NSXPCProxyCreating> clientProxy; // @synthesize clientProxy=_clientProxy;
@property (readonly, weak, nonatomic) id<HDHealthDaemon> daemon; // @synthesize daemon=_daemon;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) id<HDQueryServerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) _HKFilter *filter; // @synthesize filter=_filter;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queryQueue; // @synthesize queryQueue=_queryQueue;
@property (nonatomic) long long queryState; // @synthesize queryState=_queryState;
@property (readonly, nonatomic) NSUUID *queryUUID; // @synthesize queryUUID=_queryUUID;
@property (readonly, nonatomic) HKSampleType *sampleType; // @synthesize sampleType=_sampleType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_activationTransactionString;
- (void)_batchSamplesWithLimit:(unsigned long long)arg1 predicate:(id)arg2 anchor:(id)arg3 includeDeletedObjects:(BOOL)arg4 batchHandler:(CDUnknownBlockType)arg5;
- (void)_batchSamplesWithLimit:(unsigned long long)arg1 sortDescriptors:(id)arg2 predicate:(id)arg3 anchor:(id)arg4 batchHandler:(CDUnknownBlockType)arg5;
- (BOOL)_isAuthorizedToReadType:(id)arg1 withRestrictedSourceIdentifier:(id *)arg2;
- (BOOL)_isAuthorizedToReadType:(id)arg1 withRestrictedSourceIdentifier:(id *)arg2 authorizationAnchor:(id *)arg3;
- (void)_pauseServerValidate:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)_predicateString;
- (id)_queryStateString;
- (void)_queue_closeActivationTransactionIfNecessary;
- (void)_queue_start;
- (void)_queue_startQueryIfNecessary;
- (void)_queue_stop;
- (void)_queue_transitionToDisabledState:(long long)arg1;
- (void)_queue_transitionToPaused;
- (void)_queue_transitionToStarted;
- (void)_queue_transitionToStopped;
- (BOOL)_queue_validateConfiguration:(id *)arg1;
- (void)_scheduleStartQuery;
- (BOOL)_shouldExecuteWhenProtectedDataIsUnavailable;
- (BOOL)_shouldListenForUpdates;
- (BOOL)_shouldObserveOnPause;
- (BOOL)_shouldStopProcessingQuery;
- (BOOL)_shouldSuspendQuery;
- (void)activateServerWithCompletion:(CDUnknownBlockType)arg1;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2;
- (void)deactivateServer;
- (void)deactivateServerWithCompletion:(CDUnknownBlockType)arg1;
- (id)diagnosticDescription;
- (id)initWithQueryUUID:(id)arg1 dataObject:(id)arg2 clientProxy:(id)arg3 client:(id)arg4 delegate:(id)arg5 healthDaemon:(id)arg6;
- (void)onQueue:(CDUnknownBlockType)arg1;
- (void)pauseServer;
- (void)pauseServerValidateWithCompletion:(CDUnknownBlockType)arg1;
- (void)resumeServer;
- (CDUnknownBlockType)sampleAuthorizationFilter;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)samplesOfTypeWereRemoved:(id)arg1 anchor:(id)arg2;
- (void)scheduleDatabaseAccessOnQueueWithBlock:(CDUnknownBlockType)arg1;

@end
