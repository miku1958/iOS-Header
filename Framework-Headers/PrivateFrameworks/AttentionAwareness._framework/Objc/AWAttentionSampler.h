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
    BOOL _lastFaceMetadataValid;
    BOOL _unitTestSampling;
    int _currentState;
    AWSampleLogger *_sampleLogger;
    CDUnknownBlockType _stateChangedCallback;
    unsigned long long _samplingSuppressedMask;
    unsigned long long _lastTriggerTime;
    unsigned long long _lastPositiveDetectTime;
    unsigned long long _lastPollTimeoutTime;
    double _lastPitch;
    double _lastYaw;
    double _lastRoll;
    unsigned long long _lastOrientation;
}

@property (nonatomic) int currentState; // @synthesize currentState=_currentState;
@property (nonatomic) BOOL lastFaceMetadataValid; // @synthesize lastFaceMetadataValid=_lastFaceMetadataValid;
@property (nonatomic) unsigned long long lastOrientation; // @synthesize lastOrientation=_lastOrientation;
@property (nonatomic) double lastPitch; // @synthesize lastPitch=_lastPitch;
@property (nonatomic) unsigned long long lastPollTimeoutTime; // @synthesize lastPollTimeoutTime=_lastPollTimeoutTime;
@property (nonatomic) unsigned long long lastPositiveDetectTime; // @synthesize lastPositiveDetectTime=_lastPositiveDetectTime;
@property (nonatomic) double lastRoll; // @synthesize lastRoll=_lastRoll;
@property (nonatomic) unsigned long long lastTriggerTime; // @synthesize lastTriggerTime=_lastTriggerTime;
@property (nonatomic) double lastYaw; // @synthesize lastYaw=_lastYaw;
@property (strong, nonatomic) AWSampleLogger *sampleLogger; // @synthesize sampleLogger=_sampleLogger;
@property (nonatomic) unsigned long long samplingSuppressedMask; // @synthesize samplingSuppressedMask=_samplingSuppressedMask;
@property (copy) CDUnknownBlockType stateChangedCallback; // @synthesize stateChangedCallback=_stateChangedCallback;
@property (readonly, nonatomic) BOOL unitTestSampling; // @synthesize unitTestSampling=_unitTestSampling;

- (void).cxx_destruct;
- (id)description;
- (void)finishDeadlineComputation;
- (id)init;
- (id)initWithMask:(unsigned long long)arg1;
- (unsigned long long)minimumAttentionSamplerErrorRetryTime;
- (unsigned long long)nextSampleTimeForSamplingInterval:(unsigned long long)arg1;
- (void)setSmartCoverClosed:(BOOL)arg1;
- (void)setUnitTestMode;
- (void)shouldSample:(BOOL)arg1 withDeadline:(unsigned long long)arg2;
- (void)startDeadlineComputation;
- (void)updateSamplingDeadline:(unsigned long long)arg1 forClient:(id)arg2;

@end
