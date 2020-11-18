//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFAction.h>

#import <ActionKit/AVCapturePhotoCaptureDelegate-Protocol.h>

@class AVCaptureSession, NSString;

@interface WFTakePhotoAction : WFAction <AVCapturePhotoCaptureDelegate>
{
    unsigned long long _remainingPhotos;
    AVCaptureSession *_session;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long remainingPhotos; // @synthesize remainingPhotos=_remainingPhotos;
@property (strong, nonatomic) AVCaptureSession *session; // @synthesize session=_session;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)captureOutput:(id)arg1 didFinishProcessingPhoto:(id)arg2 error:(id)arg3;
- (void)takePhoto;

@end
