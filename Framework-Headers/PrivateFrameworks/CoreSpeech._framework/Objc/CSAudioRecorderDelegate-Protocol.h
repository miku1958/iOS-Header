//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSpeech/NSObject-Protocol.h>

@class CSAudioChunkForTV, CSAudioRecorder, NSData, NSDictionary, NSError;

@protocol CSAudioRecorderDelegate <NSObject>
- (void)audioRecorderBufferAvailable:(CSAudioRecorder *)arg1 audioStreamHandleId:(unsigned long long)arg2 buffer:(CSAudioChunkForTV *)arg3;
- (void)audioRecorderBufferAvailable:(CSAudioRecorder *)arg1 audioStreamHandleId:(unsigned long long)arg2 buffer:(NSData *)arg3 remoteVAD:(NSData *)arg4 atTime:(unsigned long long)arg5;

@optional
- (void)audioRecorder:(CSAudioRecorder *)arg1 didSetAudioSessionActive:(BOOL)arg2;
- (void)audioRecorder:(CSAudioRecorder *)arg1 willSetAudioSessionActive:(BOOL)arg2;
- (void)audioRecorderBeginRecordInterruption:(CSAudioRecorder *)arg1;
- (void)audioRecorderBeginRecordInterruption:(CSAudioRecorder *)arg1 withContext:(NSDictionary *)arg2;
- (void)audioRecorderBuiltInAudioStreamInvalidated:(CSAudioRecorder *)arg1 error:(NSError *)arg2;
- (void)audioRecorderDidFinishAlertPlayback:(CSAudioRecorder *)arg1 ofType:(long long)arg2 error:(NSError *)arg3;
- (void)audioRecorderDidStartRecord:(CSAudioRecorder *)arg1 audioStreamHandleId:(unsigned long long)arg2 successfully:(BOOL)arg3 error:(NSError *)arg4;
- (void)audioRecorderDidStopRecord:(CSAudioRecorder *)arg1 audioStreamHandleId:(unsigned long long)arg2 reason:(long long)arg3;
- (void)audioRecorderDisconnected:(CSAudioRecorder *)arg1;
- (void)audioRecorderEndRecordInterruption:(CSAudioRecorder *)arg1;
- (void)audioRecorderLostMediaserverd:(CSAudioRecorder *)arg1;
- (void)audioRecorderRecordHardwareConfigurationDidChange:(CSAudioRecorder *)arg1 toConfiguration:(long long)arg2;
- (void)audioRecorderStreamHandleIdInvalidated:(unsigned long long)arg1;
- (void)audioRecorderWillBeDestroyed:(CSAudioRecorder *)arg1;
- (void)voiceTriggerDetectedOnAOP:(NSDictionary *)arg1;
@end

