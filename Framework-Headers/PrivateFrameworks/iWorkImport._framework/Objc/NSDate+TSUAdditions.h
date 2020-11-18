//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSDate.h>

@interface NSDate (TSUAdditions)

@property (readonly, nonatomic) CDStruct_d65e47c4 tsu_DOSTime;

- (id)p_rule1To23HoursAgo:(long long)arg1;
- (id)p_rule1To59MinutesAgo:(long long)arg1;
- (id)p_ruleForOverAWeekAgoForDate:(id)arg1 withDateFormatter:(id)arg2;
- (id)p_ruleForOverAYearAgoForDate:(id)arg1 withDateFormatter:(id)arg2;
- (id)p_ruleForUpToSevenDaysAgoAndNotYesterdayForDate:(id)arg1 withDateFormatter:(id)arg2;
- (id)p_ruleForYesterday:(id)arg1 withDateFormatter:(id)arg2;
- (id)p_ruleForYesterdayShortAsPossible:(id)arg1;
- (id)tsu_fullFormattedDateWithPeriod;
- (id)tsu_initWithDOSTime:(CDStruct_d65e47c4)arg1;
- (BOOL)tsu_isEqualToDate:(id)arg1;
- (id)tsu_relativeAnnotationStringForEarlierDate:(id)arg1;
- (id)tsu_relativeAnnotationStringForEarlierDate:(id)arg1 withDateFormatter:(id)arg2;
- (id)tsu_relativeAnnotationStringForEarlierDate:(id)arg1 withDateFormatter:(id)arg2 shortAsPossible:(BOOL)arg3;
@end
