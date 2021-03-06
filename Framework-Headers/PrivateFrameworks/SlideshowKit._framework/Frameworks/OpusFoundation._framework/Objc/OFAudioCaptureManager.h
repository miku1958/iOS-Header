//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <OpusFoundation/OFAudioRecorderDelegate-Protocol.h>

@class AVCaptureDeviceInput, AVCaptureSession, NSURL, OFAudioRecorder;
@protocol OFAudioCaptureManagerDelegate;

@interface OFAudioCaptureManager : NSObject <OFAudioRecorderDelegate>
{
    AVCaptureSession *_session;
    AVCaptureDeviceInput *_audioInput;
    OFAudioRecorder *_recorder;
    NSURL *_outputFileURL;
    id _deviceConnectedObserver;
    id _deviceDisconnectedObserver;
    unsigned long long _backgroundRecordingID;
    BOOL _isCancelled;
    id<OFAudioCaptureManagerDelegate> _delegate;
}

@property (strong, nonatomic) AVCaptureDeviceInput *audioInput; // @synthesize audioInput=_audioInput;
@property (nonatomic) unsigned long long backgroundRecordingID; // @synthesize backgroundRecordingID=_backgroundRecordingID;
@property (nonatomic) id<OFAudioCaptureManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) id deviceConnectedObserver; // @synthesize deviceConnectedObserver=_deviceConnectedObserver;
@property (nonatomic) id deviceDisconnectedObserver; // @synthesize deviceDisconnectedObserver=_deviceDisconnectedObserver;
@property (readonly, nonatomic) BOOL isCancelled; // @synthesize isCancelled=_isCancelled;
@property (copy, nonatomic) NSURL *outputFileURL; // @synthesize outputFileURL=_outputFileURL;
@property (strong, nonatomic) OFAudioRecorder *recorder; // @synthesize recorder=_recorder;
@property (strong, nonatomic) AVCaptureSession *session; // @synthesize session=_session;

- (id)_audioDevice;
- (void)_removeFile:(id)arg1;
- (id)_tempFileURL;
- (void)cancelRecording;
- (void)dealloc;
- (id)initWithOutputFileURL:(id)arg1;
- (BOOL)isRecording;
- (float)meanAudioLevel;
- (unsigned long long)micCount;
- (BOOL)openSession;
- (void)recorder:(id)arg1 recordingDidFinishToOutputFileURL:(id)arg2 error:(id)arg3;
- (void)recorderRecordingDidBegin:(id)arg1;
- (void)startRecording;
- (void)stopRecording;

@end

