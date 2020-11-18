//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface EKStringFactory : NSObject
{
    struct __CFDateFormatter *_standardTimeFormatter;
    struct __CFDateFormatter *_customFormatter;
}

+ (id)sharedInstance;
- (struct __CFDateFormatter *)_customFormatter;
- (id)_dateStringForEventInvitationWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 allDay:(BOOL)arg4 withFormat:(unsigned long long)arg5 showTimeZone:(BOOL)arg6;
- (void)_invalidateFormatters;
- (void)_localeChanged:(id)arg1;
- (id)_stringForDateTime:(CDStruct_79f9e052)arg1 timeZone:(struct __CFTimeZone *)arg2;
- (id)_stringForTime:(CDStruct_79f9e052)arg1;
- (id)dateStringForDate:(double)arg1 allDay:(BOOL)arg2 shortFormat:(BOOL)arg3;
- (id)dateStringForDate:(double)arg1 allDay:(BOOL)arg2 standalone:(BOOL)arg3 shortFormat:(BOOL)arg4;
- (id)dateStringForEventInvitation:(id)arg1 timeZone:(id)arg2;
- (id)dateStringForEventInvitationWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 allDay:(BOOL)arg4;
- (id)dateStringForSuggestedEventWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 allDay:(BOOL)arg4 showTimeZone:(BOOL)arg5;
- (void)dealloc;
- (id)init;
- (struct __CFDateFormatter *)standardTimeFormatter;
- (id)timeStringForDate:(double)arg1 inTimeZone:(id)arg2;

@end
