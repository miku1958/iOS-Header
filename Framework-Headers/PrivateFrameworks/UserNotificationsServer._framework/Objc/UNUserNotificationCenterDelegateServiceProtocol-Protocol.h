//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserNotificationsServer/NSObject-Protocol.h>

@class NSString, UNNotificationResponse, UNNotificationSettings;

@protocol UNUserNotificationCenterDelegateServiceProtocol <NSObject>
- (void)didChangeSettings:(UNNotificationSettings *)arg1 forBundleIdentifier:(NSString *)arg2;
- (void)didOpenApplicationForResponse:(UNNotificationResponse *)arg1 forBundleIdentifier:(NSString *)arg2;
- (void)didReceiveNotificationResponse:(UNNotificationResponse *)arg1 forBundleIdentifier:(NSString *)arg2 withCompletionHandler:(void (^)(BOOL))arg3;
@end
