//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKGraphSeriesChartData-Protocol.h>

@class NSDate, NSString;

@interface HKInteractiveChartCategoryValueData : NSObject <HKGraphSeriesChartData>
{
    long long _value;
    NSDate *_startDate;
    NSDate *_endDate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property (readonly) Class superclass;
@property (nonatomic) long long value; // @synthesize value=_value;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;

@end

