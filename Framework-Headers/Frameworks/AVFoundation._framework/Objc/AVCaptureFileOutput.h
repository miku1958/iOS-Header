//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFoundation/AVCaptureOutput.h>

@class AVCaptureFileOutputInternal, NSURL;
@protocol AVCaptureFileOutputDelegate;

@interface AVCaptureFileOutput : AVCaptureOutput
{
    AVCaptureFileOutputInternal *_fileOutputInternal;
    id<AVCaptureFileOutputDelegate> _delegate;
}

@property (nonatomic) id<AVCaptureFileOutputDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) CDStruct_1b6d18a9 maxRecordedDuration;
@property (nonatomic) long long maxRecordedFileSize;
@property (nonatomic) long long minFreeDiskSpaceLimit;
@property (readonly, nonatomic) NSURL *outputFileURL;
@property (readonly, nonatomic) CDStruct_1b6d18a9 recordedDuration;
@property (readonly, nonatomic) long long recordedFileSize;
@property (readonly, nonatomic, getter=isRecording) BOOL recording;
@property (readonly, nonatomic, getter=isRecordingPaused) BOOL recordingPaused;

+ (void)initialize;
- (void)dealloc;
- (id)initSubclass;
- (void)pauseRecording;
- (BOOL)pausesRecordingOnInterruption;
- (void)resumeRecording;
- (void)setPausesRecordingOnInterruption:(BOOL)arg1;
- (void)startRecordingToOutputFileURL:(id)arg1 recordingDelegate:(id)arg2;
- (void)stopRecording;

@end

