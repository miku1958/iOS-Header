//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserNotificationsSettings/NSObject-Protocol.h>

@class NSSet, UNNotificationSystemSettings, UNUserNotificationSettingsServiceConnection;

@protocol UNUserNotificationSettingsServiceConnectionObserver <NSObject>

@optional
- (void)settingsServiceConnection:(UNUserNotificationSettingsServiceConnection *)arg1 didUpdateNotificationSourcesWithIdentifiers:(NSSet *)arg2;
- (void)settingsServiceConnection:(UNUserNotificationSettingsServiceConnection *)arg1 didUpdateNotificationSystemSettings:(UNNotificationSystemSettings *)arg2;
@end

