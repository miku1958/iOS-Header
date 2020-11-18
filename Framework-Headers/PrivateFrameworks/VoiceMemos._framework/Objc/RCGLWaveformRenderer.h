//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <VoiceMemos/CAAnimationDelegate-Protocol.h>
#import <VoiceMemos/GLKViewDelegate-Protocol.h>
#import <VoiceMemos/RCWaveformDataSourceObserver-Protocol.h>

@class CADisplayLink, CALayer, EAGLContext, NSString, NSTimer, RCUIConfiguration, RCWaveformDataSource, UIView;
@protocol RCGLWaveformRendererDelegate;

@interface RCGLWaveformRenderer : UIViewController <GLKViewDelegate, RCWaveformDataSourceObserver, CAAnimationDelegate>
{
    EAGLContext *_eaglContext;
    CADisplayLink *_displayLink;
    unsigned int _vertexBuffers[2];
    CDStruct_73a5d3ca _renderedTimeRange;
    BOOL _renderedTimeRangeIsApproximatedWaveform;
    CDStruct_73a5d3ca _highlightTimeRange;
    vector_ec52ae8c _waveformVertexData;
    unsigned long long _renderedWaveformVertices;
    unsigned int _shaderProgram;
    int _projectionUniform;
    int _modelviewUniform;
    int _foregroundColorUniform;
    int _highlightColorUniform;
    int _highlightColorTimelineRange;
    BOOL _buffersInitialized;
    BOOL _shadersInitialized;
    BOOL _preparedForRendering;
    BOOL _centerKeylineRendered;
    struct CGRect _lastViewportRect;
    double _cachedContentWidth;
    BOOL _contentWidthDirty;
    NSTimer *_displayLinkTerminationTimer;
    CALayer *_modelviewLayer;
    BOOL _isAnimatingModelview;
    BOOL _needsVisibleRangeRendering;
    BOOL _hasDisplayedPreGLContentCenterline;
    UIView *_preGLContentCenterline;
    BOOL _frequentUpdatesSegmentUpdatesExpectedHint;
    BOOL _paused;
    BOOL _activeDisplayLinkRequired;
    RCWaveformDataSource *_dataSource;
    id<RCGLWaveformRendererDelegate> _rendererDelegate;
    double _spacingWidth;
    double _dataPointWidth;
    RCUIConfiguration *_UIConfiguration;
    CDStruct_73a5d3ca _visibleTimeRange;
}

@property (copy, nonatomic) RCUIConfiguration *UIConfiguration; // @synthesize UIConfiguration=_UIConfiguration;
@property (nonatomic, getter=isActiveDisplayLinkRequired) BOOL activeDisplayLinkRequired; // @synthesize activeDisplayLinkRequired=_activeDisplayLinkRequired;
@property (readonly, nonatomic) double contentWidth;
@property (nonatomic) double dataPointWidth; // @synthesize dataPointWidth=_dataPointWidth;
@property (strong, nonatomic) RCWaveformDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL frequentUpdatesSegmentUpdatesExpectedHint; // @synthesize frequentUpdatesSegmentUpdatesExpectedHint=_frequentUpdatesSegmentUpdatesExpectedHint;
@property (readonly) unsigned long long hash;
@property (nonatomic) CDStruct_73a5d3ca highlightTimeRange;
@property (nonatomic, getter=isPaused) BOOL paused; // @synthesize paused=_paused;
@property (weak, nonatomic) id<RCGLWaveformRendererDelegate> rendererDelegate; // @synthesize rendererDelegate=_rendererDelegate;
@property (nonatomic) double spacingWidth; // @synthesize spacingWidth=_spacingWidth;
@property (readonly) Class superclass;
@property (readonly, nonatomic) struct CGRect visibleRect;
@property (nonatomic) CDStruct_73a5d3ca visibleTimeRange; // @synthesize visibleTimeRange=_visibleTimeRange;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_cancelScheduledTerminateDisplayLink;
- (void)_clearRenderingState;
- (unsigned int)_compileShaderOfType:(unsigned int)arg1 pathToSource:(id)arg2;
- (BOOL)_currentViewportRequiresRenderingNewSegments;
- (void)_didBecomeActiveNotification:(id)arg1;
- (void)_displayLinkDidUpdate:(id)arg1;
- (void)_draw:(id)arg1;
- (CDStruct_73a5d3ca)_highlightTimeRange;
- (double)_nonCachedContentWidth;
- (id)_pathForShader:(id)arg1;
- (void)_performOrDispatchToMainThread:(CDUnknownBlockType)arg1;
- (void)_performScheduledTerminateDisplayLink;
- (float)_pixelOffsetForTime:(double)arg1;
- (float)_pixelsPerSecond;
- (float)_pixelsPerSecondWithVisibleTimeRange:(CDStruct_73a5d3ca)arg1;
- (void)_prepareForRendering;
- (void)_renderCenterKeylineIfNeeded;
- (void)_renderSegments:(id)arg1 timeRangeOfSegments:(CDStruct_73a5d3ca)arg2 isApproximatedWaveform:(BOOL)arg3;
- (void)_renderVisibleTimeRangeImmediately;
- (void)_scheduleTerminateDisplayLink;
- (void)_setNeedsRendering;
- (void)_setNeedsVisibleTimeRangeRendering;
- (void)_setupBuffers;
- (void)_setupGL;
- (void)_setupNotifications;
- (void)_setupShaders;
- (void)_startRendering;
- (void)_startTemporarilyShowingPreGLCenterLine;
- (void)_startUpdating;
- (void)_stopRendering;
- (void)_stopShowingPreGLCenterLine;
- (void)_stopUpdating;
- (void)_teardownNotifications;
- (double)_timeForPixelOffset:(float)arg1;
- (double)_timeForPixelOffset:(float)arg1 withVisibleTimeRange:(CDStruct_73a5d3ca)arg2;
- (CDStruct_73a5d3ca)_timeRangeToRenderForVisibleTimeRange:(CDStruct_73a5d3ca)arg1;
- (void)_updateClearColor;
- (void)_updateForegroundColor;
- (void)_updateHighlightTimeRange;
- (void)_updateModelview;
- (void)_updateProjection;
- (void)_willResignActiveNotification:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)dealloc;
- (void)glkView:(id)arg1 drawInRect:(struct CGRect)arg2;
- (void)glkViewRenderingContextValidityDidChange:(id)arg1;
- (double)horizontalOffsetAtTime:(double)arg1;
- (double)horizontalOffsetAtTime:(double)arg1 withVisibleTimeRange:(CDStruct_73a5d3ca)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (double)pointsPerSecondWithVisibleTimeRange:(CDStruct_73a5d3ca)arg1;
- (id)rasterizeTimeRange:(CDStruct_73a5d3ca)arg1 imageSize:(struct CGSize)arg2;
- (void)setVisibleTimeRange:(CDStruct_73a5d3ca)arg1 withAnimationDuration:(double)arg2;
- (double)timeAtHorizontalOffset:(double)arg1;
- (double)timeAtHorizontalOffset:(double)arg1 withVisibleTimeRange:(CDStruct_73a5d3ca)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)waveformDataSource:(id)arg1 didLoadWaveformSegment:(id)arg2;
- (void)waveformDataSourceDidFinishLoading:(id)arg1;
- (void)willMoveToParentViewController:(id)arg1;

@end

