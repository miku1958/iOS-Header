//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSpeech/CSAudioServerCrashMonitorDelegate-Protocol.h>
#import <CoreSpeech/CSAudioStreamProvidingDelegate-Protocol.h>
#import <CoreSpeech/CSMediaPlayingMonitorDelegate-Protocol.h>
#import <CoreSpeech/CSSiriClientBehaviorMonitorDelegate-Protocol.h>
#import <CoreSpeech/CSSiriEnabledMonitorDelegate-Protocol.h>
#import <CoreSpeech/CSSmartSiriVolumeProcessor-Protocol.h>

@class CSAsset, CSAudioStream, CSSmartSiriVolumeEnablePolicy, NSString, NSUserDefaults;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CSSmartSiriVolume : NSObject <CSMediaPlayingMonitorDelegate, CSAudioStreamProvidingDelegate, CSSiriEnabledMonitorDelegate, CSAudioServerCrashMonitorDelegate, CSSiriClientBehaviorMonitorDelegate, CSSmartSiriVolumeProcessor>
{
    NSObject<OS_dispatch_queue> *_queue;
    struct unique_ptr<SmartSiriVolume, std::__1::default_delete<SmartSiriVolume>> _smartSiriVolumeNoiseLevel;
    struct unique_ptr<SmartSiriVolume, std::__1::default_delete<SmartSiriVolume>> _smartSiriVolumeLKFS;
    struct vector<float, std::__1::allocator<float>> _floatBuffer;
    NSUserDefaults *_defaults;
    CSSmartSiriVolumeEnablePolicy *_ssvEnablePolicy;
    unsigned long long _startAnalyzeSampleCount;
    unsigned long long _samplesFed;
    unsigned long long _processedSampleCount;
    BOOL _isStartSampleCountMarked;
    BOOL _isListenPollingStarting;
    BOOL _shouldPauseSSVProcess;
    BOOL _shouldPauseLKFSProcess;
    BOOL _alarmSoundIsFiring;
    BOOL _timerSoundIsFiring;
    BOOL _mediaIsPlaying;
    CSAsset *_currentAsset;
    float _musicVolumeDB;
    float _alarmVolume;
    unsigned long long _noiseLevelChannelBitset;
    unsigned long long _LKFSChannelBitset;
    unsigned int _energyBufferSize;
    unsigned int _noiseLowerPercentile;
    unsigned int _noiseUpperPercentile;
    unsigned int _LKFSLowerPercentile;
    unsigned int _LKFSUpperPercentile;
    float _noiseTimeConstant;
    float _noiseMicSensitivityOffset;
    float _noiseMicSensitivityOffsetDeviceSimple;
    float _LKFSTimeConstant;
    float _LKFSMicSensitivityOffset;
    float _noiseTTSMappingInputRangeLow;
    float _noiseTTSMappingInputRangeHigh;
    float _noiseTTSMappingOutputRangeLow;
    float _noiseTTSMappingOutputRangeHigh;
    float _LKFSTTSMappingInputRangeLow;
    float _LKFSTTSMappingInputRangeHigh;
    float _LKFSTTSMappingOutputRangeLow;
    float _LKFSTTSMappingOutputRangeHigh;
    float _userOffsetInputRangeLow;
    float _userOffsetInputRangeHigh;
    float _userOffsetOutputRangeLow;
    float _userOffsetOutputRangeHigh;
    float _TTSVolumeLowerLimitDB;
    float _TTSVolumeUpperLimitDB;
    float _noiseWeight;
    CSAudioStream *_audioStream;
    NSObject<OS_dispatch_source> *_listenPollingTimer;
    long long _listenPollingTimerCount;
}

