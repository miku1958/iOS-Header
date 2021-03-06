//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKActivitySummaryAnnotationViewDataSource.h>

@class UIView;
@protocol HKInteractiveChartCurrentValueViewCallbacks;

@interface _ActivityCurrentValueDataSource : HKActivitySummaryAnnotationViewDataSource
{
    BOOL _currentValueViewHasNoData;
    id<HKInteractiveChartCurrentValueViewCallbacks> _currentValueViewCallbacks;
    UIView *_noDataView;
}

@property (weak, nonatomic) id<HKInteractiveChartCurrentValueViewCallbacks> currentValueViewCallbacks; // @synthesize currentValueViewCallbacks=_currentValueViewCallbacks;
@property (nonatomic) BOOL currentValueViewHasNoData; // @synthesize currentValueViewHasNoData=_currentValueViewHasNoData;
@property (readonly, nonatomic) UIView *noDataView; // @synthesize noDataView=_noDataView;

- (void).cxx_destruct;
- (id)_buildNoDataView;
- (id)_dateRangeFromComponents;
- (id)_dateRangeFromStartDate:(id)arg1 endDate:(id)arg2;
- (id)_localizedCurrentValueViewDateRange;
- (id)dateViewWithOrientation:(long long)arg1;
- (id)initWithDisplayTypeController:(id)arg1 unitController:(id)arg2 wheelchairUseCharacteristicCache:(id)arg3 currentValueViewContext:(BOOL)arg4 currentValueViewCallbacks:(id)arg5;
- (id)leftMarginViewWithOrientation:(long long)arg1;
- (long long)numberOfValuesForAnnotationView:(id)arg1;
- (id)valueViewForColumnAtIndex:(long long)arg1 orientation:(long long)arg2;

@end

