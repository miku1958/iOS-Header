//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ReplayKit/NSXPCConnectionDelegate-Protocol.h>
#import <ReplayKit/RPClientProtocol-Protocol.h>
#import <ReplayKit/RPDaemonProtocol-Protocol.h>

@class NSString, NSURL, NSXPCConnection;

@interface RPDaemonProxy : NSObject <NSXPCConnectionDelegate, RPDaemonProtocol, RPClientProtocol>
{
    NSURL *_broadcastURL;
    NSXPCConnection *_connection;
}

@property (strong, nonatomic) NSURL *broadcastURL; // @synthesize broadcastURL=_broadcastURL;
@property (strong, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)daemonProxy;
- (void).cxx_destruct;
- (oneway void)captureHandlerWithAudioSample:(id)arg1 bufferType:(long long)arg2;
- (oneway void)captureHandlerWithSample:(id)arg1 timingData:(id)arg2;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(BOOL)arg3;
- (oneway void)consumeSandboxExtension:(id)arg1 processNewConnection:(BOOL)arg2;
- (oneway void)discardInAppRecordingWithHandler:(CDUnknownBlockType)arg1;
- (oneway void)generateClipWithSeconds:(double)arg1 handler:(CDUnknownBlockType)arg2;
- (oneway void)getSystemBroadcastExtensionInfo:(CDUnknownBlockType)arg1;
- (oneway void)getSystemBroadcastPickerInfo:(CDUnknownBlockType)arg1;
- (id)init;
- (id)issueSandboxExtensionForClientFileWrite:(id)arg1;
- (void)issueSandboxExtensionForMainBundleRead;
- (oneway void)macApplicationDidBecomeActiveWithContextID:(unsigned int)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (oneway void)macApplicationDidResignActive;
- (oneway void)openControlCenterSystemRecordingView;
- (oneway void)pauseInAppBroadcast;
- (oneway void)pauseInAppCapture;
- (oneway void)pauseInAppRecording;
- (oneway void)recordingDidPause;
- (oneway void)recordingDidStopWithError:(id)arg1 movieURL:(id)arg2;
- (oneway void)recordingLockInterrupted:(id)arg1;
- (oneway void)recordingTimerDidUpdate:(id)arg1;
- (oneway void)reportCameraUsage:(long long)arg1;
- (oneway void)resumeInAppBroadcastWithWindowLayerContextID:(unsigned int)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (oneway void)resumeInAppCaptureWithWindowLayerContextID:(unsigned int)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (oneway void)resumeInAppRecordingWithWindowLayerContextID:(unsigned int)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (oneway void)resumeSystemBroadcastWithCompletionHandler:(CDUnknownBlockType)arg1;
- (oneway void)resumeSystemRecordingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (oneway void)saveVideo:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (oneway void)saveVideoToCameraRoll:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (oneway void)setBroadcastPickerPreferredExt:(id)arg1 showsMicButton:(BOOL)arg2;
- (oneway void)setMicrophoneEnabled:(BOOL)arg1;
- (oneway void)setupBroadcastWithHostBundleID:(id)arg1 broadcastExtensionBundleID:(id)arg2 broadcastConfigurationData:(id)arg3 userInfo:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (oneway void)setupSystemBroadcastWithHostBundleID:(id)arg1 broadcastExtensionBundleID:(id)arg2 broadcastConfigurationData:(id)arg3 userInfo:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (oneway void)shouldResumeSessionType:(id)arg1;
- (oneway void)startClipBufferingWithMicrophoneEnabled:(BOOL)arg1 windowSize:(struct CGSize)arg2 withHandler:(CDUnknownBlockType)arg3;
- (oneway void)startInAppBroadcastWithContextID:(id)arg1 windowSize:(struct CGSize)arg2 microphoneEnabled:(BOOL)arg3 cameraEnabled:(BOOL)arg4 listenerEndpoint:(id)arg5 withHandler:(CDUnknownBlockType)arg6;
- (oneway void)startInAppCaptureWithContextID:(id)arg1 windowSize:(struct CGSize)arg2 microphoneEnabled:(BOOL)arg3 cameraEnabled:(BOOL)arg4 withHandler:(CDUnknownBlockType)arg5;
- (oneway void)startInAppRecordingWithContextID:(id)arg1 windowSize:(struct CGSize)arg2 microphoneEnabled:(BOOL)arg3 cameraEnabled:(BOOL)arg4 withHandler:(CDUnknownBlockType)arg5;
- (oneway void)startSystemBroadcastWithContextID:(id)arg1 windowSize:(struct CGSize)arg2 microphoneEnabled:(BOOL)arg3 cameraEnabled:(BOOL)arg4 listenerEndpoint:(id)arg5 withHandler:(CDUnknownBlockType)arg6;
- (oneway void)startSystemRecordingWithContextID:(id)arg1 windowSize:(struct CGSize)arg2 microphoneEnabled:(BOOL)arg3 cameraEnabled:(BOOL)arg4 withHandler:(CDUnknownBlockType)arg5;
- (oneway void)stopAllActiveClients;
- (oneway void)stopClipBufferingWithHandler:(CDUnknownBlockType)arg1;
- (oneway void)stopCurrentActiveSessionWithHandler:(CDUnknownBlockType)arg1;
- (oneway void)stopInAppBroadcastWithHandler:(CDUnknownBlockType)arg1;
- (oneway void)stopInAppCaptureWithHandler:(CDUnknownBlockType)arg1;
- (oneway void)stopInAppRecordingWithHandler:(CDUnknownBlockType)arg1;
- (oneway void)stopInAppRecordingWithUrl:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (oneway void)stopSystemBroadcastWithHandler:(CDUnknownBlockType)arg1;
- (oneway void)stopSystemRecordingWithHandler:(CDUnknownBlockType)arg1;
- (oneway void)stopSystemRecordingWithURLHandler:(CDUnknownBlockType)arg1;
- (oneway void)updateBroadcastServiceInfo:(id)arg1;
- (oneway void)updateBroadcastURL:(id)arg1;
- (oneway void)updateProcessIDForAudioCaptureWithPID:(int)arg1;
- (oneway void)updateScreenRecordingStateWithCurrentState:(id)arg1;

@end

