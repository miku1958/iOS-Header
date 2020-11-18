//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKBarSeries.h>

@class HKDisplayTypeController, HKFillStyle, HKUnitPreferenceController;
@protocol HKActivityBarSeriesDelegate;

@interface _ActivityBarSeries : HKBarSeries
{
    HKUnitPreferenceController *_unitPreferenceController;
    HKFillStyle *_missedGoalUnselectedFillStyle;
    id<HKActivityBarSeriesDelegate> _activityBarDelegate;
    HKDisplayTypeController *_displayTypeController;
    long long _activityDisplayTypeIdentifier;
    double _lastLegendUpdateTime;
}

@property (weak, nonatomic) id<HKActivityBarSeriesDelegate> activityBarDelegate; // @synthesize activityBarDelegate=_activityBarDelegate;
@property (nonatomic) long long activityDisplayTypeIdentifier; // @synthesize activityDisplayTypeIdentifier=_activityDisplayTypeIdentifier;
@property (readonly, nonatomic) HKDisplayTypeController *displayTypeController; // @synthesize displayTypeController=_displayTypeController;
@property (nonatomic) double lastLegendUpdateTime; // @synthesize lastLegendUpdateTime=_lastLegendUpdateTime;
@property (strong, nonatomic) HKFillStyle *missedGoalUnselectedFillStyle; // @synthesize missedGoalUnselectedFillStyle=_missedGoalUnselectedFillStyle;
@property (readonly, nonatomic) HKUnitPreferenceController *unitPreferenceController; // @synthesize unitPreferenceController=_unitPreferenceController;

- (void).cxx_destruct;
- (void)_drawPath:(id)arg1 withFillStyle:(id)arg2 strokeStyle:(id)arg3 axisRect:(struct CGRect)arg4 context:(struct CGContext *)arg5;
- (void)drawWithBlockCoordinates:(id)arg1 visibleBarCount:(long long)arg2 pointTransform:(struct CGAffineTransform)arg3 context:(struct CGContext *)arg4 axisRect:(struct CGRect)arg5;
- (id)initWithUnitPreferenceController:(id)arg1 activityBarDelegate:(id)arg2 displayTypeController:(id)arg3;
- (BOOL)supportsMultiTouchSelection;
- (void)updateLegendsForTimeScope:(long long)arg1 range:(id)arg2;

@end
