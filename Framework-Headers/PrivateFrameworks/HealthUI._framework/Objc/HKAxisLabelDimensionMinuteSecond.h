//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKAxisLabelDimensionScalar.h>

@class NSDate, NSDateFormatter;

@interface HKAxisLabelDimensionMinuteSecond : HKAxisLabelDimensionScalar
{
    NSDateFormatter *_dateFormatter;
    NSDate *_startDate;
}

@property (strong, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property (strong, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;

- (void).cxx_destruct;
- (id)initWithStartDate:(id)arg1;
- (id)stringForLocation:(id)arg1;

@end

