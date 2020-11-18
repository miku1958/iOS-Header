//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MTLCapture/CaptureMTLObject-Protocol.h>
#import <MTLCapture/MTLIndirectRenderCommand-Protocol.h>

@class NSString;
@protocol MTLIndirectRenderCommand;

@interface CaptureMTLIndirectRenderCommand : NSObject <MTLIndirectRenderCommand, CaptureMTLObject>
{
    id<MTLIndirectRenderCommand> _baseObject;
    struct GTTraceContext *_traceContext;
    struct GTTraceStream *_traceStream;
}

@property (readonly) id<MTLIndirectRenderCommand> baseObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long streamReference;
@property (readonly) Class superclass;
@property (readonly) struct GTTraceContext *traceContext;
@property (readonly) struct GTTraceStream *traceStream;

- (void).cxx_destruct;
- (BOOL)conformsToProtocol:(id)arg1;
- (void)dealloc;
- (void)drawIndexedPatches:(unsigned long long)arg1 patchStart:(unsigned long long)arg2 patchCount:(unsigned long long)arg3 patchIndexBuffer:(id)arg4 patchIndexBufferOffset:(unsigned long long)arg5 controlPointIndexBuffer:(id)arg6 controlPointIndexBufferOffset:(unsigned long long)arg7 instanceCount:(unsigned long long)arg8 baseInstance:(unsigned long long)arg9 tessellationFactorBuffer:(id)arg10 tessellationFactorBufferOffset:(unsigned long long)arg11 tessellationFactorBufferInstanceStride:(unsigned long long)arg12;
- (void)drawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6 baseVertex:(long long)arg7 baseInstance:(unsigned long long)arg8;
- (void)drawPatches:(unsigned long long)arg1 patchStart:(unsigned long long)arg2 patchCount:(unsigned long long)arg3 patchIndexBuffer:(id)arg4 patchIndexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6 baseInstance:(unsigned long long)arg7 tessellationFactorBuffer:(id)arg8 tessellationFactorBufferOffset:(unsigned long long)arg9 tessellationFactorBufferInstanceStride:(unsigned long long)arg10;
- (void)drawPrimitives:(unsigned long long)arg1 vertexStart:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3 instanceCount:(unsigned long long)arg4 baseInstance:(unsigned long long)arg5;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithBaseObject:(id)arg1 captureContext:(struct GTTraceContext *)arg2;
- (id)originalObject;
- (void)reset;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)setFragmentBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setRenderPipelineState:(id)arg1;
- (void)setVertexBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)touch;

@end
