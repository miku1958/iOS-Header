//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Metal/MTLParallelRenderCommandEncoder-Protocol.h>

@class MTLRenderPassDescriptor, NSString, _MTLCommandBuffer;
@protocol MTLCommandBuffer, MTLCommandQueue, MTLDevice;

@interface _MTLParallelRenderCommandEncoder : NSObject <MTLParallelRenderCommandEncoder>
{
    id<MTLDevice> _device;
    id<MTLCommandQueue> _queue;
    NSString *_label;
    unsigned long long _globalTraceObjectID;
    unsigned long long _labelTraceID;
    _MTLCommandBuffer<MTLCommandBuffer> *_commandBuffer;
    MTLRenderPassDescriptor *_renderPassDescriptor;
    struct _opaque_pthread_mutex_t _lock;
    unsigned long long _commandBuffersSize;
    unsigned long long _commandBuffersCount;
    id *_commandBuffers;
    BOOL _retainedReferences;
    BOOL _StatEnabled;
    unsigned long long _numThisEncoder;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) id<MTLDevice> device; // @synthesize device=_device;
@property (readonly) unsigned long long globalTraceObjectID; // @synthesize globalTraceObjectID=_globalTraceObjectID;
@property (readonly) unsigned long long hash;
@property (copy) NSString *label; // @synthesize label=_label;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=getType) unsigned long long type; // @dynamic type;

- (id)_renderCommandEncoderCommon;
- (id)commandBuffer;
- (void)dealloc;
- (void)endEncoding;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)initWithCommandBuffer:(id)arg1 renderPassDescriptor:(id)arg2;
- (void)insertDebugSignpost:(id)arg1;
- (void)popDebugGroup;
- (void)pushDebugGroup:(id)arg1;
- (id)renderCommandEncoder;
- (id)sampledRenderCommandEncoderWithProgramInfoBuffer:(CDStruct_4af8c268 *)arg1 capacity:(unsigned long long)arg2;
- (void)setColorStoreAction:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setDepthStoreAction:(unsigned long long)arg1;
- (void)setStencilStoreAction:(unsigned long long)arg1;

@end

