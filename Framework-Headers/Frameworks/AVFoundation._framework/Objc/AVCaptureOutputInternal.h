//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVCaptureSession, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface AVCaptureOutputInternal : NSObject
{
    NSObject<OS_dispatch_queue> *figCaptureSessionSyncQueue;
    struct OpaqueFigCaptureSession *figCaptureSession;
    AVCaptureSession *session;
    NSString *sinkID;
    NSMutableArray *connections;
    int changeSeed;
    struct CGAffineTransform metadataTransform;
    double rollAdjustment;
    BOOL physicallyMirrorsVideo;
}

- (void)dealloc;
- (id)init;

@end
