//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFMessageDispatcher.h>

@class HMDAdminEnforcementMessageFilter, HMDHomeManager, HMDMessageFilterChain, HMDSecureRemoteMessageTransport, NSMutableArray, NSMutableDictionary;

@interface HMDCentralMessageDispatcher : HMFMessageDispatcher
{
    HMDAdminEnforcementMessageFilter *_adminMsgFilter;
    HMFMessageDispatcher *_recvDispatcher;
    NSMutableDictionary *_remoteGateways;
    HMDMessageFilterChain *_msgFilterChain;
    HMFMessageDispatcher *_notificationDispatcher;
    HMDHomeManager *_homeManager;
    NSMutableArray *_relayedMessages;
}

@property (strong, nonatomic) HMDAdminEnforcementMessageFilter *adminMsgFilter; // @synthesize adminMsgFilter=_adminMsgFilter;
@property (weak, nonatomic) HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property (strong, nonatomic) HMDMessageFilterChain *msgFilterChain; // @synthesize msgFilterChain=_msgFilterChain;
@property (strong, nonatomic) HMFMessageDispatcher *notificationDispatcher; // @synthesize notificationDispatcher=_notificationDispatcher;
@property (strong, nonatomic) HMFMessageDispatcher *recvDispatcher; // @synthesize recvDispatcher=_recvDispatcher;
@property (readonly, nonatomic) NSMutableArray *relayedMessages; // @synthesize relayedMessages=_relayedMessages;
@property (strong, nonatomic) NSMutableDictionary *remoteGateways; // @synthesize remoteGateways=_remoteGateways;
@property (readonly, nonatomic) HMDSecureRemoteMessageTransport *secureRemoteTransport;

+ (id)destinationWithTarget:(id)arg1 userID:(id)arg2 destination:(id)arg3 multicast:(BOOL)arg4;
+ (BOOL)isWhitelistedLocalMessage:(id)arg1;
- (void).cxx_destruct;
- (BOOL)_checkAuthorizationForMessage:(id)arg1 errorReason:(id *)arg2;
- (void)_handleLocalMessage:(id)arg1 targetUUID:(id)arg2;
- (void)_handleRelayedIDSMessage:(id)arg1 handledLocally:(BOOL)arg2;
- (void)_setRemoteAccessDevice:(id)arg1 forHome:(id)arg2 sendNotification:(BOOL)arg3;
- (void)configureHTTPTransport:(id)arg1;
- (void)configureHomeManager:(id)arg1;
- (void)configureNotificationDispatcher:(id)arg1;
- (void)dealloc;
- (void)deregisterForMessage:(id)arg1 receiver:(id)arg2;
- (void)deregisterReceiver:(id)arg1;
- (void)disableMessageServer;
- (void)dispatchMessage:(id)arg1;
- (void)electDeviceForUser:(id)arg1 destination:(id)arg2 deviceCapabilities:(id)arg3 responseTimeout:(double)arg4 responseQueue:(id)arg5 responseHandler:(CDUnknownBlockType)arg6;
- (void)enableMessageServer;
- (void)handleSecureSessionError:(id)arg1;
- (id)httpMessageTransport;
- (id)initWithSecureRemoteTransport:(id)arg1 messageFilterChain:(id)arg2;
- (id)prepareAnswerForRequestedCapabilities:(id)arg1;
- (void)redispatchMessage:(id)arg1 target:(id)arg2 responseQueue:(id)arg3 toResidentForHomeWithUUID:(id)arg4;
- (void)registerForMessage:(id)arg1 receiver:(id)arg2 messageHandler:(CDUnknownBlockType)arg3;
- (void)relayInternalMessage:(id)arg1;
- (void)relayMessage:(id)arg1;
- (id)remoteAccessDeviceForHome:(id)arg1;
- (void)removeHome:(id)arg1;
- (void)reset;
- (void)sendSecureMessage:(id)arg1 target:(id)arg2 userID:(id)arg3 destination:(id)arg4 responseQueue:(id)arg5 responseHandler:(CDUnknownBlockType)arg6;
- (void)setCompanionDevice:(id)arg1 forHome:(id)arg2;
- (void)setRemoteAccessDevice:(id)arg1 forHome:(id)arg2;
- (void)updateHome:(id)arg1 configurationVersion:(long long)arg2;
- (void)updateLocalAdministratorName;

@end

