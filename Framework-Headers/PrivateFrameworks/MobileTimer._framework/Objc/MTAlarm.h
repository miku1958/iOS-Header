//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MobileTimer/BSDescriptionProviding-Protocol.h>
#import <MobileTimer/MTDictionarySerializable-Protocol.h>
#import <MobileTimer/MTScheduleable-Protocol.h>
#import <MobileTimer/MTSerializable-Protocol.h>
#import <MobileTimer/NAEquatable-Protocol.h>
#import <MobileTimer/NSCopying-Protocol.h>
#import <MobileTimer/NSMutableCopying-Protocol.h>
#import <MobileTimer/NSSecureCoding-Protocol.h>

@class MTIntentAlarm, MTSound, NSDate, NSNumber, NSString, NSURL, NSUUID;

@interface MTAlarm : NSObject <MTScheduleable, MTDictionarySerializable, MTSerializable, BSDescriptionProviding, NAEquatable, NSSecureCoding, NSCopying, NSMutableCopying>
{
    BOOL _sleepSchedule;
    BOOL _sleepMode;
    BOOL _sleepTracking;
    BOOL _timeInBedTracking;
    BOOL _enabled;
    BOOL _sleepAlarm;
    BOOL _allowsSnooze;
    NSUUID *_alarmID;
    unsigned long long _hour;
    unsigned long long _minute;
    unsigned long long _day;
    unsigned long long _month;
    unsigned long long _year;
    unsigned long long _bedtimeHour;
    unsigned long long _bedtimeMinute;
    NSNumber *_bedtimeReminder;
    unsigned long long _sleepModeOptions;
    unsigned long long _repeatSchedule;
    unsigned long long _playOptions;
    NSDate *_lastModifiedDate;
    NSString *_title;
    MTSound *_sound;
    NSDate *_overriddenForDate;
    NSDate *_snoozeFireDate;
    NSDate *_bedtimeSnoozeFireDate;
    NSDate *_firedDate;
    NSDate *_dismissedDate;
    unsigned long long _dismissedAction;
    NSDate *_bedtimeFiredDate;
    NSDate *_bedtimeDismissedDate;
    unsigned long long _bedtimeDismissedAction;
    NSDate *_keepOffUntilDate;
    unsigned long long _onboardingVersion;
    CDUnknownBlockType _currentDateProvider;
}

