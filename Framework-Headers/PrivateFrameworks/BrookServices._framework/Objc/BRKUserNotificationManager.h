//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BrookServices/UNUserNotificationCenterDelegatePrivate-Protocol.h>

@class NSMutableDictionary, NSString, UNUserNotificationCenter;

@interface BRKUserNotificationManager : NSObject <UNUserNotificationCenterDelegatePrivate>
{
    UNUserNotificationCenter *_notificationCenter;
    NSMutableDictionary *_responseHandlers;
    NSMutableDictionary *_categories;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_deliveredNotificationIdentifiersWithCategoryIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_pendingNotificationIdentifiersWithCategoryIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addCategories:(id)arg1;
- (id)categoryForIdentifier:(id)arg1;
- (void)handleNotificationResponse:(id)arg1;
- (id)init;
- (void)isNotificationPendingOrDeliveredWithCategoryIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)postNotification:(id)arg1 destinations:(unsigned long long)arg2;
- (id)postNotification:(id)arg1 trigger:(id)arg2 responseHandler:(CDUnknownBlockType)arg3 destinations:(unsigned long long)arg4;
- (void)removeNotification:(id)arg1;
- (void)removeNotificationsWithCategoryIdentifier:(id)arg1;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;

@end

