//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKitUI/HKChartPoint-Protocol.h>

@class NSDate, NSString;

@interface HKNumericChartPoint : NSObject <HKChartPoint>
{
    NSDate *_xValue;
    id _yValue;
    id _userInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)allYValues;
- (id)initWithXValue:(id)arg1 yValue:(id)arg2 userInfo:(id)arg3;
- (id)maxYValue;
- (id)minYValue;
- (id)userInfo;
- (id)xValue;
- (id)yValue;
- (id)yValueForKey:(id)arg1;

@end

