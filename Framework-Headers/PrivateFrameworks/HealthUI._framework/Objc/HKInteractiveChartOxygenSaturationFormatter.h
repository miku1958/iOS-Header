//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKInteractiveChartGenericStatFormatter.h>

@interface HKInteractiveChartOxygenSaturationFormatter : HKInteractiveChartGenericStatFormatter
{
    long long _airPressureStatisticsType;
}

@property (nonatomic) long long airPressureStatisticsType; // @synthesize airPressureStatisticsType=_airPressureStatisticsType;

- (id)formattedSelectedRangeLabelDataWithChartData:(id)arg1 context:(long long)arg2;
- (id)initWithStatisticsType:(long long)arg1;

@end

