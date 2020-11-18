//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MTLCommandQueue, MTLDepthStencilState, MTLDevice, MTLRenderPipelineState;

@interface ARGPUCubemapProjector : NSObject
{
    id<MTLDevice> _device;
    id<MTLCommandQueue> _commandQueue;
    id<MTLRenderPipelineState> _cubemapPipelineStateSRGB;
    id<MTLRenderPipelineState> _cubemapPipelineStateHDR;
    id<MTLDepthStencilState> _cubemapDepthState;
}

- (void).cxx_destruct;
- (id)init;
- (void)projectToCube:(id)arg1 transformWorldFromCube:(CDStruct_14d5dc5e)arg2 planes:(const vector_f1799d67 *)arg3 blend:(BOOL)arg4;

@end
