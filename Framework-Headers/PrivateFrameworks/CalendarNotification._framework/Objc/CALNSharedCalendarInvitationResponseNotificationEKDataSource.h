//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarNotification/CALNSharedCalendarInvitationResponseNotificationDataSource-Protocol.h>

@class NSString;
@protocol CALNEKCalendarNotificationReferenceProvider, CALNInboxNotificationProvider, EKEventStoreProvider;

@interface CALNSharedCalendarInvitationResponseNotificationEKDataSource : NSObject <CALNSharedCalendarInvitationResponseNotificationDataSource>
{
    id<EKEventStoreProvider> _eventStoreProvider;
    id<CALNInboxNotificationProvider> _inboxNotificationProvider;
    id<CALNEKCalendarNotificationReferenceProvider> _notificationReferenceProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) id<EKEventStoreProvider> eventStoreProvider; // @synthesize eventStoreProvider=_eventStoreProvider;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<CALNInboxNotificationProvider> inboxNotificationProvider; // @synthesize inboxNotificationProvider=_inboxNotificationProvider;
@property (readonly, nonatomic) id<CALNEKCalendarNotificationReferenceProvider> notificationReferenceProvider; // @synthesize notificationReferenceProvider=_notificationReferenceProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_notificationInfoFromNotification:(id)arg1;
- (id)_notificationInfoFromNotificationReference:(id)arg1;
- (void)clearSharedCalendarInvitationResponseWithSourceClientIdentifier:(id)arg1;
- (id)fetchSharedCalendarInvitationResponseNotificationSourceClientIdentifiers:(id)arg1;
- (id)fetchSharedCalendarInvitationResponseNotificationWithSourceClientIdentifier:(id)arg1;
- (id)fetchSharedCalendarInvitationResponseNotifications;
- (id)initWithEventStoreProvider:(id)arg1 inboxNotificationProvider:(id)arg2 notificationReferenceProvider:(id)arg3;

@end

