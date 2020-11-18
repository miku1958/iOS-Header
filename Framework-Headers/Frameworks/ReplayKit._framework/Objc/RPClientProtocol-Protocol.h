//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ReplayKit/NSObject-Protocol.h>

@class NSData, NSDictionary, NSError, NSString, NSURL, RPIOSurfaceObject;

@protocol RPClientProtocol <NSObject>
- (oneway void)captureHandlerWithAudioSample:(NSData *)arg1 absdData:(NSData *)arg2 itemCount:(long long)arg3 bufferType:(long long)arg4 timingData:(NSData *)arg5;
- (oneway void)captureHandlerWithSample:(RPIOSurfaceObject *)arg1 timingData:(NSData *)arg2;
- (oneway void)recordingDidPause;
- (oneway void)recordingDidStopWithError:(NSError *)arg1 movieURL:(NSURL *)arg2;
- (oneway void)recordingLockInterrupted:(NSError *)arg1;
- (oneway void)recordingShouldResume;
- (oneway void)recordingTimerDidUpdate:(NSString *)arg1;
- (oneway void)updateBroadcastServiceInfo:(NSDictionary *)arg1;
- (oneway void)updateBroadcastURL:(NSURL *)arg1;
- (oneway void)updateScreenRecordingState;
@end

