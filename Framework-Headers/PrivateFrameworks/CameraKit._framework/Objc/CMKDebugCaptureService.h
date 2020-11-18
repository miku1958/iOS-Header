//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraKit/CMKCaptureService.h>

@interface CMKDebugCaptureService : CMKCaptureService
{
    BOOL _debugLoggingEnabled;
    double __enqueueTime;
}

@property (readonly, nonatomic) double _enqueueTime; // @synthesize _enqueueTime=__enqueueTime;
@property (nonatomic, getter=isDebugLoggingEnabled) BOOL debugLoggingEnabled; // @synthesize debugLoggingEnabled=_debugLoggingEnabled;

- (void)didCaptureStillImageForRequest:(id)arg1;
- (void)receivedStillImageForRequest:(id)arg1;
- (void)requestWasEnqueued:(id)arg1;
- (void)responseWasCompleted:(id)arg1 error:(id)arg2;
- (void)responseWasGenerated:(id)arg1 error:(id)arg2;
- (void)willCaptureStillImageForRequest:(id)arg1;

@end
