//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSMutableDictionary, NSNumber, NSString, NSURL;
@protocol AlarmDelegate;

@interface Alarm : NSObject
{
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
    BOOL _snoozed;
    BOOL _isSleepAlarm;
    BOOL _forceActiveForMigration;
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
@property (nonatomic) BOOL allowsSnooze; // @synthesize allowsSnooze=_allowsSnooze;
@property (nonatomic) long long bedtimeHour;
@property (nonatomic) long long bedtimeMinute;
@property (copy, nonatomic) NSNumber *bedtimeReminderMinutes;
@property (nonatomic) unsigned int daySetting; // @synthesize daySetting=_daySetting;
@property (weak, nonatomic) id<AlarmDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) Alarm *editingProxy; // @synthesize editingProxy=_editingProxy;
@property (nonatomic) BOOL forceActiveForMigration; // @synthesize forceActiveForMigration=_forceActiveForMigration;
@property (nonatomic) unsigned int hour; // @synthesize hour=_hour;
@property (nonatomic) BOOL isSleepAlarm; // @synthesize isSleepAlarm=_isSleepAlarm;
@property (readonly, nonatomic) NSDate *lastModified; // @synthesize lastModified=_lastModified;
@property (nonatomic) unsigned int minute; // @synthesize minute=_minute;
@property (readonly, nonatomic) NSArray *repeatDays;
@property (readonly, nonatomic) BOOL repeats;
@property (readonly, nonatomic) unsigned int revision; // @synthesize revision=_revision;
@property (readonly, nonatomic) NSDictionary *settings;
@property (readonly, nonatomic, getter=isSnoozed) BOOL snoozed; // @synthesize snoozed=_snoozed;
@property (readonly, nonatomic) NSString *sound; // @synthesize sound=_sound;
@property (readonly, nonatomic) long long soundType; // @synthesize soundType=_soundType;
@property (copy, nonatomic) NSNumber *soundVolume;
@property (strong, nonatomic) NSString *title; // @synthesize title=_title;
@property (readonly, nonatomic) NSString *uiTitle;
@property (strong, nonatomic) NSString *vibrationID;

+ (CDUnknownBlockType)timeComparator;
+ (BOOL)verifyDaySetting:(id)arg1 withMessageList:(id)arg2;
+ (BOOL)verifyHourSetting:(id)arg1 withMessageList:(id)arg2;
+ (BOOL)verifyIdSetting:(id)arg1 withMessageList:(id)arg2;
+ (BOOL)verifyMinuteSetting:(id)arg1 withMessageList:(id)arg2;
+ (BOOL)verifySettings:(id)arg1;
- (void).cxx_destruct;
- (id)_newBaseDateComponentsForDay:(long long)arg1;
- (id)alarmSoundIdentifier;
- (long long)alarmSoundType;
- (id)alarmSoundVolume;
- (void)applyChangesFromEditingProxy;
- (void)applySettings:(id)arg1;
- (long long)compareTime:(id)arg1;
- (id)debugDescription;
- (id)description;
- (void)dropEditingProxy;
- (unsigned long long)hash;
- (id)init;
- (id)initWithSettings:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)markModified;
- (id)nowDateForOffsetCalculation;
- (void)prepareEditingProxy;
- (void)refreshActiveState;
- (void)setAlarmSoundIdentifier:(id)arg1 ofType:(long long)arg2;
- (void)setAlarmSoundVolume:(id)arg1;
- (void)setSound:(id)arg1 ofType:(long long)arg2;
- (id)timeZoneForOffsetCalculation;

@end

