//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKitUI/HKInteractiveChartsAxisScalingRule-Protocol.h>

@class HKValueRange, NSDictionary, NSString;

@interface HKAbstractFixedAxisBoundsScalingRule : NSObject <HKInteractiveChartsAxisScalingRule>
{
    HKValueRange *_defaultAxisBounds;
    NSDictionary *_axisBoundsOverrides;
    BOOL _shouldExpandBoundsForOutliers;
}

@property (readonly, nonatomic) NSDictionary *axisBoundsOverrides; // @synthesize axisBoundsOverrides=_axisBoundsOverrides;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) HKValueRange *defaultAxisBounds; // @synthesize defaultAxisBounds=_defaultAxisBounds;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL shouldExpandBoundsForOutliers; // @synthesize shouldExpandBoundsForOutliers=_shouldExpandBoundsForOutliers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_valueRangeForZoomLevel:(long long)arg1;
- (id)init;
- (id)yValueRangeForRange:(id)arg1 zoomLevel:(long long)arg2;

@end

