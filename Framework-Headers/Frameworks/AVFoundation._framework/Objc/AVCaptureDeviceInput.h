//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFoundation/AVCaptureInput.h>

@class AVCaptureDevice, AVCaptureDeviceInputInternal;

@interface AVCaptureDeviceInput : AVCaptureInput
{
    AVCaptureDeviceInputInternal *_internal;
}

@property (readonly, nonatomic) AVCaptureDevice *device;

+ (id)deviceInputWithDevice:(id)arg1 error:(id *)arg2;
+ (void)initialize;
- (BOOL)_authorizedToUseDevice:(id)arg1;
- (void)_handleNotification:(id)arg1 payload:(id)arg2;
- (int)_requestCameraRecordPermissionForDevice:(id)arg1;
- (void)_sourceFormatDidChange:(struct opaqueCMFormatDescription *)arg1;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (struct OpaqueCMClock *)clock;
- (void)dealloc;
- (id)description;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (id)init;
- (id)initWithDevice:(id)arg1 error:(id *)arg2;
- (id)notReadyError;
- (id)ports;

@end
