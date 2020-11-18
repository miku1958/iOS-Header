//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/VCObject.h>

@class CADisplayLink, NSObject, NSRunLoop;
@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface VCDisplayLink : VCObject
{
    CADisplayLink *_caDisplayLink;
    struct tagVCRealTimeThread *_thread;
    NSRunLoop *_runLoop;
    unsigned long long _state;
    NSObject<OS_dispatch_semaphore> *_waitToRunSemaphore;
}

- (BOOL)activate;
- (void)deactivate;
- (void)dealloc;
- (BOOL)ensureDisplayIsReady;
- (void)handleWaitToRunTimeout;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 threadPriority:(unsigned int)arg3 threadOptions:(unsigned int)arg4 threadIdentifier:(id)arg5;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)runDisplayLinkThreadWithStopRequested:(BOOL *)arg1;

@end
