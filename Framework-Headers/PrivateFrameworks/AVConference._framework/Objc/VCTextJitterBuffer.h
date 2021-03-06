//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface VCTextJitterBuffer : NSObject
{
    struct tagVCTextJitterBufferConfiguration _configuration;
    BOOL _resetRequested;
    id _delegate;
    struct JitterPreloadQueue_t *_preloadQueue;
    struct JitterQueue_t *_jitterQueue;
    NSObject<OS_dispatch_source> *_heartbeat;
    unsigned int _lastSequenceNumber;
    BOOL _firstFrameReceived;
}

- (struct tagAudioFrame *)allocTextFrame;
- (struct tagAudioPacket *)allocTextPacket;
- (void)dealloc;
- (id)delegate;
- (void)enqueuePacket:(struct tagAudioPacket *)arg1;
- (void)heartbeat;
- (id)initWithConfiguration:(struct tagVCTextJitterBufferConfiguration *)arg1;
- (void)jitterQueuePushPacket:(struct tagAudioPacket *)arg1;
- (void)releaseTextFrame:(struct tagAudioFrame *)arg1;
- (void)releaseTextPacket:(struct tagAudioPacket *)arg1;
- (void)setDelegate:(id)arg1;
- (BOOL)start;
- (BOOL)startHeartbeat;
- (void)stop;
- (void)stopHeartbeat;

@end

