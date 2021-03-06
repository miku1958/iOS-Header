//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MTLCapture/CaptureMTLObject-Protocol.h>
#import <MTLCapture/MTLRenderPipelineStateSPI-Protocol.h>

@class CaptureMTLDevice, MTLDebugInstrumentationData, MTLRenderPipelineDescriptor, MTLTileRenderPipelineDescriptor, NSString;
@protocol MTLDevice, MTLRenderPipelineState, MTLRenderPipelineStateSPI;

@interface CaptureMTLRenderPipelineState : NSObject <MTLRenderPipelineStateSPI, CaptureMTLObject>
{
    id<MTLRenderPipelineStateSPI> _baseObject;
    CaptureMTLDevice *_captureDevice;
    struct GTTraceContext *_traceContext;
    struct GTTraceStream *_traceStream;
    MTLRenderPipelineDescriptor *_descriptor;
    MTLTileRenderPipelineDescriptor *_tileDescriptor;
}

@property (readonly) id<MTLRenderPipelineState> baseObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) MTLRenderPipelineDescriptor *descriptor; // @synthesize descriptor=_descriptor;
@property (readonly) id<MTLDevice> device;
@property (readonly, strong, nonatomic) MTLDebugInstrumentationData *fragmentDebugInstrumentationData;
@property (readonly, nonatomic) unsigned long long gpuAddress;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long imageblockSampleLength;
@property (readonly) NSString *label;
@property (readonly) unsigned long long maxTotalThreadsPerThreadgroup;
@property (readonly, nonatomic) unsigned long long resourceIndex;
@property (readonly) unsigned long long streamReference;
@property (readonly) Class superclass;
@property (readonly) BOOL supportIndirectCommandBuffers;
@property (readonly) long long textureWriteRoundingMode;
@property (readonly) BOOL threadgroupSizeMatchesTileSize;
@property (readonly, strong, nonatomic) MTLDebugInstrumentationData *tileDebugInstrumentationData;
@property (copy, nonatomic) MTLTileRenderPipelineDescriptor *tileDescriptor; // @synthesize tileDescriptor=_tileDescriptor;
@property (readonly) struct GTTraceContext *traceContext;
@property (readonly) struct GTTraceStream *traceStream;
@property (readonly) unsigned long long uniqueIdentifier;
@property (readonly, strong, nonatomic) MTLDebugInstrumentationData *vertexDebugInstrumentationData;

- (void).cxx_destruct;
- (BOOL)conformsToProtocol:(id)arg1;
- (void)dealloc;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (unsigned long long)imageblockMemoryLengthForDimensions:(CDStruct_14f26992)arg1;
- (id)initWithBaseObject:(id)arg1 captureDevice:(id)arg2;
- (id)newFragmentShaderDebugInfo;
- (id)newVertexShaderDebugInfo;
- (id)originalObject;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)swapObject:(id)arg1;
- (void)touch;

@end

