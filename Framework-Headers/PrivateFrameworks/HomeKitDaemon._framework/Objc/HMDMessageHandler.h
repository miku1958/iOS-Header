//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDMessageHandlerQueuedMessageDelegate-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFMessageReceiver-Protocol.h>

@class HMDMessageHandlerMetricsDispatcher, HMFMessageDispatcher, HMFUnfairLock, NSArray, NSDictionary, NSMutableDictionary, NSNotificationCenter, NSObject, NSString, NSUUID;
@protocol HMDMessageHandlerDataSource, OS_dispatch_queue;

@interface HMDMessageHandler : HMFObject <HMDMessageHandlerQueuedMessageDelegate, HMFLogging, HMFMessageReceiver>
{
    HMFUnfairLock *_lock;
    NSMutableDictionary *_messageIdentifierToQueuedIncomingMessages;
    NSMutableDictionary *_messageNameToQueuedOutgoingMessage;
    NSMutableDictionary *_deviceIdentifierToQueuedOutgoingMessageNames;
    NSUUID *_messageTargetUUID;
    NSArray *_ownerPrivateRemoteMessages;
    NSArray *_adminPrivateRemoteMessages;
    NSArray *_internalMessages;
    NSArray *_notifications;
    NSDictionary *_notificationsToObject;
    HMFMessageDispatcher *_messageDispatcher;
    NSNotificationCenter *_notificationCenter;
    HMDMessageHandlerMetricsDispatcher *_metricsDispatcher;
    id<HMDMessageHandlerDataSource> _dataSource;
}

@property (readonly, copy) NSArray *adminPrivateRemoteMessages; // @synthesize adminPrivateRemoteMessages=_adminPrivateRemoteMessages;
@property (weak) id<HMDMessageHandlerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) BOOL hasQueuedIncomingMessages;
@property (readonly) BOOL hasQueuedOutgoingMessages;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSArray *internalMessages; // @synthesize internalMessages=_internalMessages;
@property (readonly) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID; // @synthesize messageTargetUUID=_messageTargetUUID;
@property (readonly) HMDMessageHandlerMetricsDispatcher *metricsDispatcher; // @synthesize metricsDispatcher=_metricsDispatcher;
@property (readonly) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property (readonly, copy) NSArray *notifications; // @synthesize notifications=_notifications;
@property (readonly, copy) NSDictionary *notificationsToObject; // @synthesize notificationsToObject=_notificationsToObject;
@property (readonly, copy) NSArray *ownerPrivateRemoteMessages; // @synthesize ownerPrivateRemoteMessages=_ownerPrivateRemoteMessages;
@property (readonly) Class superclass;

+ (id)logCategory;
- (void).cxx_destruct;
- (void)associateDevice:(id)arg1 withOutgoingMessage:(id)arg2;
- (id)attributeDescriptions;
- (void)configureWithHome:(id)arg1;
- (id)dequeueIncomingMessage:(id)arg1;
- (id)dequeueOutgoingMessage:(id)arg1;
- (id)dequeueQueuedIncomingMessages;
- (id)deviceForMessage:(id)arg1;
- (void)didTriggerMessageHandlerQueuedMessage:(id)arg1;
- (void)didTriggerQueuedIncomingMessage:(id)arg1;
- (void)didTriggerQueuedOutgoingMessage:(id)arg1;
- (BOOL)hasQueuedOutgoingMessagesForDevice:(id)arg1;
- (id)initWithMessageTargetUUID:(id)arg1 messageDispatcher:(id)arg2 notificationCenter:(id)arg3 ownerPrivateRemoteMessages:(id)arg4 adminPrivateRemoteMessages:(id)arg5 internalMessages:(id)arg6 notifications:(id)arg7 notificationsToObject:(id)arg8;
- (id)initWithMessageTargetUUID:(id)arg1 messageDispatcher:(id)arg2 notificationCenter:(id)arg3 ownerPrivateRemoteMessages:(id)arg4 adminPrivateRemoteMessages:(id)arg5 internalMessages:(id)arg6 notifications:(id)arg7 notificationsToObject:(id)arg8 metricsDispatcher:(id)arg9;
- (BOOL)isReadyForIncomingMessage:(id)arg1 error:(id *)arg2;
- (id)logIdentifier;
- (id)privateDescription;
- (void)queueIncomingMessage:(id)arg1;
- (void)queueOutgoingMessage:(id)arg1;
- (id)queuedIncomingMessageWithIdentifier:(id)arg1;
- (id)queuedIncomingMessages;
- (id)queuedOutgoingMessages;
- (id)queuedOutgoingMessagesForDevice:(id)arg1;
- (BOOL)reachableForMessage:(id)arg1;
- (void)registerForMessagesWithHome:(id)arg1;
- (void)registerForNotifications;
- (void)registerForSPIRemoteMessages:(id)arg1 home:(id)arg2 userPrivilege:(unsigned long long)arg3 internalBuildOnly:(BOOL)arg4;
- (void)relayMessage:(id)arg1;
- (void)relayMessage:(id)arg1 shouldQueue:(BOOL)arg2;
- (void)routeMessage:(id)arg1;
- (void)routeMessage:(id)arg1 shouldQueue:(BOOL)arg2;
- (void)routeQueuedIncomingMessages;
- (SEL)selectorForName:(id)arg1;
- (void)sendQueuedOutgoingMessages;
- (void)sendQueuedOutgoingMessages:(id)arg1;
- (void)sendQueuedOutgoingMessagesForDevice:(id)arg1;
- (BOOL)shouldRelayIncomingMessage:(id)arg1 error:(id *)arg2;
- (void)triggerQueuedIncomingMessagesTimeouts;
- (void)triggerQueuedOutgoingMessagesTimeouts;

@end

