//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDiagnosticObject-Protocol.h>

@class HDProfile, NSDate, NSHashTable, NSString, UNUserNotificationCenter;
@protocol OS_dispatch_queue;

@interface HDNotificationManager : NSObject <HDDiagnosticObject>
{
    HDProfile *_profile;
    UNUserNotificationCenter *_userNotificationCenter;
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSObject<OS_dispatch_queue> *_resourceQueue;
    NSDate *_lastNotificationDate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (CDUnknownBlockType)_actionCompletionOnClientQueue:(CDUnknownBlockType)arg1;
- (id)_aggregateBadge;
- (id)_badgeForDomain:(long long)arg1 error:(out id *)arg2;
- (CDUnknownBlockType)_objectCompletionOnClientQueue:(CDUnknownBlockType)arg1;
- (void)_postBadgesDidUpdateNotification;
- (void)_postNotificationWithTitle:(id)arg1 body:(id)arg2 categoryIdentifier:(id)arg3 subtitle:(id)arg4 domain:(long long)arg5 url:(id)arg6 accessoryImageName:(id)arg7 header:(id)arg8 completion:(CDUnknownBlockType)arg9;
- (id)_resourceQueue_badgeForDomain:(long long)arg1;
- (id)_resourceQueue_badgeForDomain:(long long)arg1 error:(out id *)arg2;
- (id)_resourceQueue_coaleseDomainBadges;
- (void)_resourceQueue_notifyObserversWithBadge:(id)arg1 domain:(long long)arg2;
- (void)_resourceQueue_notifyObserversWithNotification:(id)arg1;
- (BOOL)_resourceQueue_setBadge:(id)arg1 domain:(long long)arg2 error:(out id *)arg3;
- (void)_resourceQueue_updateApplicationBadge;
- (void)_sendCompanionUserNotificationResponse:(CDUnknownBlockType)arg1 error:(id)arg2;
- (void)addNotificationObserver:(id)arg1;
- (void)badgeForDomain:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)diagnosticDescription;
- (BOOL)incrementBadgeForDomain:(long long)arg1 count:(long long)arg2 error:(out id *)arg3;
- (id)initWithProfile:(id)arg1;
- (void)postCompanionUserNotificationOfType:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)postNotificationWithIdentifier:(id)arg1 content:(id)arg2 trigger:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)postNotificationWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)postNotificationWithTitle:(id)arg1 body:(id)arg2 categoryIdentifier:(id)arg3 subtitle:(id)arg4 domain:(long long)arg5 accessoryImageName:(id)arg6 header:(id)arg7 completion:(CDUnknownBlockType)arg8;
- (void)receivedCompanionUserNotificationRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)registerWithUserNotificationCenter;
- (void)removeDeliveredNotificationsWithIdentifiers:(id)arg1;
- (void)removeNotificationObserver:(id)arg1;
- (void)setBadge:(id)arg1 forDomain:(long long)arg2 completion:(CDUnknownBlockType)arg3;

@end

