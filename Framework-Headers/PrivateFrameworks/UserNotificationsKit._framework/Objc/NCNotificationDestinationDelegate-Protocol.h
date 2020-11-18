//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserNotificationsKit/NCNotificationSectionSettingsProvider-Protocol.h>

@class NCNotificationAction, NCNotificationRequest, NSDate, NSDictionary, NSSet, NSString;
@protocol NCNotificationDestination;

@protocol NCNotificationDestinationDelegate <NCNotificationSectionSettingsProvider>
- (void)destination:(id<NCNotificationDestination>)arg1 executeAction:(NCNotificationAction *)arg2 forNotificationRequest:(NCNotificationRequest *)arg3 requestAuthentication:(BOOL)arg4 withParameters:(NSDictionary *)arg5 completion:(void (^)(BOOL, BOOL))arg6;
- (void)destination:(id<NCNotificationDestination>)arg1 requestPermissionToExecuteAction:(NCNotificationAction *)arg2 forNotificationRequest:(NCNotificationRequest *)arg3 withParameters:(NSDictionary *)arg4 completion:(void (^)(BOOL))arg5;
- (void)destination:(id<NCNotificationDestination>)arg1 requestsClearingNotificationRequests:(NSSet *)arg2;
- (void)destination:(id<NCNotificationDestination>)arg1 requestsClearingNotificationRequests:(NSSet *)arg2 fromDestinations:(NSSet *)arg3;
- (void)destination:(id<NCNotificationDestination>)arg1 requestsClearingNotificationRequestsFromDate:(NSDate *)arg2 toDate:(NSDate *)arg3 inSections:(NSSet *)arg4;
- (void)destination:(id<NCNotificationDestination>)arg1 requestsClearingNotificationRequestsInSections:(NSSet *)arg2;

@optional
- (void)destination:(id<NCNotificationDestination>)arg1 setAllowsCriticalAlerts:(BOOL)arg2 forSectionIdentifier:(NSString *)arg3;
- (void)destination:(id<NCNotificationDestination>)arg1 setAllowsNotifications:(BOOL)arg2 forSectionIdentifier:(NSString *)arg3;
- (void)destination:(id<NCNotificationDestination>)arg1 setDeliverQuietly:(BOOL)arg2 forSectionIdentifier:(NSString *)arg3;
@end

