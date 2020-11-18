//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserNotificationsUIKit/NSObject-Protocol.h>

@class NCNotificationManagementViewPresenter, NCNotificationRequest, NCNotificationSectionSettings, NSString;

@protocol NCNotificationManagementViewPresenterDelegate <NSObject>
- (NCNotificationSectionSettings *)notificationManagementViewPresenter:(NCNotificationManagementViewPresenter *)arg1 sectionSettingsForSectionIdentifier:(NSString *)arg2;
- (void)notificationManagementViewPresenter:(NCNotificationManagementViewPresenter *)arg1 setAllowsCriticalAlerts:(BOOL)arg2 forNotificationRequest:(NCNotificationRequest *)arg3 withSectionIdentifier:(NSString *)arg4;
- (void)notificationManagementViewPresenter:(NCNotificationManagementViewPresenter *)arg1 setAllowsNotifications:(BOOL)arg2 forNotificationRequest:(NCNotificationRequest *)arg3 withSectionIdentifier:(NSString *)arg4;
- (void)notificationManagementViewPresenter:(NCNotificationManagementViewPresenter *)arg1 setDeliverQuietly:(BOOL)arg2 forNotificationRequest:(NCNotificationRequest *)arg3 withSectionIdentifier:(NSString *)arg4;

@optional
- (void)notificationManagementViewPresenterDidDismissManagementView:(NCNotificationManagementViewPresenter *)arg1;
- (void)notificationManagementViewPresenterWillPresentManagementView:(NCNotificationManagementViewPresenter *)arg1;
@end

