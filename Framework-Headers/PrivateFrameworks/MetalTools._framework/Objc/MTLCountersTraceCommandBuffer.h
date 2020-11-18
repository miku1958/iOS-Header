//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface MTLCountersTraceCommandBuffer : NSObject
{
    struct BinaryBuffer _commands;
    NSMutableArray *_encoders;
    struct AppendBuffer _samples;
    unsigned long long _flags;
    unsigned long long _timestamp;
}

- (id).cxx_construct;
- (void)appendSamples:(const void *)arg1 length:(unsigned long long)arg2;
- (id)blitCommandEncoder;
- (id)computeCommandEncoder;
- (void)dealloc;
- (id)init:(BOOL)arg1;
- (void)presentDrawable:(id)arg1;
- (void)presentDrawable:(id)arg1 atTime:(double)arg2;
- (id)renderCommandEncoder;
- (id)resourceStateCommandEncoder;
- (void)saveCommandBuffer:(const void *)arg1 queue:(id)arg2 profilingResults:(id)arg3;
- (void)waitUntilCompleted;
- (void)waitUntilScheduled;

@end
