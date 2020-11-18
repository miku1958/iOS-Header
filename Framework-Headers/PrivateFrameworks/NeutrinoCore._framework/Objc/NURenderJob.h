//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAudioMix, AVComposition, AVVideoComposition, CIImage, NSArray, NSError, NUComposition, NUGeometrySpaceMap, NUImageGeometry, NUObservatory, NUPriority, NURenderJobStatistics, NURenderNode, NURenderPipeline, NURenderRequest;
@protocol NUDevice, NUExtentPolicy, NURenderStatistics, NURenderer, NUScalePolicy, OS_dispatch_group, OS_dispatch_queue;

@interface NURenderJob : NSObject
{
    NSObject<OS_dispatch_queue> *_stateQueue;
    NUObservatory *_observatory;
    NURenderJobStatistics *_stats;
    NSError *_error;
    BOOL _isAborted;
    BOOL _failed;
    BOOL _isExecuting;
    BOOL _isCanceled;
    BOOL _isFinished;
    int _rendererType;
    long long _currentStage;
    NURenderRequest *_request;
    unsigned long long _number;
    NSArray *_dependentJobs;
    NURenderNode *_prepareNode;
    NURenderNode *_renderNode;
    NUImageGeometry *_outputGeometry;
    NSObject<OS_dispatch_group> *_replyGroup;
    id<NUDevice> _device;
    NUComposition *_composition;
    NURenderPipeline *_renderPipeline;
    NUGeometrySpaceMap *_resolvedSpaceMap;
    NUImageGeometry *_fullSizeGeometry;
    CIImage *_outputImage;
    AVComposition *_outputVideo;
    AVVideoComposition *_outputVideoComposition;
    AVAudioMix *_outputAudioMix;
    CDStruct_1e2b2e48 _renderScale;
}

@property (strong, nonatomic) NUComposition *composition; // @synthesize composition=_composition;
@property (readonly) long long currentStage; // @synthesize currentStage=_currentStage;
@property (strong) NSArray *dependentJobs; // @synthesize dependentJobs=_dependentJobs;
@property (readonly, nonatomic) id<NUDevice> device; // @synthesize device=_device;
@property (readonly) NSError *error; // @dynamic error;
@property (readonly) id<NUExtentPolicy> extentPolicy;
@property (readonly) BOOL failed; // @dynamic failed;
@property (strong, nonatomic) NUImageGeometry *fullSizeGeometry; // @synthesize fullSizeGeometry=_fullSizeGeometry;
@property (readonly) CDStruct_912cb5d2 imageSize;
@property (readonly) BOOL isAborted; // @synthesize isAborted=_isAborted;
@property (readonly) BOOL isCanceled; // @synthesize isCanceled=_isCanceled;
@property (readonly) BOOL isExecuting; // @synthesize isExecuting=_isExecuting;
@property (readonly) BOOL isFinished; // @synthesize isFinished=_isFinished;
@property (readonly) unsigned long long number; // @synthesize number=_number;
@property (strong, nonatomic) AVAudioMix *outputAudioMix; // @synthesize outputAudioMix=_outputAudioMix;
@property (strong, nonatomic) NUImageGeometry *outputGeometry; // @synthesize outputGeometry=_outputGeometry;
@property (strong, nonatomic) CIImage *outputImage; // @synthesize outputImage=_outputImage;
@property (strong, nonatomic) AVComposition *outputVideo; // @synthesize outputVideo=_outputVideo;
@property (strong, nonatomic) AVVideoComposition *outputVideoComposition; // @synthesize outputVideoComposition=_outputVideoComposition;
@property (strong, nonatomic) NURenderNode *prepareNode; // @synthesize prepareNode=_prepareNode;
@property (readonly) NUPriority *priority;
@property (strong, nonatomic) NURenderNode *renderNode; // @synthesize renderNode=_renderNode;
@property (strong, nonatomic) NURenderPipeline *renderPipeline; // @synthesize renderPipeline=_renderPipeline;
@property (nonatomic) CDStruct_912cb5d2 renderScale; // @synthesize renderScale=_renderScale;
@property (readonly, nonatomic) id<NURenderer> renderer;
@property (readonly, nonatomic) int rendererType; // @synthesize rendererType=_rendererType;
@property (strong, nonatomic) NSObject<OS_dispatch_group> *replyGroup; // @synthesize replyGroup=_replyGroup;
@property (readonly) NURenderRequest *request; // @synthesize request=_request;
@property (strong, nonatomic) NUGeometrySpaceMap *resolvedSpaceMap; // @synthesize resolvedSpaceMap=_resolvedSpaceMap;
@property (readonly) id<NUScalePolicy> scalePolicy;
@property (readonly, nonatomic) id<NURenderStatistics> statistics; // @synthesize statistics=_stats;
@property (readonly) BOOL succeeded; // @dynamic succeeded;
@property (readonly, nonatomic) BOOL wantsCompleteStage;
@property (readonly, nonatomic) BOOL wantsOutputGeometry;
@property (readonly, nonatomic) BOOL wantsOutputImage;
@property (readonly, nonatomic) BOOL wantsOutputVideo;
@property (readonly, nonatomic) BOOL wantsOutputVideoFrame;
@property (readonly, nonatomic) BOOL wantsPrepareNodeCached;
@property (readonly, nonatomic) BOOL wantsRenderNodeCached;
@property (readonly, nonatomic) BOOL wantsRenderScaleClampedToNativeScale;
@property (readonly, nonatomic) BOOL wantsRenderStage;

