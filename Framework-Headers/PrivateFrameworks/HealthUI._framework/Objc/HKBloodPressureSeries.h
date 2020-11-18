//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKGraphSeries.h>

@class HKBloodPressureSeriesPresentationStyle;

@interface HKBloodPressureSeries : HKGraphSeries
{
    HKBloodPressureSeriesPresentationStyle *_selectedPresentationStyle;
    HKBloodPressureSeriesPresentationStyle *_unselectedPresentationStyle;
}

@property (strong, nonatomic) HKBloodPressureSeriesPresentationStyle *selectedPresentationStyle; // @synthesize selectedPresentationStyle=_selectedPresentationStyle;
@property (strong, nonatomic) HKBloodPressureSeriesPresentationStyle *unselectedPresentationStyle; // @synthesize unselectedPresentationStyle=_unselectedPresentationStyle;

+ (void)_drawDiastolicSymbolWithColor:(id)arg1 atLocation:(struct CGPoint)arg2 width:(double)arg3 context:(struct CGContext *)arg4;
+ (void)_drawSystolicSymbolWithColor:(id)arg1 atLocation:(struct CGPoint)arg2 width:(double)arg3 context:(struct CGContext *)arg4;
+ (struct CGRect)_rectCenteredAt:(struct CGPoint)arg1 width:(double)arg2;
+ (id)defaultSeriesWithSystolicColor:(id)arg1;
+ (id)diastolicImageCompatibleWithFont:(id)arg1 withColor:(id)arg2;
+ (id)systolicImageCompatibleWithFont:(id)arg1 withColor:(id)arg2;
- (void).cxx_destruct;
- (void)_drawBloodPressureSymbol:(long long)arg1 withColor:(id)arg2 atLocation:(struct CGPoint)arg3 width:(double)arg4 context:(struct CGContext *)arg5;
- (void)_drawRangeBackgroundInContext:(struct CGContext *)arg1 coordinate:(id)arg2 width:(double)arg3 symbolType:(long long)arg4 symbolColor:(id)arg5 fillColor:(id)arg6;
- (void)_drawRangeDotsInContext:(struct CGContext *)arg1 coordinate:(id)arg2 width:(double)arg3 symbolType:(long long)arg4 symbolColor:(id)arg5 fillColor:(id)arg6;
- (BOOL)blockCoordinate:(id)arg1 greaterThan:(id)arg2;
- (BOOL)blockCoordinate:(id)arg1 lessThan:(id)arg2;
- (BOOL)blockCoordinateIsVisibleInsideOfChartRect:(struct CGRect)arg1 blockCoordinate:(id)arg2;
- (id)coordinatesForBlock:(id)arg1 blockPath:(CDStruct_6ca94699)arg2 xAxis:(id)arg3 yAxis:(id)arg4;
- (double)distanceFromPoint:(struct CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect)arg3;
- (void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(struct CGRect)arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(struct CGAffineTransform)arg4 renderContext:(struct CGContext *)arg5 secondaryRenderContext:(id)arg6;
- (BOOL)supportsMultiTouchSelection;
- (double)xAxisDistanceFromPoint:(struct CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect)arg3;
- (double)yAxisDifferenceToPoint:(struct CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect)arg3;

@end
