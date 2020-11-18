//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DoNotDisturb/DNDRemoteServiceConnectionEventListener-Protocol.h>

@class NSHashTable, NSString;
@protocol OS_dispatch_queue;

@interface DNDSettingsService : NSObject <DNDRemoteServiceConnectionEventListener>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSHashTable *_settingsUpdateListeners;
    BOOL _registeredForUpdates;
    NSString *_clientIdentifier;
}

@property (readonly, copy, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;
+ (id)serviceForClientIdentifier:(id)arg1;
- (void).cxx_destruct;
- (void)_handleLostXPCConnectionWithRetry:(BOOL)arg1;
- (id)_initWithClientIdentifier:(id)arg1;
- (BOOL)_queue_registerForSettingsUpdatesIfRequired;
- (BOOL)addSettingsUpdateListener:(id)arg1 error:(id *)arg2;
- (void)addSettingsUpdateListener:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)behaviorSettingsReturningError:(id *)arg1;
- (void)didReceiveConnectionInterruptedEventForRemoteService:(id)arg1;
- (void)didReceiveConnectionInvalidatedEventForRemoteService:(id)arg1;
- (id)phoneCallBypassSettingsReturningError:(id *)arg1;
- (void)remoteService:(id)arg1 didReceiveUpdatedBehaviorSettings:(id)arg2;
- (void)remoteService:(id)arg1 didReceiveUpdatedPhoneCallBypassSettings:(id)arg2;
- (void)remoteService:(id)arg1 didReceiveUpdatedScheduleSettings:(id)arg2;
- (void)removeSettingsUpdateListener:(id)arg1;
- (BOOL)removeSettingsUpdateListener:(id)arg1 error:(id *)arg2;
- (id)scheduleSettingsReturningError:(id *)arg1;
- (BOOL)setBehaviorSettings:(id)arg1 error:(id *)arg2;
- (BOOL)setBehaviorSettings:(id)arg1 returningError:(id *)arg2;
- (BOOL)setPhoneCallBypassSettings:(id)arg1 error:(id *)arg2;
- (BOOL)setPhoneCallBypassSettings:(id)arg1 returningError:(id *)arg2;
- (BOOL)setScheduleSettings:(id)arg1 error:(id *)arg2;
- (BOOL)setScheduleSettings:(id)arg1 returningError:(id *)arg2;

@end
