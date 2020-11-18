//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <HealthUI/HKGraphRenderDelegate-Protocol.h>
#import <HealthUI/HKMultiTouchPressGestureRecognizerDelegate-Protocol.h>
#import <HealthUI/HKScrollPerformanceTestable-Protocol.h>
#import <HealthUI/HKSeriesDelegate-Protocol.h>
#import <HealthUI/UIScrollViewDelegate-Protocol.h>

@class HKAxis, HKBorderLineView, HKGraphViewSelectionStyle, HKMultiTouchPressGestureRecognizer, HKPropertyAnimationApplier, HKValueRange, NSArray, NSMutableArray, NSSet, NSString, UIColor, UIImage, UIScrollView;
@protocol HKGraphRenderer, HKGraphViewDelegate;

@interface HKGraphView : UIView <UIScrollViewDelegate, HKSeriesDelegate, HKGraphRenderDelegate, HKMultiTouchPressGestureRecognizerDelegate, HKScrollPerformanceTestable>
{
    NSMutableArray *_seriesGroupRows;
    BOOL _needsUpdateGraphViewConfiguration;
    HKPropertyAnimationApplier *_animationApplier;
    BOOL _shouldInformDelegateOfUpdates;
    BOOL _shouldListenToScrollViewDelegate;
    HKValueRange *_chartableValueRange;
    UIImage *_topFeatheringImage;
    UIImage *_rightFeatheringImage;
    UIImage *_bottomFeatheringImage;
    UIImage *_leftFeatheringImage;
    UIView<HKGraphRenderer> *_renderView;
    UIScrollView *_scrollView;
    UIView *_scrollViewContent;
    HKBorderLineView *_leftMarginView;
    UIView<HKGraphRenderer> *_yAxisLabelContent;
    double _yAxisLabelMinimumWidth;
    BOOL _subviewsHaveBeenLaidOut;
    BOOL _disableXAxis;
    BOOL _disableScrolling;
    BOOL _disableSelection;
    BOOL _contentWidthFromTimeScope;
    BOOL _enableStickySelection;
    BOOL _enableZoomInGesture;
    BOOL _enableInteractiveSelectionLine;
    id<HKGraphViewDelegate> _delegate;
    HKAxis *_xAxis;
    double _xAxisSpace;
    UIColor *_outlineColor;
    UIColor *_topMarginColor;
    unsigned long long _outlineOptions;
    unsigned long long _featheringOptions;
    HKGraphViewSelectionStyle *_selectionStyle;
    long long _xAxisDateZoom;
    HKValueRange *_effectiveAxisRange;
    HKValueRange *_actualAxisRange;
    double _hardLeftMarginWidth;
    double _virtualLeftMarginWidth;
    double _virtualRightMarginWidth;
    long long _virtualLeftMarginStyle;
    long long _virtualRightMarginStyle;
    HKValueRange *_actualVisibleRange;
    HKValueRange *_effectiveVisibleRangeCadence;
    HKValueRange *_effectiveVisibleRangeActive;
    long long _minimumDateZoom;
    long long _maximumDateZoom;
    HKMultiTouchPressGestureRecognizer *_multiTouchGestureRecognizer;
    double _zoomScale;
    UIView *_detailView;
    HKValueRange *_destinationEffectiveVisibleRangeActive;
    NSSet *_yAxisAccessoryViews;
    struct CGPoint _contentOffset;
    struct UIEdgeInsets _axisInset;
}

