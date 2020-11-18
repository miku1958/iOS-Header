//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSpeech/NSObject-Protocol.h>

@class AVVCAudioBuffer, CSAudioChunk, CSSpeechManager, NSDictionary, NSError;

@protocol CSSpeechManagerDelegate <NSObject>
- (void)speechManagerDidStartForwarding:(CSSpeechManager *)arg1 successfully:(BOOL)arg2 error:(NSError *)arg3;
- (void)speechManagerDidStopForwarding:(CSSpeechManager *)arg1 forReason:(long long)arg2;
- (void)speechManagerLPCMRecordBufferAvailable:(CSSpeechManager *)arg1 chunk:(CSAudioChunk *)arg2;
- (void)speechManagerRecordBufferAvailable:(CSSpeechManager *)arg1 buffer:(AVVCAudioBuffer *)arg2;

@optional
- (void)speechManagerBeginRecordInterruption:(CSSpeechManager *)arg1;
- (void)speechManagerBeginRecordInterruption:(CSSpeechManager *)arg1 withContext:(NSDictionary *)arg2;
- (void)speechManagerEndRecordInterruption:(CSSpeechManager *)arg1;
- (void)speechManagerRecordHardwareConfigurationDidChange:(CSSpeechManager *)arg1 toConfiguration:(long long)arg2;
- (NSDictionary *)speechManagerRecordingContext;
@end

