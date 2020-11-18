//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSLock, NSMutableArray;

@interface SCROBrailleEventDispatcher : NSObject
{
    NSLock *_queueLock;
    struct __CFRunLoop *_runLoop;
    struct __CFRunLoopSource *_queueSource;
    NSMutableArray *_queue;
    NSMutableArray *_brailleEventQueue;
    id _target;
    BOOL _isValid;
}

- (void).cxx_destruct;
- (void)_processQueue;
- (void)dealloc;
- (void)enqueueEvent:(id)arg1;
- (id)initWithTarget:(id)arg1;
- (void)invalidate;
- (BOOL)isValid;
- (void)start;

@end

