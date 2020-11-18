//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKChartPoint-Protocol.h>

@class NSDate, NSString;
@protocol HKGraphSeriesBlockCoordinateInfo;

@interface HKNumericChartPoint : NSObject <HKChartPoint>
{
    NSDate *_xValue;
    id _yValue;
    id<HKGraphSeriesBlockCoordinateInfo> _userInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)allYValues;
- (id)initWithXValue:(id)arg1 yValue:(id)arg2 userInfo:(id)arg3;
- (id)maxXValueAsGenericType;
- (id)maxYValue;
- (id)minXValueAsGenericType;
- (id)minYValue;
- (id)userInfo;
- (id)xValueAsGenericType;
- (id)yValue;
- (id)yValueForKey:(id)arg1;

@end

