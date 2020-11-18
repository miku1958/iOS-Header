//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVCBasebandCongestionDetector, AVCRateControlFeedbackController, AVCStatisticsCollector, NSString, VCNWConnectionCongestionDetector, VCRateControlMediaController;
@protocol VCRateControlAlgorithm;

__attribute__((visibility("hidden")))
@interface AVCRateController : NSObject
{
    id _rateControllerDelegate;
    AVCStatisticsCollector *_statisticsCollector;
    AVCRateControlFeedbackController *_feedbackController;
    AVCBasebandCongestionDetector *_basebandCongestionDetector;
    VCNWConnectionCongestionDetector *_nwConnectionCongestionDetector;
    VCRateControlMediaController *_mediaController;
    id<VCRateControlAlgorithm> _rateControlAlgorithm;
    struct AVCRateControlConfig _configuration;
    unsigned int _targetBitrateCap;
    unsigned int _estimatedBandwidthCap;
    unsigned int _expectedBitrate;
    unsigned int _actualBitrate;
    unsigned int _targetBitrate;
    unsigned int _rateChangeCounter;
    unsigned int _roundTripTimeMilliseconds;
    unsigned int _packetLossPercentage;
    unsigned int _packetLossPercentageVideo;
    unsigned int _totalPacketsReceived;
    unsigned int _totalPacketsSent;
    unsigned int _totalBytesSent;
    unsigned int _totalBytesReceived;
    unsigned int _burstPacketLoss;
    unsigned int _owrd;
    BOOL _isNetworkCongested;
    void *_logDump;
    void *_logFeedbackDump;
    void *_logBasebandDump;
    void *_logNWDump;
    BOOL _isDumpFileEnabled;
    NSString *_dumpID;
    BOOL _isPeriodicLoggingEnabled;
    BOOL _isBasebandEnabled;
    BOOL _isForSimulation;
    BOOL _isUplink;
    BOOL _paused;
    BOOL _useExternalThread;
    BOOL _didConfigured;
    double _lastDefaultsReadTime;
    int _forcedTargetBitrate;
    int _forcedMaxBitrate;
    id _reportingAgentWeak;
    int _reportingModuleID;
    unsigned int _lastReportFlushedVideoPacketCount;
    unsigned int _lastReportFlushedAudioPacketCount;
    BOOL _isTargetBitrateOvershootReported;
    double _lastTimeTargetBitrateOvershootRecorded;
    BOOL _isUnexpectedLowTargetBitrateReported;
    double _lastTimeUnexpectedLowTargetBitrateRecorded;
    BOOL _isUnexpectedHighRTTReported;
    unsigned int _lastReportedBandwidthEstimation;
    unsigned int _totalSuddenBandwidthDropCount;
    unsigned int _totalMBLRampDownCount;
}

@property (strong, nonatomic) AVCBasebandCongestionDetector *basebandCongestionDetector; // @synthesize basebandCongestionDetector=_basebandCongestionDetector;
@property (readonly, nonatomic) struct AVCRateControlConfig configuration; // @synthesize configuration=_configuration;
@property (nonatomic) unsigned int estimatedBandwidthCap; // @synthesize estimatedBandwidthCap=_estimatedBandwidthCap;
@property (nonatomic) unsigned int expectedBitrate; // @synthesize expectedBitrate=_expectedBitrate;
@property (strong, nonatomic) AVCRateControlFeedbackController *feedbackController; // @synthesize feedbackController=_feedbackController;
@property (strong, nonatomic) VCRateControlMediaController *mediaController; // @synthesize mediaController=_mediaController;
@property (strong, nonatomic) VCNWConnectionCongestionDetector *nwConnectionCongestionDetector; // @synthesize nwConnectionCongestionDetector=_nwConnectionCongestionDetector;
@property (nonatomic, getter=isPaused) BOOL paused; // @synthesize paused=_paused;
@property (readonly) id reportingAgent;
@property (strong, nonatomic) AVCStatisticsCollector *statisticsCollector; // @synthesize statisticsCollector=_statisticsCollector;
@property (readonly, nonatomic) unsigned int targetBitrate; // @synthesize targetBitrate=_targetBitrate;
@property (nonatomic) unsigned int targetBitrateCap; // @synthesize targetBitrateCap=_targetBitrateCap;

