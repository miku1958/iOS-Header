//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSpeech/AVVoiceControllerPlaybackDelegate-Protocol.h>
#import <CoreSpeech/AVVoiceControllerRecordDelegate-Protocol.h>
#import <CoreSpeech/CSVTUIAudioSession-Protocol.h>

@class AVVoiceController, NSString;
@protocol CSVTUIAudioSessionDelegate, OS_dispatch_queue;

@interface CSVTUIAudioSessionAVVC : NSObject <CSVTUIAudioSession, AVVoiceControllerRecordDelegate, AVVoiceControllerPlaybackDelegate>
{
    AVVoiceController *_voiceController;
    NSObject<OS_dispatch_queue> *_queue;
    id<CSVTUIAudioSessionDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CSVTUIAudioSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_hasCorrectInputAudioRoute;
- (BOOL)_hasCorrectOutputAudioRoute;
- (BOOL)_hasInputAudioRoute;
- (unsigned long long)audioSource;
- (float)averagePower;
- (long long)convertStopReason:(long long)arg1;
- (BOOL)hasAudioRoute;
- (BOOL)hasCorrectAudioRoute;
- (id)init;
- (BOOL)isRecording;
- (BOOL)prepareRecord;
- (void)releaseAudioSession;
- (void)resetEndPointer;
- (void)setEndpointerDelegate:(id)arg1;
- (BOOL)startRecording;
- (void)stopRecording;
- (void)updateMeters;
- (id)voiceController;
- (void)voiceControllerDidStartRecording:(id)arg1 successfully:(BOOL)arg2 error:(id)arg3;
- (void)voiceControllerDidStopRecording:(id)arg1 forReason:(long long)arg2;
- (void)voiceControllerEncoderErrorDidOccur:(id)arg1 error:(id)arg2;
- (void)voiceControllerLPCMRecordBufferAvailable:(id)arg1 buffer:(id)arg2;
- (void)voiceControllerPlaybackBufferAvailable:(id)arg1 buffer:(id)arg2;
- (void)voiceControllerPlaybackHardwareConfigurationDidChange:(id)arg1 toConfiguration:(int)arg2;
- (void)voiceControllerRecordBufferAvailable:(id)arg1 buffer:(id)arg2;
- (void)voiceControllerRecordHardwareConfigurationDidChange:(id)arg1 toConfiguration:(int)arg2;

@end
