//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/NSObject-Protocol.h>

@class CAMPanoramaCaptureRequest, CAMStillImageCaptureResult;

@protocol CAMPanoramaCaptureDelegate <NSObject>

@optional
- (void)panoramaRequest:(CAMPanoramaCaptureRequest *)arg1 didCompleteCaptureWithResult:(CAMStillImageCaptureResult *)arg2;
- (void)panoramaRequest:(CAMPanoramaCaptureRequest *)arg1 didReceiveNotification:(long long)arg2;
- (void)panoramaRequestDidStartCapturing:(CAMPanoramaCaptureRequest *)arg1;
- (void)panoramaRequestDidStopCapturing:(CAMPanoramaCaptureRequest *)arg1 interrupted:(BOOL)arg2;
@end

