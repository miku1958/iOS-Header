//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ARKit/ARSensor-Protocol.h>
#import <ARKit/AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h>

@class ARImageSensorSettings, AVCaptureAudioDataOutput, AVCaptureDevice, AVCaptureSession, AVCaptureVideoDataOutput, NSString;
@protocol ARSensorDelegate, AVCaptureVideoDataOutputSampleBufferDelegate, OS_dispatch_queue;

@interface ARImageSensor : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate, ARSensor>
{
    BOOL _previouslyRunning;
    id<AVCaptureVideoDataOutputSampleBufferDelegate> _previousOutputDelegate;
    NSObject<OS_dispatch_queue> *_previousOutputCallbackQueue;
    NSObject<OS_dispatch_queue> *_captureQueue;
    BOOL _running;
    BOOL _interrupted;
    float _defaultLensPosition;
    id<ARSensorDelegate> _delegate;
    ARImageSensorSettings *_settings;
    AVCaptureDevice *_captureDevice;
    AVCaptureSession *_captureSession;
    AVCaptureVideoDataOutput *_videoOutput;
    unsigned long long _powerUsage;
    long long _captureFramesPerSecond;
    long long _renderFramesPerSecond;
}

@property (strong, nonatomic) AVCaptureAudioDataOutput *audioOutput;
@property (readonly, nonatomic) AVCaptureDevice *captureDevice; // @synthesize captureDevice=_captureDevice;
@property (readonly) long long captureFramesPerSecond;
@property long long captureFramesPerSecond; // @synthesize captureFramesPerSecond=_captureFramesPerSecond;
@property (readonly, nonatomic) AVCaptureSession *captureSession; // @synthesize captureSession=_captureSession;
@property (readonly, copy) NSString *debugDescription;
@property float defaultLensPosition; // @synthesize defaultLensPosition=_defaultLensPosition;
@property (weak, nonatomic) id<ARSensorDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property BOOL interrupted; // @synthesize interrupted=_interrupted;
@property (nonatomic) unsigned long long powerUsage; // @synthesize powerUsage=_powerUsage;
@property (readonly) long long renderFramesPerSecond;
@property long long renderFramesPerSecond; // @synthesize renderFramesPerSecond=_renderFramesPerSecond;
@property BOOL running; // @synthesize running=_running;
@property (readonly, nonatomic) ARImageSensorSettings *settings; // @synthesize settings=_settings;
@property (readonly) Class superclass;
@property (readonly, nonatomic) AVCaptureVideoDataOutput *videoOutput; // @synthesize videoOutput=_videoOutput;

+ (double)closestFrameRateIn:(id)arg1 target:(double)arg2 preferHigher:(BOOL)arg3;
+ (float)defaultLensPosition;
- (void).cxx_destruct;
- (void)_adjustForPowerUsage;
- (void)_configureCameraExposureForDevice:(id)arg1;
- (void)_configureCameraFocusForDevice:(id)arg1;
- (void)_configureCameraWhiteBalanceForDevice:(id)arg1;
- (id)_createAudioInput:(id *)arg1;
- (BOOL)_validateCameraAuthorization;
- (BOOL)canReconfigure:(id)arg1;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)captureSessionStateChanged:(id)arg1;
- (id)configureCaptureDevice;
- (id)configureCaptureSession;
- (void)dealloc;
- (void)enableAutoFocusForDevice:(id)arg1;
- (id)init;
- (id)initWithSettings:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (double)preferredCaptureFrameRateForPowerUsage:(unsigned long long)arg1 devicePosition:(long long)arg2;
- (long long)preferredRenderFrameRateForPowerUsage:(unsigned long long)arg1 devicePosition:(long long)arg2;
- (unsigned long long)providedDataTypes;
- (void)reconfigure:(id)arg1;
- (void)start;
- (void)stop;

@end
