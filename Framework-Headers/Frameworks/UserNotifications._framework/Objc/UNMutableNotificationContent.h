//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserNotifications/UNNotificationContent.h>

@class NSArray, NSDictionary, NSNumber, NSString, UNNotificationSound;

@interface UNMutableNotificationContent : UNNotificationContent
{
}

@property (copy, nonatomic) NSArray *attachments; // @dynamic attachments;
@property (copy, nonatomic) NSNumber *badge; // @dynamic badge;
@property (copy, nonatomic) NSString *body; // @dynamic body;
@property (copy, nonatomic) NSString *categoryIdentifier; // @dynamic categoryIdentifier;
@property (copy, nonatomic) NSString *darwinNotificationName; // @dynamic darwinNotificationName;
@property (copy, nonatomic) NSString *darwinSnoozedNotificationName; // @dynamic darwinSnoozedNotificationName;
@property (nonatomic, getter=isFromSnooze) BOOL fromSnooze; // @dynamic fromSnooze;
@property (nonatomic) BOOL hasDefaultAction; // @dynamic hasDefaultAction;
@property (copy, nonatomic) NSString *launchImageName; // @dynamic launchImageName;
@property (copy, nonatomic) NSArray *peopleIdentifiers; // @dynamic peopleIdentifiers;
@property (nonatomic) BOOL shouldAddToNotificationsList; // @dynamic shouldAddToNotificationsList;
@property (nonatomic) BOOL shouldAlwaysAlertWhileAppIsForeground; // @dynamic shouldAlwaysAlertWhileAppIsForeground;
@property (nonatomic) BOOL shouldLockDevice; // @dynamic shouldLockDevice;
@property (nonatomic) BOOL shouldPauseMedia; // @dynamic shouldPauseMedia;
@property (nonatomic, getter=isSnoozeable) BOOL snoozeable; // @dynamic snoozeable;
@property (copy, nonatomic) UNNotificationSound *sound; // @dynamic sound;
@property (copy, nonatomic) NSString *subtitle; // @dynamic subtitle;
@property (copy, nonatomic) NSString *threadIdentifier; // @dynamic threadIdentifier;
@property (copy, nonatomic) NSString *title; // @dynamic title;
@property (copy, nonatomic) NSDictionary *userInfo; // @dynamic userInfo;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end

