//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetalTools/MTLToolsComputePipelineState.h>

@class MTLComputePipelineDescriptor, MTLComputePipelineReflection, MTLGPUDebugBuffer, MTLToolsFunction;

@interface MTLGPUDebugComputePipelineState : MTLToolsComputePipelineState
{
    MTLComputePipelineDescriptor *_descriptor;
    MTLComputePipelineReflection *_internalReflection;
    MTLComputePipelineReflection *_userReflection;
    struct KeyBufferPair _globalConstants;
}

@property (readonly, nonatomic) MTLToolsFunction *computeFunction;
@property (readonly, nonatomic) MTLGPUDebugBuffer *globalConstantsBuffer;
@property (readonly, nonatomic) MTLComputePipelineReflection *internalReflection;
@property (readonly) unsigned long long staticThreadgroupMemoryLength;
@property (readonly, nonatomic) MTLComputePipelineReflection *userReflection;

- (id).cxx_construct;
- (void)dealloc;
- (id)initWithComputePipelineState:(id)arg1 descriptor:(id)arg2 unwrappedDescriptor:(id)arg3 reflection:(id)arg4 device:(id)arg5;
- (void)releaseReflection;

@end

