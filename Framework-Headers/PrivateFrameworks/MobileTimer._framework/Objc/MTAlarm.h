//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MobileTimer/MTDictionarySerializable-Protocol.h>
#import <MobileTimer/MTDiffable-Protocol.h>
#import <MobileTimer/MTScheduleable-Protocol.h>
#import <MobileTimer/NAEquatable-Protocol.h>
#import <MobileTimer/NSCopying-Protocol.h>
#import <MobileTimer/NSMutableCopying-Protocol.h>
#import <MobileTimer/NSSecureCoding-Protocol.h>

@class MTSound, NSDate, NSString, NSURL, NSUUID;

@interface MTAlarm : NSObject <MTScheduleable, MTDiffable, MTDictionarySerializable, NAEquatable, NSSecureCoding, NSCopying, NSMutableCopying>
{
    BOOL _enabled;
    BOOL _firing;
    BOOL _sleepAlarm;
    BOOL _allowsSnooze;
    NSUUID *_alarmID;
    unsigned long long _hour;
    unsigned long long _minute;
    unsigned long long _bedtimeHour;
    unsigned long long _bedtimeMinute;
    unsigned long long _bedtimeReminderMinutes;
    unsigned long long _repeatSchedule;
    unsigned long long _active;
    NSDate *_firedDate;
    NSDate *_snoozeFireDate;
    NSDate *_bedtimeSnoozeFireDate;
    NSDate *_dismissedDate;
    NSDate *_lastModifiedDate;
    NSString *_title;
    MTSound *_sound;
    NSDate *_bedtimeForSleepTracking;
    CDUnknownBlockType _currentDateProvider;
}

@property (nonatomic) unsigned long long active; // @synthesize active=_active;
@property (readonly, nonatomic, getter=isActiveAndEnabledForThisDevice) BOOL activeAndEnabledForThisDevice;
@property (readonly, nonatomic, getter=isActiveAnywhere) BOOL activeAnywhere;
@property (readonly, nonatomic, getter=isActiveForThisDevice) BOOL activeForThisDevice;
@property (readonly, nonatomic) NSUUID *alarmID; // @synthesize alarmID=_alarmID;
@property (readonly, nonatomic) NSURL *alarmURL;
@property (nonatomic) BOOL allowsSnooze; // @synthesize allowsSnooze=_allowsSnooze;
@property (copy, nonatomic) NSDate *bedtimeForSleepTracking; // @synthesize bedtimeForSleepTracking=_bedtimeForSleepTracking;
@property (nonatomic) unsigned long long bedtimeHour; // @synthesize bedtimeHour=_bedtimeHour;
@property (nonatomic) unsigned long long bedtimeMinute; // @synthesize bedtimeMinute=_bedtimeMinute;
@property (nonatomic) unsigned long long bedtimeReminderMinutes; // @synthesize bedtimeReminderMinutes=_bedtimeReminderMinutes;
@property (copy, nonatomic) NSDate *bedtimeSnoozeFireDate; // @synthesize bedtimeSnoozeFireDate=_bedtimeSnoozeFireDate;
@property (readonly, nonatomic, getter=isBedtimeSnoozed) BOOL bedtimeSnoozed;
@property (copy, nonatomic) CDUnknownBlockType currentDateProvider; // @synthesize currentDateProvider=_currentDateProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSDate *dismissedDate; // @synthesize dismissedDate=_dismissedDate;
@property (readonly, nonatomic) NSString *displayTitle;
@property (nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property (copy, nonatomic) NSDate *firedDate; // @synthesize firedDate=_firedDate;
@property (nonatomic, getter=isFiring) BOOL firing; // @synthesize firing=_firing;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long hour; // @synthesize hour=_hour;
@property (copy, nonatomic) NSDate *lastModifiedDate; // @synthesize lastModifiedDate=_lastModifiedDate;
@property (nonatomic) unsigned long long minute; // @synthesize minute=_minute;
@property (readonly, nonatomic) NSDate *nextFireDate;
@property (nonatomic) unsigned long long repeatSchedule; // @synthesize repeatSchedule=_repeatSchedule;
@property (readonly, nonatomic) BOOL repeats;
@property (nonatomic, getter=isSleepAlarm) BOOL sleepAlarm; // @synthesize sleepAlarm=_sleepAlarm;
@property (readonly, nonatomic) long long sleepDuration;
@property (copy, nonatomic) NSDate *snoozeFireDate; // @synthesize snoozeFireDate=_snoozeFireDate;
@property (readonly, nonatomic, getter=isSnoozed) BOOL snoozed;
@property (copy, nonatomic) MTSound *sound; // @synthesize sound=_sound;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;

+ (BOOL)_date:(id)arg1 isOnDay:(long long)arg2 calendar:(id)arg3;
+ (BOOL)_isInternalBuild;
+ (id)alarm;
+ (id)alarmWithHour:(unsigned long long)arg1 minute:(unsigned long long)arg2;
+ (unsigned long long)defaultActiveStatus;
+ (id)descriptionForActiveStatus:(unsigned long long)arg1;
+ (id)sleepAlarm;
+ (id)sleepAlarmWithHour:(long long)arg1 minute:(long long)arg2;
+ (id)sleepAlarmWithHour:(long long)arg1 minute:(long long)arg2 bedtimeHour:(long long)arg3 bedtimeMinute:(long long)arg4;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_actualTriggerStartDateForDate:(id)arg1;
- (void)_copyStateOntoAlarm:(id)arg1;
- (id)_initForCopy;
- (id)_initWithCurrentTime;
- (BOOL)_isEqualToAlarm:(id)arg1 checkLastModified:(BOOL)arg2;
- (id)_nextDateHelperWithDate:(id)arg1 hour:(long long)arg2 minute:(long long)arg3 calendar:(id)arg4;
- (id)alarmIDString;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithHour:(unsigned long long)arg1 minute:(unsigned long long)arg2;
- (id)initWithIdentifier:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualIgnoringLastModifiedDate:(id)arg1;
- (BOOL)isEqualToAlarm:(id)arg1;
- (id)keyForIdentifier;
- (id)keysAffectingNotification;
- (id)keysAffectingScheduling;
- (id)keysAffectingSnooze;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)nextFireDateAfterDate:(id)arg1;
- (id)nextFireDateAfterDate:(id)arg1 includeBedtimeNotification:(BOOL)arg2;
- (id)nextTrigger;
- (id)nextTriggerAfterDate:(id)arg1;
- (id)nextTriggerAfterDate:(id)arg1 includeBedtimeNotification:(BOOL)arg2;
- (id)nextTriggerAfterDate:(id)arg1 includeSnooze:(BOOL)arg2 includeBedtimeNotification:(BOOL)arg3;
- (id)nextTriggerAfterDate:(id)arg1 ofType:(unsigned long long)arg2;
- (id)nextTriggersAfterDate:(id)arg1;
- (id)nextTriggersAfterDate:(id)arg1 includeSnooze:(BOOL)arg2 includeBedtimeNotification:(BOOL)arg3;
- (void)setActiveForThisDevice:(BOOL)arg1;
- (BOOL)shouldBeScheduled;
- (id)upcomingTriggersAfterDate:(id)arg1;

@end

