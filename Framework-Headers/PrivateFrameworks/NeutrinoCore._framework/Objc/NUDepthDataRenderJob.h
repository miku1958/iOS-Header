//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NURenderJob.h>

@class AVDepthData, CIRenderTask, NUCVPixelBuffer;

@interface NUDepthDataRenderJob : NURenderJob
{
    long long _depthType;
    unsigned int _pixelFormat;
    CIRenderTask *_renderTask;
    NUCVPixelBuffer *_depthMap;
    AVDepthData *_depthData;
}

@property (strong) AVDepthData *depthData; // @synthesize depthData=_depthData;

- (void).cxx_destruct;
- (void)cleanUp;
- (BOOL)complete:(out id *)arg1;
- (id)newRenderPipelineStateForEvaluationMode:(long long)arg1;
- (BOOL)prepare:(out id *)arg1;
- (BOOL)render:(out id *)arg1;
- (id)result;
- (id)scalePolicy;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsOutputImage;
- (BOOL)wantsPrepareNodeCached;
- (BOOL)wantsRenderNodeCached;
- (BOOL)wantsRenderScaleClampedToNativeScale;

@end
