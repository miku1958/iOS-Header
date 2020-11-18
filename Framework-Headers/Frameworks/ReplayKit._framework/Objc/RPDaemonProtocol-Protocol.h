//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ReplayKit/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, NSURL, NSXPCListenerEndpoint;

@protocol RPDaemonProtocol <NSObject>
- (oneway void)discardRecordingWithHandler:(void (^)(void))arg1;
- (oneway void)getCurrentBroadcastImages:(void (^)(UIImage *, UIImage *))arg1;
- (oneway void)getSystemBroadcastExtensionInfo:(void (^)(NSArray *, NSError *))arg1;
- (oneway void)pauseRecording;
- (oneway void)reportCameraUsage:(int)arg1;
- (oneway void)resumeRecordingWithWindowLayerContextID:(unsigned int)arg1;
- (oneway void)saveVideoToCameraRoll:(NSURL *)arg1 handler:(void (^)(NSError *))arg2;
- (oneway void)setBroadcastURL:(NSString *)arg1;
- (oneway void)setHasUserConsentForCamera:(BOOL)arg1;
- (oneway void)setHasUserConsentForMicrophone:(BOOL)arg1;
- (oneway void)setMicrophoneEnabled:(BOOL)arg1;
- (oneway void)setMicrophoneEnabledPersistent:(BOOL)arg1;
- (oneway void)setupBroadcastWithHostBundleID:(NSString *)arg1 broadcastExtensionBundleID:(NSString *)arg2 broadcastConfigurationData:(NSData *)arg3 userInfo:(NSDictionary *)arg4 handler:(void (^)(NSError *))arg5;
- (oneway void)startRecordingWindowLayerContextIDs:(NSArray *)arg1 windowSize:(struct CGSize)arg2 microphoneEnabled:(BOOL)arg3 cameraEnabled:(BOOL)arg4 broadcast:(BOOL)arg5 systemRecording:(BOOL)arg6 captureEnabled:(BOOL)arg7 listenerEndpoint:(NSXPCListenerEndpoint *)arg8 withHandler:(void (^)(NSError *, BOOL, BOOL))arg9;
- (oneway void)stopRecordingWithHandler:(void (^)(NSURL *, NSError *))arg1;
- (oneway void)stopRecordingWithStartClipDuration:(double)arg1 endClipDuration:(double)arg2 handler:(void (^)(NSURL *, NSError *))arg3;
- (oneway void)synchronousGetCurrentState:(void (^)(NSDictionary *))arg1;
- (oneway void)synchronousIsBroadcastingWithPreferredExtension:(NSString *)arg1 handler:(void (^)(BOOL))arg2;
- (oneway void)updateProcessIDForAudioCaptureWithPID:(int)arg1;
@end

