//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSDate.h>

@interface NSDate (FCAdditions)

@property (readonly, nonatomic) BOOL fc_isWeekend;
@property (readonly) double fc_timeIntervalUntilNow;

+ (id)dateFromString:(id)arg1 possibleFormats:(id)arg2;
+ (id)dateFromStringWithISO8601Format:(id)arg1;
+ (id)fc_dateWithMillisecondsTimeIntervalSince1970:(unsigned long long)arg1;
- (id)fc_dateBySubtractingTimeInterval:(double)arg1;
- (BOOL)fc_isEarlierThan:(id)arg1;
- (BOOL)fc_isLaterThan:(id)arg1;
- (BOOL)fc_isSameDayAs:(id)arg1;
- (BOOL)fc_isWithinTimeInterval:(double)arg1 ofDate:(id)arg2;
- (unsigned long long)fc_millisecondTimeIntervalSince1970;
- (BOOL)isToday;
@end

