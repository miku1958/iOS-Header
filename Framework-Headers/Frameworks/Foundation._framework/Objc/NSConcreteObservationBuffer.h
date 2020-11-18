//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObservationBuffer.h>

@class NSMutableArray, NSObject, NSOperationQueue;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface NSConcreteObservationBuffer : NSObservationBuffer
{
    NSObject<OS_dispatch_queue> *_inputQueue;
    NSOperationQueue *_outputQueue;
    long long _policy;
    int _state;
    struct _opaque_pthread_mutex_t _lock;
    NSMutableArray *_dequeue;
    unsigned long long _maxCount;
    CDUnknownBlockType _bufferFullHandler;
    BOOL _memoryPressureSensitive;
    BOOL _automaticallyEmitsObjects;
}

- (void)_alreadyOnQueueEmitAllObjects;
- (void)_alreadyOnQueueEmitObject;
- (void)_mergeChanges;
- (void)_receiveBox:(id)arg1;
- (BOOL)automaticallyEmitsObjects;
- (CDUnknownBlockType)bufferFullHandler;
- (void)dealloc;
- (void)emitAllObjects;
- (void)emitObject;
- (id)initWithMaximumObjectCount:(unsigned long long)arg1 fullPolicy:(long long)arg2 outputQueue:(id)arg3;
- (BOOL)isMemoryPressureSensitive;
- (void)setAutomaticallyEmitsObjects:(BOOL)arg1;
- (void)setBufferFullHandler:(CDUnknownBlockType)arg1;
- (void)setMemoryPressureSensitive:(BOOL)arg1;

@end
