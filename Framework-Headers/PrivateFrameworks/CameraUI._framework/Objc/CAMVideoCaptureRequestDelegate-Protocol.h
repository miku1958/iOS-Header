//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/NSObject-Protocol.h>

@class CAMVideoCaptureRequest, CAMVideoCaptureResponse, CAMVideoPersistenceResponse, NSError;

@protocol CAMVideoCaptureRequestDelegate <NSObject>

@optional
- (void)videoRequestDidCompleteCapture:(CAMVideoCaptureRequest *)arg1 withResponse:(CAMVideoCaptureResponse *)arg2 error:(NSError *)arg3;
- (void)videoRequestDidCompleteLocalPersistence:(CAMVideoCaptureRequest *)arg1 withResponse:(CAMVideoPersistenceResponse *)arg2 error:(NSError *)arg3;
- (void)videoRequestDidCompleteRemotePersistence:(CAMVideoCaptureRequest *)arg1 withResponse:(CAMVideoPersistenceResponse *)arg2 error:(NSError *)arg3;
- (void)videoRequestDidStartCapturing:(CAMVideoCaptureRequest *)arg1;
- (void)videoRequestDidStopCapturing:(CAMVideoCaptureRequest *)arg1;
@end
