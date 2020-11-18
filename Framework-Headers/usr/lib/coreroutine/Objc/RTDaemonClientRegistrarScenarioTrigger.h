//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/RTDaemonClientRegistrar.h>

#import <coreroutine/NSSecureCoding-Protocol.h>
#import <coreroutine/RTDaemonClientRegistrarProtocol-Protocol.h>

@class NSMutableDictionary, NSObject, NSString, RTInvocationDispatcher, RTScenarioTriggerManager;
@protocol OS_dispatch_queue, RTDaemonClientRegistrarScenarioTriggerProtocol;

@interface RTDaemonClientRegistrarScenarioTrigger : RTDaemonClientRegistrar <NSSecureCoding, RTDaemonClientRegistrarProtocol>
{
    unsigned long long _monitoredScenarioTriggerTypes;
    id<RTDaemonClientRegistrarScenarioTriggerProtocol> _delegate;
    NSMutableDictionary *_pendingScenarioInvocations;
    RTScenarioTriggerManager *_scenarioTriggerManager;
    RTInvocationDispatcher *_dispatcher;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<RTDaemonClientRegistrarScenarioTriggerProtocol> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) RTInvocationDispatcher *dispatcher; // @synthesize dispatcher=_dispatcher;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) unsigned long long monitoredScenarioTriggerTypes; // @synthesize monitoredScenarioTriggerTypes=_monitoredScenarioTriggerTypes;
@property (strong, nonatomic) NSMutableDictionary *pendingScenarioInvocations; // @synthesize pendingScenarioInvocations=_pendingScenarioInvocations;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (strong, nonatomic) RTScenarioTriggerManager *scenarioTriggerManager; // @synthesize scenarioTriggerManager=_scenarioTriggerManager;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_logMonitoredScenarioTriggers:(unsigned long long)arg1;
- (void)_onScenarioTriggerManagerNotification:(id)arg1;
- (void)addPendingScenarioTriggerBlock:(CDUnknownBlockType)arg1 failBlock:(CDUnknownBlockType)arg2 description:(id)arg3;
- (long long)countOfPendingInvocations;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithScenarioTriggerManager:(id)arg1 queue:(id)arg2;
- (BOOL)invocationsPending;
- (void)onScenarioTriggerManagerNotification:(id)arg1;
- (BOOL)registered;
- (void)startMonitoringForScenarioTriggerType:(unsigned long long)arg1;
- (void)stopMonitoringForScenarioTriggerType:(unsigned long long)arg1;

@end