@property (readonly, nonatomic) HKValueRange *actualAxisRange; // @synthesize actualAxisRange=_actualAxisRange;
@property (readonly, nonatomic) HKValueRange *actualVisibleRange; // @synthesize actualVisibleRange=_actualVisibleRange;
@property (readonly, nonatomic) NSArray *allSeries;
@property (nonatomic) struct UIEdgeInsets axisInset; // @synthesize axisInset=_axisInset;
@property (strong, nonatomic) HKValueRange *chartableValueRange;
@property (nonatomic) struct CGPoint contentOffset; // @synthesize contentOffset=_contentOffset;
@property (nonatomic) BOOL contentWidthFromTimeScope; // @synthesize contentWidthFromTimeScope=_contentWidthFromTimeScope;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HKGraphViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) HKValueRange *destinationEffectiveVisibleRangeActive; // @synthesize destinationEffectiveVisibleRangeActive=_destinationEffectiveVisibleRangeActive;
@property (strong, nonatomic) UIView *detailView; // @synthesize detailView=_detailView;
@property (nonatomic) BOOL disableScrolling; // @synthesize disableScrolling=_disableScrolling;
@property (nonatomic) BOOL disableSelection; // @synthesize disableSelection=_disableSelection;
@property (nonatomic) BOOL disableXAxis; // @synthesize disableXAxis=_disableXAxis;
@property (readonly, nonatomic) HKValueRange *effectiveAxisRange; // @synthesize effectiveAxisRange=_effectiveAxisRange;
@property (readonly, nonatomic) HKValueRange *effectiveVisibleRangeActive; // @synthesize effectiveVisibleRangeActive=_effectiveVisibleRangeActive;
@property (readonly, nonatomic) HKValueRange *effectiveVisibleRangeCadence; // @synthesize effectiveVisibleRangeCadence=_effectiveVisibleRangeCadence;
@property (nonatomic) BOOL enableInteractiveSelectionLine; // @synthesize enableInteractiveSelectionLine=_enableInteractiveSelectionLine;
@property (nonatomic) BOOL enableStickySelection; // @synthesize enableStickySelection=_enableStickySelection;
@property (nonatomic) BOOL enableZoomInGesture; // @synthesize enableZoomInGesture=_enableZoomInGesture;
@property (nonatomic) unsigned long long featheringOptions; // @synthesize featheringOptions=_featheringOptions;
@property (nonatomic) double hardLeftMarginWidth; // @synthesize hardLeftMarginWidth=_hardLeftMarginWidth;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isScrollViewDecelerating;
@property (readonly, nonatomic) struct CGRect leftMarginViewRect;
@property (nonatomic) long long maximumDateZoom; // @synthesize maximumDateZoom=_maximumDateZoom;
@property (nonatomic) long long minimumDateZoom; // @synthesize minimumDateZoom=_minimumDateZoom;
@property (readonly, nonatomic) HKMultiTouchPressGestureRecognizer *multiTouchGestureRecognizer; // @synthesize multiTouchGestureRecognizer=_multiTouchGestureRecognizer;
@property (copy, nonatomic) UIColor *outlineColor; // @synthesize outlineColor=_outlineColor;
@property (nonatomic) unsigned long long outlineOptions; // @synthesize outlineOptions=_outlineOptions;
@property (strong, nonatomic) HKGraphViewSelectionStyle *selectionStyle; // @synthesize selectionStyle=_selectionStyle;
@property (readonly) Class superclass;
@property (copy, nonatomic) UIColor *topMarginColor; // @synthesize topMarginColor=_topMarginColor;
@property (nonatomic) long long virtualLeftMarginStyle; // @synthesize virtualLeftMarginStyle=_virtualLeftMarginStyle;
@property (nonatomic) double virtualLeftMarginWidth; // @synthesize virtualLeftMarginWidth=_virtualLeftMarginWidth;
@property (nonatomic) long long virtualRightMarginStyle; // @synthesize virtualRightMarginStyle=_virtualRightMarginStyle;
@property (nonatomic) double virtualRightMarginWidth; // @synthesize virtualRightMarginWidth=_virtualRightMarginWidth;
@property (copy, nonatomic) HKAxis *xAxis; // @synthesize xAxis=_xAxis;
@property (readonly, nonatomic) long long xAxisDateZoom; // @synthesize xAxisDateZoom=_xAxisDateZoom;
@property (nonatomic) double xAxisSpace; // @synthesize xAxisSpace=_xAxisSpace;
@property (strong, nonatomic) NSSet *yAxisAccessoryViews; // @synthesize yAxisAccessoryViews=_yAxisAccessoryViews;
@property (readonly, nonatomic) double yAxisWidth;
@property (nonatomic) double zoomScale; // @synthesize zoomScale=_zoomScale;

