//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSpeech/AVVoiceControllerPlaybackDelegate-Protocol.h>
#import <CoreSpeech/AVVoiceControllerRecordDelegate-Protocol.h>
#import <CoreSpeech/CSBeepCancellerDelegate-Protocol.h>

@class AVVoiceController, CSAudioSampleRateConverter, CSAudioZeroCounter, CSAudioZeroFilter, CSBeepCanceller, CSRemoteRecordClient, NSDictionary, NSString;
@protocol CSAudioRecorderDelegate;

@interface CSAudioRecorder : NSObject <AVVoiceControllerRecordDelegate, AVVoiceControllerPlaybackDelegate, CSBeepCancellerDelegate>
{
    AVVoiceController *_voiceController;
    CSAudioZeroFilter *_zeroFilter;
    CSBeepCanceller *_beepCanceller;
    unsigned long long _vtEndInSampleCount;
    unsigned long long _numSamplesProcessed;
    struct OpaqueAudioConverter *_deinterleaver;
    struct AudioBufferList _interleavedABL;
    struct AudioBufferList *_pNonInterleavedABL;
    CSAudioSampleRateConverter *_sampleRateConverter;
    BOOL _needSampleRateConversion;
    CSRemoteRecordClient *_remoteRecordClient;
    NSDictionary *_latestContext;
    BOOL _shouldUseRemoteRecord;
    CSAudioZeroCounter *_continuousZeroCounter;
    id<CSAudioRecorderDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CSAudioRecorderDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL duckOthersOption;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_audioRecorderDidStartRecordingSuccessfully:(BOOL)arg1 error:(id)arg2;
- (void)_audioRecorderDidStopRecordingForReason:(long long)arg1;
- (id)_beepCanceller;
- (void)_createDeInterleaverIfNeeded;
- (void)_createSampleRateConverterIfNeeded;
- (id)_deinterleaveBufferIfNeeded:(id)arg1;
- (void)_destroyVoiceController;
- (void)_processAudioChain:(id)arg1 atTime:(unsigned long long)arg2;
- (void)_processAudioChainWithZeroFiltering:(id)arg1 atTime:(unsigned long long)arg2;
- (float)_recordingSampleRate;
- (void)_resetZeroFilter;
- (id)_samplingRateConvertIfNeeded:(id)arg1;
- (BOOL)_shouldRunZeroFilter;
- (BOOL)_shouldUseRemoteRecordForContext:(id)arg1;
- (id)_voiceControllerWithContext:(id)arg1 error:(id *)arg2;
- (unsigned long long)alertStartTime;
- (float)averagePowerForChannel:(unsigned long long)arg1;
- (void)beepCancellerDidCancelSamples:(id)arg1 buffer:(id)arg2 timestamp:(unsigned long long)arg3;
- (void)dealloc;
- (void)enableVoiceTriggerOnAOP:(BOOL)arg1;
- (double)getRecordBufferDuration;
- (id)initWithContext:(id)arg1 error:(id *)arg2;
- (BOOL)isNarrowBand;
- (BOOL)isRecording;
- (id)metrics;
- (float)peakPowerForChannel:(unsigned long long)arg1;
- (BOOL)playAlertSoundForType:(long long)arg1;
- (BOOL)playRecordStartingAlertAndResetEndpointer;
- (id)playbackRoute;
- (BOOL)prepareRecordWithSettings:(id)arg1 error:(id *)arg2;
- (void)prewarmAudioSession;
- (id)recordRoute;
- (id)recordSettings;
- (void)releaseAudioSession:(unsigned long long)arg1;
- (BOOL)setAlertSoundFromURL:(id)arg1 forType:(long long)arg2;
- (BOOL)setCurrentContext:(id)arg1 error:(id *)arg2;
- (void)setMeteringEnabled:(BOOL)arg1;
- (BOOL)setRecordBufferDuration:(double)arg1;
- (void)setSynchronousCallbackEnabled:(BOOL)arg1;
- (BOOL)startRecording;
- (BOOL)startRecording:(id *)arg1;
- (BOOL)startRecordingWithSettings:(id)arg1 error:(id *)arg2;
- (void)stopRecording;
- (void)updateMeters;
- (void)updateVoiceTriggerAOPModel:(id)arg1;
- (void)voiceControllerBeginRecordInterruption:(id)arg1;
- (void)voiceControllerBeginRecordInterruption:(id)arg1 withContext:(id)arg2;
- (void)voiceControllerDidSetAudioSessionActive:(id)arg1 isActivated:(BOOL)arg2;
- (void)voiceControllerDidStartRecording:(id)arg1 successfully:(BOOL)arg2 error:(id)arg3;
- (void)voiceControllerDidStopRecording:(id)arg1 forReason:(long long)arg2;
- (void)voiceControllerEndRecordInterruption:(id)arg1;
- (void)voiceControllerLPCMRecordBufferAvailable:(id)arg1 buffer:(id)arg2;
- (void)voiceControllerMediaServicesWereLost:(id)arg1;
- (void)voiceControllerMediaServicesWereReset:(id)arg1;
- (void)voiceControllerRecordBufferAvailable:(id)arg1 buffer:(id)arg2;
- (void)voiceControllerRecordHardwareConfigurationDidChange:(id)arg1 toConfiguration:(int)arg2;
- (void)voiceControllerWillSetAudioSessionActive:(id)arg1 willActivate:(BOOL)arg2;
- (id)voiceTriggerInfo;
- (void)voiceTriggerOccuredNotification:(id)arg1;
- (void)willDestroy;

@end

