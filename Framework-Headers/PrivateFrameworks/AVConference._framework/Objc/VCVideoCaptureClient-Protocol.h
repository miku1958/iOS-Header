//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString, VCVideoRule;

@protocol VCVideoCaptureClient
- (void)avConferencePreviewError:(NSString *)arg1;
- (VCVideoRule *)clientCaptureRule;
- (BOOL)onCaptureFrame:(struct opaqueCMSampleBuffer *)arg1 frameTime:(CDStruct_1b6d18a9)arg2 droppedFrames:(int)arg3 cameraStatusBits:(unsigned char)arg4;
- (void)thermalLevelDidChange:(int)arg1;

@optional
- (void)avConferenceScreenCaptureError:(NSString *)arg1;
@end

