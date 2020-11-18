//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActionKit/AVAudioRecorderDelegate-Protocol.h>

@class AVAudioRecorder, NSString, NSTimer, NSURL;
@protocol WFAudioRecorderDelegate;

@interface WFAudioRecorder : NSObject <AVAudioRecorderDelegate>
{
    BOOL _paused;
    BOOL _hasFinished;
    id<WFAudioRecorderDelegate> _delegate;
    long long _outputFormat;
    double _recordingDuration;
    NSURL *_outputURL;
    AVAudioRecorder *_recorder;
    NSTimer *_updateTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<WFAudioRecorderDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasFinished; // @synthesize hasFinished=_hasFinished;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long outputFormat; // @synthesize outputFormat=_outputFormat;
@property (strong, nonatomic) NSURL *outputURL; // @synthesize outputURL=_outputURL;
@property (nonatomic) BOOL paused; // @synthesize paused=_paused;
@property (strong, nonatomic) AVAudioRecorder *recorder; // @synthesize recorder=_recorder;
@property (readonly, nonatomic, getter=isRecording) BOOL recording;
@property (nonatomic) double recordingDuration; // @synthesize recordingDuration=_recordingDuration;
@property (nonatomic) BOOL runningUpdateTimer;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSTimer *updateTimer; // @synthesize updateTimer=_updateTimer;

- (void).cxx_destruct;
- (void)audioInterruption:(id)arg1;
- (void)audioRecorderDidFinishRecording:(id)arg1 successfully:(BOOL)arg2;
- (void)audioRecorderEncodeErrorDidOccur:(id)arg1 error:(id)arg2;
- (void)countdownFire:(id)arg1;
- (void)finishRecording;
- (id)initWithOutputFormat:(long long)arg1 destinationURL:(id)arg2;
- (void)pauseRecording;
- (void)recordForDuration:(double)arg1;
- (void)resumeRecording;
- (void)startRecording;

@end
