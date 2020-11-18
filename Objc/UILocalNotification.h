//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCoding-Protocol.h>
#import <UIKit/NSCopying-Protocol.h>

@class CLRegion, NSCalendar, NSDate, NSDictionary, NSNumber, NSString, NSTimeZone;

@interface UILocalNotification : NSObject <NSCopying, NSCoding>
{
}

@property (copy, nonatomic) NSString *alertAction; // @dynamic alertAction;
@property (copy, nonatomic) NSString *alertBody; // @dynamic alertBody;
@property (copy, nonatomic) NSString *alertLaunchImage; // @dynamic alertLaunchImage;
@property (copy, nonatomic) NSString *alertTitle; // @dynamic alertTitle;
@property (nonatomic) BOOL allowSnooze; // @dynamic allowSnooze;
@property (nonatomic) long long applicationIconBadgeNumber; // @dynamic applicationIconBadgeNumber;
@property (strong, nonatomic) NSNumber *audioVolume; // @dynamic audioVolume;
@property (copy, nonatomic) NSString *category; // @dynamic category;
@property (copy, nonatomic) NSString *customLockSliderLabel; // @dynamic customLockSliderLabel;
@property (copy, nonatomic) NSDate *fireDate; // @dynamic fireDate;
@property (nonatomic) BOOL fireNotificationsWhenAppRunning; // @dynamic fireNotificationsWhenAppRunning;
@property (copy, nonatomic) NSString *firedNotificationName; // @dynamic firedNotificationName;
@property (nonatomic, getter=isFromSnooze) BOOL fromSnooze; // @dynamic fromSnooze;
@property (nonatomic) BOOL hasAction; // @dynamic hasAction;
@property (nonatomic) BOOL hideAlertTitle; // @dynamic hideAlertTitle;
@property (nonatomic) BOOL interruptAudioAndLockDevice; // @dynamic interruptAudioAndLockDevice;
@property (nonatomic) BOOL isTransient; // @dynamic isTransient;
@property (copy, nonatomic) CLRegion *region; // @dynamic region;
@property (nonatomic) BOOL regionTriggersOnce; // @dynamic regionTriggersOnce;
@property (nonatomic) int remainingRepeatCount; // @dynamic remainingRepeatCount;
@property (copy, nonatomic) NSCalendar *repeatCalendar; // @dynamic repeatCalendar;
@property (nonatomic) unsigned long long repeatInterval; // @dynamic repeatInterval;
@property (nonatomic) BOOL resumeApplicationInBackground; // @dynamic resumeApplicationInBackground;
@property (nonatomic) BOOL showAlarmStatusBarItem; // @dynamic showAlarmStatusBarItem;
@property (copy, nonatomic) NSString *snoozedNotificationName; // @dynamic snoozedNotificationName;
@property (copy, nonatomic) NSString *soundName; // @dynamic soundName;
@property (nonatomic) int soundType; // @dynamic soundType;
@property (copy, nonatomic) NSString *threadIdentifier; // @dynamic threadIdentifier;
@property (copy, nonatomic) NSTimeZone *timeZone; // @dynamic timeZone;
@property (nonatomic) int totalRepeatCount; // @dynamic totalRepeatCount;
@property (copy, nonatomic) NSDictionary *userInfo; // @dynamic userInfo;
@property (copy, nonatomic) NSString *vibrationName; // @dynamic vibrationName;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void)clearNonSystemProperties;
- (long long)compareFireDates:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isTriggeredByDate;
- (BOOL)isTriggeredByRegion;
- (BOOL)isValid;
- (id)nextFireDateAfterDate:(id)arg1 localTimeZone:(id)arg2;
- (id)nextFireDateForLastFireDate:(id)arg1;
- (void)validate;

@end

