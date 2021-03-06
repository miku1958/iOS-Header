//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarNotification/CALNUserNotificationCenter-Protocol.h>
#import <CalendarNotification/UNUserNotificationCenterDelegate-Protocol.h>

@class CALNUNNotificationContentMapper, CALNUNNotificationMapper, CALNUNNotificationRequestMapper, CALNUNNotificationResponseMapper, NSString;
@protocol CALNNotificationStorage, CALNUNUserNotificationCenterProtocol, CALNUserNotificationCenterDelegate;

@interface CALNUNUserNotificationCenter : NSObject <UNUserNotificationCenterDelegate, CALNUserNotificationCenter>
{
    BOOL _active;
    id<CALNUserNotificationCenterDelegate> _delegate;
    id<CALNUNUserNotificationCenterProtocol> _userNotificationCenter;
    id<CALNNotificationStorage> _storage;
    CALNUNNotificationMapper *_notificationMapper;
    CALNUNNotificationRequestMapper *_notificationRequestMapper;
    CALNUNNotificationContentMapper *_notificationContentMapper;
    CALNUNNotificationResponseMapper *_notificationResponseMapper;
}

@property (nonatomic, getter=isActive) BOOL active; // @synthesize active=_active;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CALNUserNotificationCenterDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) CALNUNNotificationContentMapper *notificationContentMapper; // @synthesize notificationContentMapper=_notificationContentMapper;
@property (readonly, nonatomic) CALNUNNotificationMapper *notificationMapper; // @synthesize notificationMapper=_notificationMapper;
@property (readonly, nonatomic) CALNUNNotificationRequestMapper *notificationRequestMapper; // @synthesize notificationRequestMapper=_notificationRequestMapper;
@property (readonly, nonatomic) CALNUNNotificationResponseMapper *notificationResponseMapper; // @synthesize notificationResponseMapper=_notificationResponseMapper;
@property (readonly, nonatomic) id<CALNNotificationStorage> storage; // @synthesize storage=_storage;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id<CALNUNUserNotificationCenterProtocol> userNotificationCenter; // @synthesize userNotificationCenter=_userNotificationCenter;

+ (void)_addSettingName:(id)arg1 value:(id)arg2 toStatsPayload:(id)arg3 forTopicIdentifier:(id)arg4;
+ (id)_statsPayloadKeyForSettingName:(id)arg1 topicIdentifier:(id)arg2;
- (void).cxx_destruct;
- (id)_updatedRecord:(id)arg1;
- (void)activate;
- (BOOL)addNotificationRequest:(id)arg1 error:(id *)arg2;
- (void)collectSettingsStats:(id)arg1;
- (void)deactivate;
- (id)deliveredNotifications;
- (id)initWithBundleIdentifier:(id)arg1 userNotificationCenterFactory:(id)arg2 storage:(id)arg3 notificationIconCache:(id)arg4;
- (id)notificationCategories;
- (void)removeAllDeliveredNotifications;
- (void)removeDeliveredNotificationsWithIdentifiers:(id)arg1;
- (BOOL)replaceNotificationRequest:(id)arg1 error:(id *)arg2;
- (void)setNotificationCategories:(id)arg1;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;

@end

