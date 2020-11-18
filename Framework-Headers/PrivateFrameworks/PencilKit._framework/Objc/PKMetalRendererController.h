//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CAMetalLayer, NSArray, NSMutableArray, PKLinedPaper, PKMetalRenderer, PKStrokeGenerator;
@protocol CAMetalDrawable, MTLCommandQueue, MTLDevice, MTLTexture, OS_dispatch_queue, OS_dispatch_semaphore, PKMetalRendererControllerDelegate;

@interface PKMetalRendererController : NSObject
{
    NSObject<OS_dispatch_queue> *_renderQueue;
    _Atomic int _cancelLongRunningRenderingCount;
    _Atomic int _cancelAllRendering;
    NSObject<OS_dispatch_semaphore> *_canBeginRenderSemaphore;
    struct atomic_flag _readyToBeginRender;
    _Atomic double _lastFrameDuration;
    _Atomic unsigned long long _lastPresentationTime;
    _Atomic int _queuedRenders;
    NSMutableArray *_postPresentCallbacks;
    BOOL _isTorndown;
    struct CGSize _pixelSize;
    struct CGSize _actualSize;
    double _presentationCount;
    double _presentationDelay;
    double _presentationDelayGrowth;
    double _presentationMaxDelay;
    CDUnknownBlockType _vSyncTimeoutBlock;
    struct PKRunningStat _strokeLatencyStat;
    id<MTLTexture> _currentTextureTarget;
    id<CAMetalDrawable> _currentDrawable;
    struct CGImage *_paperTextureImage;
    BOOL _liveStrokeMode;
    id<PKMetalRendererControllerDelegate> _delegate;
    PKStrokeGenerator *_inputController;
    PKLinedPaper *_linedPaper;
    NSArray *_liveStrokeStrokes;
    double _liveStrokeElapsedTime;
    double _liveStrokeDuration;
    CAMetalLayer *_presentationLayer;
    PKMetalRenderer *_renderer;
    double _inputScale;
    struct CGRect _viewScissor;
    struct CGAffineTransform _strokeTransform;
    struct CGAffineTransform _paperTransform;
    struct CGAffineTransform _renderTransform;
}

