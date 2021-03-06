//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSpeech/CSAudioRecorderDelegate-Protocol.h>
#import <CoreSpeech/CSVTUIAudioSession-Protocol.h>

@class CSAudioPowerMeter, CSAudioRecorder, NSString;
@protocol CSVTUIAudioSessionDelegate, OS_dispatch_queue;

@interface CSVTUIAudioSessionRecorder : NSObject <CSAudioRecorderDelegate, CSVTUIAudioSession>
{
    CSAudioRecorder *_audioRecorder;
    NSObject<OS_dispatch_queue> *_queue;
    id<CSVTUIAudioSessionDelegate> _delegate;
    CSAudioPowerMeter *_powerMeter;
    unsigned long long _audioStreamHandleId;
}

@property (nonatomic) unsigned long long audioStreamHandleId; // @synthesize audioStreamHandleId=_audioStreamHandleId;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CSVTUIAudioSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) CSAudioPowerMeter *powerMeter; // @synthesize powerMeter=_powerMeter;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_audioRecorder;
- (void)_handleDidStopWithReason:(long long)arg1;
- (BOOL)_hasCorrectInputAudioRoute;
- (BOOL)_hasCorrectOutputAudioRoute;
- (void)audioRecorderBufferAvailable:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 buffer:(id)arg3;
- (void)audioRecorderBufferAvailable:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 buffer:(id)arg3 remoteVAD:(id)arg4 atTime:(unsigned long long)arg5;
- (void)audioRecorderDidStartRecord:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 successfully:(BOOL)arg3 error:(id)arg4;
- (void)audioRecorderDidStopRecord:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 reason:(long long)arg3;
- (void)audioRecorderDisconnected:(id)arg1;
- (void)audioRecorderRecordHardwareConfigurationDidChange:(id)arg1 toConfiguration:(long long)arg2;
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

@end

