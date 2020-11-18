//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKitUI/HKAxisLabelDataSource-Protocol.h>
#import <HealthKitUI/NSCopying-Protocol.h>

@class HKAxisStyle, HKCoordinateTransform, HKValueRange, NSString;
@protocol HKAxisLabelDataSource, HKZoomScale;

@interface HKAxis : NSObject <NSCopying, HKAxisLabelDataSource>
{
    BOOL _requiresScaling;
    BOOL _automaticallyFitData;
    HKAxisStyle *_preferredStyle;
    HKAxisStyle *_secondaryStyle;
    long long _maxLabels;
    long long _minLabels;
    HKCoordinateTransform *_transform;
    id<HKZoomScale> _zoomScale;
    id<HKAxisLabelDataSource> _labelDataSource;
    HKValueRange *_chartableValueRange;
    struct HKLinearTransform _pointTransform;
}

@property (nonatomic) BOOL automaticallyFitData; // @synthesize automaticallyFitData=_automaticallyFitData;
@property (strong, nonatomic) HKValueRange *chartableValueRange; // @synthesize chartableValueRange=_chartableValueRange;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) id<HKAxisLabelDataSource> labelDataSource; // @synthesize labelDataSource=_labelDataSource;
@property (nonatomic) long long maxLabels; // @synthesize maxLabels=_maxLabels;
@property (nonatomic) long long minLabels; // @synthesize minLabels=_minLabels;
@property (nonatomic) struct HKLinearTransform pointTransform; // @synthesize pointTransform=_pointTransform;
@property (strong, nonatomic) HKAxisStyle *preferredStyle; // @synthesize preferredStyle=_preferredStyle;
@property (readonly, nonatomic) BOOL requiresScaling; // @synthesize requiresScaling=_requiresScaling;
@property (strong, nonatomic) HKAxisStyle *secondaryStyle; // @synthesize secondaryStyle=_secondaryStyle;
@property (readonly) Class superclass;
@property (strong, nonatomic) HKCoordinateTransform *transform; // @synthesize transform=_transform;
@property (strong, nonatomic) id<HKZoomScale> zoomScale; // @synthesize zoomScale=_zoomScale;

- (void).cxx_destruct;
- (void)_addTickMarksForPosition:(unsigned long long)arg1 axisRect:(struct CGRect)arg2 chartRange:(struct HKRange)arg3 zoomScale:(double)arg4 contentOffset:(struct CGPoint)arg5 toBezierPath:(id)arg6 style:(id)arg7;
- (double)_axisFillWidthForStyle:(id)arg1 labels:(id)arg2 font:(id)arg3;
- (double)_axisOffsetWithStyle:(id)arg1 chartRect:(struct CGRect)arg2 horizontalAlignmentOut:(long long *)arg3;
- (struct HKRange)_chartRangeForChartRect:(struct CGRect)arg1 zoomScale:(double)arg2 contentOffset:(struct CGPoint)arg3;
- (void)_drawTextBackgroundWithLabels:(id)arg1 font:(id)arg2 offset:(double)arg3 rect:(struct CGRect)arg4 style:(id)arg5 renderView:(id)arg6;
- (void)_drawTextInRect:(struct CGRect)arg1 zoomScale:(double)arg2 contentOffset:(struct CGPoint)arg3 offset:(double)arg4 horizontalAlignment:(long long)arg5 renderView:(id)arg6 style:(id)arg7;
- (id)_gridLinesForAxisRect:(struct CGRect)arg1 zoomScale:(double)arg2 contentOffset:(struct CGPoint)arg3 style:(id)arg4;
- (struct CGRect)_labelBackgroundRectWithLabels:(id)arg1 font:(id)arg2 offset:(double)arg3 rect:(struct CGRect)arg4 style:(id)arg5;
- (double)_maxLabelWidthFromLabels:(id)arg1 font:(id)arg2;
- (void)_offsetForChartRect:(struct CGRect)arg1 chartRange:(struct HKRange)arg2 zoomScaleOut:(double *)arg3 contentOffsetOut:(struct CGPoint *)arg4;
- (struct HKLinearTransform)_pointTransformFromSeriesRanges:(id)arg1 linearTransform:(struct HKLinearTransform)arg2 chartRange:(struct HKRange)arg3;
- (void)_renderTickMarksWithChartRect:(struct CGRect)arg1 zoomScale:(double)arg2 contentOffset:(struct CGPoint)arg3 style:(id)arg4 renderView:(id)arg5;
- (BOOL)_styleIsHorizontal:(id)arg1;
- (id)adjustedRangeForFittedRange:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)drawGridlinesWithChartRect:(struct CGRect)arg1 zoomScale:(double)arg2 contentOffset:(struct CGPoint)arg3 renderView:(id)arg4;
- (void)drawLabelsWithChartRect:(struct CGRect)arg1 zoomScale:(double)arg2 contentOffset:(struct CGPoint)arg3 touchPoint:(struct CGPoint)arg4 renderView:(id)arg5;
- (void)enumerateTickCoordinatesInChartRange:(struct HKRange)arg1 zoomScale:(double)arg2 handler:(CDUnknownBlockType)arg3;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToAxis:(id)arg1;
- (id)labelsForChartRange:(struct HKRange)arg1 zoomScale:(double)arg2;
- (struct HKLinearTransform)pointTransformFittingValueRange:(id)arg1 toChartRange:(struct HKRange)arg2;
- (struct CGPoint)renderPositionForLabel:(id)arg1 rect:(struct CGRect)arg2 zoomScale:(double)arg3 contentOffset:(struct CGPoint)arg4 constantOffset:(double)arg5 isHorizontal:(BOOL)arg6;

@end

