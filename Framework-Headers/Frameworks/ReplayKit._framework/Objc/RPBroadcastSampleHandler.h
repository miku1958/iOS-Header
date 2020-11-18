//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ReplayKit/RPBroadcastHandler.h>

#import <ReplayKit/RPExtensionContextDelegate-Protocol.h>

@class NSString;
@protocol RPBroadcastDaemonProtocol;

@interface RPBroadcastSampleHandler : RPBroadcastHandler <RPExtensionContextDelegate>
{
    id<RPBroadcastDaemonProtocol> _daemonProxy;
}

@property (strong, nonatomic) id<RPBroadcastDaemonProtocol> daemonProxy; // @synthesize daemonProxy=_daemonProxy;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct AudioBufferList *)_audioBufferListFromData:(id)arg1;
- (void)_processPayload:(id)arg1;
- (void)_processPayloadWithAudioSample:(id)arg1 type:(long long)arg2;
- (void)_processPayloadWithVideoSample:(id)arg1;
- (void)_setupListenerWithEndpoint:(id)arg1;
- (id)audioQueue;
- (void)beginRequestWithExtensionContext:(id)arg1;
- (void)broadcastAnnotatedWithApplicationInfo:(id)arg1;
- (void)broadcastFinished;
- (void)broadcastPaused;
- (void)broadcastResumed;
- (void)broadcastStartedWithSetupInfo:(id)arg1;
- (void)extensionContext:(id)arg1 setEndpoint:(id)arg2;
- (void)finishBroadcastWithError:(id)arg1;
- (id)group;
- (void)processPayload:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)processSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 withType:(long long)arg2;
- (void)updateBroadcastURL:(id)arg1;
- (void)updateServiceInfo:(id)arg1;
- (id)videoQueue;

@end

