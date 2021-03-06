//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSRunLoop, NSThread;

@interface CLRunLoopSiloThread : NSObject
{
    struct _opaque_pthread_t *_threadId;
    NSRunLoop *_underlyingRunLoop;
    NSThread *_underlyingThread;
    BOOL _shouldCancelThread;
}

@property (readonly, nonatomic) BOOL shouldCancelThread; // @synthesize shouldCancelThread=_shouldCancelThread;
@property (readonly, nonatomic) struct _opaque_pthread_t *threadId; // @synthesize threadId=_threadId;
@property (readonly, nonatomic) NSRunLoop *underlyingRunLoop; // @synthesize underlyingRunLoop=_underlyingRunLoop;
@property (readonly, nonatomic) NSThread *underlyingThread; // @synthesize underlyingThread=_underlyingThread;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithCurrentThread;
- (id)initWithRunLoop:(struct __CFRunLoop *)arg1;

@end

