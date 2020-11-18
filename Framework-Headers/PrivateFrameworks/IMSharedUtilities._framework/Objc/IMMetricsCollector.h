//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface IMMetricsCollector : NSObject
{
    NSObject<OS_dispatch_queue> *_metricsQueue;
    NSMutableDictionary *_onGoingEventsMap;
}

@property (strong, nonatomic) NSObject<OS_dispatch_queue> *metricsQueue; // @synthesize metricsQueue=_metricsQueue;
@property (strong, nonatomic) NSMutableDictionary *onGoingEventsMap; // @synthesize onGoingEventsMap=_onGoingEventsMap;

+ (id)sharedInstance;
- (void *)_ADClientAddValueForScalarKeyApiInit;
- (void *)_ADClientPushValueForDistributionKeyApiInit;
- (void *)_ADClientSetValueForScalarKeyApiInit;
- (void)_finalizeEvent:(id)arg1 addingDicitonary:(id)arg2;
- (void)_resetTimerEventIfNeedForEventID:(id)arg1;
- (void)_timeoutTimerFired:(id)arg1;
- (void)_trackEvent:(id)arg1;
- (void)_trackEvent:(id)arg1 withCount:(id)arg2;
- (void)_trackEvent:(id)arg1 withDictionary:(id)arg2;
- (void)_trackEvent:(id)arg1 withStatistic:(id)arg2;
- (id)_trimedEventID:(id)arg1;
- (void)autoBugCaptureWithSubType:(id)arg1 errorPayload:(id)arg2;
- (void)clearInitialCKSyncState;
- (void)dealloc;
- (BOOL)finalizeEvent:(id)arg1 addingDicitonary:(id)arg2;
- (void)forceAutoBugCaptureWithSubType:(id)arg1 errorPayload:(id)arg2;
- (id)init;
- (void)metricAttachmentValidation:(BOOL)arg1 attachmentSize:(id)arg2 operationalErrorDomain:(id)arg3 operationalErrorCode:(id)arg4 validationErrorDomain:(id)arg5 validationErrorCode:(id)arg6;
- (void)noteCompletedInitialSync;
- (void)noteMeticsForSyncEndedWithSuccces:(BOOL)arg1 duration:(id)arg2;
- (void)noteMeticsForSyncStartFrom:(id)arg1 fullSync:(BOOL)arg2;
- (void)noteSyncError:(id)arg1;
- (BOOL)startEvent:(id)arg1 initialDictionary:(id)arg2;
- (BOOL)startEvent:(id)arg1 initialDictionary:(id)arg2 timeout:(unsigned long long)arg3 autoBugCapture:(BOOL)arg4;
- (BOOL)trackEvent:(id)arg1;
- (BOOL)trackEvent:(id)arg1 withCount:(id)arg2;
- (BOOL)trackEvent:(id)arg1 withDictionary:(id)arg2;
- (BOOL)trackEvent:(id)arg1 withStatistic:(id)arg2;
- (BOOL)updateEvent:(id)arg1 addToCount:(id)arg2 forKey:(id)arg3;
- (BOOL)updateEvent:(id)arg1 updateValue:(id)arg2 forKey:(id)arg3;

@end

