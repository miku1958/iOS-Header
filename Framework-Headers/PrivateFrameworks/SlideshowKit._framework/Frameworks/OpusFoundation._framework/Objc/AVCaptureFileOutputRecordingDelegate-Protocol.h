//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OpusFoundation/NSObject-Protocol.h>

@class AVCaptureFileOutput, NSArray, NSError, NSURL;

@protocol AVCaptureFileOutputRecordingDelegate <NSObject>
- (void)captureOutput:(AVCaptureFileOutput *)arg1 didFinishRecordingToOutputFileAtURL:(NSURL *)arg2 fromConnections:(NSArray *)arg3 error:(NSError *)arg4;

@optional
- (void)captureOutput:(AVCaptureFileOutput *)arg1 didStartRecordingToOutputFileAtURL:(NSURL *)arg2 fromConnections:(NSArray *)arg3;
@end
