//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserNotificationsUI/NSObject-Protocol.h>

@protocol _UNNotificationContentExtensionLegacy;

@protocol _UNNotificationContentExtensionLegacyDelegate <NSObject>
- (void)notificationContentExtension:(id<_UNNotificationContentExtensionLegacy>)arg1 setDismissEnabled:(BOOL)arg2;
- (void)notificationContentExtensionDismiss:(id<_UNNotificationContentExtensionLegacy>)arg1;
@end
