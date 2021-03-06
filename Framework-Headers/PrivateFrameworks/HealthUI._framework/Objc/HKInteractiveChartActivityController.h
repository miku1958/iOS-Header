//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKInteractiveChartViewController.h>

#import <HealthUI/HKActivityBarSeriesDelegate-Protocol.h>
#import <HealthUI/HKInteractiveChartViewObserver-Protocol.h>

@class HKActivitySummaryAnnotationViewDataSource, HKActivitySummaryDataProvider, HKInteractiveChartDisplayType, NSMapTable, NSString, _ActivityCurrentValueView, _HKWheelchairUseCharacteristicCache;
@protocol HKInteractiveChartCurrentValueViewCallbacks;

@interface HKInteractiveChartActivityController : HKInteractiveChartViewController <HKInteractiveChartViewObserver, HKActivityBarSeriesDelegate>
{
    NSMapTable *_yAxisAccessoryViewsByGraphSeries;
    HKActivitySummaryDataProvider *_activityDataProvider;
    HKActivitySummaryAnnotationViewDataSource *_activityAnnotationDataSource;
    long long _currentTimeScope;
    _HKWheelchairUseCharacteristicCache *_wheelchairUseCharacteristicCache;
    _ActivityCurrentValueView *_activityCurrentValueView;
    id<HKInteractiveChartCurrentValueViewCallbacks> _activityCurrentValueViewCallbacks;
    HKInteractiveChartDisplayType *_moveValueDisplayType;
    HKInteractiveChartDisplayType *_moveGoalDisplayType;
    HKInteractiveChartDisplayType *_exerciseValueDisplayType;
    HKInteractiveChartDisplayType *_exerciseGoalDisplayType;
    HKInteractiveChartDisplayType *_standValueDisplayType;
    HKInteractiveChartDisplayType *_standGoalDisplayType;
}

@property (strong, nonatomic) HKActivitySummaryAnnotationViewDataSource *activityAnnotationDataSource; // @synthesize activityAnnotationDataSource=_activityAnnotationDataSource;
@property (strong, nonatomic) _ActivityCurrentValueView *activityCurrentValueView; // @synthesize activityCurrentValueView=_activityCurrentValueView;
@property (weak, nonatomic) id<HKInteractiveChartCurrentValueViewCallbacks> activityCurrentValueViewCallbacks; // @synthesize activityCurrentValueViewCallbacks=_activityCurrentValueViewCallbacks;
@property (strong, nonatomic) HKActivitySummaryDataProvider *activityDataProvider; // @synthesize activityDataProvider=_activityDataProvider;
@property (nonatomic) long long currentTimeScope; // @synthesize currentTimeScope=_currentTimeScope;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HKInteractiveChartDisplayType *exerciseGoalDisplayType; // @synthesize exerciseGoalDisplayType=_exerciseGoalDisplayType;
@property (readonly, nonatomic) HKInteractiveChartDisplayType *exerciseValueDisplayType; // @synthesize exerciseValueDisplayType=_exerciseValueDisplayType;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) HKInteractiveChartDisplayType *moveGoalDisplayType; // @synthesize moveGoalDisplayType=_moveGoalDisplayType;
@property (readonly, nonatomic) HKInteractiveChartDisplayType *moveValueDisplayType; // @synthesize moveValueDisplayType=_moveValueDisplayType;
@property (readonly, nonatomic) HKInteractiveChartDisplayType *standGoalDisplayType; // @synthesize standGoalDisplayType=_standGoalDisplayType;
@property (readonly, nonatomic) HKInteractiveChartDisplayType *standValueDisplayType; // @synthesize standValueDisplayType=_standValueDisplayType;
@property (readonly) Class superclass;
@property (readonly, nonatomic) _HKWheelchairUseCharacteristicCache *wheelchairUseCharacteristicCache; // @synthesize wheelchairUseCharacteristicCache=_wheelchairUseCharacteristicCache;
@property (strong, nonatomic) NSMapTable *yAxisAccessoryViewsByGraphSeries; // @synthesize yAxisAccessoryViewsByGraphSeries=_yAxisAccessoryViewsByGraphSeries;