+ (double)_modelCoordinateSpanForRange:(id)arg1 axis:(id)arg2;
+ (id)_rangeFromModelCoordinateMin:(double)arg1 max:(double)arg2 axis:(id)arg3;
- (void).cxx_destruct;
- (void)_activateStickySelection;
- (id)_actualVisibleRangeFromEffectiveVisibleRange:(id)arg1 dataAreaRect:(struct CGRect)arg2;
- (void)_addSelectionRecognizerToView:(id)arg1;
- (void)_addTapGestureRecognizerForTapOnView:(id)arg1;
- (void)_addTapGestureRecognizerForTogglingStickyToView:(id)arg1;
- (BOOL)_anySeriesAnimatingDuringAutoscale;
- (void)_autoScaleXAxis;
- (void)_autoScaleYAxisIfNecessaryForAllGroups;
- (void)_autoScaleYAxisIfNecessaryForGroupRow:(long long)arg1;
- (BOOL)_axisRangeIsDateRange;
- (void)_clearRenderViewIfNecessary;
- (CDStruct_767cbfa4)_closestDataPointPathToPoint:(struct CGPoint)arg1 seriesGroupRow:(long long)arg2 minimumXDistance:(double)arg3;
- (id)_closestSeriesToPoint:(struct CGPoint)arg1 allSeries:(id)arg2;
- (BOOL)_configureYAxisViewIfNeeded;
- (double)_contentWidth;
- (long long)_countOfAllSeries;
- (void)_createLegendForSeriesGroup:(id)arg1;
- (void)_createLegendsIfNecessary;
- (struct UIEdgeInsets)_currentLegendInsets;
- (long long)_currentSelectionStateForSeriesGroup:(id)arg1;
- (struct CGRect)_dataAreaRect;
- (void)_deactivateStickySelection;
- (id)_defaultXAxisValueRange;
- (void)_deselectAllSeriesWithAlpha:(double)arg1 offScreenIndicatorAlpha:(double)arg2 seriesGroup:(id)arg3;
- (double)_detailViewWidth;
- (id)_effectiveVisibleRangeFromActualVisibleRange:(id)arg1;
- (void)_enumerateSeriesSelectionRegionsForSeriesGroup:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)_findActualAxisRangeFromVisibleRanges;
- (id)_firstSelectionContext;
- (id)_firstSeries;
- (void)_forceYAxisAutoScaleForSeriesGroupRow:(long long)arg1 animated:(BOOL)arg2;
- (id)_graphSeriesForZoom:(long long)arg1 seriesGroupRow:(long long)arg2;
- (BOOL)_graphViewIsConfigured;
- (void)_handleStartTouchPoint:(struct CGPoint)arg1 seriesGroupRow:(long long)arg2;
- (double)_inactiveRightAreaForRect:(struct CGRect)arg1;
- (void)_installAccessoryViews;
- (void)_layoutDetailView;
- (void)_layoutLegends;
- (void)_layoutYAxisAccessoryViews;
- (void)_loadFeatheringImages;
- (void)_loadScrollView;
- (void)_loadSeriesForZoom:(long long)arg1;
- (struct _HKLocationSpan)_locationSpanForSeriesGroupRow:(long long)arg1;
- (double)_maxTimeThreshold;
- (double)_maximumZoomScale;
- (void)_moveSeriesToFront:(id)arg1;
- (BOOL)_needsYAxisUpdateDuringRender;
- (void)_notifyDateZoomDidChangeFromValue:(long long)arg1 toValue:(long long)arg2;
- (void)_notifyDelegateOfFinishUserScrolling;
- (void)_notifyDelegateOfSizeChange;
- (void)_notifyDelegateOfTapOnYAxis;
- (void)_notifyDelegateOfVisibleValueRange:(id)arg1 changeContext:(long long)arg2;
- (void)_notifyDelegateOfYAxisWidth:(double)arg1 toWidth:(double)arg2;
- (void)_notifyDelegateSeriesUpdate:(id)arg1 newDataArrived:(BOOL)arg2;
- (void)_notifyDidBeginSelection;
- (void)_notifyDidEndSelection;
- (void)_notifyDidUpdateSelectionWithPointContext:(id)arg1;
- (void)_pauseChartInteraction;
- (id)_pointSelectionContextWithTouchPoints:(id)arg1 seriesGroupRow:(long long)arg2 updateViewStates:(BOOL)arg3;
- (void)_preserveDestinationActiveRange:(id)arg1;
- (id)_rangeFromRange:(id)arg1 withStartOfRange:(id)arg2;
- (void)_reloadViewScope;
- (void)_removeSelectionRecognizerFromView:(id)arg1;
- (void)_renderBaseline;
- (void)_renderDataAreaDividersWithContext:(struct CGContext *)arg1;
- (void)_renderSelectionLineWithContext:(struct CGContext *)arg1;
- (void)_renderSeriesWithContext:(struct CGContext *)arg1 secondaryRenderContext:(id)arg2;
- (void)_renderVirtualMarginGridLines:(struct CGRect)arg1 context:(struct CGContext *)arg2;
- (void)_renderVirtualMarginInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2 marginStyle:(long long)arg3;
- (void)_renderVirtualMarginsWithContext:(struct CGContext *)arg1;
- (void)_renderXAxisGridlinesWithBlendMode:(int)arg1;
- (BOOL)_renderXAxisLabelAndGridsNeedsNewRenderer;
- (double)_renderXAxisLabels;
- (void)_renderYAxisDividersWithContext:(struct CGContext *)arg1;
- (void)_renderYAxisGridlinesWithBlendMode:(int)arg1;
- (void)_renderYAxisLabels;
- (void)_restoreDestinationActiveRange;
- (void)_resumeChartInteraction;
- (void)_scrollToCurrentVisibleRangeAnimated:(BOOL)arg1;
- (struct CGRect)_scrollingAreaRect;
- (id)_selectedRegionForTouchPoint:(struct CGPoint)arg1 seriesGroup:(id)arg2;
- (void)_selectionRecognizerDidBegin:(id)arg1;
- (void)_selectionRecognizerDidBeginWithTouchPoint:(struct CGPoint)arg1;
- (void)_selectionRecognizerDidFinish:(id)arg1;
- (void)_selectionRecognizerDidMove:(id)arg1;
- (void)_selectionRecognizerDidMoveWithTouchPoints:(id)arg1;
- (void)_selectionRecognizerDidUpdate:(id)arg1;
- (id)_seriesForCommonAxesForSeriesGroup:(id)arg1;
- (BOOL)_seriesGroupHasLegendEntries:(id)arg1;
- (void)_setNeedsUpdateGraphViewConfiguration;
- (void)_setRangesForActiveVisibleRange:(id)arg1;
- (void)_setVisibleRangesForEffectiveRangeCadence:(id)arg1;
- (void)_setYAxisAccessoryViews:(id)arg1;
- (BOOL)_simultaneousAxesAreEqualForSeriesGroup:(id)arg1;
- (void)_snapXAxisRangeToPreservedRange;
- (BOOL)_stickySelectionActive;
- (void)_tapOnViewAction:(id)arg1;
- (void)_toggleStickySelectionAction:(id)arg1;
- (struct CGPoint)_touchPointForSeriesGroupIndex:(long long)arg1 originalTouchPoint:(struct CGPoint)arg2;
- (BOOL)_touchesActuallyMoved:(id)arg1;
- (void)_updateAndNotifySelectedContextChangeForAllSeriesIfNecesssary;
- (void)_updateAxisZoomScaleValueRange;
- (void)_updateDateZoomIfNecessary;
- (void)_updateEffectiveAxisRange:(id)arg1 effectiveVisibleRangeCadence:(id)arg2 effectiveVisibleRangeActive:(id)arg3 virtualLeftMarginWidth:(double)arg4 virtualRightMarginWidth:(double)arg5;
- (void)_updateGraphViewConfiguration;
- (void)_updateGraphViewConfigurationIfNecessary;
- (void)_updateLegendForSeriesGroup:(id)arg1;
- (void)_updateRangesForEffectiveAxisRange:(id)arg1 effectiveVisibleRangeCadence:(id)arg2 effectiveVisibleRangeActive:(id)arg3;
- (void)_updateScene;
- (void)_updateScrollViewPropertiesIgnoringScrollViewCallbacks:(CDUnknownBlockType)arg1;
- (void)_updateSelectionContextStateWithTouchPoint:(struct CGPoint)arg1 seriesGroup:(id)arg2;
- (void)_updateZoomForParameters;
- (id)_valueForXAxisLocation:(double)arg1;
- (struct CGRect)_verticalAxisRect;
- (id)_visibleSeriesForSeriesGroup:(id)arg1;
- (void)_walkAllSeries:(CDUnknownBlockType)arg1;
- (struct CGAffineTransform)_xAxisCoordinateTransform;
- (id)_yAxisRangeForSynchronizedAxesForDateZoom:(long long)arg1 chartRect:(struct CGRect)arg2 seriesGroup:(id)arg3;
- (struct CGRect)_yAxisRectForSeriesGroupRow:(long long)arg1;
- (struct CGRect)_yAxisRectForSeriesGroupRowOld:(long long)arg1;
- (void)enumerateVisibleCoordinatesWithBlock:(CDUnknownBlockType)arg1;
- (id)findVisibleBlockCoordinatesForPrimarySeries;
- (void)finishSelection;
- (void)forceYAxisAutoScaleAnimated:(BOOL)arg1;
- (void)forceYAxisScaleToRange:(id)arg1 animated:(BOOL)arg2;
- (void)gestureWillBeginWithRecognizer:(id)arg1;
- (void)graphRenderer:(id)arg1 shouldRenderSceneWithContext:(struct CGContext *)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)invalidateDataSourceCaches;
- (void)layoutSubviews;
- (id)primarySeries;
- (void)removeSeries;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)seriesDidInvalidatePaths:(id)arg1 newDataArrived:(BOOL)arg2;
- (BOOL)seriesDrawingDuringScrolling;
- (void)setAxesToShowSimultaneously:(id)arg1 stackOffset:(long long)arg2;
- (void)setBackgroundColor:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(BOOL)arg2;
- (void)setEffectiveAxisRange:(id)arg1 effectiveVisibleRangeCadence:(id)arg2 effectiveVisibleRangeActive:(id)arg3;
- (void)setEffectiveVisibleRangeActive:(id)arg1 animated:(BOOL)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)setNeedsReloadSeries;
- (void)setPreviousDateZoom:(long long)arg1;
- (void)setRenderView:(id)arg1;
- (void)setVirtualLeftMargin:(double)arg1;
- (void)setVirtualRightMargin:(double)arg1;
- (void)setZoomScale:(double)arg1 animated:(BOOL)arg2;
- (BOOL)stillAnimating:(id)arg1;
- (void)testScrollPerformanceWithTestName:(id)arg1 iterations:(int)arg2 delta:(int)arg3 options:(id)arg4;
- (id)viewForZoomingInScrollView:(id)arg1;
- (struct UIEdgeInsets)virtualMarginInsets;

@end

