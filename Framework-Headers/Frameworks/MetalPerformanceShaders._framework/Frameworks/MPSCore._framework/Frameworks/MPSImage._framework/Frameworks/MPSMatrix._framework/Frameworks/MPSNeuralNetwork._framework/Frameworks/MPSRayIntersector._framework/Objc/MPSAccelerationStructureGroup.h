//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MTLDevice;

@interface MPSAccelerationStructureGroup : NSObject
{
    struct MPSBufferAllocator *_triangleIndexBufferAllocator;
    struct MPSBufferAllocator *_innerNodeBufferAllocator;
    struct MPSBufferAllocator *_leafNodeBufferAllocator;
    struct MPSBufferAllocator *_pageTable0BufferAllocator;
    struct MPSBufferAllocator *_pageTable1BufferAllocator;
    struct MPSBufferAllocator *_pageBufferAllocator;
    id<MTLDevice> _device;
}

@property (readonly, nonatomic) id<MTLDevice> device; // @synthesize device=_device;

- (void)dealloc;
- (id)initWithDevice:(id)arg1;
- (struct MPSBufferAllocator *)innerNodeBufferAllocator;
- (struct MPSBufferAllocator *)leafNodeBufferAllocator;
- (struct MPSBufferAllocator *)pageBufferAllocator;
- (struct MPSBufferAllocator *)pageTable0BufferAllocator;
- (struct MPSBufferAllocator *)pageTable1BufferAllocator;
- (struct MPSBufferAllocator *)triangleIndexBufferAllocator;

@end

