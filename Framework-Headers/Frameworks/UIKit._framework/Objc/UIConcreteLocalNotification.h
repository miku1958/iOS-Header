//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UILocalNotification.h>

#import <UIKit/NSSecureCoding-Protocol.h>

@class CLRegion, NSCalendar, NSData, NSDate, NSNumber, NSString, NSTimeZone;

__attribute__((visibility("hidden")))
@interface UIConcreteLocalNotification : UILocalNotification <NSSecureCoding>
{
    NSDate *fireDate;
    NSTimeZone *timeZone;
    unsigned long long repeatInterval;
    NSCalendar *repeatCalendar;
    int totalRepeatCount;
    int remainingRepeatCount;
    CLRegion *region;
    BOOL regionTriggersOnce;
    NSString *alertBody;
    BOOL hasAction;
    NSString *alertAction;
    NSString *alertLaunchImage;
    NSString *alertTitle;
    NSString *soundName;
    long long applicationIconBadgeNumber;
    NSData *userInfoData;
    BOOL hideAlertTitle;
    BOOL allowSnooze;
    int soundType;
    NSNumber *audioVolume;
    BOOL interruptAudioAndLockDevice;
    BOOL resumeApplicationInBackground;
    BOOL fireNotificationsWhenAppRunning;
    BOOL showAlarmStatusBarItem;
    NSString *customLockSliderLabel;
    NSString *firedNotificationName;
    NSString *snoozedNotificationName;
    NSString *category;
    NSString *vibrationName;
    BOOL isTransient;
    BOOL fromSnooze;
    NSString *threadIdentifier;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_setUserInfoData:(id)arg1;
- (id)alertAction;
- (id)alertBody;
- (id)alertLaunchImage;
- (id)alertTitle;
- (BOOL)allowSnooze;
- (long long)applicationIconBadgeNumber;
- (id)audioVolume;
- (id)category;
- (void)clearNonSystemProperties;
- (long long)compareFireDates:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)customLockSliderLabel;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fireDate;
- (BOOL)fireNotificationsWhenAppRunning;
- (id)firedNotificationName;
- (BOOL)hasAction;
- (unsigned long long)hash;
- (BOOL)hideAlertTitle;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)interruptAudioAndLockDevice;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isFromSnooze;
- (BOOL)isTransient;
- (BOOL)isTriggeredByDate;
- (BOOL)isTriggeredByRegion;
- (BOOL)isValid;
- (id)nextFireDateAfterDate:(id)arg1 localTimeZone:(id)arg2;
- (id)nextFireDateForLastFireDate:(id)arg1;
- (id)region;
- (BOOL)regionTriggersOnce;
- (int)remainingRepeatCount;
- (id)repeatCalendar;
- (unsigned long long)repeatInterval;
- (BOOL)resumeApplicationInBackground;
- (void)setAlertAction:(id)arg1;
- (void)setAlertBody:(id)arg1;
- (void)setAlertLaunchImage:(id)arg1;
- (void)setAlertTitle:(id)arg1;
- (void)setAllowSnooze:(BOOL)arg1;
- (void)setApplicationIconBadgeNumber:(long long)arg1;
- (void)setAudioVolume:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setCustomLockSliderLabel:(id)arg1;
- (void)setFireDate:(id)arg1;
- (void)setFireNotificationsWhenAppRunning:(BOOL)arg1;
- (void)setFiredNotificationName:(id)arg1;
- (void)setFromSnooze:(BOOL)arg1;
- (void)setHasAction:(BOOL)arg1;
- (void)setHideAlertTitle:(BOOL)arg1;
- (void)setInterruptAudioAndLockDevice:(BOOL)arg1;
- (void)setIsTransient:(BOOL)arg1;
- (void)setRegion:(id)arg1;
- (void)setRegionTriggersOnce:(BOOL)arg1;
- (void)setRemainingRepeatCount:(int)arg1;
- (void)setRepeatCalendar:(id)arg1;
- (void)setRepeatInterval:(unsigned long long)arg1;
- (void)setResumeApplicationInBackground:(BOOL)arg1;
- (void)setShowAlarmStatusBarItem:(BOOL)arg1;
- (void)setSnoozedNotificationName:(id)arg1;
- (void)setSoundName:(id)arg1;
- (void)setSoundType:(int)arg1;
- (void)setSoundVolume:(float)arg1;
- (void)setThreadIdentifier:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setTotalRepeatCount:(int)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setVibrationName:(id)arg1;
- (BOOL)showAlarmStatusBarItem;
- (id)snoozedNotificationName;
- (id)soundName;
- (int)soundType;
- (float)soundVolume;
- (id)threadIdentifier;
- (id)timeZone;
- (int)totalRepeatCount;
- (id)userInfo;
- (void)validate;
- (id)vibrationName;

@end

