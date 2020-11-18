//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class ACAccountStore, NSMutableDictionary, NSString;

@interface BirthdayCalendarUpdater : NSOperation
{
    struct CalDatabase *_database;
    void *_calendar;
    void *_facebookCalendar;
    void *_addressBook;
    ACAccountStore *_accountStore;
    NSMutableDictionary *_accountIdentifiersToIsFacebook;
    NSString *_birthdaySummary;
    long long _defaultAlarmOffset;
}

- (void).cxx_destruct;
- (BOOL)_areNormalizedBirthdaysTheSame:(id)arg1 birthday2:(id)arg2;
- (id)_birthdayCalendarForCalendarScale:(id)arg1;
- (id)_birthdayCalendarForCalendarScale:(id)arg1 useCurrentTimezone:(BOOL)arg2;
- (BOOL)_isPersonFromFacebook:(void *)arg1;
- (BOOL)_isYearlessBirthday:(id)arg1;
- (int)_processPerson:(void *)arg1 withBirthdays:(id)arg2 forCalendar:(void *)arg3 preExistingEvents:(id)arg4 addedBirthdayRecord:(id)arg5;
- (int)_pruneEventsFromCalendar:(void *)arg1 matchingFacebookStatus:(BOOL)arg2 andStoreInRecord:(id)arg3;
- (void)addDefaultAlarmToEvent:(void *)arg1;
- (id)copyBirthdayEventSummaryForPerson:(void *)arg1;
- (id)copyNormalizedBirthdaysForPerson:(void *)arg1;
- (id)copyOldestNormalizedBirthdaysForPerson:(void *)arg1;
- (void)dealloc;
- (id)init;
- (void)main;
- (void *)newBirthdayEventForBirthday:(id)arg1 andPerson:(void *)arg2;
- (BOOL)setBirthday:(id)arg1 forEvent:(void *)arg2;

@end