@property (readonly, nonatomic) struct CGSize actualSize; // @synthesize actualSize=_actualSize;
@property (nonatomic) double backboardPaperMultiply;
@property (readonly, nonatomic) id<MTLCommandQueue> commandQueue;
@property (weak, nonatomic) id<PKMetalRendererControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) id<MTLDevice> device; // @dynamic device;
@property (readonly, nonatomic) PKStrokeGenerator *inputController; // @synthesize inputController=_inputController;
@property double inputScale; // @synthesize inputScale=_inputScale;
@property (nonatomic) BOOL invertColors;
@property (strong, nonatomic) PKLinedPaper *linedPaper; // @synthesize linedPaper=_linedPaper;
@property (nonatomic) double liveStrokeDuration; // @synthesize liveStrokeDuration=_liveStrokeDuration;
@property (nonatomic) double liveStrokeElapsedTime; // @synthesize liveStrokeElapsedTime=_liveStrokeElapsedTime;
@property (nonatomic) BOOL liveStrokeMode; // @synthesize liveStrokeMode=_liveStrokeMode;
@property (copy, nonatomic) NSArray *liveStrokeStrokes; // @synthesize liveStrokeStrokes=_liveStrokeStrokes;
@property (nonatomic) struct CGAffineTransform paperTransform; // @synthesize paperTransform=_paperTransform;
@property (readonly, nonatomic) struct CGSize pixelSize; // @synthesize pixelSize=_pixelSize;
@property (weak, nonatomic) CAMetalLayer *presentationLayer; // @synthesize presentationLayer=_presentationLayer;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *renderQueue; // @synthesize renderQueue=_renderQueue;
@property struct CGAffineTransform renderTransform; // @synthesize renderTransform=_renderTransform;
@property (strong, nonatomic) PKMetalRenderer *renderer; // @synthesize renderer=_renderer;
@property (nonatomic) struct CGAffineTransform strokeTransform; // @synthesize strokeTransform=_strokeTransform;
@property (nonatomic) struct CGRect viewScissor; // @synthesize viewScissor=_viewScissor;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_copyIntoTilesFromRenderQueue:(id)arg1 tileTransform:(struct CGAffineTransform)arg2;
- (unsigned long long)_drawStrokesAfterClear:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect)arg2 strokeTransform:(struct CGAffineTransform)arg3 useLayerContext:(BOOL)arg4 progress:(id)arg5;
- (void)_drawStrokesAfterClear:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect)arg2 strokeTransform:(struct CGAffineTransform)arg3 useLayerContext:(BOOL)arg4 renderCompletion:(CDUnknownBlockType)arg5;
- (void)_present:(double)arg1;
- (BOOL)_renderAheadWithTransform:(struct CGAffineTransform)arg1 at:(double)arg2;
- (void)_renderAndPresent:(BOOL)arg1 withTransform:(struct CGAffineTransform)arg2;
- (void)_renderDrawPoints;
- (void)_renderLiveStrokeAndPresentWithTransform:(struct CGAffineTransform)arg1 at:(double)arg2;
- (void)buildRenderCacheForStrokes:(id)arg1;
- (void)callBlockAfterPresenting:(CDUnknownBlockType)arg1;
- (void)cancelAllRendering;
- (void)cancelLongRunningRenders;
- (void)cancelVSyncTimeoutBlock;
- (void)changeRenderSize;
- (void)clear;
- (void)copyIntoTiles:(id)arg1;
- (void)dealloc;
- (void)didFinishRendering:(CDUnknownBlockType)arg1;
- (void)drawImage:(struct CGImage *)arg1 andMask:(struct CGImage *)arg2;
- (void)drawImage:(struct CGImage *)arg1 andMask:(struct CGImage *)arg2 clippedToStrokeSpaceRect:(struct CGRect)arg3;
- (void)drawStrokes:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)drawStrokes:(id)arg1 intoTile:(id)arg2 renderCount:(long long)arg3;
- (void)drawStrokes:(id)arg1 renderIntermediateSteps:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)drawStrokesAfterClear:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect)arg2 completion:(CDUnknownBlockType)arg3;
- (void)drawStrokesAfterClear:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect)arg2 strokeTransform:(struct CGAffineTransform)arg3 useLayerContext:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
- (void)drawTexture:(id)arg1;
- (void)drawingBeganWithStroke:(id)arg1;
- (void)drawingCancelled;
- (void)drawingCancelledWithCompletion:(CDUnknownBlockType)arg1;
- (void)drawingEnded:(id)arg1 finishStrokeBlock:(CDUnknownBlockType)arg2;
- (void)flushMemoryIfPossible;
- (id)initWithPixelSize:(struct CGSize)arg1 actualSize:(struct CGSize)arg2 renderQueue:(id)arg3 usePrivateResourceHandler:(BOOL)arg4;
- (BOOL)isAllRenderingCancelled;
- (BOOL)isLongRunningRenderingCancelled;
- (struct CGImage *)newCGImage;
- (struct CGImage *)newCGImageWithClipRect:(struct CGRect)arg1;
- (void)pokeEventDispatcher;
- (BOOL)prerenderWithTransform:(struct CGAffineTransform)arg1 inputScale:(double)arg2 at:(double)arg3;
- (void)purgeOriginalBackFramebuffer;
- (void)renderStrokes:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect)arg2 strokeTransform:(struct CGAffineTransform)arg3 imageClipRect:(struct CGRect)arg4 completion:(CDUnknownBlockType)arg5;
- (struct CGImage *)renderStrokesSync:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect)arg2 strokeTransform:(struct CGAffineTransform)arg3 imageClipRect:(struct CGRect)arg4;
- (void)renderTiles:(id)arg1 tileTransform:(struct CGAffineTransform)arg2;
- (void)renderTilesIntoTiles:(id)arg1;
- (void)renderWithTransform:(struct CGAffineTransform)arg1 inputScale:(double)arg2 at:(double)arg3;
- (void)replaceInkTexture:(id)arg1 image:(struct CGImage *)arg2;
- (void)resumeLongRunningRenders;
- (void)resumeLongRunningRendersAfterAllWorkIsDone;
- (void)setBackgroundColor:(struct CGColor *)arg1;
- (void)setLiveRenderingOverrideColor:(struct CGColor *)arg1;
- (void)setPaperTextureImage:(struct CGImage *)arg1;
- (void)setPixelSize:(struct CGSize)arg1 actualSize:(struct CGSize)arg2;
- (void)setResourceCacheSize:(unsigned long long)arg1;
- (void)setup;
- (BOOL)setupCurrentDrawable;
- (void)setupSync;
- (void)signalVSyncSemaphore:(double)arg1 presentationTime:(unsigned long long)arg2;
- (void)teardown;
- (void)teardownSync;
- (void)testLiveStrokeToFrame:(struct CGRect)arg1 texture:(struct CGImage *)arg2 strokeInterval:(float)arg3;

@end
