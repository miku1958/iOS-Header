//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDataObserver-Protocol.h>
#import <HealthDaemon/HDDatabaseProtectedDataObserver-Protocol.h>
#import <HealthDaemon/_HKActiveWorkoutServer-Protocol.h>
#import <HealthDaemon/_HKWorkoutSessionDelegate-Protocol.h>

@class HDServer, HKQuantityType, HKSource, NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSSet, NSString, NSUUID, _HKActiveWorkoutServerConfiguration;
@protocol HDActiveWorkoutServerDelegate, HDHealthDaemon, NSXPCProxyCreating, OS_dispatch_queue;

@interface HDActiveWorkoutServer : NSObject <_HKActiveWorkoutServer, HDDataObserver, _HKWorkoutSessionDelegate, HDDatabaseProtectedDataObserver>
{
    HKSource *_localDeviceSource;
    long long _state;
    _HKActiveWorkoutServerConfiguration *_configuration;
    NSUUID *_workoutSessionUUID;
    BOOL _observingChanges;
    id<HDActiveWorkoutServerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    NSObject<OS_dispatch_queue> *_observerQueue;
    id<NSXPCProxyCreating> _clientServer;
    id<HDHealthDaemon> _daemon;
    HDServer *_server;
    HKQuantityType *_distanceType;
    long long _serverState;
    NSMutableArray *_workoutEvents;
    NSMutableDictionary *_currentAnchors;
    NSMutableDictionary *_resumeDataByType;
    NSSet *_observedTypes;
}

@property (readonly) long long activeWorkoutState;
@property (readonly, nonatomic) id<NSXPCProxyCreating> clientServer; // @synthesize clientServer=_clientServer;
@property (strong, nonatomic) NSMutableDictionary *currentAnchors; // @synthesize currentAnchors=_currentAnchors;
@property (readonly) NSArray *currentWorkoutEvents;
@property (readonly, nonatomic) id<HDHealthDaemon> daemon; // @synthesize daemon=_daemon;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) id<HDActiveWorkoutServerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HKQuantityType *distanceType; // @synthesize distanceType=_distanceType;
@property (readonly) unsigned long long hash;
@property (readonly) BOOL isActivated;
@property (readonly) HKSource *localDeviceSource;
@property (strong, nonatomic) NSSet *observedTypes; // @synthesize observedTypes=_observedTypes;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *observerQueue; // @synthesize observerQueue=_observerQueue;
@property (nonatomic) BOOL observingChanges; // @synthesize observingChanges=_observingChanges;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property (strong, nonatomic) NSMutableDictionary *resumeDataByType; // @synthesize resumeDataByType=_resumeDataByType;
@property (readonly, weak, nonatomic) HDServer *server; // @synthesize server=_server;
@property (nonatomic) long long serverState; // @synthesize serverState=_serverState;
@property (readonly) NSDate *startDate;
@property long long state;
@property (readonly) Class superclass;
@property (readonly) unsigned long long workoutActivityType;
@property (strong, nonatomic) NSMutableArray *workoutEvents; // @synthesize workoutEvents=_workoutEvents;
@property (readonly, nonatomic) NSUUID *workoutUUID;

- (void).cxx_destruct;
- (void)_addEventType:(long long)arg1 forDate:(id)arg2;
- (void)_broadcastActivityTypeWithWorkoutState:(long long)arg1 serverState:(long long)arg2;
- (void)_observerQueue_deactivate;
- (id)_observerQueue_gapsNeedingUpdate;
- (BOOL)_observerQueue_gapsResolved;
- (void)_observerQueue_generateGapForType:(id)arg1 resumeData:(id)arg2;
- (void)_observerQueue_initObservedTypes;
- (void)_observerQueue_reactivateWorkoutWithData:(id)arg1 startDate:(id)arg2;
- (void)_observerQueue_registerObservers;
- (BOOL)_observerQueue_resolveGap:(id)arg1 quantityType:(id)arg2;
- (void)_observerQueue_resolveGaps;
- (void)_observerQueue_samplesAdded:(id)arg1 lastUUID:(id)arg2 journaled:(BOOL)arg3 anchor:(id)arg4;
- (BOOL)_observerQueue_shouldAddSample:(id)arg1 journaled:(BOOL)arg2 anchor:(id)arg3;
- (long long)_observerQueue_stateForDate:(id)arg1;
- (id)_observerQueue_sumQuantityForType:(id)arg1 startUUID:(id)arg2 endUUID:(id)arg3 startDate:(id)arg4 endDate:(id)arg5 database:(id)arg6 localDeviceEntity:(id)arg7 newUUIDs:(id)arg8 lastUUID:(id *)arg9 newAnchor:(id *)arg10;
- (BOOL)_observerQueue_updateTotalsWithDataGap:(id)arg1 quantityType:(id)arg2 database:(id)arg3 localDeviceEntity:(id)arg4;
- (BOOL)_observerQueue_updateTotalsWithResumeData:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 database:(id)arg4 localDeviceEntity:(id)arg5 error:(id *)arg6;
- (void)_observerQueue_updateTotalsWithValues:(id)arg1 UUIDs:(id)arg2 inJournal:(BOOL)arg3;
- (id)_reactivatePredicateForType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 startRowId:(id)arg4 endRowId:(id)arg5 localDeviceEntity:(id)arg6;
- (id)_rowIdInDatabase:(id)arg1 forUUID:(id)arg2;
- (void)_setResumeDataForType:(id)arg1 lastUUID:(id)arg2 inJournal:(BOOL)arg3;
- (void)_setupObservedTypes;
- (BOOL)_shouldUseDeviceData;
- (void)_startWorkoutSessionWithCompletion:(CDUnknownBlockType)arg1;
- (void)_stopWorkoutSessionWithCompletion:(CDUnknownBlockType)arg1;
- (id)_transactionIdentifier;
- (void)_updateClientTotalsWithQuantities:(id)arg1 resumeData:(id)arg2 UUIDs:(id)arg3;
- (unsigned long long)_workoutActivityType;
- (void)activateWorkoutWithCompletion:(CDUnknownBlockType)arg1;
- (id)clientWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2;
- (void)deactivate;
- (void)deactivateServer;
- (void)dealloc;
- (id)diagnosticDescription;
- (void)endWorkoutWithEndDate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithClient:(id)arg1 workoutConfiguration:(id)arg2 daemon:(id)arg3 server:(id)arg4 delegate:(id)arg5;
- (void)pauseClientWithCompletion:(CDUnknownBlockType)arg1;
- (void)pauseWorkoutWithDate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resumeWorkoutWithDate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)samplesJournaled:(id)arg1 type:(id)arg2;
- (void)workoutSession:(id)arg1 didChangeToState:(long long)arg2 fromState:(long long)arg3 date:(id)arg4;
- (void)workoutSession:(id)arg1 didFailWithError:(id)arg2;

@end

