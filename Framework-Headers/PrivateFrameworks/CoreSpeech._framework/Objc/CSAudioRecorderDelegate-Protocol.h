//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSpeech/NSObject-Protocol.h>

@class AVVCAudioBuffer, CSAudioRecorder, NSData, NSDictionary, NSError;

@protocol CSAudioRecorderDelegate <NSObject>
- (void)audioRecorderBufferAvailable:(CSAudioRecorder *)arg1 buffer:(AVVCAudioBuffer *)arg2;
- (void)audioRecorderBufferAvailable:(CSAudioRecorder *)arg1 buffer:(NSData *)arg2 atTime:(unsigned long long)arg3;

@optional
- (void)audioRecorder:(CSAudioRecorder *)arg1 didSetAudioSessionActive:(BOOL)arg2;
- (void)audioRecorder:(CSAudioRecorder *)arg1 willSetAudioSessionActive:(BOOL)arg2;
- (void)audioRecorderBeginRecordInterruption:(CSAudioRecorder *)arg1;
- (void)audioRecorderBeginRecordInterruption:(CSAudioRecorder *)arg1 withContext:(NSDictionary *)arg2;
- (void)audioRecorderDidStartRecording:(CSAudioRecorder *)arg1 successfully:(BOOL)arg2 error:(NSError *)arg3;
- (void)audioRecorderDidStopRecording:(CSAudioRecorder *)arg1 forReason:(long long)arg2;
- (void)audioRecorderDisconnected:(CSAudioRecorder *)arg1;
- (void)audioRecorderEndRecordInterruption:(CSAudioRecorder *)arg1;
- (void)audioRecorderLostMediaserverd:(CSAudioRecorder *)arg1;
- (void)audioRecorderRecordHardwareConfigurationDidChange:(CSAudioRecorder *)arg1 toConfiguration:(long long)arg2;
- (void)voiceTriggerDetectedOnAOP:(NSDictionary *)arg1;
@end
