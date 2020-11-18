//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVHapticPlayer, NSTimer;
@protocol OS_dispatch_queue;

@interface HPHapticEngine : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    AVHapticPlayer *_player;
    NSTimer *_timer;
    double _runTimeout;
    struct bitset<20> _channelSet;
    BOOL _running;
}

@property (readonly) double currentTime;
@property (readonly) AVHapticPlayer *player; // @synthesize player=_player;
@property BOOL running; // @synthesize running=_running;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)cancelIdleTimer;
- (id)createPlayerWithPattern:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (void)dispatchOnLocal:(CDUnknownBlockType)arg1;
- (void)dispatchOnMain:(CDUnknownBlockType)arg1;
- (id)getAvailableChannel;
- (id)init;
- (id)initAndReturnError:(id *)arg1;
- (void)releaseChannel:(id)arg1;
- (void)startIdleTimerWithHandler:(CDUnknownBlockType)arg1;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1 timeoutHandler:(CDUnknownBlockType)arg2;
- (void)stop;

@end