- (void)checkAndReportAbnormalSymptoms;
- (void)configure:(struct AVCRateControlConfig)arg1;
- (void)configureAlgorithmWithRestart:(BOOL)arg1;
- (void)configureInternal:(struct AVCRateControlConfig)arg1;
- (void)configureWithOperatingMode:(int)arg1 isLocalCellular:(BOOL)arg2 localCellTech:(int)arg3 isRemoteCellular:(BOOL)arg4 remoteCellTech:(int)arg5 bitrateCapKbps:(unsigned int)arg6;
- (void)createBasebandLogDumpFile;
- (void)createLogDumpFiles:(id)arg1;
- (void)createNWConnectionLogDumpFile;
- (void)createVCRateControlAlgorithmWithConfiguration:(struct VCRateControlAlgorithmConfig)arg1;
- (void)dealloc;
- (void)deregisterPeriodicTask;
- (void)doRateControlWithBasebandStatistics:(CDStruct_b21f1e06)arg1;
- (void)doRateControlWithNWConnectionStatistics:(CDStruct_b21f1e06)arg1;
- (void)doRateControlWithStatistics:(CDStruct_b21f1e06)arg1;
- (void)getRealTimeStats:(struct __CFDictionary *)arg1;
- (void)getRealTimeStatsForServerBasedRxOnly:(struct __CFDictionary *)arg1;
- (void)getRealTimeStatsForServerBasedTxOnly:(struct __CFDictionary *)arg1;
- (void)getRealTimeStatsForiPadCompanion:(struct __CFDictionary *)arg1;
- (id)indicatorFromRadioTech:(unsigned int)arg1;
- (id)initWithDelegate:(id)arg1 dumpID:(id)arg2 forSimulation:(BOOL)arg3 isUplink:(BOOL)arg4 reportingAgent:(id)arg5 useExternalThread:(BOOL)arg6;
- (id)initWithDelegate:(id)arg1 dumpID:(id)arg2 isUplink:(BOOL)arg3 reportingAgent:(id)arg4;
- (int)initialBitrateTierFromLearntBitrateWithLocalTechnology:(unsigned int)arg1 remoteTech:(unsigned int)arg2 defaultTier:(int)arg3;
- (BOOL)isRadioTechnologyOnCellular:(unsigned int)arg1;
- (BOOL)isRadioTechnologyOnWiFiOrLTE:(unsigned int)arg1;
- (void)loadDefaultSettings;
- (int)maxTierBelowBitrate:(unsigned int)arg1 maxTierIndex:(int)arg2 minTierIndex:(int)arg3;
- (int)minTierAboveBitrate:(unsigned int)arg1 maxTierIndex:(int)arg2 minTierIndex:(int)arg3;
- (void)periodicTask:(void *)arg1;
- (void)printBasebandNotificationStatistics:(CDStruct_b21f1e06)arg1;
- (void)printFeedbackMessage:(CDStruct_b21f1e06)arg1;
- (void)printNWConnectionStatistics:(CDStruct_b21f1e06)arg1;
- (unsigned int)radioAccessTechnologyFromAVConferenceCellTech:(int)arg1 isCellular:(BOOL)arg2;
- (unsigned int)rateControlModeFromAVConferenceOperatingMode:(int)arg1;
- (void)registerPeriodicTask;
- (void)releaseLogDumpFiles;
- (void)reportNetworkStatistics;
- (void)reportTargetBitrateChange:(unsigned int)arg1 rateChangeCounter:(unsigned int)arg2;
- (void)setDefaultAlgorithmConfiguration:(struct VCRateControlAlgorithmConfig *)arg1;

@end
