//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarNotification/CADModule-Protocol.h>
#import <CalendarNotification/CALNInboxNotificationProvider-Protocol.h>

@class NSArray, NSString, _EKNotificationMonitor;

@interface CALNInboxNotificationMonitor : NSObject <CADModule, CALNInboxNotificationProvider>
{
    BOOL _active;
    _EKNotificationMonitor *_notificationMonitor;
}

@property (nonatomic, getter=isActive) BOOL active; // @synthesize active=_active;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned long long eventNotificationCount;
@property (readonly, nonatomic) NSArray *eventNotificationReferences;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) _EKNotificationMonitor *notificationMonitor; // @synthesize notificationMonitor=_notificationMonitor;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)activate;
- (void)addNotificationCountChangedObserver:(id)arg1 selector:(SEL)arg2;
- (void)addNotificationsChangedObserver:(id)arg1 selector:(SEL)arg2;
- (void)deactivate;
- (void)didRegisterForAlarms;
- (void)didRegisterForBackgroundTaskAgentJobs;
- (void)handleBTAJob:(id)arg1 named:(const char *)arg2;
- (id)initWithEventStoreProvider:(id)arg1;
- (void)protectedDataDidBecomeAvailable;
- (void)receivedAlarmNamed:(id)arg1;
- (void)receivedNotificationNamed:(id)arg1;
- (void)removeNotificationCountChangedObserver:(id)arg1 selector:(SEL)arg2;
- (void)removeNotificationsChangedObserver:(id)arg1;

@end
