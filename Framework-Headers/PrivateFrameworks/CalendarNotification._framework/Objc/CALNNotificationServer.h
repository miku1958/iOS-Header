//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarNotification/CADModule-Protocol.h>
#import <CalendarNotification/CALNNotificationManager-Protocol.h>
#import <CalendarNotification/CALNUserNotificationCenterDelegate-Protocol.h>

@class NSArray, NSMutableDictionary, NSString;
@protocol CALNAnalyticsHandler, CALNNotificationStorage, CALNUserNotificationCenter, OS_dispatch_queue;

@interface CALNNotificationServer : NSObject <CADModule, CALNUserNotificationCenterDelegate, CALNNotificationManager>
{
    BOOL _active;
    BOOL _isProtectedDataAvailable;
    id<CALNUserNotificationCenter> _userNotificationCenter;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableDictionary *_notificationSourceMap;
    id<CALNNotificationStorage> _storage;
    id<CALNAnalyticsHandler> _analyticsHandler;
}

@property (nonatomic, getter=isActive) BOOL active; // @synthesize active=_active;
@property (readonly, nonatomic) id<CALNAnalyticsHandler> analyticsHandler; // @synthesize analyticsHandler=_analyticsHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isProtectedDataAvailable; // @synthesize isProtectedDataAvailable=_isProtectedDataAvailable;
@property (strong, nonatomic) NSMutableDictionary *notificationSourceMap; // @synthesize notificationSourceMap=_notificationSourceMap;
@property (readonly, nonatomic) NSArray *notificationSources;
@property (strong, nonatomic) id<CALNNotificationStorage> storage; // @synthesize storage=_storage;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id<CALNUserNotificationCenter> userNotificationCenter; // @synthesize userNotificationCenter=_userNotificationCenter;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;

- (void).cxx_destruct;
- (void)_activate;
- (void)_addRecord:(id)arg1;
- (void)_deactivate;
- (void)_didSetNotificationSources:(id)arg1;
- (id)_fetchRecordsWithSourceIdentifier:(id)arg1;
- (id)_notificationRecordResponseFromNotificationResponse:(id)arg1;
- (id)_notificationRecordWithSourceIdentifier:(id)arg1 sourceClientIdentifier:(id)arg2;
- (id)_notificationSourceMapWithNotificationSources:(id)arg1;
- (void)_removeRecordWithSourceIdentifier:(id)arg1 sourceClientIdentifier:(id)arg2;
- (void)_updateRecord:(id)arg1;
- (void)activate;
- (void)addRecord:(id)arg1;
- (void)deactivate;
- (void)didRegisterForAlarms;
- (id)fetchRecordsWithSourceIdentifier:(id)arg1;
- (id)initWithUserNotificationCenter:(id)arg1 storage:(id)arg2 analyticsHandler:(id)arg3 deviceLockObserver:(id)arg4;
- (id)notificationSourceForSourceIdentifier:(id)arg1;
- (void)protectedDataDidBecomeAvailable;
- (void)receivedAlarmNamed:(id)arg1;
- (void)receivedNotificationNamed:(id)arg1;
- (void)removeRecordWithSourceIdentifier:(id)arg1 sourceClientIdentifier:(id)arg2;
- (void)setNotificationSources:(id)arg1;
- (void)updateRecord:(id)arg1;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;

@end

