//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GLKit/GLKView.h>

#import <HealthKitUI/GLKViewDelegate-Protocol.h>

@class CADisplayLink, NSString, UIScreen;

@interface HKGLView : GLKView <GLKViewDelegate>
{
    UIScreen *_screen;
    CADisplayLink *_displayLink;
    long long _displayLinkFrameInterval;
    BOOL _displayLinkPaused;
    BOOL _viewIsVisible;
    double _lastUpdateTime;
    BOOL _needsRender;
    unsigned int _latestDrawErrror;
    BOOL _synchronizesWithCA;
    long long _preferredFramesPerSecond;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (nonatomic) long long preferredFramesPerSecond; // @synthesize preferredFramesPerSecond=_preferredFramesPerSecond;
@property (readonly) Class superclass;
@property (nonatomic) BOOL synchronizesWithCA; // @synthesize synchronizesWithCA=_synchronizesWithCA;
@property (readonly, nonatomic) double timeSinceLastUpdate;

- (void).cxx_destruct;
- (void)_createDisplayLinkForScreen:(id)arg1;
- (void)_displayLinkFired;
- (void)_invalidateLastUpdateTime;
- (BOOL)_isLastUpdateTimeValid;
- (void)_loadVertexShader:(id)arg1 fragmentShader:(id)arg2 inBundle:(id)arg3 forProgram:(unsigned int *)arg4 cache:(BOOL)arg5;
- (BOOL)_needsDisplayLink;
- (void)_pauseByNotification;
- (void)_resumeByNotification;
- (void)_update;
- (void)_updateGLLayerIsAsynchronous;
- (void)_updateScreenIfChanged;
- (void)dealloc;
- (void)didMoveToWindow;
- (unsigned int)drawInRect:(struct CGRect)arg1;
- (void)glkView:(id)arg1 drawInRect:(struct CGRect)arg2;
- (id)init;
- (void)layoutSubviews;
- (void)setNeedsRender;
- (id)snapshot;
- (void)update;
- (BOOL)viewIsVisible;
- (void)willMoveToSuperview:(id)arg1;
- (void)willMoveToWindow:(id)arg1;

@end

