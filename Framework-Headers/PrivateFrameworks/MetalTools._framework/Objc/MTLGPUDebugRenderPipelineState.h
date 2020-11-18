//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetalTools/MTLToolsRenderPipelineState.h>

@class MTLGPUDebugBuffer, MTLGPUDebugFunction, MTLRenderPipelineDescriptor, MTLRenderPipelineReflection, MTLTileRenderPipelineDescriptor;

@interface MTLGPUDebugRenderPipelineState : MTLToolsRenderPipelineState
{
    MTLRenderPipelineDescriptor *_descriptor;
    MTLTileRenderPipelineDescriptor *_tileDescriptor;
    MTLRenderPipelineReflection *_internalReflection;
    MTLRenderPipelineReflection *_userReflection;
    struct KeyBufferPair _globalConstants;
    unsigned long long _vertexConstantOffset;
    unsigned long long _fragmentConstantOffset;
    unsigned long long _tileConstantOffset;
    MTLGPUDebugBuffer *_indirectStateBuffer;
    BOOL _supportsIndirectCommandBuffers;
}

@property (readonly, nonatomic) unsigned long long fragmentConstantOffset;
@property (readonly, nonatomic) MTLGPUDebugFunction *fragmentFunction;
@property (readonly, nonatomic) MTLGPUDebugBuffer *globalConstantsBuffer;
@property (readonly, nonatomic) MTLGPUDebugBuffer *indirectStateBuffer;
@property (readonly, nonatomic) MTLRenderPipelineReflection *internalReflection;
@property (readonly, nonatomic) unsigned long long tileConstantOffset;
@property (readonly, nonatomic) MTLGPUDebugFunction *tileFunction;
@property (readonly, nonatomic) MTLRenderPipelineReflection *userReflection;
@property (readonly, nonatomic) unsigned long long vertexConstantOffset;
@property (readonly, nonatomic) MTLGPUDebugFunction *vertexFunction;

- (id).cxx_construct;
- (void)_initConstantsBuffer:(id)arg1 device:(id)arg2;
- (void)dealloc;
- (id)fragmentLibrary;
- (id)initWithRenderPipelineState:(id)arg1 descriptor:(id)arg2 unwrappedDescriptor:(id)arg3 reflection:(id)arg4 device:(id)arg5 pipelineOptions:(unsigned long long)arg6;
- (id)initWithRenderPipelineState:(id)arg1 tileDescriptor:(id)arg2 reflection:(id)arg3 device:(id)arg4;
- (void)releaseReflection;
- (id)vertexLibrary;

@end
