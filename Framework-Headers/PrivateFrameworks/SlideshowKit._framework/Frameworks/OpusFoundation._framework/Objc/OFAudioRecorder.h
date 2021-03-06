//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <OpusFoundation/AVCaptureFileOutputRecordingDelegate-Protocol.h>

@class AVCaptureMovieFileOutput, AVCaptureSession, NSString, NSURL;
@protocol OFAudioRecorderDelegate;

@interface OFAudioRecorder : NSObject <AVCaptureFileOutputRecordingDelegate>
{
    AVCaptureSession *_session;
    AVCaptureMovieFileOutput *_movieFileOutput;
    NSURL *_outputFileURL;
    NSObject<OFAudioRecorderDelegate> *_delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<OFAudioRecorderDelegate> *delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) AVCaptureMovieFileOutput *movieFileOutput; // @synthesize movieFileOutput=_movieFileOutput;
@property (copy, nonatomic) NSURL *outputFileURL; // @synthesize outputFileURL=_outputFileURL;
@property (readonly, nonatomic, getter=isRecording) BOOL recording;
@property (readonly, nonatomic) BOOL recordsAudio;
@property (strong, nonatomic) AVCaptureSession *session; // @synthesize session=_session;
@property (readonly) Class superclass;

- (id)_connectionWithMediaType:(id)arg1;
- (void)captureOutput:(id)arg1 didFinishRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 error:(id)arg4;
- (void)captureOutput:(id)arg1 didStartRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3;
- (void)dealloc;
- (id)initWithSession:(id)arg1 outputFileURL:(id)arg2;
- (void)startRecording;
- (void)stopRecording;

@end

