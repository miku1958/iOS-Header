//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKitUI/HKGraphSeriesDataSourceDelegate-Protocol.h>

@class HKAxis, HKGraphSeriesDataSource, HKPropertyAnimationApplier, NSMutableDictionary, NSNumber, NSString, NSUUID, UIColor;
@protocol HKGraphSeriesAxisScalingRule, HKSeriesDelegate;

@interface HKGraphSeries : NSObject <HKGraphSeriesDataSourceDelegate>
{
    BOOL _dirty;
    CDStruct_767cbfa4 _selectedPointPath;
    NSMutableDictionary *_cachedCoordinateListsByBlockPath;
    NSMutableDictionary *_cachedDataBlocksByBlockPath;
    NSNumber *_closestSelectedXCoordinate;
    HKPropertyAnimationApplier *_animationApplier;
    HKGraphSeriesDataSource *_dataSource;
    id<HKSeriesDelegate> _delegate;
    double _alpha;
    double _offscreenIndicatorAlpha;
    NSUUID *_UUID;
    HKAxis *_yAxis;
    id<HKGraphSeriesAxisScalingRule> _axisScalingRule;
    UIColor *_offScreenIndicatorColor;
}

@property (readonly, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
@property (nonatomic) double alpha; // @synthesize alpha=_alpha;
@property (strong, nonatomic) id<HKGraphSeriesAxisScalingRule> axisScalingRule; // @synthesize axisScalingRule=_axisScalingRule;
@property (strong, nonatomic) HKGraphSeriesDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HKSeriesDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIColor *offScreenIndicatorColor; // @synthesize offScreenIndicatorColor=_offScreenIndicatorColor;
@property (nonatomic) double offscreenIndicatorAlpha; // @synthesize offscreenIndicatorAlpha=_offscreenIndicatorAlpha;
@property (readonly) Class superclass;
@property (copy, nonatomic) HKAxis *yAxis; // @synthesize yAxis=_yAxis;

- (void).cxx_destruct;
- (void)_cacheCoordinates:(id)arg1 forBlockPath:(CDStruct_6ca94699)arg2;
- (id)_cachedCoordinatesForBlockPath:(CDStruct_6ca94699)arg1;
- (id)_coordinateListsForGeneratorWithXAxis:(id)arg1 zoomScale:(double)arg2 chartRect:(struct CGRect)arg3 contentOffset:(struct CGPoint)arg4;
- (id)_coordinateListsWithXValueRange:(id)arg1 xAxis:(id)arg2 zoomLevel:(long long)arg3;
- (id)_coordinatesForBlockPath:(CDStruct_6ca94699)arg1 xAxis:(id)arg2;
- (id)_dataBlockForBlockPath:(CDStruct_6ca94699)arg1;
- (void)_enumeratePathIndexesInDateRange:(id)arg1 zoomLevel:(long long)arg2 block:(CDUnknownBlockType)arg3;
- (void)_sendInvalidateToDelegate;
- (void)_setDirty;
- (id)_valueRangeForYAxisWithXAxisRange:(id)arg1 xAxis:(id)arg2 dateZoom:(long long)arg3;
- (id)_visibleXValueRangeWithAxis:(id)arg1 chartRect:(struct CGRect)arg2 contentOffset:(struct CGPoint)arg3 zoomScale:(double)arg4;
- (void)autoscaleYAxisIfNecessaryWithValueRange:(id)arg1 xAxis:(id)arg2 dateZoom:(long long)arg3 chartRect:(struct CGRect)arg4;
- (void)autoscaleYAxisWithValueRange:(id)arg1 xAxis:(id)arg2 dateZoom:(long long)arg3 chartRect:(struct CGRect)arg4 animated:(BOOL)arg5;
- (id)closestSelectedXCoordinate;
- (BOOL)containsCoordinatesInChartRect:(struct CGRect)arg1 xAxis:(id)arg2 zoomScale:(double)arg3 contentOffset:(struct CGPoint)arg4 xAxisTransform:(struct CGAffineTransform)arg5;
- (struct CGAffineTransform)coordinateTransformForChartRect:(struct CGRect)arg1 xAxisTransform:(struct CGAffineTransform)arg2;
- (id)coordinatesForBlock:(id)arg1 blockPath:(CDStruct_6ca94699)arg2 xAxis:(id)arg3 yAxis:(id)arg4;
- (void)dataSourceDidUpdateCache:(id)arg1;
- (void)dealloc;
- (void)deselectPath;
- (double)distanceFromPoint:(struct CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect)arg3;
- (double)distanceFromTouchPoint:(struct CGPoint)arg1 inChartRect:(struct CGRect)arg2 xAxis:(id)arg3 zoomScale:(double)arg4 contentOffset:(struct CGPoint)arg5 xAxisTransform:(struct CGAffineTransform)arg6;
- (void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(struct CGRect)arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(struct CGAffineTransform)arg4 renderContext:(struct CGContext *)arg5 secondaryRenderContext:(id)arg6;
- (void)drawWithChartRect:(struct CGRect)arg1 xAxis:(id)arg2 zoomScale:(double)arg3 contentOffset:(struct CGPoint)arg4 zoomLevelConfiguration:(id)arg5 xAxisTransform:(struct CGAffineTransform)arg6 inContext:(struct CGContext *)arg7 secondaryRenderContext:(id)arg8;
- (void)enumerateCoordinatesInChartRect:(struct CGRect)arg1 xAxis:(id)arg2 zoomScale:(double)arg3 contentOffset:(struct CGPoint)arg4 xAxisTransform:(struct CGAffineTransform)arg5 roundToViewScale:(BOOL)arg6 block:(CDUnknownBlockType)arg7;
- (void)enumerateCoordinatesInChartRect:(struct CGRect)arg1 xAxis:(id)arg2 zoomScale:(double)arg3 contentOffset:(struct CGPoint)arg4 xAxisTransform:(struct CGAffineTransform)arg5 roundToViewScale:(BOOL)arg6 rejectPointsOutOfChartRect:(BOOL)arg7 block:(CDUnknownBlockType)arg8;
- (id)init;
- (BOOL)isHighlighted;
- (void)selectPathAtPoint:(CDStruct_767cbfa4)arg1 closestXCoordinate:(id)arg2;
- (CDStruct_767cbfa4)selectedPointPath;
- (double)xAxisDistanceFromPoint:(struct CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect)arg3;
- (double)xAxisSelectedCoordinate:(double)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect)arg3;
- (double)yAxisDifferenceToPoint:(struct CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect)arg3;

@end
