//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarDaemon/EKPredicate.h>

@class NSDate;

@interface EKScheduledReminderPredicate : EKPredicate
{
    NSDate *_day;
    unsigned long long _maxResults;
}

@property (strong, nonatomic) NSDate *day; // @synthesize day=_day;
@property (nonatomic) unsigned long long maxResults; // @synthesize maxResults=_maxResults;

+ (id)predicateForScheduledRemindersInCalendars:(id)arg1 onDay:(id)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyMatchingItemsWithDatabase:(struct CalDatabase *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
