//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface HKMedicalDate : NSObject <NSSecureCoding, NSCopying>
{
    long long _form;
    NSString *_originalTimeZoneString;
    NSDate *_underlyingDate;
}

@property (readonly, copy, nonatomic) NSDate *dateForUTC;
@property (readonly, nonatomic) long long form; // @synthesize form=_form;
@property (readonly, copy, nonatomic) NSString *originalTimeZoneString; // @synthesize originalTimeZoneString=_originalTimeZoneString;
@property (readonly, copy, nonatomic) NSDate *underlyingDate; // @synthesize underlyingDate=_underlyingDate;

+ (id)_adjustDate:(id)arg1 calendar:(id)arg2 form:(long long)arg3;
+ (unsigned long long)_calendarUnitForForm:(long long)arg1;
+ (id)_descriptionForForm:(long long)arg1;
+ (id)_medicalDateFromComponents:(id)arg1 originalTimeZoneString:(id)arg2 form:(long long)arg3 error:(out id *)arg4;
+ (id)_medicalDateWithForm:(long long)arg1 underlyingDate:(id)arg2 originalTimeZoneString:(id)arg3;
+ (BOOL)_validForm:(long long)arg1;
+ (id)medicalDateWithYear:(long long)arg1 error:(out id *)arg2;
+ (id)medicalDateWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 error:(out id *)arg4;
+ (id)medicalDateWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 hour:(long long)arg4 minute:(long long)arg5 second:(long long)arg6 originalTimeZoneString:(id)arg7 error:(out id *)arg8;
+ (id)medicalDateWithYear:(long long)arg1 month:(long long)arg2 error:(out id *)arg3;
+ (id)referenceCalendar;
+ (id)referenceCalendarWithLocalTimezone;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_initWithForm:(long long)arg1 underlyingDate:(id)arg2 originalTimeZoneString:(id)arg3;
- (id)adjustedDateForCalendar:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isCompatibleWithMedicalDateForm:(long long)arg1;
- (BOOL)isEqual:(id)arg1;

@end
