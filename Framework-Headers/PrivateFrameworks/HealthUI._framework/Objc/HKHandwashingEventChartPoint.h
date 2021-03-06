//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKChartPoint-Protocol.h>

@class NSDate, NSNumber, NSString;
@protocol HKGraphSeriesBlockCoordinateInfo;

@interface HKHandwashingEventChartPoint : NSObject <HKChartPoint>
{
    BOOL _meetsGoal;
    NSDate *_startDate;
    NSDate *_endDate;
    NSNumber *_averageDuration;
    NSDate *_midDate;
    id<HKGraphSeriesBlockCoordinateInfo> _userInfo;
}

@property (strong, nonatomic) NSNumber *averageDuration; // @synthesize averageDuration=_averageDuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL meetsGoal; // @synthesize meetsGoal=_meetsGoal;
@property (strong, nonatomic) NSDate *midDate; // @synthesize midDate=_midDate;
@property (strong, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property (readonly) Class superclass;
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

