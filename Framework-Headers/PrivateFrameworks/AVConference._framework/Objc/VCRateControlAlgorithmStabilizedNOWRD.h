//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVConference/VCRateControlAlgorithm-Protocol.h>

@class NSString, VCRateControlMediaController;

__attribute__((visibility("hidden")))
@interface VCRateControlAlgorithmStabilizedNOWRD : NSObject <VCRateControlAlgorithm>
{
    struct VCRateControlAlgorithmConfig _config;
    VCRateControlMediaController *_mediaController;
    int _state;
    int _rampUpStatus;
    int _rampDownStatus;
    BOOL _paused;
    unsigned short _echoedTimestamp;
    unsigned short _previousTimestamp;
    unsigned short _queuingDelayTimestamp;
    unsigned int _receiveTimestamp;
    unsigned int _timestampWrapAroundCounter;
    double _rateControlTime;
    unsigned int _rateControlCounter;
    unsigned int _rateChangeCounter;
    unsigned int _lastRateChangeCounter;
    unsigned int _newOWRDSampleCollected;
    BOOL _isRemoteBandwidthEstimationStable;
    unsigned int _remoteBandwidthEstimation;
    unsigned int _localBandwidthEstimation;
    struct {
        double owrd;
        double roundTripTime;
        double roundTripTimeMinEnvelope;
        double packetLossRate;
        int tierIndex;
    } _history[500];
    int _currentHistorySize;
    int _currentHistoryIndex;
    double _owrd;
    CDStruct_55dce769 _owrdList;
    BOOL _isOWRDListReady;
    BOOL _isOWRDConstant;
    double _nowrd;
    double _nowrdShort;
    double _nowrdAcc;
    double _previousNOWRD;
    double _firstOWRDFrozenTime;
    double _lastNoOvershootBWEstimationTime;
    double _firstBelowNoRampUpBandwidthTime;
    double _sendBitrateLimitedStartTime;
    double _rampUpFrozenTime;
    double _rampUpFrozenDuration;
    double _extendedRampUpFrozenExitTime;
    double _stabilizationTime;
    double _rateChangeSystemTime;
    double _lastRampDownTimeDueToFeedback;
    double _lastRampDownTimeDueToBaseband;
    double _lastPositiveOWRDTime;
    BOOL _isCongested;
    BOOL _isRampUpSettling;
    BOOL _isStable;
    BOOL _isSendBitrateLimited;
    BOOL _isOvershoot;
    BOOL _belowNoRampUpBandwidth;
    BOOL _isFirstTimestampArrived;
    BOOL _isNewRateSentOut;
    BOOL _isFirstInitialRampUpDone;
    double _inVideoBitrate;
    double _outVideoBitrate;
    double _inAudioBitrate;
    double _outAudioBitrate;
    unsigned int _fastRampDownBitrateRange;
    unsigned int _consecutiveRampDown;
    double _lastTimeStartRampingDown;
    double _rampUpSettleDuration;
    double _basebandNotificationArrivalTime;
    unsigned int _basebandAverageBitrate;
    unsigned int _basebandTotalQueueDepth;
    double _basebandExpectedQueuingDelay;
    double _basebandNormalizedBDCD;
    double _basebandNormalizedQueuingDelay;
    BOOL _isWaitingForBasebandRampDown;
    double _lastBasebandRampDownTime;
    double _lastHighNBDCDTime;
    int _basebandAdditionalTiersForRampUp;
    unsigned int _totalPacketReceived;
    unsigned int _packetReceivedVideo;
    unsigned int _mostBurstLoss;
    unsigned int _packetBurstLoss;
    unsigned int _roundTripTimeTick;
    double _roundTripTime;
    double _roundTripTimeMinEnvelope;
    double _previousRoundTripTime;
    double _worstRecentRoundTripTime;
    double _packetLossRate;
    double _packetLossRateAudio;
    double _packetLossRateVideo;
    double _lastNetworkUnstableTime;
    unsigned int _worstRecentBurstLoss;
    int _currentTierIndex;
    int _previousTierIndex;
    unsigned int _targetBitrate;
    unsigned int _actualBitrate;
    void *_logDump;
    void *_logBasebandDump;
    BOOL _isPeriodicLoggingEnabled;
    BOOL _didMBLRampDown;
}

