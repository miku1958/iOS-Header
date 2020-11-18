//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSThread.h>

@class NSConditionLock, NSRunLoop;

@interface _SYStreamerThread : NSThread
{
    NSRunLoop *_threadRunLoop;
    struct __CFRunLoopSource *_stopRLS;
    NSConditionLock *_startupLock;
}

@property (readonly, nonatomic) NSRunLoop *runLoop;

+ (id)streamerThread;
- (void).cxx_destruct;
- (void)_waitForStartup;
- (id)init;
- (void)main;

@end

