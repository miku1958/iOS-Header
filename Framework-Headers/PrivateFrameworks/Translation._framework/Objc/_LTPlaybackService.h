//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _LTPlaybackService : NSObject
{
    struct AudioStreamBasicDescription _asbd;
    unsigned int _sessionID;
    struct OpaqueAudioQueue *_audioQueue;
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } _waitForStateChange;
    struct _opaque_pthread_cond_t {
        long long __sig;
        char __opaque[40];
    } _stateChangeCondition;
    long long _state;
}

@property (readonly, nonatomic) long long state; // @synthesize state=_state;

- (void)dealloc;
- (id)enqueue:(id)arg1 packetCount:(long long)arg2 packetDescriptions:(id)arg3;
- (void)flushAndStop;
- (void)handleMediaServerReset;
- (id)initWithAudioSessionID:(unsigned int)arg1 ASBD:(struct AudioStreamBasicDescription)arg2;
- (BOOL)isAudioQueueRunning;
- (void)reset;
- (void)signalQueueRunningStateChanged;
- (id)start;
- (void)stop;
- (void)waitForAudioQueueStop;

@end
