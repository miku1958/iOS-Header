//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVConference/VCVideoStreamRateControlProtocol-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VCVideoStreamNOWRDLossEventRateControl : NSObject <VCVideoStreamRateControlProtocol>
{
    double _packetLossRate;
    double _roundTripTime;
    double _firstReceiveTime;
    double _shortAverageLag;
    double _longAverageLag;
    double _owrd;
    struct OWRDList OWRDList;
    double _nowrd;
    double _nowrdShort;
    double _nowrdAcc;
    unsigned int _firstSendTimestamp;
    unsigned int _previousSendTimestamp;
    unsigned int _previousTimestampDiff;
    int _sendTimestampWrappedAround;
    BOOL _lossEventBuffer[4];
    int _lossEventBufferIndex;
    double _lastLossEventTime;
    double _rampUpFrozenTime;
    double _rampUpFrozenDuration;
    double _rampDownLossRateThreshold;
    double _rampDownLossEventBitrateThreshold;
    double _rampDownLossEventCountThreshold;
    double _rampUpNoLossEventDurationRatio;
    double _rampUpStatusRateLimitedThreshold;
    double _nowrdRampDownThreshold;
    double _nowrdRampUpThreshold;
    double _nowrdAccRampDownThreshold;
    double _nowrdAccRampUpThreshold;
    unsigned int _rampUpStatus;
    unsigned int _rampDownStatus;
    int _state;
    double _rateControlTime;
    unsigned int _targetBitrate;
    unsigned int _averageReceivedBitrate;
    unsigned int _totalActualBitrate;
    unsigned int _doRateControlCounter;
    unsigned short _currentTierIndex;
    unsigned short _prevOperatingTierIndex;
    unsigned short _minTierIndex;
    unsigned short _maxTierIndex;
    double _rateControlInterval;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) double nowrd; // @synthesize nowrd=_nowrd;
@property (readonly, nonatomic) double nowrdAcc; // @synthesize nowrdAcc=_nowrdAcc;
@property (readonly, nonatomic) double nowrdShort; // @synthesize nowrdShort=_nowrdShort;
@property (readonly, nonatomic) double owrd; // @synthesize owrd=_owrd;
@property (nonatomic) double rateControlInterval; // @synthesize rateControlInterval=_rateControlInterval;
@property (readonly, nonatomic) int state; // @synthesize state=_state;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned int targetBitrate; // @synthesize targetBitrate=_targetBitrate;

- (void)calculateNOWRD:(double)arg1 time:(double)arg2;
- (void)calculateOWRDWithTimestamp:(unsigned int)arg1 sampleRate:(unsigned int)arg2 time:(double)arg3;
- (id)className;
- (void)doRateControlWithTime:(double)arg1 roundTripTime:(double)arg2 packetLossRate:(double)arg3 operatingTierIndex:(unsigned short)arg4 averageReceivedBitrate:(unsigned int)arg5;
- (id)init;
- (int)lossEventCount;
- (int)lossEventCountThresholdForBitrate:(unsigned int)arg1;
- (void)printRateControlFullInfoWithLogDump:(void *)arg1 time:(double)arg2 videoStall:(BOOL)arg3 videoFrozenDuration:(double)arg4 averageTargetBitrate:(unsigned int)arg5;
- (unsigned short)rampDownTier;
- (unsigned short)rampUpTier;
- (void)resetLossEventBuffer;
- (void)setMaxTierIndex:(unsigned short)arg1 minTierIndex:(unsigned short)arg2;
- (BOOL)shouldRampDown;
- (BOOL)shouldRampUp;
- (void)stateChange:(int)arg1;
- (void)stateEnter;
- (void)stateExit;
- (void)updatePacketLossRate:(double)arg1 time:(double)arg2;
- (void)updateRTPReceiveWithTimestamp:(unsigned int)arg1 sampleRate:(unsigned int)arg2 time:(double)arg3;

@end

