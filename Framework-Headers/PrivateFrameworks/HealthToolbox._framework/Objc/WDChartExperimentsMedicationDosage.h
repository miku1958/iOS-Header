//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKInteractiveChartViewController.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface WDChartExperimentsMedicationDosage : HKInteractiveChartViewController
{
    UIColor *_color;
}

@property (strong, nonatomic) UIColor *color; // @synthesize color=_color;

- (void).cxx_destruct;
- (id)_parseDoseSpecifications:(id)arg1;
- (id)initMedicationName:(id)arg1 dosages:(id)arg2 profile:(id)arg3 color:(id)arg4;
- (id)initMedicationName:(id)arg1 specifications:(id)arg2 profile:(id)arg3 color:(id)arg4;

@end
