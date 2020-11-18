//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKGraphSeries.h>

#import <HealthUI/HKAxisLabelDataSource-Protocol.h>

@class NSString, UIColor, UIImage;

@interface HKHorizontalSingleLineSeries : HKGraphSeries <HKAxisLabelDataSource>
{
    BOOL _shouldConnectPoints;
    double _topInsetPercentage;
    UIColor *_baseColor;
    double _lineWidth;
    double _selectedLineWidth;
    double _markRadius;
    UIImage *_selectedPointMarkerImage;
}

@property (strong, nonatomic) UIColor *baseColor; // @synthesize baseColor=_baseColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property (nonatomic) double markRadius; // @synthesize markRadius=_markRadius;
@property (nonatomic) double selectedLineWidth; // @synthesize selectedLineWidth=_selectedLineWidth;
@property (strong, nonatomic) UIImage *selectedPointMarkerImage; // @synthesize selectedPointMarkerImage=_selectedPointMarkerImage;
@property (nonatomic) BOOL shouldConnectPoints; // @synthesize shouldConnectPoints=_shouldConnectPoints;
@property (readonly) Class superclass;
@property (nonatomic) double topInsetPercentage; // @synthesize topInsetPercentage=_topInsetPercentage;

- (void).cxx_destruct;
- (BOOL)blockCoordinate:(id)arg1 greaterThan:(id)arg2;
- (BOOL)blockCoordinate:(id)arg1 lessThan:(id)arg2;
- (id)coordinatesForBlock:(id)arg1 blockPath:(CDStruct_6ca94699)arg2 xAxis:(id)arg3 yAxis:(id)arg4;
- (double)distanceFromPoint:(struct CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect)arg3;
- (void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(struct CGRect)arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(struct CGAffineTransform)arg4 renderContext:(struct CGContext *)arg5 secondaryRenderContext:(id)arg6;
- (id)findAxisLabelsInModelRange:(id)arg1 zoomScale:(double)arg2;
- (id)init;
- (struct CGPoint)renderPositionForLabel:(id)arg1 rect:(struct CGRect)arg2 zoomScale:(double)arg3 contentOffset:(struct CGPoint)arg4 constantOffset:(double)arg5 isHorizontal:(BOOL)arg6 optionalOffset:(struct CGPoint)arg7;
- (void)setYAxis:(id)arg1;
- (BOOL)supportsMultiTouchSelection;
- (double)xAxisDistanceFromPoint:(struct CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect)arg3;
- (double)yAxisDifferenceToPoint:(struct CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect)arg3;
- (double)yCoordinateForLevel:(long long)arg1 chartRect:(struct CGRect)arg2;

@end