- (void).cxx_destruct;
- (id)_activitySeriesForActivityValue:(long long)arg1 wheelchairUseCharacteristicCache:(id)arg2 unitPreferenceController:(id)arg3 displayTypeController:(id)arg4;
- (id)_activityYAxisForActivityValue:(long long)arg1 zeroOnly:(BOOL)arg2 stackOffset:(long long)arg3 bottomLabelPadding:(double)arg4 displayTypeController:(id)arg5 unitPreferenceController:(id)arg6;
- (id)_dayActivitySummaryForDateRange:(id)arg1;
- (id)_displayTypeForActivityValue:(long long)arg1 yAxis:(id)arg2 dataProvider:(id)arg3 displayTypeController:(id)arg4 unitPreferenceController:(id)arg5 wheelchairUseCharacteristicCache:(id)arg6;
- (id)_generateActivityBarSeriesWithColor:(id)arg1 legendTitle:(id)arg2 metGoalFillStyle:(id)arg3 missedGoalFillStyle:(id)arg4 activityValue:(long long)arg5 unitPreferenceController:(id)arg6 displayTypeController:(id)arg7;
- (id)_generateActivityGoalLineSeriesWithColor:(id)arg1;
- (id)_lineColorForActivityValue:(long long)arg1;
- (id)_metGoalFillStyleForActivityValue:(long long)arg1;
- (id)_missedGoalFillStyleForActivityValue:(long long)arg1;
- (id)_rangeValueAsNumber:(id)arg1;
- (long long)_representativeDataTypeForActivityValue:(long long)arg1;
- (id)_spanForValueDisplayType:(id)arg1 title:(id)arg2;
- (id)_titleForActivityValue:(long long)arg1 wheelchairUseCharacteristicCache:(id)arg2;
- (id)_unitForActivityValue:(long long)arg1 displayTypeController:(id)arg2 unitPreferenceController:(id)arg3;
- (id)_zeroStringForActivityValue:(long long)arg1 displayTypeController:(id)arg2 unitPreferenceController:(id)arg3;
- (id)activitySummaryForCurrentRange;
- (id)calendarQueryDisplayType;
- (id)calendarQuerySampleType;
- (void)configureDisplayTypes:(id)arg1 timeScope:(long long)arg2 stackOffset:(long long)arg3;
- (id)descriptionForChartData:(id)arg1 timeScope:(long long)arg2;
- (id)descriptionSeriesForGraphView:(id)arg1;
- (id)descriptionSpansForGraphView:(id)arg1;
- (void)didUpdateFromDateZoom:(long long)arg1 toDateZoom:(long long)arg2 newVisibleRange:(id)arg3;
- (long long)graphSeriesTimeScope;
- (id)initWithHealthStore:(id)arg1 unitPreferenceController:(id)arg2 dateCache:(id)arg3 chartDataCacheController:(id)arg4 selectedTimeScopeController:(id)arg5 sampleTypeDateRangeController:(id)arg6 wheelchairUseCharacteristicCache:(id)arg7 initialXValue:(id)arg8;
- (id)initWithHealthStore:(id)arg1 unitPreferenceController:(id)arg2 dateCache:(id)arg3 chartDataCacheController:(id)arg4 selectedTimeScopeController:(id)arg5 sampleTypeDateRangeController:(id)arg6 wheelchairUseCharacteristicCache:(id)arg7 initialXValue:(id)arg8 activityMoveMode:(long long)arg9;
- (id)lollipopAnnotationColor;
- (id)lollipopExtensionColor;
- (id)makeAnnotationDataSource;
- (id)makeCurrentValueView;
- (id)seriesSelectionLineColorForGraphView:(id)arg1;
- (void)setCurrentValueViewCallbacks:(id)arg1;
- (void)tappedOnCurrentValueView:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateCurrentValueView:(id)arg1 graphView:(id)arg2 timeScope:(long long)arg3;
- (void)updateSelectionAnnotationDataSourceForContext:(id)arg1 displayType:(id)arg2 timeScope:(long long)arg3;

@end

