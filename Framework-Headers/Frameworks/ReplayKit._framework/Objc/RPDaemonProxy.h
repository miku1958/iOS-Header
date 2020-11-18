//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ReplayKit/NSXPCConnectionDelegate-Protocol.h>
#import <ReplayKit/RPClientProtocol-Protocol.h>
#import <ReplayKit/RPDaemonProtocol-Protocol.h>

@class NSString, NSXPCConnection;

@interface RPDaemonProxy : NSObject <NSXPCConnectionDelegate, RPDaemonProtocol, RPClientProtocol>
{
    NSXPCConnection *_connection;
}

@property (strong, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)daemonProxy;
- (void).cxx_destruct;
- (oneway void)clientDidBecomeActiveWithBundleID:(id)arg1;
- (oneway void)clientDidResignActiveWithBundleID:(id)arg1;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(BOOL)arg3;
- (oneway void)discardRecordingWithHandler:(CDUnknownBlockType)arg1;
- (id)init;
- (oneway void)pauseRecording;
- (oneway void)resumeRecordingWithWindowLayerContextID:(unsigned int)arg1;
- (oneway void)setMicrophoneEnabled:(BOOL)arg1;
- (oneway void)setupBroadcastWithHostBundleID:(id)arg1 broadcastExtensionBundleID:(id)arg2 broadcastConfigurationData:(id)arg3 userInfo:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (oneway void)startRecordingWindowLayerContextIDs:(id)arg1 windowSize:(struct CGSize)arg2 microphoneEnabled:(BOOL)arg3 cameraEnabled:(BOOL)arg4 broadcast:(BOOL)arg5 systemRecording:(BOOL)arg6 withHandler:(CDUnknownBlockType)arg7;
- (oneway void)stopRecordingWithError:(id)arg1 movieURL:(id)arg2;
- (oneway void)stopRecordingWithHandler:(CDUnknownBlockType)arg1;
- (oneway void)stopRecordingWithStartClipDuration:(double)arg1 endClipDuration:(double)arg2 handler:(CDUnknownBlockType)arg3;
- (oneway void)updateBroadcastServiceInfo:(id)arg1;

@end
