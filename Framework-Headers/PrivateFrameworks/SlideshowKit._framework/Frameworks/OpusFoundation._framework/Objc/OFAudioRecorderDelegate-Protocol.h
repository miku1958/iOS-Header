//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSError, NSURL, OFAudioRecorder;

@protocol OFAudioRecorderDelegate
- (void)recorder:(OFAudioRecorder *)arg1 recordingDidFinishToOutputFileURL:(NSURL *)arg2 error:(NSError *)arg3;
- (void)recorderRecordingDidBegin:(OFAudioRecorder *)arg1;
@end

