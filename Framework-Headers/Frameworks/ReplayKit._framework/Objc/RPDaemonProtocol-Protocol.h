//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ReplayKit/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString;

@protocol RPDaemonProtocol <NSObject>
- (oneway void)clientDidBecomeActiveWithBundleID:(NSString *)arg1;
- (oneway void)clientDidResignActiveWithBundleID:(NSString *)arg1;
- (oneway void)discardRecordingWithHandler:(void (^)(void))arg1;
- (oneway void)pauseRecording;
- (oneway void)resumeRecordingWithWindowLayerContextID:(unsigned int)arg1;
- (oneway void)setMicrophoneEnabled:(BOOL)arg1;
- (oneway void)setupBroadcastWithHostBundleID:(NSString *)arg1 broadcastExtensionBundleID:(NSString *)arg2 broadcastConfigurationData:(NSData *)arg3 userInfo:(NSDictionary *)arg4 handler:(void (^)(NSError *))arg5;
- (oneway void)startRecordingWindowLayerContextIDs:(NSArray *)arg1 windowSize:(struct CGSize)arg2 microphoneEnabled:(BOOL)arg3 cameraEnabled:(BOOL)arg4 broadcast:(BOOL)arg5 systemRecording:(BOOL)arg6 withHandler:(void (^)(NSError *, BOOL, BOOL))arg7;
- (oneway void)stopRecordingWithHandler:(void (^)(NSURL *, NSError *))arg1;
- (oneway void)stopRecordingWithStartClipDuration:(double)arg1 endClipDuration:(double)arg2 handler:(void (^)(NSURL *, NSError *))arg3;
- (oneway void)updateProcessIDForAudioCaptureWithPID:(int)arg1;
@end