- (void).cxx_destruct;
- (CDStruct_3d581f42)_atomicCancel;
- (void)_cancel;
- (void)_cancelCoalescedJob;
- (void)_didPrepare;
- (void)_finish;
- (long long)_nextStageForStage:(long long)arg1;
- (void)_notifyCanceled:(long long)arg1;
- (void)_notifyStageTransition:(long long)arg1;
- (void)_reply:(id)arg1;
- (void)_run:(long long)arg1;
- (void)_setCurrentStage:(long long)arg1;
- (BOOL)_shouldCancelCoalescedJob;
- (BOOL)_shouldWaitForDependentJobs;
- (void)abortComplete;
- (void)abortPrepare;
- (void)abortRender;
- (void)abortStage:(long long)arg1;
- (void)addCancelObserver:(id)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)addStageObserver:(id)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)cancel;
- (void)cancelCoalescedJob;
- (void)cleanUp;
- (BOOL)complete:(out id *)arg1;
- (id)description;
- (void)didRun;
- (id)evaluateComposition:(id)arg1 pipeline:(id)arg2 pipelineState:(id)arg3 error:(out id *)arg4;
- (id)evaluateOutputGeometry:(out id *)arg1;
- (void)fail:(id)arg1;
- (void)finalize:(BOOL)arg1;
- (void)finish;
- (id)generateVideoComposition:(out id *)arg1;
- (id)init;
- (id)initWithRequest:(id)arg1;
- (id)newRenderPipelineStateForEvaluationMode:(long long)arg1;
- (id)pipelineForComposition:(id)arg1 error:(out id *)arg2;
- (BOOL)prepare:(out id *)arg1;
- (id)prepareNodeWithPipelineState:(id)arg1 error:(out id *)arg2;
- (void)removeObserver:(id)arg1;
- (BOOL)render:(out id *)arg1;
- (id)renderImage:(id)arg1 into:(id)arg2 colorSpace:(id)arg3 roi:(id)arg4 imageSize:(CDStruct_912cb5d2)arg5 error:(out id *)arg6;
- (id)renderNodeWithPipelineState:(id)arg1 error:(out id *)arg2;
- (BOOL)renderVideoFrames:(id)arg1 intoPixelBuffer:(struct __CVBuffer *)arg2 time:(CDStruct_1b6d18a9)arg3 colorSpace:(id)arg4 error:(out id *)arg5;
- (void)reply:(id)arg1;
- (BOOL)requiresVideoComposition;
- (long long)resolvedSampleMode:(long long)arg1;
- (void)respond;
- (id)result;
- (void)run:(long long)arg1;
- (BOOL)runStage:(long long)arg1 error:(out id *)arg2;
- (id)validateComposition:(out id *)arg1;
- (long long)willRun;

@end
