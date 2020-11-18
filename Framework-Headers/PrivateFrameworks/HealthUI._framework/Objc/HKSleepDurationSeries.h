//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKBarSeries.h>

@class HKStrokeStyle, NSArray;

@interface HKSleepDurationSeries : HKBarSeries
{
    NSArray *_defaultFillStyles;
    NSArray *_highlightedFillStyles;
    HKStrokeStyle *_goalLineStokeStyle;
    CDUnknownBlockType _startOfDayTransform;
}

@property (copy, nonatomic) NSArray *defaultFillStyles; // @synthesize defaultFillStyles=_defaultFillStyles;
@property (copy, nonatomic) HKStrokeStyle *goalLineStokeStyle; // @synthesize goalLineStokeStyle=_goalLineStokeStyle;
@property (copy, nonatomic) NSArray *highlightedFillStyles; // @synthesize highlightedFillStyles=_highlightedFillStyles;
@property (copy, nonatomic) CDUnknownBlockType startOfDayTransform; // @synthesize startOfDayTransform=_startOfDayTransform;

- (void).cxx_destruct;
- (void)_addAnnotationForValue:(double)arg1;
- (void)_drawGoalLinePath:(id)arg1 context:(struct CGContext *)arg2;
- (void)_drawPaths:(id)arg1 withFillStyles:(id)arg2 strokeStyle:(id)arg3 axisRect:(struct CGRect)arg4 context:(struct CGContext *)arg5;
- (id)_durationFormatter;
- (double)barWidthForVisibleBarCount:(long long)arg1 axisRect:(struct CGRect)arg2 minimumSpacing:(double)arg3;
- (id)coordinatesForBlock:(id)arg1 blockPath:(CDStruct_6ca94699)arg2 xAxis:(id)arg3 yAxis:(id)arg4;
- (void)drawWithBlockCoordinates:(id)arg1 visibleBarCount:(long long)arg2 pointTransform:(struct CGAffineTransform)arg3 context:(struct CGContext *)arg4 axisRect:(struct CGRect)arg5;
- (BOOL)supportsMultiTouchSelection;
- (long long)visibleBarCountWithZoomLevelConfiguration:(id)arg1;

@end

