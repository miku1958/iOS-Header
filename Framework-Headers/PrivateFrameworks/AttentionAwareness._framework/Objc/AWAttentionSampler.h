//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AWSampleLogger;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AWAttentionSampler : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _nextDeadline;
    int _currentState;
    AWSampleLogger *_sampleLogger;
    CDUnknownBlockType _stateChangedCallback;
    unsigned long long _samplingSuppressedMask;
    unsigned long long _lastTriggerTime;
    unsigned long long _lastPositiveDetectTime;
    unsigned long long _lastPollTimeoutTime;
}

@property (nonatomic) int currentState; // @synthesize currentState=_currentState;
@property (nonatomic) unsigned long long lastPollTimeoutTime; // @synthesize lastPollTimeoutTime=_lastPollTimeoutTime;
@property (nonatomic) unsigned long long lastPositiveDetectTime; // @synthesize lastPositiveDetectTime=_lastPositiveDetectTime;
@property (nonatomic) unsigned long long lastTriggerTime; // @synthesize lastTriggerTime=_lastTriggerTime;
@property (strong, nonatomic) AWSampleLogger *sampleLogger; // @synthesize sampleLogger=_sampleLogger;
@property (nonatomic) unsigned long long samplingSuppressedMask; // @synthesize samplingSuppressedMask=_samplingSuppressedMask;
@property (copy) CDUnknownBlockType stateChangedCallback; // @synthesize stateChangedCallback=_stateChangedCallback;

- (void).cxx_destruct;
- (void)finishDeadlineComputation;
- (id)init;
- (id)initWithMask:(unsigned long long)arg1;
- (void)setSmartCoverClosed:(BOOL)arg1;
- (void)setUnitTestMode;
- (void)shouldSample:(BOOL)arg1 withDeadline:(unsigned long long)arg2;
- (void)startDeadlineComputation;
- (void)updateSamplingDeadline:(unsigned long long)arg1 forClient:(id)arg2;

@end
