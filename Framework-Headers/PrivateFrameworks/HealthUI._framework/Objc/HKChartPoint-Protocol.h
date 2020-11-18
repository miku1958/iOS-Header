//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/NSObject-Protocol.h>

@class NSArray, NSString;
@protocol HKGraphSeriesBlockCoordinateInfo;

@protocol HKChartPoint <NSObject>
- (NSArray *)allYValues;
- (id)maxXValueAsGenericType;
- (id)maxYValue;
- (id)minXValueAsGenericType;
- (id)minYValue;
- (id<HKGraphSeriesBlockCoordinateInfo>)userInfo;
- (id)xValueAsGenericType;
- (id)yValue;
- (id)yValueForKey:(NSString *)arg1;
@end