@property (strong, nonatomic) CSAudioStream *audioStream; // @synthesize audioStream=_audioStream;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSObject<OS_dispatch_source> *listenPollingTimer; // @synthesize listenPollingTimer=_listenPollingTimer;
@property (nonatomic) long long listenPollingTimerCount; // @synthesize listenPollingTimerCount=_listenPollingTimerCount;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)arg1;
- (void)CSMediaPlayingMonitor:(id)arg1 didReceiveMediaPlayingChanged:(long long)arg2;
- (void)CSSiriEnabledMonitor:(id)arg1 didReceiveEnabled:(BOOL)arg2;
- (float)_combineResultsWithOptimalFromNoise:(float)arg1 andOptimalFromLkfs:(float)arg2 withUserOffset:(float)arg3;
- (float)_convertDB2Mag:(float)arg1;
- (float)_deviceSpecificDBToLinearVolumeMappingCSSSVDeviceSimple:(float)arg1;
- (float)_deviceSpecificLinearVolumeToDBMappingCSSSVDeviceSimple:(float)arg1;
- (float)_estimatedTTSVolume:(float)arg1 lowerLimit:(float)arg2 upperLimit:(float)arg3 TTSmappingInputRangeLow:(float)arg4 TTSmappingInputRangeHigh:(float)arg5 TTSmappingOutputRangeLow:(float)arg6 TTSmappingOutputRangeHigh:(float)arg7;
- (float)_getDeviceSimpleOutputLinearVolumeFordBFSValue:(float)arg1;
- (float)_getDeviceSimpledBFSForOutputLinearVolume:(float)arg1;
- (float)_getDevicedBFSForInputLinearVolume:(float)arg1;
- (float *)_getFloatBufferData:(id)arg1;
- (float)_getMusicVolumeDBCSSSVDeviceDefault:(float)arg1;
- (float)_getMusicVolumeDBCSSSVDeviceSimple:(float)arg1;
- (float)_getUserOffsetFromMusicVolumeDB:(float)arg1;
- (void)_pauseSSVProcessing;
- (void)_prepareSoundLevelBufferFromSamples:(unsigned int)arg1 soundType:(long long)arg2;
- (void)_processAudioChunk:(id)arg1 soundType:(long long)arg2;
- (void)_reset;
- (void)_resetStartAnalyzeTime;
- (void)_resumeSSVProcessing;
- (float)_scaleInputWithInRangeOutRange:(float)arg1 minIn:(float)arg2 maxIn:(float)arg3 minOut:(float)arg4 maxOut:(float)arg5;
- (void)_setAsset:(id)arg1;
- (void)_setDefaultParameters;
- (void)_setStartAnalyzeTime:(unsigned long long)arg1;
- (void)_startListenPolling;
- (void)_startListenPollingWithInterval:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_startListenWithCompletion:(CDUnknownBlockType)arg1;
- (void)_stopListening;
- (void)audioStreamProvider:(id)arg1 audioBufferAvailable:(id)arg2;
- (void)audioStreamProvider:(id)arg1 audioChunkForTVAvailable:(id)arg2;
- (void)audioStreamProvider:(id)arg1 didStopStreamUnexpectly:(long long)arg2;
- (void)didDetectKeywordWithResult:(id)arg1;
- (void)didReceiveAlarmChanged:(long long)arg1;
- (void)didReceiveAlarmVolumeChanged:(float)arg1;
- (void)didReceiveMusicVolumeChanged:(float)arg1;
- (void)didReceiveTimerChanged:(long long)arg1;
- (float)estimateSoundLevelbySoundType:(long long)arg1;
- (float)estimatedTTSVolumeForNoiseLevelAndLKFS:(float)arg1 LKFS:(float)arg2;
- (void)fetchInitSystemVolumes;
- (id)getVolumeForTTSType:(unsigned long long)arg1 withOverrideMediaVolume:(id)arg2 WithRequestTime:(unsigned long long)arg3;
- (id)initWithSamplingRate:(float)arg1 asset:(id)arg2;
- (void)initializeAlarmState;
- (void)initializeMediaPlayingState;
- (void)initializeTimerState;
- (void)prepareSoundLevelBufferFromSamples:(id)arg1 soundType:(long long)arg2 firedVoiceTriggerEvent:(BOOL)arg3 triggerStartTimeSampleOffset:(unsigned long long)arg4 triggerEndTimeSampleOffset:(unsigned long long)arg5;
- (void)reset;
- (void)setAsset:(id)arg1;
- (void)siriClientBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 successfully:(BOOL)arg3 option:(id)arg4 withEventUUID:(id)arg5;
- (void)siriClientBehaviorMonitor:(id)arg1 didStopStream:(id)arg2 withEventUUID:(id)arg3;
- (void)siriClientBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 option:(id)arg3;
- (void)siriClientBehaviorMonitor:(id)arg1 willStopStream:(id)arg2;
- (void)startSmartSiriVolume;

@end