@property (readonly, nonatomic) NSUUID *alarmID; // @synthesize alarmID=_alarmID;
@property (readonly, nonatomic) NSURL *alarmURL;
@property (nonatomic) BOOL allowsSnooze; // @synthesize allowsSnooze=_allowsSnooze;
@property (nonatomic) unsigned long long bedtimeDismissedAction; // @synthesize bedtimeDismissedAction=_bedtimeDismissedAction;
@property (copy, nonatomic) NSDate *bedtimeDismissedDate; // @synthesize bedtimeDismissedDate=_bedtimeDismissedDate;
@property (copy, nonatomic) NSDate *bedtimeFiredDate; // @synthesize bedtimeFiredDate=_bedtimeFiredDate;
@property (nonatomic) unsigned long long bedtimeHour; // @synthesize bedtimeHour=_bedtimeHour;
@property (nonatomic) unsigned long long bedtimeMinute; // @synthesize bedtimeMinute=_bedtimeMinute;
@property (copy, nonatomic) NSNumber *bedtimeReminder; // @synthesize bedtimeReminder=_bedtimeReminder;
@property (nonatomic) unsigned long long bedtimeReminderMinutes;
@property (copy, nonatomic) NSDate *bedtimeSnoozeFireDate; // @synthesize bedtimeSnoozeFireDate=_bedtimeSnoozeFireDate;
@property (copy, nonatomic) CDUnknownBlockType currentDateProvider; // @synthesize currentDateProvider=_currentDateProvider;
@property (nonatomic) unsigned long long day; // @synthesize day=_day;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long dismissedAction; // @synthesize dismissedAction=_dismissedAction;
@property (copy, nonatomic) NSDate *dismissedDate; // @synthesize dismissedDate=_dismissedDate;
@property (readonly, nonatomic) NSString *displayTitle;
@property (nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property (copy, nonatomic) NSDate *firedDate; // @synthesize firedDate=_firedDate;
@property (readonly, nonatomic, getter=isFiring) BOOL firing;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long hour; // @synthesize hour=_hour;
@property (readonly, nonatomic) MTIntentAlarm *intentAlarm;
@property (copy, nonatomic) NSDate *keepOffUntilDate; // @synthesize keepOffUntilDate=_keepOffUntilDate;
@property (copy, nonatomic) NSDate *lastModifiedDate; // @synthesize lastModifiedDate=_lastModifiedDate;
@property (nonatomic) unsigned long long minute; // @synthesize minute=_minute;
@property (nonatomic) unsigned long long month; // @synthesize month=_month;
@property (readonly, nonatomic) NSDate *nextFireDate;
@property (nonatomic) unsigned long long onboardingVersion; // @synthesize onboardingVersion=_onboardingVersion;
@property (copy, nonatomic) NSDate *overriddenForDate; // @synthesize overriddenForDate=_overriddenForDate;
@property (nonatomic) unsigned long long playOptions; // @synthesize playOptions=_playOptions;
@property (readonly, nonatomic) BOOL playsOnThisDevice;
@property (nonatomic) unsigned long long repeatSchedule; // @synthesize repeatSchedule=_repeatSchedule;
@property (readonly, nonatomic) BOOL repeats;
@property (nonatomic, getter=isSleepAlarm) BOOL sleepAlarm; // @synthesize sleepAlarm=_sleepAlarm;
@property (readonly, nonatomic) unsigned long long sleepDuration;
@property (nonatomic) BOOL sleepMode; // @synthesize sleepMode=_sleepMode;
@property (nonatomic) unsigned long long sleepModeOptions; // @synthesize sleepModeOptions=_sleepModeOptions;
@property (nonatomic) BOOL sleepSchedule; // @synthesize sleepSchedule=_sleepSchedule;
@property (nonatomic) BOOL sleepTracking; // @synthesize sleepTracking=_sleepTracking;
@property (copy, nonatomic) NSDate *snoozeFireDate; // @synthesize snoozeFireDate=_snoozeFireDate;
@property (readonly, nonatomic, getter=isSnoozed) BOOL snoozed;
@property (copy, nonatomic) MTSound *sound; // @synthesize sound=_sound;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (nonatomic) BOOL timeInBedTracking; // @synthesize timeInBedTracking=_timeInBedTracking;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;
@property (nonatomic) unsigned long long year; // @synthesize year=_year;

+ (BOOL)_date:(id)arg1 isOnDay:(long long)arg2 calendar:(id)arg3;
+ (BOOL)_isInternalBuild;
+ (id)alarm;
+ (id)alarmWithHour:(unsigned long long)arg1 minute:(unsigned long long)arg2;
+ (unsigned long long)defaultPlayOptions;
+ (unsigned long long)defaultPlayOptionsIsSleepAlarm:(BOOL)arg1;
+ (unsigned long long)defaultSleepModeOptions;
+ (id)mostRecentlyUpdatedAlarmForAlarms:(id)arg1;
+ (id)propertiesAffectingBedtime;
+ (id)propertiesAffectingNotification;
+ (id)propertiesAffectingSnooze;
+ (id)propertiesAffectingSync;
+ (id)propertiesAffectingWaketime;
+ (id)sleepAlarm;
+ (id)sleepAlarmWithHour:(long long)arg1 minute:(long long)arg2;
+ (id)sleepAlarmWithHour:(long long)arg1 minute:(long long)arg2 bedtimeHour:(long long)arg3 bedtimeMinute:(long long)arg4;
+ (id)sleepAlarmWithHour:(long long)arg1 minute:(long long)arg2 year:(long long)arg3 month:(long long)arg4 day:(long long)arg5 bedtimeHour:(long long)arg6 bedtimeMinute:(long long)arg7;
+ (id)sleepAlarmWithId:(id)arg1;
+ (id)sleepAlarmWithSchedule:(unsigned long long)arg1;
+ (id)sleepScheduleString:(unsigned long long)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_copyStateOntoAlarm:(id)arg1;
- (id)_earliestTriggerDateForDate:(id)arg1;
- (id)_initCommon;
- (BOOL)_isEqualToAlarm:(id)arg1 checkLastModified:(BOOL)arg2;
- (id)_nextDateHelperWithDate:(id)arg1 calendar:(id)arg2;
- (void)_updatePropertiesFromDeserializer:(id)arg1;
- (id)alarmIDIntentObject;
- (id)alarmIDString;
- (id)alarmIntentDisplayString;
- (id)bedtimeComponents;
- (long long)compare:(id)arg1;
- (BOOL)confirmedLastBedtimeReminder;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dateComponents;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)getOverriddenDate;
- (id)identifier;
- (id)init;
- (id)initFromDeserializer:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCurrentTimeFromCurrentDateProvider:(CDUnknownBlockType)arg1;
- (id)initWithHour:(unsigned long long)arg1 minute:(unsigned long long)arg2;
- (id)initWithHour:(unsigned long long)arg1 minute:(unsigned long long)arg2 currentDateProvider:(CDUnknownBlockType)arg3;
- (id)initWithIdentifier:(id)arg1;
- (id)intentLabel;
- (BOOL)isBedtimeSnoozed;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualIgnoringLastModifiedDate:(id)arg1;
- (BOOL)isEqualToAlarm:(id)arg1;
- (BOOL)isItemEnabled;
- (BOOL)isSingleTime;
- (BOOL)isSingleTimeAlarm;
- (BOOL)isSleepItem;
- (BOOL)isValidDateComponent:(long long)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)nextExpectedBedtimeDateAfterDate:(id)arg1;
- (id)nextExpectedWakeUpDateAfterDate:(id)arg1;
- (id)nextFireDateAfterDate:(id)arg1;
- (id)nextFireDateAfterDate:(id)arg1 includeBedtimeNotification:(BOOL)arg2;
- (id)nextTrigger;
- (id)nextTriggerAfterDate:(id)arg1;
- (id)nextTriggerAfterDate:(id)arg1 includeBedtimeNotification:(BOOL)arg2;
- (id)nextTriggerAfterDate:(id)arg1 includeSnooze:(BOOL)arg2 includeBedtimeNotification:(BOOL)arg3;
- (id)nextTriggerAfterDate:(id)arg1 ofType:(unsigned long long)arg2;
- (id)nextTriggersAfterDate:(id)arg1;
- (id)nextTriggersAfterDate:(id)arg1 includeBedtime:(BOOL)arg2;
- (id)nextTriggersAfterDate:(id)arg1 includeSnooze:(BOOL)arg2 includeBedtimeNotification:(BOOL)arg3;
- (id)nextTriggersAfterDate:(id)arg1 inclusionOptions:(unsigned long long)arg2;
- (BOOL)overridesAlarm:(id)arg1 trigger:(id)arg2 calendar:(id)arg3;
- (BOOL)overridesNextAlarm:(id)arg1 date:(id)arg2 calendar:(id)arg3;
- (BOOL)overridesScheduledObject:(id)arg1 calendar:(id)arg2;
- (void)scheduleOverridenForDate:(id)arg1;
- (void)serializeWithSerializer:(id)arg1;
- (void)setFiring:(BOOL)arg1;
- (void)setOverriddenDate:(id)arg1;
- (BOOL)shouldBeScheduled;
- (id)singleTimeOverrideDateInCalendar:(id)arg1;
- (double)sleepDurationSeconds;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)timeObject;
- (id)upcomingTriggersAfterDate:(id)arg1;

@end
