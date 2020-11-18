//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSpeech/NSObject-Protocol.h>

@class AVVCAudioBuffer, AVVoiceController, NSError;

@protocol AVVoiceControllerPlaybackDelegate <NSObject>
- (void)voiceControllerPlaybackBufferAvailable:(AVVoiceController *)arg1 buffer:(AVVCAudioBuffer *)arg2;

@optional
- (void)voiceControllerBeginPlaybackInterruption:(AVVoiceController *)arg1;
- (void)voiceControllerDecoderErrorDidOccur:(AVVoiceController *)arg1 error:(NSError *)arg2;
- (void)voiceControllerDidStartPlaying:(AVVoiceController *)arg1 successfully:(BOOL)arg2;
- (void)voiceControllerDidStopPlaying:(AVVoiceController *)arg1 forReason:(long long)arg2;
- (void)voiceControllerEndPlaybackInterruption:(AVVoiceController *)arg1;
- (void)voiceControllerPlaybackHardwareConfigurationDidChange:(AVVoiceController *)arg1 toConfiguration:(int)arg2;
@end

