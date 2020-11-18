//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKChartPoint-Protocol.h>

@class NSDate, NSNumber, NSString;
@protocol HKGraphSeriesBlockCoordinateInfo;

@interface HKInsulinChartPoint : NSObject <HKChartPoint>
{
    NSDate *_startDate;
    NSNumber *_basalSum;
    NSNumber *_totalSum;
    NSDate *_midDate;
    id<HKGraphSeriesBlockCoordinateInfo> _userInfo;
}

@property (strong, nonatomic) NSNumber *basalSum; // @synthesize basalSum=_basalSum;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSDate *midDate; // @synthesize midDate=_midDate;
@property (strong, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSNumber *totalSum; // @synthesize totalSum=_totalSum;
@property (strong, nonatomic) id<HKGraphSeriesBlockCoordinateInfo> userInfo; // @synthesize userInfo=_userInfo;

- (void).cxx_destruct;
- (id)allYValues;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2;
- (id)maxXValueAsGenericType;
- (id)maxYValue;
- (id)minXValueAsGenericType;
- (id)minYValue;
- (id)xValueAsGenericType;
- (id)yValue;
- (id)yValueForKey:(id)arg1;

@end

