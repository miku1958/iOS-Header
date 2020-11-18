//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <VoiceMemos/CAAnimationDelegate-Protocol.h>
#import <VoiceMemos/RCDisplayLinkObserver-Protocol.h>
#import <VoiceMemos/RCWaveformDataSourceObserver-Protocol.h>

@class NSArray, NSMutableDictionary, NSMutableIndexSet, NSObject, NSString, RCWaveformDataSource;
@protocol OS_dispatch_queue, RCWaveformRendererDelegate;

__attribute__((visibility("hidden")))
@interface RCWaveformRenderer : UIViewController <RCWaveformDataSourceObserver, RCDisplayLinkObserver, CAAnimationDelegate>
{
    BOOL displayLinkConnected;
    CDStruct_73a5d3ca _renderedTimeRange;
    double _cachedContentWidth;
    BOOL _needsVisibleRangeRendering;
    BOOL _isCompactView;
    CDStruct_73a5d3ca _waveformAmpSlicesForRenderingTimeRange;
    struct _NSRange _waveformAmpSlicesForRenderingIndexRange;
    BOOL _waveformAmpSlicesForRenderingRecordStateChanged;
    NSObject<OS_dispatch_queue> *_renderingQueue;
    CDStruct_73a5d3ca _lastVisibleTimeRange;
    double _visibleTimeRangeVelocity;
    struct _RCWaveformRendererState _rendererState;
    BOOL _frequentUpdatesSegmentUpdatesExpectedHint;
    BOOL _isRecordWaveform;
    BOOL _isEditMode;
    BOOL _isPlayback;
    BOOL _isOverview;
    BOOL _isPlayBarOnlyMode;
    BOOL _requiresFullRefresh;
    BOOL _syncRenderOnMainThread;
    BOOL _paused;
    BOOL _activeDisplayLinkRequired;
    BOOL _overviewRecordingWaveformRefresh;
    BOOL _renderingQueueIsBusy;
    BOOL _renderReadyForDraw;
    RCWaveformDataSource *_dataSource;
    id<RCWaveformRendererDelegate> _rendererDelegate;
    double _spacingWidth;
    double _dataPointWidth;
    CDUnknownBlockType _nextRenderBlock;
    NSArray *_waveformAmpSlicesForRendering;
    NSMutableDictionary *_waveformSlices;
    NSMutableIndexSet *_waveformSliceIndexes;
    CDStruct_73a5d3ca _visibleTimeRange;
    CDStruct_73a5d3ca _highlightTimeRange;
}

