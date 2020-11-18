//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKitUI/HKChartPoint-Protocol.h>

@class NSDate, NSNumber, NSString;

@interface HKHealthChartPoint : NSObject <HKChartPoint>
{
    NSDate *_date;
    NSNumber *_sum;
    NSNumber *_min;
    NSNumber *_max;
    NSNumber *_avg;
    id _userInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (strong, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;

- (void).cxx_destruct;
- (id)allYValues;
- (id)initWithStatistics:(id)arg1 options:(unsigned long long)arg2 unit:(id)arg3 dataUnit:(id)arg4;
- (id)maxYValue;
- (id)minYValue;
- (id)xValue;
- (id)yValue;
- (id)yValueForKey:(id)arg1;

@end

