//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVVideoComposition, AVVideoCompositionRenderContext, AVWeakReference, NSDictionary, NSError;
@protocol AVVideoCompositing, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVCustomVideoCompositorSession : NSObject
{
    struct OpaqueFigVideoCompositor *_figCustomCompositor;
    BOOL _hasRegisteredFigCustomCompositorCallbacks;
    NSDictionary *_clientRequiredPixelBufferAttributes;
    AVWeakReference *_weakSelf;
    void *_callbackContextToken;
    NSObject<OS_dispatch_queue> *_videoCompositionQ;
    AVVideoComposition *_videoComposition;
    BOOL _videoCompositionDidChange;
    NSObject<OS_dispatch_queue> *_clientCustomCompositorQ;
    id<AVVideoCompositing> _clientCustomCompositor;
    NSObject<OS_dispatch_queue> *_clientErrorQ;
    NSError *_clientError;
    NSObject<OS_dispatch_queue> *_renderContextQ;
    AVVideoCompositionRenderContext *_renderContext;
    NSObject<OS_dispatch_queue> *_finishedRequestQ;
}

@property (readonly, nonatomic) BOOL supportsWideColorSourceFrames;

+ (BOOL)_colorPropertiesAreSetInVideoComposition:(id)arg1;
+ (id)sessionWithVideoComposition:(id)arg1 recyclingSession:(id)arg2;
- (void)_cleanupFigCallbacks;
- (int)_compositionFrame:(struct OpaqueFigVideoCompositorFrame *)arg1 atTime:(CDStruct_1b6d18a9)arg2 requiresRenderUsingSources:(id)arg3 withInstruction:(void *)arg4;
- (struct OpaqueFigVideoCompositor *)_copyFigVideoCompositor;
- (void)_customCompositorFigPropertyDidChange;
- (int)_customCompositorShouldCancelPendingFrames;
- (int)_setupFigCallbacks;
- (void)_willDeallocOrFinalize;
- (void)compositionFrame:(struct OpaqueFigVideoCompositorFrame *)arg1 didFinishWithComposedPixelBuffer:(struct __CVBuffer *)arg2;
- (void)compositionFrame:(struct OpaqueFigVideoCompositorFrame *)arg1 didFinishWithError:(id)arg2;
- (void)compositionFrameDidCancel:(struct OpaqueFigVideoCompositorFrame *)arg1;
- (id)customVideoCompositor;
- (void)dealloc;
- (void)detachVideoComposition;
- (void)finalize;
- (id)getAndClearClientError;
- (id)initWithVideoComposition:(id)arg1;
- (void)setVideoComposition:(id)arg1;

@end