@property (nonatomic, getter=isActiveDisplayLinkRequired) BOOL activeDisplayLinkRequired; // @synthesize activeDisplayLinkRequired=_activeDisplayLinkRequired;
@property (readonly, nonatomic) double contentWidth;
@property (nonatomic) double dataPointWidth; // @synthesize dataPointWidth=_dataPointWidth;
@property (strong, nonatomic) RCWaveformDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL frequentUpdatesSegmentUpdatesExpectedHint; // @synthesize frequentUpdatesSegmentUpdatesExpectedHint=_frequentUpdatesSegmentUpdatesExpectedHint;
@property (readonly) unsigned long long hash;
@property (nonatomic) CDStruct_73a5d3ca highlightTimeRange; // @synthesize highlightTimeRange=_highlightTimeRange;
@property (nonatomic) BOOL isCompactView; // @synthesize isCompactView=_isCompactView;
@property (nonatomic) BOOL isEditMode; // @synthesize isEditMode=_isEditMode;
@property (nonatomic) BOOL isOverview; // @synthesize isOverview=_isOverview;
@property (nonatomic) BOOL isPlayBarOnlyMode; // @synthesize isPlayBarOnlyMode=_isPlayBarOnlyMode;
@property (nonatomic) BOOL isPlayback; // @synthesize isPlayback=_isPlayback;
@property (nonatomic) BOOL isRecordWaveform; // @synthesize isRecordWaveform=_isRecordWaveform;
@property (copy) CDUnknownBlockType nextRenderBlock; // @synthesize nextRenderBlock=_nextRenderBlock;
@property BOOL overviewRecordingWaveformRefresh; // @synthesize overviewRecordingWaveformRefresh=_overviewRecordingWaveformRefresh;
@property (nonatomic, getter=isPaused) BOOL paused; // @synthesize paused=_paused;
@property BOOL renderReadyForDraw; // @synthesize renderReadyForDraw=_renderReadyForDraw;
@property (weak, nonatomic) id<RCWaveformRendererDelegate> rendererDelegate; // @synthesize rendererDelegate=_rendererDelegate;
@property BOOL renderingQueueIsBusy; // @synthesize renderingQueueIsBusy=_renderingQueueIsBusy;
@property (nonatomic) BOOL requiresFullRefresh; // @synthesize requiresFullRefresh=_requiresFullRefresh;
@property (nonatomic) double spacingWidth; // @synthesize spacingWidth=_spacingWidth;
@property (readonly) Class superclass;
@property (nonatomic) BOOL syncRenderOnMainThread; // @synthesize syncRenderOnMainThread=_syncRenderOnMainThread;
@property (readonly, nonatomic) struct CGRect visibleRect;
@property (nonatomic) CDStruct_73a5d3ca visibleTimeRange; // @synthesize visibleTimeRange=_visibleTimeRange;
@property (strong) NSArray *waveformAmpSlicesForRendering; // @synthesize waveformAmpSlicesForRendering=_waveformAmpSlicesForRendering;
@property (strong) NSMutableIndexSet *waveformSliceIndexes; // @synthesize waveformSliceIndexes=_waveformSliceIndexes;
@property (strong) NSMutableDictionary *waveformSlices; // @synthesize waveformSlices=_waveformSlices;

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)_clearRenderingState;
- (void)_draw:(double)arg1;
- (double)_duration;
- (BOOL)_needsWaveformRendering;
- (double)_nonCachedContentWidthWithDuration:(double)arg1;
- (void)_performOrDispatchToMainThread:(CDUnknownBlockType)arg1;
- (double)_pixelOffsetForTime:(double)arg1;
- (double)_pixelsPerSecond;
- (double)_pixelsPerSecondWithVisibleTimeRange:(CDStruct_73a5d3ca)arg1;
- (void)_renderTimeRangeOfSegments:(CDStruct_73a5d3ca)arg1 withDuration:(double)arg2 needsWaveformCalculation:(BOOL)arg3;
- (void)_renderVisibleTimeRangeWithDuration:(double)arg1;
- (void)_setNeedsRendering;
- (void)_setNeedsVisibleTimeRangeRendering;
- (void)_startRendering;
- (void)_startUpdating;
- (void)_stopRendering;
- (void)_stopUpdating;
- (double)_timeForPixelOffset:(double)arg1;
- (double)_timeForPixelOffset:(double)arg1 withVisibleTimeRange:(CDStruct_73a5d3ca)arg2;
- (void)_updateOverviewUnitsPerSecond;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)dealloc;
- (void)displayLinkDidUpdate:(id)arg1 withTimeController:(id)arg2;
- (double)horizontalOffsetAtTime:(double)arg1;
- (double)horizontalOffsetAtTime:(double)arg1 withVisibleTimeRange:(CDStruct_73a5d3ca)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (double)pointsPerSecondWithVisibleTimeRange:(CDStruct_73a5d3ca)arg1;
- (id)rasterizeTimeRange:(CDStruct_73a5d3ca)arg1 imageSize:(struct CGSize)arg2;
- (double)timeAtHorizontalOffset:(double)arg1;
- (double)timeAtHorizontalOffset:(double)arg1 withVisibleTimeRange:(CDStruct_73a5d3ca)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)waveformDataSource:(id)arg1 didLoadWaveformSegment:(id)arg2;
- (void)waveformDataSourceDidFinishLoading:(id)arg1;
- (void)waveformDataSourceRequiresUpdate:(id)arg1;
- (void)willMoveToParentViewController:(id)arg1;

@end
