//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserNotificationsUIKit/NSObject-Protocol.h>

@class NCNotificationListSection, NCNotificationRequest, NSString;

@protocol NCNotificationListSectionDelegate <NSObject>
- (NSString *)notificationListSection:(NCNotificationListSection *)arg1 coalescingIdentifierForNotificationRequest:(NCNotificationRequest *)arg2;
- (BOOL)notificationListSection:(NCNotificationListSection *)arg1 shouldInsertForExpandedStackNotificationRequest:(NCNotificationRequest *)arg2;
@end

