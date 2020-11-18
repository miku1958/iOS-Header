//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AttentionAwareness/AWRemoteClient-Protocol.h>

@class AWAttentionAwarenessConfiguration, AWAttentionEvent, AWScheduler, NSArray, NSString, NSXPCConnection;
@protocol AWFrameworkClient, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AWRemoteClient : NSObject <AWRemoteClient>
{
    NSObject<OS_dispatch_queue> *_queue;
    AWScheduler *_scheduler;
    id<AWFrameworkClient> _proxy;
    NSXPCConnection *_connection;
    unsigned long long _lastPositiveEventTime;
    unsigned long long _lastPositiveNonSampledEventTime;
    unsigned long long _pollingStartTime;
    unsigned long long _pollingDeadline;
    BOOL _sentPollInitialized;
    BOOL _lastAttentionState;
    AWAttentionEvent *_lastEvent;
    unsigned long long _tagIndex;
    unsigned long long _eventMask;
    BOOL _samplingClient;
    int _supportedEventsNotify;
    AWAttentionAwarenessConfiguration *_lastConfig;
    double _lastNegativeEventTimeoutValueSec;
    NSArray *_attentionLostTimeoutsSec;
    BOOL _invalid;
    BOOL _unitTestSampling;
    NSString *_identifier;
    unsigned long long _samplingInterval;
    unsigned long long _samplingDelay;
}

@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (nonatomic) BOOL invalid; // @synthesize invalid=_invalid;
@property (readonly, nonatomic) unsigned long long samplingDelay; // @synthesize samplingDelay=_samplingDelay;
@property (readonly, nonatomic) unsigned long long samplingInterval; // @synthesize samplingInterval=_samplingInterval;
@property (nonatomic) BOOL unitTestSampling; // @synthesize unitTestSampling=_unitTestSampling;

- (void).cxx_destruct;
- (void)_reevaluateConfig;
- (void)_resetAttentionLostTimer;
- (void)_setClientConfig:(id)arg1 shouldReset:(BOOL)arg2;
- (id)connection;
- (void)deliverEvent:(id)arg1;
- (void)deliverPollEventType:(unsigned long long)arg1 event:(id)arg2;
- (id)description;
- (void)getLastEvent:(CDUnknownBlockType)arg1;
- (id)initWithProxy:(id)arg1 connection:(id)arg2 clientConfig:(id)arg3 error:(id *)arg4;
- (void)invalidate;
- (unsigned long long)nextAttentionLostTime:(BOOL *)arg1;
- (unsigned long long)nextSampleTimeForSampler:(id)arg1;
- (unsigned long long)nextTimerForTime:(unsigned long long)arg1 attentionSampler:(id)arg2;
- (void)notifyEvent:(unsigned long long)arg1 timestamp:(unsigned long long)arg2;
- (void)pollWithTimeout:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)resetAttentionLostTimer;
- (void)setClientConfig:(id)arg1 shouldReset:(BOOL)arg2;
- (void)updateDeadlinesForTime:(unsigned long long)arg1 attentionSampler:(id)arg2;
- (void)updateEventTimesForMask:(unsigned long long)arg1 timestamp:(unsigned long long)arg2;
- (void)useUnitTestSampling:(BOOL)arg1;

@end

