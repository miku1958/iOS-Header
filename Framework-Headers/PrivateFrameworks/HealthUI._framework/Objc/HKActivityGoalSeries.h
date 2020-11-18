//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKGraphSeries.h>

@class HKFillStyle, HKStrokeStyle;

@interface HKActivityGoalSeries : HKGraphSeries
{
    HKStrokeStyle *_strokeStyle;
    HKFillStyle *_fillStyle;
}

- (void).cxx_destruct;
- (void)_enumerateCoordinateList:(id)arg1 withTransform:(struct CGAffineTransform)arg2 zoomLevelConfiguration:(id)arg3 axisRect:(struct CGRect)arg4 block:(CDUnknownBlockType)arg5;
- (void)_enumerateCoordinateListByRemovingOffscreenPoints:(id)arg1 withTransform:(struct CGAffineTransform)arg2 zoomLevelConfiguration:(id)arg3 axisRect:(struct CGRect)arg4 block:(CDUnknownBlockType)arg5;
- (BOOL)blockCoordinate:(id)arg1 greaterThan:(id)arg2;
- (BOOL)blockCoordinate:(id)arg1 lessThan:(id)arg2;
- (BOOL)blockCoordinateIsVisibleInsideOfChartRect:(struct CGRect)arg1 blockCoordinate:(id)arg2;
- (id)coordinatesForBlock:(id)arg1 blockPath:(CDStruct_6ca94699)arg2 xAxis:(id)arg3 yAxis:(id)arg4;
- (double)distanceFromPoint:(struct CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect)arg3;
- (void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(struct CGRect)arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(struct CGAffineTransform)arg4 renderContext:(struct CGContext *)arg5 secondaryRenderContext:(id)arg6;
- (id)initWithStrokeStyle:(id)arg1 fillStyle:(id)arg2;
- (BOOL)supportsMultiTouchSelection;
- (double)xAxisDistanceFromPoint:(struct CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect)arg3;
- (double)yAxisDifferenceToPoint:(struct CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect)arg3;

@end

