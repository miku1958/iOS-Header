//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary;
@protocol HKDecimalPrecisionRule, HKInteractiveChartsAxisScalingRule;

@interface HKDisplayTypeChartingRules : NSObject
{
    long long _defaultStyle;
    NSMutableDictionary *_rulesByTimeScope;
    id<HKDecimalPrecisionRule> _allowedDecimalPrecisionRule;
    NSDictionary *_perUnitDecimalPrecision;
    BOOL _shouldHideAverageLine;
    BOOL _shouldConnectSamplesWithLines;
    long long _defaultChartStyle;
    id<HKInteractiveChartsAxisScalingRule> _axisScalingRule;
    long long _preferredTimeScope;
}

@property (strong, nonatomic) id<HKInteractiveChartsAxisScalingRule> axisScalingRule; // @synthesize axisScalingRule=_axisScalingRule;
@property (readonly, nonatomic) long long defaultChartStyle; // @synthesize defaultChartStyle=_defaultChartStyle;
@property (nonatomic) long long preferredTimeScope; // @synthesize preferredTimeScope=_preferredTimeScope;
@property (nonatomic) BOOL shouldConnectSamplesWithLines; // @synthesize shouldConnectSamplesWithLines=_shouldConnectSamplesWithLines;
@property (nonatomic) BOOL shouldHideAverageLine; // @synthesize shouldHideAverageLine=_shouldHideAverageLine;

- (void).cxx_destruct;
- (id)_ruleForKey:(id)arg1 timeScope:(long long)arg2;
- (void)_setRule:(id)arg1 forKey:(id)arg2 timeScope:(long long)arg3;
- (void)adjustedBoundsForPortraitChartWithMin:(double)arg1 max:(double)arg2 minOut:(double *)arg3 maxOut:(double *)arg4 decimalPrecision:(long long *)arg5 unit:(id)arg6 timeScope:(long long)arg7;
- (id)allowedDecimalPrecisionRuleForUnit:(id)arg1;
- (double)chartPointLineWidthForTimeScope:(long long)arg1;
- (double)chartPointRadiusForTimeScope:(long long)arg1;
- (long long)chartStyleForTimeScope:(long long)arg1;
- (id)initWithDefaultChartStyle:(long long)arg1;
- (id)intervalComponentsForTimeScope:(long long)arg1;
- (BOOL)lineChartExtendLastValueForTimeScope:(long long)arg1;
- (BOOL)lineChartFlatLastValueForTimeScope:(long long)arg1;
- (BOOL)lineChartUsesPointMarkerImageForTimeScope:(long long)arg1;
- (BOOL)lineChartUsesValueAxisAnnotationForTimeScope:(long long)arg1;
- (void)setAllowedDecimalPrecisionRule:(id)arg1 perUnitPrecisionRules:(id)arg2;
- (void)setChartPointLineWidth:(double)arg1 forTimeScope:(long long)arg2;
- (void)setChartPointRadius:(double)arg1 forTimeScope:(long long)arg2;
- (void)setChartStyle:(long long)arg1 forTimeScope:(long long)arg2;
- (void)setIntervalComponents:(id)arg1 forTimeScope:(long long)arg2;
- (void)setLineChartExtendLastValue:(BOOL)arg1 forTimeScope:(long long)arg2;
- (void)setLineChartFlatLastValue:(BOOL)arg1 forTimeScope:(long long)arg2;
- (void)setLineChartUsesPointMarkerImage:(BOOL)arg1 forTimeScope:(long long)arg2;
- (void)setLineChartUsesValueAxisAnnotation:(BOOL)arg1 forTimeScope:(long long)arg2;

@end

