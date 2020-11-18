//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSpeech/NSObject-Protocol.h>

@class CSAudioFileReader, NSData, NSError;

@protocol CSAudioFileReaderDelegate <NSObject>
- (void)audioFileReaderBufferAvailable:(CSAudioFileReader *)arg1 buffer:(NSData *)arg2 atTime:(unsigned long long)arg3;
- (void)audioFileReaderDidStartRecording:(CSAudioFileReader *)arg1 successfully:(BOOL)arg2 error:(NSError *)arg3;
- (void)audioFileReaderDidStopRecording:(CSAudioFileReader *)arg1 forReason:(long long)arg2;
@end
