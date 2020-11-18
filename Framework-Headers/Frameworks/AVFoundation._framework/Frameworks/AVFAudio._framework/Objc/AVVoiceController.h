//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVAudioFormat, NSDictionary, NSString;
@protocol AVVoiceControllerPlaybackDelegate, AVVoiceControllerRecordDelegate, Endpointer;

@interface AVVoiceController : NSObject
{
    void *_impl;
    unsigned long long _alertStartTime;
}

@property (readonly) unsigned long long alertStartTime; // @synthesize alertStartTime=_alertStartTime;
@property float alertVolume;
@property (getter=isBargeInDetectEnabled) BOOL bargeInDetectEnabled;
@property (strong) id<Endpointer> endpointerDelegate;
@property (readonly) unsigned long long lastRecordStartTime;
@property (getter=isMeteringEnabled) BOOL meteringEnabled;
@property (readonly) AVAudioFormat *pcmRecordBufferFormat;
@property id<AVVoiceControllerPlaybackDelegate> playbackDelegate; // @dynamic playbackDelegate;
@property (readonly, copy) NSString *playbackRoute;
@property (readonly) NSDictionary *playbackSettings;
@property float playbackVolume;
@property (readonly, getter=isPlaying) BOOL playing;
@property id<AVVoiceControllerRecordDelegate> recordDelegate; // @dynamic recordDelegate;
@property double recordEndWaitTime;
@property int recordEndpointMode;
@property double recordInterspeechWaitTime;
@property (readonly, copy) NSString *recordRoute;
@property (readonly) NSDictionary *recordSettings;
@property double recordStartWaitTime;
@property (readonly, getter=isRecording) BOOL recording;
@property (getter=isStopOnBargeInEnabled) BOOL stopOnBargeInEnabled;
@property (getter=isStopOnEndpointEnabled) BOOL stopOnEndpointEnabled;
@property (getter=isSynchronousCallbackEnabled) BOOL synchronousCallbackEnabled;
@property (readonly) NSDictionary *voiceTriggerInfo;

- (float)averagePowerForChannel:(unsigned long long)arg1;
- (void)beganPlaying;
- (void)beganRecording;
- (void)beginPlaybackInterruption;
- (void)beginRecordInterruption;
- (void)beginRecordInterruptionWithContext:(id)arg1;
- (void)dealloc;
- (void)decodeError;
- (int)doStartRecordingAtTime:(unsigned long long)arg1 behavior:(id)arg2;
- (void)encodeError;
- (void)endPlaybackInterruption;
- (void)endRecordInterruption;
- (void)endpointDetected;
- (void)finalize;
- (void)finishedPlaying;
- (void)finishedRecording;
- (unsigned long long)getAlertStartTime;
- (double)getPlaybackBufferDuration;
- (double)getRecordBufferDuration;
- (void)handleInterruption:(id)arg1;
- (void)handleMediaServerDeath:(id)arg1;
- (void)handleMediaServerReset:(id)arg1;
- (void)handleRouteChange:(id)arg1;
- (void)hardwareConfigChanged;
- (struct ControllerImpl *)impl;
- (id)initWithContext:(id)arg1 error:(id *)arg2;
- (void)interspeechPointDetected;
- (void)lpcmRecordBufferReceived:(struct AudioQueueBuffer *)arg1 atTime:(unsigned long long)arg2;
- (float)peakPowerForChannel:(unsigned long long)arg1;
- (BOOL)playAlertSoundForType:(int)arg1;
- (BOOL)playRecordStartingAlertAndResetEndpointer;
- (void)playbackBufferReceived:(struct MyAudioQueueBuffer *)arg1;
- (BOOL)preparePlaybackFromURL:(id)arg1 error:(id *)arg2;
- (BOOL)preparePlaybackWithSettings:(id)arg1 error:(id *)arg2;
- (BOOL)prepareRecordWithSettings:(id)arg1 error:(id *)arg2;
- (void)prewarmAudioSession;
- (void)recordBufferReceived:(struct MyAudioQueueBuffer *)arg1 atTime:(unsigned long long)arg2;
- (void)releaseAudioSession;
- (void)releaseAudioSession:(unsigned long long)arg1;
- (void)removeSessionNotifications;
- (void)resetEndpointer;
- (BOOL)setAlertSoundFromURL:(id)arg1 forType:(int)arg2;
- (BOOL)setCurrentContext:(id)arg1 error:(id *)arg2;
- (BOOL)setPlaybackBufferDuration:(double)arg1;
- (BOOL)setRecordBufferDuration:(double)arg1;
- (void)setSessionNotifications;
- (BOOL)startPlaying;
- (BOOL)startRecording;
- (BOOL)startRecording:(id *)arg1;
- (BOOL)startRecordingAtTime:(unsigned long long)arg1 error:(id *)arg2;
- (BOOL)startRecordingWithSettings:(id)arg1 error:(id *)arg2;
- (void)startpointDetected;
- (void)stopPlaying;
- (void)stopRecording;
- (void)updateMeters;
- (BOOL)willAcceptContext:(id)arg1;

@end

