//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CADisplayLink, EAGLContext, UIScreen;

@interface HKGLView : UIView
{
    EAGLContext *_context;
    UIScreen *_screen;
    CADisplayLink *_displayLink;
    BOOL _displayLinkPaused;
    BOOL _viewWillMoveToWindow;
    double _lastUpdateTime;
    unsigned int _latestDrawError;
    int _drawableWidth;
    int _drawableHeight;
    BOOL _shouldDeleteFramebuffer;
    unsigned int _resolveColorRenderbuffer;
    unsigned int _multisampleFramebuffer;
    unsigned int _multisampleColorRenderbuffer;
    unsigned int _resolveFramebuffer;
    unsigned int _depthRenderbuffer;
    BOOL _contextPushed;
    BOOL _viewSnapshottingActive;
    BOOL _synchronizesWithCA;
    BOOL _use4XMSAA;
    BOOL _shouldBypassApplicationStateChecking;
    BOOL _viewIsVisible;
    float _preferredFramesPerSecond;
    int _drawableDepthFormat;
}

@property (nonatomic) int drawableDepthFormat; // @synthesize drawableDepthFormat=_drawableDepthFormat;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (nonatomic) float preferredFramesPerSecond; // @synthesize preferredFramesPerSecond=_preferredFramesPerSecond;
@property (nonatomic) BOOL shouldBypassApplicationStateChecking; // @synthesize shouldBypassApplicationStateChecking=_shouldBypassApplicationStateChecking;
@property (nonatomic) BOOL synchronizesWithCA; // @synthesize synchronizesWithCA=_synchronizesWithCA;
@property (readonly, nonatomic) double timeSinceLastUpdate;
@property (nonatomic) BOOL use4XMSAA; // @synthesize use4XMSAA=_use4XMSAA;
@property (readonly, nonatomic) BOOL viewIsVisible; // @synthesize viewIsVisible=_viewIsVisible;

+ (void)clearCachedProgramForVertexShader:(id)arg1 fragmentShader:(id)arg2;
+ (Class)layerClass;
- (void).cxx_destruct;
- (BOOL)_canDrawContent;
- (void)_context_checkAndRepairFramebuffer;
- (BOOL)_context_createFramebuffer;
- (void)_context_deleteFramebuffer;
- (void)_context_displayAndPresentFramebuffer:(BOOL)arg1;
- (void)_context_drawRect:(struct CGRect)arg1;
- (id)_context_generateSnapshot;
- (void)_context_prepareFramebuffer:(BOOL *)arg1;
- (BOOL)_context_presentFramebuffer;
- (void)_context_resolveAndDiscardFramebuffer;
- (BOOL)_controlsOwnScaleFactor;
- (void)_createDisplayLinkForScreen:(id)arg1;
- (void)_deleteFramebuffer;
- (void)_displayLinkFired;
- (void)_invalidateLastUpdateTime;
- (BOOL)_isLastUpdateTimeValid;
- (void)_pauseByNotification:(id)arg1;
- (void)_resumeByNotification:(id)arg1;
- (BOOL)_shouldAllowRendering;
- (void)_update;
- (void)_updateGLLayerIsAsynchronous;
- (void)_updateScreenIfChanged;
- (void)_viewSnapshottingDidEnd;
- (void)_viewSnapshottingWillBegin;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)displayLayer:(id)arg1;
- (unsigned int)drawInRect:(struct CGRect)arg1 withContext:(id)arg2;
- (id)initWithContext:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 context:(id)arg2;
- (void)layoutSubviews;
- (void)loadVertexShader:(id)arg1 fragmentShader:(id)arg2 inBundle:(id)arg3 forProgram:(unsigned int *)arg4 cache:(BOOL)arg5;
- (void)loadVertexShaderSource:(id)arg1 fragmentShaderSource:(id)arg2 forProgram:(unsigned int *)arg3;
- (void)performWithContext:(CDUnknownBlockType)arg1;
- (void)setContentScaleFactor:(double)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)snapshot;
- (void)update;
- (void)willMoveToSuperview:(id)arg1;
- (void)willMoveToWindow:(id)arg1;

@end

