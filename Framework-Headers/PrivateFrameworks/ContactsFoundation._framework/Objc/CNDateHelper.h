//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CNDateHelper : NSObject
{
}

+ (id)componentsForJanuary1WithYear:(long long)arg1;
+ (id)componentsFromDate:(id)arg1;
+ (long long)currentGregorianYearInGMT;
+ (id)dateComponentsFromDateComponents:(id)arg1 preservingUnits:(unsigned long long)arg2;
+ (id)dateComponentsInCalendar:(id)arg1 fromGregorianDateComponents:(id)arg2;
+ (id)dateComponentsInGregorianYearlessYearForYearlessDateComponents:(id)arg1 timeZone:(id)arg2;
+ (id)dateWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3;
+ (id)dateWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 hour:(long long)arg4 minute:(long long)arg5 second:(long long)arg6 timeZone:(id)arg7;
+ (id)gregorianCalendar;
+ (id)gregorianCalendarInGMT;
+ (id)gregorianDateComponentsFromDateComponents:(id)arg1;
+ (long long)gregorianYearFromDate:(id)arg1;
+ (long long)gregorianYearInGMTFromDate:(id)arg1;
+ (BOOL)isComponentsEmpty:(id)arg1;
+ (BOOL)isGregorianDerivedCalendar:(id)arg1;
+ (BOOL)isGregorianDerivedCalendarIdentifier:(id)arg1;

@end

