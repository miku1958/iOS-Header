//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, PKMetalBuffer;
@protocol MTLDevice;

@interface PKMetalResourceHandlerBuffer : NSObject
{
    id<MTLDevice> _device;
    PKMetalBuffer *_buffer;
    unsigned long long _currentOffset;
    unsigned long long _bufferSize;
    unsigned long long _options;
    BOOL _purgeable;
    NSMutableArray *_reusableBuffers;
}

- (void).cxx_destruct;
- (void)addReusableBuffer:(id)arg1;
- (void)deallocateReusableBuffers;
- (id)initWithSize:(unsigned long long)arg1 options:(unsigned long long)arg2 device:(id)arg3 purgeable:(BOOL)arg4;
- (id)newBufferWithLength:(unsigned long long)arg1 bytes:(const void *)arg2 outOffset:(unsigned long long *)arg3;
- (id)newBufferWithLength:(unsigned long long)arg1 bytes:(const void *)arg2 outOffset:(unsigned long long *)arg3 outReusableMetalBuffer:(id *)arg4;

@end

