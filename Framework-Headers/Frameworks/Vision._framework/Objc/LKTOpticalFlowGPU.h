//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/LKTOpticalFlow.h>

@class LKTMetalContext;
@protocol MTLBuffer, MTLCommandQueue, MTLComputePipelineState, MTLTexture;

__attribute__((visibility("hidden")))
@interface LKTOpticalFlowGPU : LKTOpticalFlow
{
    LKTMetalContext *_mtlContext;
    id<MTLCommandQueue> _commandQueue;
    id<MTLComputePipelineState> _computePipelines[9];
    unsigned long long _maxThreadExecutionWidth;
    struct CGSize _pyramid_size[10];
    id<MTLTexture> _I_tex[2][10];
    id<MTLTexture> _I_u32_alias_tex[2][10];
    struct __CVBuffer *_G0_pxbuf;
    struct __CVBuffer *_G1_pxbuf;
    id<MTLTexture> _G0_tex[10];
    id<MTLTexture> _G1_tex[10];
    struct __CVBuffer *_C0_pxbuf;
    struct __CVBuffer *_C1_pxbuf;
    id<MTLTexture> _C0_tex[10];
    id<MTLTexture> _C1_tex[10];
    id<MTLBuffer> _Adiagb_buf[2];
    id<MTLBuffer> _Ixy_buf[2];
    struct __CVBuffer *_w_pxbuf;
    id<MTLTexture> _w_tex[10];
    struct __CVBuffer *_uv_pxbuf[2];
    id<MTLTexture> _uv_tex[2][10];
    id<MTLTexture> _uv_u32_alias_tex[2][10];
    int _current_frame_index;
    id<MTLTexture> _uv_tex_user_ref;
}

- (void).cxx_destruct;
- (void)_computeFeaturesDerivativesWithCommandBuffer:(id)arg1 in_tex:(id)arg2 out_tex:(id)arg3;
- (void)_computeFeaturesWithCommandBuffer:(id)arg1 in_tex:(id)arg2 out_tex:(id)arg3;
- (void)_computeOpticalFlow;
- (BOOL)_createImagePyramidWithCommandBuffer:(id)arg1 in_pixelbuf:(struct __CVBuffer *)arg2 I_idx:(int)arg3 error:(id *)arg4;
- (void)_doNLRegularizationWithCommandBuffer:(id)arg1 in_uv_tex:(id)arg2 join_tex:(id)arg3 w_tex:(id)arg4 out_uv_tex:(id)arg5;
- (void)_doSolverWithCommandBuffer:(id)arg1 scale:(int)arg2 scale_xy_inv:(id)arg3 coeff:(id)arg4 in_uv_tex:(id)arg5 out_uv_tex:out_w_tex: /* Error: Ran out of types for this method. */;
- (void)_downscale2XWithCommandBuffer:(id)arg1 in_u32_alias_tex:(id)arg2 out_u32_alias_tex:(id)arg3;
- (void)_initMemory:(int)arg1 height:(int)arg2 numScales:(int)arg3;
- (BOOL)_setupBufferAndReturnError:(id *)arg1;
- (void)_setupPipelines;
- (void)_zeroFlowWithCommandBuffer:(id)arg1 uv_tex:(id)arg2;
- (void)dealloc;
- (BOOL)estimateFlowFromReference:(struct __CVBuffer *)arg1 target:(struct __CVBuffer *)arg2 error:(id *)arg3;
- (BOOL)estimateFlowStream:(struct __CVBuffer *)arg1 error:(id *)arg2;
- (id)initWithMetalContext:(id)arg1 width:(int)arg2 height:(int)arg3 numScales:(int)arg4;
- (BOOL)setOutputUV:(struct __CVBuffer *)arg1 error:(id *)arg2;
- (void)waitUntilCompleted;

@end

