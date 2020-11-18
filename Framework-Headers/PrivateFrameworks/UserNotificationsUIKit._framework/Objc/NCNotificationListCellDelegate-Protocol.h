//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserNotificationsUIKit/NSObject-Protocol.h>

@class NCNotificationListCell, UITouch;

@protocol NCNotificationListCellDelegate <NSObject>
- (BOOL)notificationListCell:(NCNotificationListCell *)arg1 shouldPanHorizontallyWithTouch:(UITouch *)arg2;
- (void)notificationListCellDidHideCellActions:(NCNotificationListCell *)arg1 resetCellScrollPosition:(BOOL)arg2 animated:(BOOL)arg3;
- (void)notificationListCellDidRevealCellActions:(NCNotificationListCell *)arg1;
- (void)notificationListCellDidSignificantUserInteraction:(NCNotificationListCell *)arg1;
- (void)notificationListCellRequestsDefaultAction:(NCNotificationListCell *)arg1 completion:(void (^)(BOOL))arg2;
- (void)notificationListCellRequestsDismissAction:(NCNotificationListCell *)arg1 completion:(void (^)(BOOL))arg2;
- (void)notificationListCellRequestsPresentingLongLook:(NCNotificationListCell *)arg1 completion:(void (^)(BOOL))arg2;
- (void)willTearDownNotificationListCell:(NCNotificationListCell *)arg1;
@end
