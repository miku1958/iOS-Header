//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFUserNotificationServiceSettings.h>

@class NSPredicate;

@interface HFMutableUserNotificationServiceSettings : HFUserNotificationServiceSettings
{
}

@property (nonatomic, getter=areDoorbellNotificationsEnabled) BOOL doorbellNotificationsEnabled; // @dynamic doorbellNotificationsEnabled;
@property (nonatomic, getter=areMotionNotificationsEnabled) BOOL motionNotificationsEnabled; // @dynamic motionNotificationsEnabled;
@property (strong, nonatomic) NSPredicate *notificationCondition; // @dynamic notificationCondition;
@property (nonatomic, getter=areNotificationsEnabled) BOOL notificationsEnabled; // @dynamic notificationsEnabled;
@property (strong, nonatomic) NSPredicate *smartCameraNotificationCondition; // @dynamic smartCameraNotificationCondition;
@property (nonatomic, getter=areSmartDetectionNotificationsEnabled) BOOL smartDetectionNotificationsEnabled; // @dynamic smartDetectionNotificationsEnabled;

@end

