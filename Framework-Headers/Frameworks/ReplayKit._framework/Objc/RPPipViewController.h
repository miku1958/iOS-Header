//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class AVCaptureDevice, AVCaptureDeviceInput, AVCaptureSession;

@interface RPPipViewController : UIViewController
{
    long long _cameraPosition;
    AVCaptureSession *_pipSession;
    AVCaptureDevice *_videoDevice;
    AVCaptureDeviceInput *_videoInput;
    long long _initialOrientation;
    long long _previousOrientation;
    double _previousOrientationWidth;
    double _previousOrientationHeight;
}

@property (nonatomic) long long cameraPosition; // @synthesize cameraPosition=_cameraPosition;
@property (nonatomic) long long initialOrientation; // @synthesize initialOrientation=_initialOrientation;
@property (strong, nonatomic) AVCaptureSession *pipSession; // @synthesize pipSession=_pipSession;
@property (nonatomic) long long previousOrientation; // @synthesize previousOrientation=_previousOrientation;
@property (nonatomic) double previousOrientationHeight; // @synthesize previousOrientationHeight=_previousOrientationHeight;
@property (nonatomic) double previousOrientationWidth; // @synthesize previousOrientationWidth=_previousOrientationWidth;
@property (strong, nonatomic) AVCaptureDevice *videoDevice; // @synthesize videoDevice=_videoDevice;
@property (strong, nonatomic) AVCaptureDeviceInput *videoInput; // @synthesize videoInput=_videoInput;

- (void).cxx_destruct;
- (long long)_captureVideoOrientationForUIDeviceOrientation:(long long)arg1;
- (void)_deviceOrientationDidChange;
- (id)_pipView;
- (void)_updateViewGeometry;
- (id)cameraWithPosition:(long long)arg1;
- (id)initWithOrientation:(long long)arg1 position:(long long)arg2;
- (void)loadView;
- (void)setUpPipSession;
- (void)startPipSession;
- (void)stopPipSession;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end

