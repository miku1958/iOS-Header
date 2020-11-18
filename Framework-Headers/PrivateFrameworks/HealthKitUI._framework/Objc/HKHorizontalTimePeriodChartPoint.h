//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKitUI/HKChartPoint-Protocol.h>

@class NSDate, NSNumber, NSString;

@interface HKHorizontalTimePeriodChartPoint : NSObject <HKChartPoint>
{
    NSDate *_xStart;
    NSDate *_xEnd;
    NSNumber *_yValue;
    id _userInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (strong, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property (strong, nonatomic) NSDate *xEnd; // @synthesize xEnd=_xEnd;
@property (strong, nonatomic) NSDate *xStart; // @synthesize xStart=_xStart;
@property (strong, nonatomic) NSNumber *yValue; // @synthesize yValue=_yValue;

- (void).cxx_destruct;
- (id)allYValues;
- (id)maxYValue;
- (id)minYValue;
- (id)xValue;
- (id)yValueForKey:(id)arg1;

@end

