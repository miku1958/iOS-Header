//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKInteractiveChartViewController.h>

@class HKValueRange;

__attribute__((visibility("hidden")))
@interface WDChartExperimentsTachogram : HKInteractiveChartViewController
{
    HKValueRange *_computedAxisRange;
    HKValueRange *_requestedVisibleRange;
}

@property (readonly, nonatomic) HKValueRange *computedAxisRange; // @synthesize computedAxisRange=_computedAxisRange;
@property (readonly, nonatomic) HKValueRange *requestedVisibleRange; // @synthesize requestedVisibleRange=_requestedVisibleRange;

- (void).cxx_destruct;
- (struct CGSize)extentOfData:(id)arg1;
- (id)initWithIrregularBeatData:(id)arg1 normalData:(id)arg2 visibleRange:(id)arg3 profile:(id)arg4;
- (id)tachogramSeriesWithData:(id)arg1 unit:(id)arg2 maximumY:(double)arg3 axis:(id)arg4 irregularBeatStyle:(BOOL)arg5;
- (void)viewDidLoad;

@end
