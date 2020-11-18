//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotificationsKit/NCDebugInfoProvider-Protocol.h>
#import <UserNotificationsKit/NCNotificationAlertDestination-Protocol.h>
#import <UserNotificationsKit/NCNotificationAlertDestinationDelegate-Protocol.h>

@class NCNotificationCollapsingQueue, NCNotificationDestinationsRegistry, NCNotificationRequest, NCNotificationStore, NSString;
@protocol NCNotificationAlertDestinationDelegate, NCNotificationDestinationDelegate;

@interface NCNotificationAlertQueue : NSObject <NCNotificationAlertDestinationDelegate, NCNotificationAlertDestination, NCDebugInfoProvider>
{
    id<NCNotificationAlertDestinationDelegate> _delegate;
    NCNotificationDestinationsRegistry *_destinationsRegistry;
    NCNotificationCollapsingQueue *_queue;
    NCNotificationStore *_store;
    NCNotificationRequest *_coalescingRequest;
}

@property (strong, nonatomic) NCNotificationRequest *coalescingRequest; // @synthesize coalescingRequest=_coalescingRequest;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<NCNotificationDestinationDelegate> delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NCNotificationDestinationsRegistry *destinationsRegistry; // @synthesize destinationsRegistry=_destinationsRegistry;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *identifier;
@property (strong, nonatomic) NCNotificationCollapsingQueue *queue; // @synthesize queue=_queue;
@property (strong, nonatomic) NCNotificationStore *store; // @synthesize store=_store;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_destinations:(id)arg1 canReceiveNotificationRequest:(id)arg2;
- (BOOL)_performDestinationOperationForRequest:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)_postEnqueuedNotificationRequestsCoalescingWith:(id)arg1;
- (void)_postNextNotificationRequest;
- (void)_postNextNotificationRequestPassingTest:(CDUnknownBlockType)arg1;
- (BOOL)_postNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (void)_prepareDestinationsToReceiveCriticalNotificationRequest:(id)arg1;
- (BOOL)_readyToReceiveForNotificationRequest:(id)arg1;
- (BOOL)canReceiveNotificationRequest:(id)arg1;
- (id)debugInfoPlist;
- (void)destination:(id)arg1 didBecomeReadyToReceiveNotificationsCoalescedWith:(id)arg2;
- (void)destination:(id)arg1 didBecomeReadyToReceiveNotificationsPassingTest:(CDUnknownBlockType)arg2;
- (void)destination:(id)arg1 didDismissNotificationRequest:(id)arg2;
- (void)destination:(id)arg1 didPresentNotificationRequest:(id)arg2;
- (void)destination:(id)arg1 executeAction:(id)arg2 forNotificationRequest:(id)arg3 withParameters:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)destination:(id)arg1 requestPermissionToExecuteAction:(id)arg2 forNotificationRequest:(id)arg3 withParameters:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)destination:(id)arg1 requestsClearingNotificationRequests:(id)arg2;
- (void)destination:(id)arg1 requestsClearingNotificationRequests:(id)arg2 fromDestinations:(id)arg3;
- (void)destination:(id)arg1 willDismissNotificationRequest:(id)arg2;
- (void)destination:(id)arg1 willPresentNotificationRequest:(id)arg2;
- (void)destination:(id)arg1 willPresentNotificationRequest:(id)arg2 suppressAlerts:(BOOL)arg3;
- (void)destinationDidBecomeReadyToReceiveNotifications:(id)arg1;
- (id)destinationsForRequestDestinations:(id)arg1;
- (id)init;
- (id)initWithNotificationStore:(id)arg1;
- (BOOL)isRegisteredDestination:(id)arg1;
- (void)modifyNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (id)notificationSectionSettingsForDestination:(id)arg1;
- (id)notificationSectionSettingsForDestination:(id)arg1 forSectionIdentifier:(id)arg2;
- (void)postNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (void)registerDestination:(id)arg1;
- (void)setDestination:(id)arg1 enabled:(BOOL)arg2;
- (void)setDestination:(id)arg1 ready:(BOOL)arg2;
- (void)unregisterDestination:(id)arg1;
- (void)updateNotificationSectionSettings:(id)arg1;
- (void)withdrawNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;

@end

