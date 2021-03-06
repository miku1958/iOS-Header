//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VCMomentsHistoryBuffer : NSObject
{
    id _delegate;
    int _bufferLength;
    NSMutableArray *_timestampQueue;
    NSMutableDictionary *_sampleMap;
    unsigned int _lastTimestamp;
}

- (void)dealloc;
- (id)delegate;
- (void)dequeueOneFrame;
- (void)enqueueWithSample:(struct opaqueCMSampleBuffer *)arg1 timestamp:(unsigned int)arg2;
- (void)flushBuffer;
- (struct opaqueCMSampleBuffer *)getClosestSampleForTimestamp:(unsigned int)arg1;
- (int)getCount;
- (unsigned int)getUpdatedTimestampWithTimestamp:(unsigned int)arg1;
- (id)initWithDelegate:(id)arg1 bufferLength:(int)arg2 dispatchQueue:(id)arg3;
- (void)updateBufferWithSample:(struct opaqueCMSampleBuffer *)arg1 timestamp:(unsigned int)arg2;

@end

