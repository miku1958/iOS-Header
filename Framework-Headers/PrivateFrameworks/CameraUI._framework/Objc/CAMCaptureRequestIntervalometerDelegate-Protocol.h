//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/NSObject-Protocol.h>

@class CAMCaptureRequest, CAMCaptureRequestIntervalometer;

@protocol CAMCaptureRequestIntervalometerDelegate <NSObject>
- (BOOL)intervalometer:(CAMCaptureRequestIntervalometer *)arg1 didGenerateCaptureRequest:(CAMCaptureRequest *)arg2;

@optional
- (void)intervalometerDidReachMaximumCount:(CAMCaptureRequestIntervalometer *)arg1;
@end
