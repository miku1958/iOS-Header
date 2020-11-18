//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKChartPoint-Protocol.h>

@class HKHealthChartPoint, NSDate, NSString;
@protocol HKGraphSeriesBlockCoordinateInfo;

@interface HKBloodPressureChartPoint : NSObject <HKChartPoint>
{
    id<HKGraphSeriesBlockCoordinateInfo> _userInfo;
    HKHealthChartPoint *_systolicChartPoint;
    HKHealthChartPoint *_diastolicChartPoint;
    NSDate *_date;
}

@property (strong, nonatomic) NSDate *date; // @synthesize date=_date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) HKHealthChartPoint *diastolicChartPoint; // @synthesize diastolicChartPoint=_diastolicChartPoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (strong, nonatomic) HKHealthChartPoint *systolicChartPoint; // @synthesize systolicChartPoint=_systolicChartPoint;
@property (strong, nonatomic) id<HKGraphSeriesBlockCoordinateInfo> userInfo; // @synthesize userInfo=_userInfo;

- (void).cxx_destruct;
- (id)allYValues;
- (id)maxXValueAsGenericType;
- (id)maxYValue;
- (id)minXValueAsGenericType;
- (id)minYValue;
- (void)setChartPoint:(id)arg1 forType:(id)arg2;
- (id)xValueAsGenericType;
- (id)yValue;
- (id)yValueForKey:(id)arg1;

@end

