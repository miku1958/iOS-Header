//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VoiceMemos/NSObject-Protocol.h>

@class RCCaptureSession;

@protocol RCCaptureSessionObserver <NSObject>
- (void)captureSession:(RCCaptureSession *)arg1 destinationFragmentDurationDidChangeToDuration:(double)arg2;
- (void)captureSession:(RCCaptureSession *)arg1 didFinishWithSuccess:(BOOL)arg2;
- (void)captureSession:(RCCaptureSession *)arg1 rateDidChangeToRate:(float)arg2;
@end
