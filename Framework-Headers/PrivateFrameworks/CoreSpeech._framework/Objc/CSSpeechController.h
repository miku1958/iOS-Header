//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSpeech/CSAudioAlertProvidingDelegate-Protocol.h>
#import <CoreSpeech/CSAudioConverterDelegate-Protocol.h>
#import <CoreSpeech/CSAudioDecoderDelegate-Protocol.h>
#import <CoreSpeech/CSAudioSessionControllerDelegate-Protocol.h>
#import <CoreSpeech/CSAudioSessionProvidingDelegate-Protocol.h>
#import <CoreSpeech/CSAudioStreamProvidingDelegate-Protocol.h>
#import <CoreSpeech/CSContinuousVoiceTriggerDelegate-Protocol.h>
#import <CoreSpeech/CSSmartSiriVolumeControllerDelegate-Protocol.h>
#import <CoreSpeech/CSSpeechManagerDelegate-Protocol.h>
#import <CoreSpeech/CSXPCClientDelegate-Protocol.h>

@class CSAudioConverter, CSAudioPowerMeter, CSAudioRecordContext, CSAudioSampleRateConverter, CSAudioStream, CSAudioZeroCounter, CSEndpointerProxy, CSLanguageDetector, CSMediaPlayingMonitor, CSPlainAudioFileWriter, CSSelectiveChannelAudioFileWriter, CSSmartSiriVolumeController, CSSpeechEndHostTimeEstimator, CSStopRecordingOptions, CSVolumeMonitor, CSXPCClient, NSDictionary, NSMutableDictionary, NSString, NSUUID;
@protocol CSAudioAlertProviding, CSAudioMeterProviding, CSAudioMetricProviding, CSAudioSessionProviding, CSAudioStreamProviding, CSEndpointAnalyzer, CSLanguageDetectorDelegate, CSSpeakerIdentificationDelegate, CSSpeechControllerDelegate, OS_dispatch_group, OS_dispatch_queue;

@interface CSSpeechController : NSObject <CSAudioConverterDelegate, CSSmartSiriVolumeControllerDelegate, CSAudioSessionProvidingDelegate, CSAudioStreamProvidingDelegate, CSAudioAlertProvidingDelegate, CSAudioSessionControllerDelegate, CSXPCClientDelegate, CSAudioDecoderDelegate, CSSpeechManagerDelegate, CSContinuousVoiceTriggerDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_contextResetQueue;
    CSAudioConverter *_opusAudioConverter;
    CSAudioConverter *_narrowBandOpusConverter;
    CSAudioConverter *_audioConverter;
    CSAudioSampleRateConverter *_downsampler;
    NSDictionary *_requestedRecordSettings;
    NSDictionary *_lastVoiceTriggerInfo;
    NSDictionary *_lastRTSTriggerInfo;
    CSAudioZeroCounter *_continuousZeroCounter;
    NSObject<OS_dispatch_queue> *_audibleFeedbackQueue;
    NSObject<OS_dispatch_group> *_twoShotAudibleFeedbackDecisionGroup;
    BOOL _isOpus;
    BOOL _isSiriClientListening;
    BOOL _isNarrowBand;
    BOOL _isAudioSessionActivated;
    BOOL _deviceRoleIsStereo;
    BOOL _twoShotNotificationEnabled;
    BOOL _isMediaPlaying;
    BOOL _isAlarmPlaying;
    BOOL _isTimerPlaying;
    BOOL _isSoundPlaying;
    BOOL _isRemoteVADAvailableStream;
    BOOL _myriadPreventingTwoShotFeedback;
    BOOL _needsPostGain;
    BOOL _shouldUseLanguageDetectorForCurrentRequest;
    BOOL _didDeliverLastBuffer;
    BOOL _didDeliverFirstSpeechPacket;
    BOOL _canPerformDelayedStop;
    float _cachedAvgPower;
    float _cachedPeakPower;
    id<CSSpeechControllerDelegate> _delegate;
    id<CSLanguageDetectorDelegate> _languageDetectorDelegate;
    id<CSSpeakerIdentificationDelegate> _speakerIdDelegate;
    CSEndpointerProxy *_endpointerProxy;
    CSAudioRecordContext *_audioRecordContext;
    CSAudioStream *_audioStream;
    id<CSAudioStreamProviding> _streamProvider;
    id<CSAudioSessionProviding> _sessionProvider;
    id<CSAudioAlertProviding> _alertProvider;
    id<CSAudioMeterProviding> _audioMeterProvider;
    id<CSAudioMetricProviding> _audioMetricProvider;
    CSPlainAudioFileWriter *_audioFileWriter;
    CSSelectiveChannelAudioFileWriter *_serverLoggingWriter;
    CSSmartSiriVolumeController *_volumeController;
    NSString *_recordEventUUID;
    NSDictionary *_speakerRecognitionScores;
    unsigned long long _activeChannel;
    CSSpeechEndHostTimeEstimator *_speechEndHostTimeEstimator;
    NSString *_bundleIdFromDictation;
    CSLanguageDetector *_languageDetector;
    NSUUID *_pendingAudioSessionActivationToken;
    CDUnknownBlockType _pendingAudioSessionActivationCompletion;
    unsigned long long _pendingAudioSessionActivationReason;
    double _audioSessionActivationDelay;
    CSXPCClient *_xpcClient;
    CSAudioPowerMeter *_powerMeter;
    CSStopRecordingOptions *_requestedStopRecordingOptions;
    unsigned long long _numTrailingSamplesAfterSchedulingStop;
    unsigned long long _maxAllowedTrailingSamplesAfterSchedulingStop;
    NSMutableDictionary *_decodersForTV;
    unsigned long long _decoderProcessedSampleCountForTV;
    NSString *_logEventUUID;
    NSString *_ssvLogFilePath;
    CSMediaPlayingMonitor *_mediaPlayingMonitor;
    CSVolumeMonitor *_volumeMonitor;
}

