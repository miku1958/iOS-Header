//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableArray, SSVSubscriptionStatus, SSVSubscriptionStatusRequest;
@protocol OS_dispatch_queue;

@interface SSVSubscriptionStatusCoordinator : NSObject
{
    SSVSubscriptionStatusRequest *_activeRequest;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    BOOL _didReset;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SSVSubscriptionStatus *_lastKnownStatus;
    NSDate *_lastStatusDate;
    int _notificationToken;
    long long _subscriptionStatusAccessPolicy;
    NSMutableArray *_statusBlocks;
}

@property (readonly, copy) SSVSubscriptionStatus *lastKnownStatus;

+ (id)_changeNotificationSuspensionAccessQueue;
+ (id)_existingSharedCoordinator;
+ (void)_sendChangeNotification;
+ (void)beginSuspendingSubscriptionStatusChangeNotifications;
+ (id)copyStatusFromUserDefaults;
+ (void)endSuspendingSubscriptionStatusChangeNotifications;
+ (void)removeUserDefaultsForAccountIdentifier:(id)arg1;
+ (void)sendChangeNotification;
+ (id)sharedCoordinator;
+ (void)updateUserDefaultsWithStatus:(id)arg1;
+ (void)updateWithResponseDictionary:(id)arg1 accountIdentifier:(id)arg2;
- (void).cxx_destruct;
- (void)_accountStoreChangedNotification;
- (id)_copyStatusDateFromUserDefaults;
- (id)_copyStatusFromUserDefaults;
- (id)_copyValidStatusForStatus:(id)arg1;
- (void)_deviceStoreFrontChangedNotification;
- (void)_externalChangeNotification;
- (void)_fireStatusBlocksWithStatus:(id)arg1 isFinal:(BOOL)arg2 error:(id)arg3;
- (void)_handleRequestResponseWithStatus:(id)arg1 isFinal:(BOOL)arg2 error:(id)arg3;
- (void)_invalidateLastKnownStatus;
- (void)_updateSubscriptionStatusAccessPolicyAllowingNotification:(BOOL)arg1;
- (void)_validateLastKnownStatus;
- (void)dealloc;
- (void)getStatusWithOptions:(id)arg1 statusBlock:(CDUnknownBlockType)arg2;
- (id)init;
- (void)modifyLastKnownStatusUsingBlock:(CDUnknownBlockType)arg1;
- (void)reset;

@end
