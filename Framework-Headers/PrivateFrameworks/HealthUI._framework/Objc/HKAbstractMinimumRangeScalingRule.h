//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKInteractiveChartsAxisScalingRule-Protocol.h>

@class HKValueRange, NSDictionary, NSString;

@interface HKAbstractMinimumRangeScalingRule : NSObject <HKInteractiveChartsAxisScalingRule>
{
    double _defaultYAxisRange;
    NSDictionary *_axisRangeOverrides;
    long long _portraitPrettyNumberRule;
    HKValueRange *_axisBounds;
}

@property (strong, nonatomic) HKValueRange *axisBounds; // @synthesize axisBounds=_axisBounds;
@property (readonly, nonatomic) NSDictionary *axisRangeOverrides; // @synthesize axisRangeOverrides=_axisRangeOverrides;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double defaultYAxisRange; // @synthesize defaultYAxisRange=_defaultYAxisRange;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long portraitPrettyNumberRule; // @synthesize portraitPrettyNumberRule=_portraitPrettyNumberRule;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)_rangeForZoomLevel:(long long)arg1;
- (id)init;
- (id)portraitYValueRangeForRange:(id)arg1 zoomLevel:(long long)arg2 allowedDecimalPrecision:(long long)arg3;
- (id)yAxisBounds;
- (id)yValueRangeForRange:(id)arg1 zoomLevel:(long long)arg2;

@end