@property (readonly, nonatomic) unsigned int actualBitrate; // @synthesize actualBitrate=_actualBitrate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didMBLRampDown; // @synthesize didMBLRampDown=_didMBLRampDown;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isCongested; // @synthesize isCongested=_isCongested;
@property (readonly, nonatomic) BOOL isFirstInitialRampUpDone; // @synthesize isFirstInitialRampUpDone=_isFirstInitialRampUpDone;
@property (readonly, nonatomic) BOOL isNewRateSentOut; // @synthesize isNewRateSentOut=_isNewRateSentOut;
@property (readonly, nonatomic) BOOL isSendBitrateLimited; // @synthesize isSendBitrateLimited=_isSendBitrateLimited;
@property (nonatomic) unsigned int localBandwidthEstimation; // @synthesize localBandwidthEstimation=_localBandwidthEstimation;
@property (strong, nonatomic) VCRateControlMediaController *mediaController; // @synthesize mediaController=_mediaController;
@property (readonly, nonatomic) unsigned int mostBurstLoss; // @synthesize mostBurstLoss=_mostBurstLoss;
@property (readonly, nonatomic) double owrd; // @synthesize owrd=_owrd;
@property (readonly, nonatomic) double packetLossRate; // @synthesize packetLossRate=_packetLossRate;
@property (readonly, nonatomic) double packetLossRateAudio; // @synthesize packetLossRateAudio=_packetLossRateAudio;
@property (readonly, nonatomic) double packetLossRateVideo; // @synthesize packetLossRateVideo=_packetLossRateVideo;
@property (nonatomic, getter=isPaused) BOOL paused; // @synthesize paused=_paused;
@property (readonly, nonatomic) unsigned int rateChangeCounter; // @synthesize rateChangeCounter=_rateChangeCounter;
@property (readonly, nonatomic) double roundTripTime; // @synthesize roundTripTime=_roundTripTime;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned int targetBitrate; // @synthesize targetBitrate=_targetBitrate;
@property (readonly, nonatomic) unsigned int totalPacketReceived; // @synthesize totalPacketReceived=_totalPacketReceived;
@property (readonly, nonatomic) unsigned int worstRecentBurstLoss; // @synthesize worstRecentBurstLoss=_worstRecentBurstLoss;
@property (readonly, nonatomic) double worstRecentRoundTripTime; // @synthesize worstRecentRoundTripTime=_worstRecentRoundTripTime;

- (int)basebandAdditionalTiersForRampUp;
- (void)calculateCongestionMetricsFromOWRD:(double)arg1 time:(double)arg2;
- (void)calculatePacketLossWithReceivedPacketCount:(unsigned int)arg1 receivedPacketCountVideo:(unsigned int)arg2 packetBurstLoss:(unsigned short)arg3 packetLossSample:(double)arg4;
- (void)calculateRoundTripTimeWithSample:(double)arg1;
- (void)checkBandwidthOvershoot;
- (void)checkCongestionStatus;
- (void)checkMediaQueueBitrates;
- (BOOL)checkNetworkSaturationWithRoundTripTime:(double)arg1 minRoundTripTime:(double)arg2 packetLossRate:(double)arg3 owrd:(double)arg4;
- (void)checkStabilizationWithEchoedTimestamp:(unsigned short)arg1 queuingDelay:(unsigned short)arg2;
- (id)className;
- (void)configure:(struct VCRateControlAlgorithmConfig)arg1 restartRequired:(BOOL)arg2;
- (void)dealloc;
- (BOOL)doRateControlWithBasebandStatistics:(CDStruct_56e8fa21)arg1;
- (BOOL)doRateControlWithStatistics:(CDStruct_56e8fa21)arg1;
- (BOOL)doRateControlWithVCRCStatistics:(CDStruct_56e8fa21)arg1;
- (void)enableBasebandDump:(void *)arg1;
- (void)enableLogDump:(void *)arg1 enablePeriodicLogging:(BOOL)arg2;
- (double)getDoubleTimeFromTimestamp:(unsigned int)arg1 timestampTick:(unsigned int)arg2 wrapAroundCounter:(unsigned int)arg3;
- (double)getRampUpFrozenDuration;
- (double)getRampUpSettleDuration;
- (unsigned short)getTimestampFromMicroTime:(double)arg1;
- (id)init;
- (BOOL)isBasebandNotificationOutOfKeyFrameCoolDownTime;
- (BOOL)isBitrateOscillatingWithCurrentTierIndex:(int)arg1;
- (BOOL)isNetworkSaturated;
- (BOOL)isRoundTripTimeDecreasingOrLessThanMinEnvelope;
- (BOOL)keepOvershootingRampDownBandwidth;
- (void)logToDumpFilesWithString:(id)arg1;
- (void)printRateControlInfoToLogDump;
- (int)rampDownTier;
- (int)rampDownTierDueToBaseband:(double)arg1;
- (int)rampUpTier;
- (BOOL)recentlyGoAboveRampUpBandwidth;
- (void)resetRampingStatus;
- (void)runRateControlStateTransition;
- (void)setBitrateUnstable;
- (BOOL)shouldFastRampUp;
- (BOOL)shouldRampDown;
- (BOOL)shouldRampDownDueToBaseband;
- (BOOL)shouldRampDownDueToNOWRD;
- (BOOL)shouldRampDownDueToNOWRDAcc;
- (BOOL)shouldRampUp;
- (BOOL)shouldRampUpDueToBaseband;
- (void)stateChangeTo:(int)arg1;
- (void)stateEnter;
- (void)stateExit;
- (void)updateCongestionStatusWhenRampDown:(double)arg1;
- (void)updateCongestionStatusWhenRampUp;
- (BOOL)updateInternalStatistics:(CDStruct_56e8fa21)arg1;
- (void)updateInternalStatus;
- (void)updateVCRateControlHistory;

@end