@property (nonatomic) unsigned long long activeChannel; // @synthesize activeChannel=_activeChannel;
@property (strong, nonatomic) id<CSAudioAlertProviding> alertProvider; // @synthesize alertProvider=_alertProvider;
@property (strong, nonatomic) CSPlainAudioFileWriter *audioFileWriter; // @synthesize audioFileWriter=_audioFileWriter;
@property (strong, nonatomic) id<CSAudioMeterProviding> audioMeterProvider; // @synthesize audioMeterProvider=_audioMeterProvider;
@property (strong, nonatomic) id<CSAudioMetricProviding> audioMetricProvider; // @synthesize audioMetricProvider=_audioMetricProvider;
@property (strong, nonatomic) CSAudioRecordContext *audioRecordContext; // @synthesize audioRecordContext=_audioRecordContext;
@property (nonatomic) double audioSessionActivationDelay; // @synthesize audioSessionActivationDelay=_audioSessionActivationDelay;
@property (strong, nonatomic) CSAudioStream *audioStream; // @synthesize audioStream=_audioStream;
@property (strong, nonatomic) NSString *bundleIdFromDictation; // @synthesize bundleIdFromDictation=_bundleIdFromDictation;
@property (nonatomic) float cachedAvgPower; // @synthesize cachedAvgPower=_cachedAvgPower;
@property (nonatomic) float cachedPeakPower; // @synthesize cachedPeakPower=_cachedPeakPower;
@property (nonatomic) BOOL canPerformDelayedStop; // @synthesize canPerformDelayedStop=_canPerformDelayedStop;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long decoderProcessedSampleCountForTV; // @synthesize decoderProcessedSampleCountForTV=_decoderProcessedSampleCountForTV;
@property (strong, nonatomic) NSMutableDictionary *decodersForTV; // @synthesize decodersForTV=_decodersForTV;
@property (weak, nonatomic) id<CSSpeechControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL deviceRoleIsStereo; // @synthesize deviceRoleIsStereo=_deviceRoleIsStereo;
@property (nonatomic) BOOL didDeliverFirstSpeechPacket; // @synthesize didDeliverFirstSpeechPacket=_didDeliverFirstSpeechPacket;
@property (nonatomic) BOOL didDeliverLastBuffer; // @synthesize didDeliverLastBuffer=_didDeliverLastBuffer;
@property (nonatomic) BOOL duckOthersOption;
@property (readonly, nonatomic) id<CSEndpointAnalyzer> endpointAnalyzer;
@property (strong, nonatomic) CSEndpointerProxy *endpointerProxy; // @synthesize endpointerProxy=_endpointerProxy;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isAlarmPlaying; // @synthesize isAlarmPlaying=_isAlarmPlaying;
@property (nonatomic) BOOL isAudioSessionActivated; // @synthesize isAudioSessionActivated=_isAudioSessionActivated;
@property (nonatomic) BOOL isMediaPlaying; // @synthesize isMediaPlaying=_isMediaPlaying;
@property (nonatomic) BOOL isNarrowBand; // @synthesize isNarrowBand=_isNarrowBand;
@property (nonatomic) BOOL isOpus; // @synthesize isOpus=_isOpus;
@property (nonatomic) BOOL isRemoteVADAvailableStream; // @synthesize isRemoteVADAvailableStream=_isRemoteVADAvailableStream;
@property (nonatomic) BOOL isSiriClientListening; // @synthesize isSiriClientListening=_isSiriClientListening;
@property (nonatomic) BOOL isSoundPlaying; // @synthesize isSoundPlaying=_isSoundPlaying;
@property (nonatomic) BOOL isTimerPlaying; // @synthesize isTimerPlaying=_isTimerPlaying;
@property (strong, nonatomic) CSLanguageDetector *languageDetector; // @synthesize languageDetector=_languageDetector;
@property (weak, nonatomic) id<CSLanguageDetectorDelegate> languageDetectorDelegate; // @synthesize languageDetectorDelegate=_languageDetectorDelegate;
@property (strong, nonatomic) NSString *logEventUUID; // @synthesize logEventUUID=_logEventUUID;
@property (nonatomic) unsigned long long maxAllowedTrailingSamplesAfterSchedulingStop; // @synthesize maxAllowedTrailingSamplesAfterSchedulingStop=_maxAllowedTrailingSamplesAfterSchedulingStop;
@property (strong, nonatomic) CSMediaPlayingMonitor *mediaPlayingMonitor; // @synthesize mediaPlayingMonitor=_mediaPlayingMonitor;
@property (nonatomic) BOOL myriadPreventingTwoShotFeedback; // @synthesize myriadPreventingTwoShotFeedback=_myriadPreventingTwoShotFeedback;
@property (nonatomic) BOOL needsPostGain; // @synthesize needsPostGain=_needsPostGain;
@property (nonatomic) unsigned long long numTrailingSamplesAfterSchedulingStop; // @synthesize numTrailingSamplesAfterSchedulingStop=_numTrailingSamplesAfterSchedulingStop;
@property (copy, nonatomic) CDUnknownBlockType pendingAudioSessionActivationCompletion; // @synthesize pendingAudioSessionActivationCompletion=_pendingAudioSessionActivationCompletion;
@property (nonatomic) unsigned long long pendingAudioSessionActivationReason; // @synthesize pendingAudioSessionActivationReason=_pendingAudioSessionActivationReason;
@property (strong, nonatomic) NSUUID *pendingAudioSessionActivationToken; // @synthesize pendingAudioSessionActivationToken=_pendingAudioSessionActivationToken;
@property (strong, nonatomic) CSAudioPowerMeter *powerMeter; // @synthesize powerMeter=_powerMeter;
@property (strong, nonatomic) NSString *recordEventUUID; // @synthesize recordEventUUID=_recordEventUUID;
@property (strong, nonatomic) CSStopRecordingOptions *requestedStopRecordingOptions; // @synthesize requestedStopRecordingOptions=_requestedStopRecordingOptions;
@property (strong, nonatomic) CSSelectiveChannelAudioFileWriter *serverLoggingWriter; // @synthesize serverLoggingWriter=_serverLoggingWriter;
@property (strong, nonatomic) id<CSAudioSessionProviding> sessionProvider; // @synthesize sessionProvider=_sessionProvider;
@property (nonatomic) BOOL shouldUseLanguageDetectorForCurrentRequest; // @synthesize shouldUseLanguageDetectorForCurrentRequest=_shouldUseLanguageDetectorForCurrentRequest;
@property (weak, nonatomic) id<CSSpeakerIdentificationDelegate> speakerIdDelegate; // @synthesize speakerIdDelegate=_speakerIdDelegate;
@property (strong, nonatomic) NSDictionary *speakerRecognitionScores; // @synthesize speakerRecognitionScores=_speakerRecognitionScores;
@property (strong, nonatomic) CSSpeechEndHostTimeEstimator *speechEndHostTimeEstimator; // @synthesize speechEndHostTimeEstimator=_speechEndHostTimeEstimator;
@property (strong, nonatomic) NSString *ssvLogFilePath; // @synthesize ssvLogFilePath=_ssvLogFilePath;
@property (strong, nonatomic) id<CSAudioStreamProviding> streamProvider; // @synthesize streamProvider=_streamProvider;
@property (readonly) Class superclass;
@property (nonatomic) BOOL twoShotNotificationEnabled; // @synthesize twoShotNotificationEnabled=_twoShotNotificationEnabled;
@property (strong, nonatomic) CSSmartSiriVolumeController *volumeController; // @synthesize volumeController=_volumeController;
@property (strong, nonatomic) CSVolumeMonitor *volumeMonitor; // @synthesize volumeMonitor=_volumeMonitor;
@property (strong, nonatomic) CSXPCClient *xpcClient; // @synthesize xpcClient=_xpcClient;

