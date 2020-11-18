//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDHealthDaemonReadyObserver-Protocol.h>

@class HDDaemon, NSHashTable, NSString, RTRoutineManager;
@protocol OS_dispatch_queue;

@interface HDRoutineGateway : NSObject <HDHealthDaemonReadyObserver>
{
    HDDaemon *_daemon;
    RTRoutineManager *_routineManager;
    NSHashTable *_observerTable;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_fetchRemoteLocationOfInterestWithType:(int)arg1 handler:(CDUnknownBlockType)arg2;
- (id)_locationRequestOfType:(int)arg1;
- (void)_processFetchLocationRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_processFetchNextLocationsRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_processScenarioTriggered:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_queue_notifyObserversScenarioTriggered:(unsigned long long)arg1 location:(id)arg2;
- (void)_queue_registerForScenarioTriggersIfNeeded;
- (void)_queue_sendScenarioTrigger:(id)arg1 atLocation:(id)arg2;
- (void)addRoutineObserver:(id)arg1;
- (void)daemonReady:(id)arg1;
- (void)dealloc;
- (void)fetchLocationOfInterestAtCachedLocationWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchLocationOfInterestAtCurrentLocationWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchNextPredictedLocationsOfInterestWithHandler:(CDUnknownBlockType)arg1;
- (id)initWithDaemon:(id)arg1;
- (void)processRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeRoutineObserver:(id)arg1;

@end

