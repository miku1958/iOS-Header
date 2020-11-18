//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKQueryServerConfiguration.h>

@class NSCalendar, NSDate;

__attribute__((visibility("hidden")))
@interface _HKLatestSummariesQueryServerConfiguration : HKQueryServerConfiguration
{
    NSDate *_summaryDate;
    NSCalendar *_calendar;
}

@property (copy, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property (copy, nonatomic) NSDate *summaryDate; // @synthesize summaryDate=_summaryDate;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
