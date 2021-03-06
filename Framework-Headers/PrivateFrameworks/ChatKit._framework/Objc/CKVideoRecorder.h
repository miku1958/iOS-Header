//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ChatKit/AVCaptureFileOutputRecordingDelegate-Protocol.h>

@class AVCaptureDevice, AVCaptureDeviceInput, AVCaptureMovieFileOutput, AVCaptureSession, AVCaptureStillImageOutput, AVCaptureVideoPreviewLayer, NSObject, NSString, NSURL;
@protocol CKVideoRecorderDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CKVideoRecorder : UIViewController <AVCaptureFileOutputRecordingDelegate>
{
    long long _currentDevice;
    BOOL _previousStatusBarHidden;
    AVCaptureDevice *_frontFacingCamera;
    AVCaptureDevice *_rearFacingCamera;
    NSObject<OS_dispatch_queue> *_avCaptureSessionDispatchQueue;
    BOOL _canceled;
    AVCaptureVideoPreviewLayer *_captureVideoPreviewLayer;
    id<CKVideoRecorderDelegate> _delegate;
    NSURL *_outputFileURL;
    AVCaptureSession *_session;
    AVCaptureDeviceInput *_rearVideoInput;
    AVCaptureDeviceInput *_frontVideoInput;
    AVCaptureDeviceInput *_audioInput;
    AVCaptureMovieFileOutput *_videoOutput;
    AVCaptureStillImageOutput *_stillImageOutput;
}

@property (strong, nonatomic) AVCaptureDeviceInput *audioInput; // @synthesize audioInput=_audioInput;
@property (nonatomic) long long cameraDevice;
@property (nonatomic) BOOL canceled; // @synthesize canceled=_canceled;
@property (strong, nonatomic) AVCaptureVideoPreviewLayer *captureVideoPreviewLayer; // @synthesize captureVideoPreviewLayer=_captureVideoPreviewLayer;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CKVideoRecorderDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) AVCaptureDeviceInput *frontVideoInput; // @synthesize frontVideoInput=_frontVideoInput;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSURL *outputFileURL; // @synthesize outputFileURL=_outputFileURL;
@property (strong, nonatomic) AVCaptureDeviceInput *rearVideoInput; // @synthesize rearVideoInput=_rearVideoInput;
@property (strong, nonatomic) AVCaptureSession *session; // @synthesize session=_session;
@property (strong, nonatomic) AVCaptureStillImageOutput *stillImageOutput; // @synthesize stillImageOutput=_stillImageOutput;
@property (readonly) Class superclass;
@property (strong, nonatomic) AVCaptureMovieFileOutput *videoOutput; // @synthesize videoOutput=_videoOutput;

- (void).cxx_destruct;
- (id)_cameraWithPosition:(long long)arg1;
- (id)_configureFrontVideoInput;
- (id)_configureRearVideoInput;
- (id)audioDevice;
- (void)cancel;
- (void)captureOutput:(id)arg1 didFinishRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 error:(id)arg4;
- (void)captureOutput:(id)arg1 didStartRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3;
- (void)dealloc;
- (id)frontFacingCamera;
- (id)init;
- (void)loadView;
- (id)rearFacingCamera;
- (void)setupCamera:(id)arg1;
- (BOOL)startVideoCapture;
- (void)stopVideoCapture;
- (void)takePicture;
- (void)viewWillAppear:(BOOL)arg1;

@end

