//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DoNotDisturbKit/DNDStateUpdateListener-Protocol.h>

@class DNDState, DNDStateService, NSString;
@protocol OS_dispatch_queue;

@interface DNDAWDMetricsService : NSObject <DNDStateUpdateListener>
{
    NSObject<OS_dispatch_queue> *_queue;
    DNDStateService *_notificationsStateService;
    DNDState *_currentState;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)_queue_currentAWDMetricState;
- (void)_queue_postAWDMetric;
- (id)initWithClientIdentifier:(id)arg1;
- (void)resume;
- (void)stateService:(id)arg1 didReceiveDoNotDisturbStateUpdate:(id)arg2;

@end

