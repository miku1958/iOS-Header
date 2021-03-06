//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKInteractiveChartAnnotationViewDataSource-Protocol.h>

@class HKActivitySummary, HKDisplayTypeController, HKUnitPreferenceController, NSString, _HKWheelchairUseCharacteristicCache;

@interface HKActivitySummaryAnnotationViewDataSource : NSObject <HKInteractiveChartAnnotationViewDataSource>
{
    BOOL _currentValueViewContext;
    HKActivitySummary *_activitySummary;
    long long _timeScope;
    HKDisplayTypeController *_displayTypeController;
    HKUnitPreferenceController *_unitController;
    _HKWheelchairUseCharacteristicCache *_wheelchairUseCharacteristicCache;
}

@property (strong, nonatomic) HKActivitySummary *activitySummary; // @synthesize activitySummary=_activitySummary;
@property (nonatomic) BOOL currentValueViewContext; // @synthesize currentValueViewContext=_currentValueViewContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) HKDisplayTypeController *displayTypeController; // @synthesize displayTypeController=_displayTypeController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) long long timeScope; // @synthesize timeScope=_timeScope;
@property (strong, nonatomic) HKUnitPreferenceController *unitController; // @synthesize unitController=_unitController;
@property (strong, nonatomic) _HKWheelchairUseCharacteristicCache *wheelchairUseCharacteristicCache; // @synthesize wheelchairUseCharacteristicCache=_wheelchairUseCharacteristicCache;

- (void).cxx_destruct;
- (id)_bodyColor;
- (id)_columnViewWithTitle:(id)arg1 titleColor:(id)arg2 body:(id)arg3 bodyColor:(id)arg4 alignment:(long long)arg5;
- (id)_dateColumnWithDateComponents:(id)arg1 calendar:(id)arg2 orientation:(long long)arg3;
- (id)_energyColumn;
- (id)_energyColumnAsNumber;
- (id)_energyColumnValueString;
- (id)_exerciseColumn;
- (id)_exerciseColumnAsNumber;
- (id)_exerciseColumnValueString;
- (BOOL)_hasRingView;
- (id)_moveColumn;
- (id)_moveColumnAsNumber;
- (id)_moveColumnValueString;
- (id)_moveTimeColumn;
- (id)_moveTimeColumnAsNumber;
- (id)_moveTimeColumnValueString;
- (id)_percentStringWithQuantity:(id)arg1 goalQuantity:(id)arg2;
- (id)_ringColumn;
- (id)_standColumn;
- (id)_standColumnAsNumber;
- (id)_standColumnValueString;
- (id)_valueUnitAttributedStringWithValueString:(id)arg1 unitString:(id)arg2;
- (id)_valueWithTitle:(id)arg1 attributedValue:(id)arg2 valueAsNumber:(id)arg3;
- (id)activityExerciseTitle;
- (id)activityMoveTitle;
- (id)activityStandTitle;
- (id)dateViewWithOrientation:(long long)arg1;
- (id)descriptionsForActivitySummary;
- (id)initWithDisplayTypeController:(id)arg1 unitController:(id)arg2 wheelchairUseCharacteristicCache:(id)arg3 currentValueViewContext:(BOOL)arg4;
- (id)leftMarginViewWithOrientation:(long long)arg1;
- (long long)numberOfValuesForAnnotationView:(id)arg1;
- (BOOL)showSeparators;
- (id)valueViewForColumnAtIndex:(long long)arg1 orientation:(long long)arg2;

@end

