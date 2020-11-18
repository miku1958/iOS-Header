//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MobileTimer/MTAlarmSoundInfoProvider-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSMutableDictionary, NSNumber, NSString, NSURL, UILocalNotification;
@protocol AlarmDelegate;

@interface Alarm : NSObject <MTAlarmSoundInfoProvider>
{
    UILocalNotification *_weeklyNotifications[7];
    UILocalNotification *_snoozedNotification;
    unsigned int _hour;
    unsigned int _minute;
    unsigned int _daySetting;
    BOOL _allowsSnooze;
    NSDate *_lastModified;
    unsigned int _revision;
    Alarm *_editingProxy;
    BOOL _pretendActiveIfProxy;
    NSMutableDictionary *_settings;
    NSArray *_repeatDays;
    NSString *_vibrationID;
    BOOL _isSleepAlarm;
    UILocalNotification *_notification;
    long long _soundType;
    NSString *_sound;
    NSString *_title;
    id<AlarmDelegate> _delegate;
    NSString *_alarmID;
    NSURL *_alarmIDURL;
}

@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (strong, nonatomic) NSString *alarmID; // @synthesize alarmID=_alarmID;
@property (strong, nonatomic) NSURL *alarmIDURL; // @synthesize alarmIDURL=_alarmIDURL;
@property (readonly, nonatomic) NSString *alarmSoundIdentifier;
@property (readonly, nonatomic) long long alarmSoundType;
@property (copy, nonatomic) NSNumber *alarmSoundVolume;
@property (nonatomic) BOOL allowsSnooze; // @synthesize allowsSnooze=_allowsSnooze;
@property (nonatomic) long long bedtimeHour;
@property (nonatomic) long long bedtimeMinute;
@property (copy, nonatomic) NSNumber *bedtimeReminderMinutes;
@property (nonatomic) unsigned int daySetting; // @synthesize daySetting=_daySetting;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AlarmDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) Alarm *editingProxy; // @synthesize editingProxy=_editingProxy;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned int hour; // @synthesize hour=_hour;
@property (nonatomic) BOOL isSleepAlarm; // @synthesize isSleepAlarm=_isSleepAlarm;
@property (readonly, nonatomic) NSDate *lastModified; // @synthesize lastModified=_lastModified;
@property (nonatomic) unsigned int minute; // @synthesize minute=_minute;
@property (readonly, nonatomic) UILocalNotification *notification; // @synthesize notification=_notification;
@property (readonly, nonatomic) NSArray *repeatDays;
@property (readonly, nonatomic) BOOL repeats;
@property (readonly, nonatomic) unsigned int revision; // @synthesize revision=_revision;
@property (readonly, nonatomic) NSDictionary *settings;
@property (readonly, nonatomic, getter=isSnoozed) BOOL snoozed;
@property (readonly, nonatomic) NSString *sound; // @synthesize sound=_sound;
@property (readonly, nonatomic) long long soundType; // @synthesize soundType=_soundType;
@property (copy, nonatomic) NSNumber *soundVolume;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSString *title; // @synthesize title=_title;
@property (readonly, nonatomic) NSString *uiTitle;
@property (copy, nonatomic) NSString *vibrationID;

+ (id)_newSettingsFromNotification:(id)arg1;
+ (BOOL)_verifyNotificationSettings:(id)arg1 againstAlarmSettings:(id)arg2;
+ (BOOL)_verifyNotificationSettings:(id)arg1 againstUserInfo:(id)arg2;
+ (BOOL)isSnoozeNotification:(id)arg1;
+ (CDUnknownBlockType)timeComparator;
+ (BOOL)verifyDaySetting:(id)arg1 withMessageList:(id)arg2;
+ (BOOL)verifyHourSetting:(id)arg1 withMessageList:(id)arg2;
+ (BOOL)verifyIdSetting:(id)arg1 withMessageList:(id)arg2;
+ (BOOL)verifyMinuteSetting:(id)arg1 withMessageList:(id)arg2;
+ (BOOL)verifySettings:(id)arg1;
- (void).cxx_destruct;
- (id)_newBaseDateComponentsForDay:(long long)arg1;
- (id)_newNotification:(long long)arg1;
- (unsigned long long)_notificationsCount;
- (void)applyChangesFromEditingProxy;
- (void)applySettings:(id)arg1;
- (void)cancelNotifications;
- (long long)compareTime:(id)arg1;
- (void)dropEditingProxy;
- (void)dropNotifications;
- (void)handleAlarmFired:(id)arg1;
- (void)handleNotificationSnoozed:(id)arg1 notifyDelegate:(BOOL)arg2;
- (id)init;
- (id)initWithDefaultValues;
- (id)initWithNotification:(id)arg1;
- (id)initWithSettings:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)markModified;
- (id)nextFireDate;
- (id)nextFireDateAfterDate:(id)arg1;
- (id)nextFireDateAfterDate:(id)arg1 notification:(id)arg2 day:(long long)arg3;
- (id)nowDateForOffsetCalculation;
- (void)prepareEditingProxy;
- (void)prepareNotifications;
- (void)refreshActiveState;
- (void)scheduleNotifications;
- (void)setAlarmSoundIdentifier:(id)arg1 ofType:(long long)arg2;
- (void)setSound:(id)arg1 ofType:(long long)arg2;
- (id)timeZoneForOffsetCalculation;
- (BOOL)tryAddNotification:(id)arg1;

@end
