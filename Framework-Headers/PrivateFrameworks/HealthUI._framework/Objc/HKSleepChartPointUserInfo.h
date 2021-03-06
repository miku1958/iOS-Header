//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKGraphSeriesBlockCoordinateInfo-Protocol.h>
#import <HealthUI/HKGraphSeriesChartData-Protocol.h>

@class HKSHSleepDaySummary, HKSleepDay, NSString;

@interface HKSleepChartPointUserInfo : NSObject <HKGraphSeriesBlockCoordinateInfo, HKGraphSeriesChartData>
{
    long long _seriesType;
    HKSleepDay *_sleepDay;
    HKSHSleepDaySummary *_sleepDaySummary;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) long long seriesType; // @synthesize seriesType=_seriesType;
@property (readonly, nonatomic) HKSleepDay *sleepDay; // @synthesize sleepDay=_sleepDay;
@property (readonly, nonatomic) HKSHSleepDaySummary *sleepDaySummary; // @synthesize sleepDaySummary=_sleepDaySummary;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithSeriesType:(long long)arg1 sleepDay:(id)arg2;
- (id)initWithSeriesType:(long long)arg1 sleepDaySummary:(id)arg2;

@end

