//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKChartPoint-Protocol.h>

@class NSArray, NSDate, NSString;
@protocol HKGraphSeriesBlockCoordinateInfo;

@interface HKEnumeratedValueChartPoint : NSObject <HKChartPoint>
{
    NSArray *_indices;
    NSDate *_xValue;
    id<HKGraphSeriesBlockCoordinateInfo> _userInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSArray *indices; // @synthesize indices=_indices;
@property (readonly) Class superclass;
@property (strong, nonatomic) id<HKGraphSeriesBlockCoordinateInfo> userInfo; // @synthesize userInfo=_userInfo;
@property (nonatomic) NSDate *xValue; // @synthesize xValue=_xValue;

- (void).cxx_destruct;
- (id)allYValues;
- (id)maxXValueAsGenericType;
- (id)maxYValue;
- (id)minXValueAsGenericType;
- (id)minYValue;
- (id)xValueAsGenericType;
- (id)yValue;
- (id)yValueForKey:(id)arg1;

@end
