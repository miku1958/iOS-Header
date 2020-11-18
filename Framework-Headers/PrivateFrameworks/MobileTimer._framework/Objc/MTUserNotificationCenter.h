//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MobileTimer/MTNotificationCenter-Protocol.h>

@class MTUserNotificationActionDispatcher, NSDictionary, NSString;

@interface MTUserNotificationCenter : NSObject <MTNotificationCenter>
{
    NSDictionary *_notificationCenters;
    MTUserNotificationActionDispatcher *_actionHandler;
}

@property (strong, nonatomic) MTUserNotificationActionDispatcher *actionHandler; // @synthesize actionHandler=_actionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSDictionary *notificationCenters; // @synthesize notificationCenters=_notificationCenters;
@property (readonly) Class superclass;

+ (id)_allIdentifiersForAlarm:(id)arg1;
+ (id)_allIdentifiersForAlarm:(id)arg1 includeMainIdentifier:(BOOL)arg2;
+ (id)_allIdentifiersForAlarm:(id)arg1 includeMainIdentifier:(BOOL)arg2 includeSnooze:(BOOL)arg3;
+ (id)_durationComponentsFormatter;
+ (id)_goToBedIdentifier:(id)arg1;
+ (id)_mutableContentForScheduledAlarmWithCommonSettings:(id)arg1;
+ (void)_setGoToBedTitleAndBody:(id)arg1 forGoToBedNotification:(id)arg2;
+ (void)_setSnoozeCountdownTitleAndBody:(id)arg1 forSnoozeCountdownNotification:(id)arg2;
+ (void)_setSpecificContent:(id)arg1 forGoToBedNotification:(id)arg2;
+ (void)_setSpecificContent:(id)arg1 forNormalScheduledAlarm:(id)arg2;
+ (void)_setSpecificContent:(id)arg1 forScheduledAlarm:(id)arg2;
+ (void)_setSpecificContent:(id)arg1 forSnoozeCountdownNotification:(id)arg2;
+ (id)_snoozeCountdownIdentifier:(id)arg1;
+ (id)_timeFormatter;
+ (id)_wakeUpAlarmStringForAlarm:(id)arg1 bundle:(struct __CFBundle *)arg2;
+ (id)categoryForScheduledAlarm:(id)arg1;
+ (id)categoryForScheduledTimer:(id)arg1;
+ (id)contentForScheduledAlarm:(id)arg1;
+ (id)contentForScheduledTimer:(id)arg1;
+ (id)launchURLForScheme:(id)arg1;
+ (id)notificationPrefixes;
+ (id)requestIdentifierForScheduledAlarm:(id)arg1;
+ (id)userInfoForAlarm:(id)arg1;
+ (id)userInfoForTimer:(id)arg1;
- (void).cxx_destruct;
- (id)_notificationCenterForScheduledAlarm:(id)arg1;
- (id)_notificationCenterForScheduledTimer;
- (id)alarmCategories;
- (id)bedtimeCategories;
- (void)dismissNotificationsForAlarm:(id)arg1;
- (void)dismissNotificationsForAlarm:(id)arg1 dismissAction:(unsigned long long)arg2;
- (void)dismissNotificationsForAlarm:(id)arg1 includeMainIdentifier:(BOOL)arg2;
- (void)dismissNotificationsForAlarm:(id)arg1 includeMainIdentifier:(BOOL)arg2 includeSnooze:(BOOL)arg3;
- (void)dismissNotificationsForAlarm:(id)arg1 includeSnooze:(BOOL)arg2;
- (void)dismissNotificationsForTimer:(id)arg1;
- (void)dismissNotificationsWithIdentifiers:(id)arg1;
- (void)dismissRelatedNotificationsForScheduledAlarm:(id)arg1;
- (id)init;
- (void)interruptAudioAndLockDeviceWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)notificationCategories;
- (void)postBedtimeNotificationForAlarm:(id)arg1 date:(id)arg2;
- (void)postNotificationForScheduledAlarm:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)postNotificationForScheduledAlarm:(id)arg1 content:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)postNotificationForScheduledTimer:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)registerActionHandler:(id)arg1;
- (void)removeAllDeliveredNotifications;
- (void)setupNotificationCenter;
- (id)timerCategories;

@end
