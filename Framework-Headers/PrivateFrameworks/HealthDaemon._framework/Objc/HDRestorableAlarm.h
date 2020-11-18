//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDiagnosticObject-Protocol.h>

@class HDRestorableAlarmScheduler, HDXPCAlarm, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface HDRestorableAlarm : NSObject <HDDiagnosticObject>
{
    struct os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_eventHandlerQueue;
    HDRestorableAlarmScheduler *_scheduler;
    CDUnknownBlockType _eventsHandler;
    NSMutableSet *_outstandingEventIdentifiers;
    NSString *_clientIdentifier;
}

@property (readonly, copy, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) HDXPCAlarm *systemScheduler;

- (void).cxx_destruct;
- (id)allScheduledEventsWithError:(id *)arg1;
- (void)beginReceivingEventsWithHandler:(CDUnknownBlockType)arg1;
- (void)checkForDueEventsWithCompletion:(CDUnknownBlockType)arg1;
- (id)diagnosticDescription;
- (id)eventWithIdentifier:(id)arg1 dueDate:(id)arg2 eventOptions:(unsigned long long)arg3;
- (id)eventWithIdentifier:(id)arg1 dueDateComponents:(id)arg2 eventOptions:(unsigned long long)arg3;
- (void)eventsDidFire:(id)arg1;
- (id)initWithProfile:(id)arg1 clientIdentifier:(id)arg2 eventHandlerQueue:(id)arg3;
- (void)invalidate;
- (BOOL)removeAllEventsWithError:(id *)arg1;
- (BOOL)removeEvents:(id)arg1 error:(id *)arg2;
- (BOOL)replaceAllScheduledEventsWithEvents:(id)arg1 error:(id *)arg2;
- (BOOL)scheduleEvents:(id)arg1 error:(id *)arg2;

@end