+ (BOOL)isSmartSiriVolumeAvailable;
+ (id)sharedController;
- (void).cxx_destruct;
- (void)CSAlarmMonitor:(id)arg1 didReceiveAlarmChanged:(long long)arg2;
- (void)CSMediaPlayingMonitor:(id)arg1 didReceiveMediaPlayingChanged:(long long)arg2;
- (void)CSTimerMonitor:(id)arg1 didReceiveTimerChanged:(long long)arg2;
- (void)CSXPCClient:(id)arg1 didDisconnect:(BOOL)arg2;
- (BOOL)_activateAudioSessionWithReason:(unsigned long long)arg1 delay:(double)arg2 delayRequested:(BOOL)arg3 error:(id *)arg4;
- (BOOL)_activateAudioSessionWithReason:(unsigned long long)arg1 error:(id *)arg2;
- (void)_audioStreamProvdider:(id)arg1 audioBufferAvailable:(id)arg2;
- (BOOL)_canPlayPhaticDuringMediaPlayback;
- (void)_cancelPendingAudioSessionActivateForReason:(id)arg1;
- (id)_contextToString:(id)arg1;
- (void)_createAudioPowerMeterIfNeeded;
- (BOOL)_createAudioProviderFromXPCWithContext:(id)arg1;
- (void)_createLanguageDetectorIfNeeded;
- (long long)_currentAudioRecorderSampleRate;
- (void)_deviceAudioLoggingWithFileWriter:(id)arg1;
- (void)_didStopForReason:(long long)arg1;
- (BOOL)_doActivateAudioSessionWithReason:(unsigned long long)arg1 error:(id *)arg2;
- (id)_fetchAudioDecoderForTV:(unsigned int)arg1;
- (BOOL)_fetchAudioProviderWithContext:(id)arg1;
- (id)_fetchFallbackAudioSessionReleaseProviding;
- (BOOL)_fetchLastTriggerInfo;
- (id)_getSpeechIdentifier;
- (void)_initializeAlarmState;
- (void)_initializeMediaPlayingState;
- (void)_initializeTimerState;
- (BOOL)_isDelayedDuckingSupportedContext;
- (BOOL)_isRecordRouteBuiltinMic;
- (id)_languageDetectorOptionFromSettings:(id)arg1;
- (BOOL)_lazyActivateAudioSessionWithReason:(unsigned long long)arg1 error:(id *)arg2;
- (void)_logRecordingStopErrorIfNeeded:(long long)arg1;
- (void)_performPendingAudioSessionActivateForReason:(id)arg1;
- (unsigned long long)_phaticPlaybackReason;
- (void)_refreshSpeakerRecognitionAssets;
- (void)_scheduleActivateAudioSessionWithDelay:(double)arg1 sessionActivateReason:(unsigned long long)arg2 scheduleReason:(id)arg3 validator:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (float)_scheduledPhaticDelay;
- (void)_setSoundPlayingState;
- (BOOL)_setupAudioConverter:(BOOL)arg1 isNarrowBand:(BOOL)arg2;
- (void)_setupDownsamplerIfNeeded;
- (void)_setupSpeakerRecognitionController;
- (BOOL)_shouldFetchRaiseToSpeakInfo;
- (BOOL)_shouldFetchVoiceTriggerInfo;
- (BOOL)_shouldResetContextAtPrepare;
- (BOOL)_shouldSchedulePhaticAtStartRecording;
- (BOOL)_shouldSetStartSampleCount;
- (BOOL)_shouldSetStartSampleCountForRTS;
- (BOOL)_shouldUseLanguageDetector:(id)arg1;
- (void)_startPhaticDecision;
- (void)_teardownAudioProviderIfNeeded;
- (unsigned long long)alertStartTime;
- (void)audioAlertProvidingDidFinishAlertPlayback:(id)arg1 ofType:(long long)arg2 error:(id)arg3;
- (void)audioConverterDidConvertPackets:(id)arg1 packets:(id)arg2 durationInSec:(float)arg3 timestamp:(unsigned long long)arg4;
- (void)audioDecoderDidDecodePackets:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 buffer:(id)arg3 remoteVAD:(id)arg4 timestamp:(unsigned long long)arg5 receivedNumChannels:(unsigned int)arg6;
- (void)audioSessionController:(id)arg1 didReceiveAudioSessionMediaServicesWereResetNotificationWithUserInfo:(id)arg2;
- (void)audioSessionProvider:(id)arg1 didChangeContext:(BOOL)arg2;
- (void)audioSessionProvider:(id)arg1 didSetAudioSessionActive:(BOOL)arg2;
- (void)audioSessionProvider:(id)arg1 providerInvalidated:(BOOL)arg2;
- (void)audioSessionProvider:(id)arg1 willSetAudioSessionActive:(BOOL)arg2;
- (void)audioSessionProviderBeginInterruption:(id)arg1;
- (void)audioSessionProviderBeginInterruption:(id)arg1 withContext:(id)arg2;
- (void)audioSessionProviderEndInterruption:(id)arg1;
- (void)audioStreamProvider:(id)arg1 audioBufferAvailable:(id)arg2;
- (void)audioStreamProvider:(id)arg1 audioChunkForTVAvailable:(id)arg2;
- (void)audioStreamProvider:(id)arg1 didHardwareConfigurationChange:(long long)arg2;
- (void)audioStreamProvider:(id)arg1 didStopStreamUnexpectly:(long long)arg2;
- (float)averagePowerForChannel:(unsigned long long)arg1;
- (float)averagePowerForOutputReference;
- (void)beginWaitingForMyriad;
- (void)cancelCurrentLanguageDetectorRequest;
- (void)didTTSVolumeChange:(id)arg1 forReason:(unsigned long long)arg2;
- (void)endWaitingForMyriadWithDecision:(unsigned long long)arg1;
- (id)endpointerModelVersion;
- (struct AudioStreamBasicDescription)getLPCMAudioStreamBasicDescription;
- (double)getRecordBufferDuration;
- (float)getSmartSiriVolume;
- (id)init;
- (BOOL)initializeRecordSessionWithContext:(id)arg1;
- (BOOL)isBuiltInVoiceTriggered;
- (BOOL)isHearstVoiceTriggered;
- (BOOL)isJarvisVoiceTriggered;
- (BOOL)isRTSTriggered;
- (BOOL)isRecording;
- (BOOL)isSmartSiriVolumeAvailable;
- (void)keywordDetectorDidDetectKeyword;
- (void)languageDetectorSetMostRecentRecognitionLanguage:(id)arg1;
- (double)lastEndOfVoiceActivityTime;
- (id)metrics;
- (unsigned long long)outputReferenceChannel;
- (float)peakPowerForChannel:(unsigned long long)arg1;
- (float)peakPowerForOutputReference;
- (BOOL)playAlertSoundForType:(long long)arg1;
- (BOOL)playRecordStartingAlertAndResetEndpointer;
- (id)playbackRoute;
- (void)preheat;
- (BOOL)prepareRecordWithSettings:(id)arg1 error:(id *)arg2;
- (BOOL)prewarmAudioSession;
- (void)processServerEndpointFeatures:(id)arg1;
- (id)recordDeviceInfo;
- (id)recordRoute;
- (id)recordSettings;
- (void)releaseAudioSession;
- (void)releaseAudioSession:(unsigned long long)arg1;
- (void)reset;
- (void)resetAudioSession;
- (void)resetEndpointer;
- (BOOL)setAlertSoundFromURL:(id)arg1 forType:(long long)arg2;
- (BOOL)setCurrentContext:(id)arg1 error:(id *)arg2;
- (void)setEndpointAnalyzerDelegate:(id)arg1;
- (void)setLanguageDetectorInteractionID:(id)arg1;
- (void)setMeteringEnabled:(BOOL)arg1;
- (BOOL)setRecordBufferDuration:(double)arg1;
- (void)setSynchronousCallbackEnabled:(BOOL)arg1;
- (void)shouldAcceptEagerResultForDuration:(double)arg1 resultsCompletionHandler:(CDUnknownBlockType)arg2;
- (void)startController;
- (BOOL)startRecording:(id *)arg1;
- (BOOL)startRecordingWithSettings:(id)arg1 error:(id *)arg2;
- (void)stopEndpointer;
- (void)stopRecording;
- (void)stopRecordingWithOptions:(id)arg1;
- (void)updateEndpointerDelayedTrigger:(BOOL)arg1;
- (void)updateEndpointerThreshold:(float)arg1;
- (void)updateMeters;
- (id)voiceTriggerInfo;

@end
