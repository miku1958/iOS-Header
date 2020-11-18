//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterFoundation/GKServiceProxy.h>

#import <GameCenterFoundation/GKClientProtocol-Protocol.h>
#import <GameCenterFoundation/NSXPCConnectionDelegate-Protocol.h>

@class NSDictionary, NSObject, NSString, NSXPCConnection;
@protocol GKDaemonProxyDataUpdateDelegate, GKDaemonProxyNetworkActivityIndicatorDelegate, OS_dispatch_queue, OS_dispatch_semaphore;

@interface GKDaemonProxy : GKServiceProxy <NSXPCConnectionDelegate, GKClientProtocol>
{
    int _hostPID;
    NSXPCConnection *_connection;
    NSDictionary *_interfaceLookup;
    NSObject<OS_dispatch_queue> *_invocationQueue;
    NSObject<OS_dispatch_semaphore> *_concurrentRequestSemaphore;
    id<GKDaemonProxyDataUpdateDelegate> _dataUpdateDelegate;
    id<GKDaemonProxyNetworkActivityIndicatorDelegate> _networkActivityIndicatorDelegate;
}

@property (strong, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property (nonatomic) id<GKDaemonProxyDataUpdateDelegate> dataUpdateDelegate; // @synthesize dataUpdateDelegate=_dataUpdateDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) int hostPID; // @synthesize hostPID=_hostPID;
@property (nonatomic) id<GKDaemonProxyNetworkActivityIndicatorDelegate> networkActivityIndicatorDelegate; // @synthesize networkActivityIndicatorDelegate=_networkActivityIndicatorDelegate;
@property (readonly) Class superclass;

+ (id)daemonProxy;
+ (id)proxyForPlayer:(id)arg1;
+ (void)removeProxyForPlayer:(id)arg1;
- (void)_resetServiceLookup;
- (oneway void)acceptInviteWithNotification:(id)arg1;
- (oneway void)acceptMultiplayerGameInvite;
- (id)accountName;
- (oneway void)achievementSelected:(id)arg1;
- (void)addInterface:(id)arg1 toLookup:(id)arg2;
- (id)authenticatedLocalPlayersWithStatus:(unsigned long long)arg1;
- (id)authenticatedPlayerID;
- (id)authenticatedPlayerInfo;
- (oneway void)authenticatedPlayersDidChange:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (oneway void)beginNetworkActivity;
- (void)buildInterfaceLookup;
- (oneway void)cancelGameInvite:(id)arg1;
- (oneway void)challengeCompleted:(id)arg1;
- (oneway void)challengeReceived:(id)arg1;
- (oneway void)completedChallengeSelected:(id)arg1;
- (oneway void)completedOptimisticAuthenticationWithResponse:(id)arg1 error:(id)arg2;
- (id)concurrentRequestSemaphore;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(BOOL)arg3;
- (void)dealloc;
- (oneway void)declineInviteWithNotification:(id)arg1;
- (oneway void)didConnectToParticipantWithID:(id)arg1;
- (oneway void)didDisconnectFromParticipantWithID:(id)arg1;
- (oneway void)didReceiveData:(id)arg1 reliably:(BOOL)arg2 forRecipients:(id)arg3 fromSender:(id)arg4;
- (void)dispatchCompletedChallenge:(id)arg1;
- (oneway void)endNetworkActivity;
- (oneway void)fetchTurnBasedData;
- (oneway void)friendRequestSelected:(id)arg1;
- (oneway void)getAccountNameWithHandler:(CDUnknownBlockType)arg1;
- (oneway void)getAuthenticatedPlayerIDWithHandler:(CDUnknownBlockType)arg1;
- (BOOL)hasAuthenticatedAccount;
- (id)init;
- (id)interfaceLookup;
- (id)invocationQueue;
- (void)loadRemoteImageDataForClientForURL:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)localizedMessageFromDictionary:(id)arg1 forBundleID:(id)arg2;
- (oneway void)processQuickAction:(id)arg1;
- (oneway void)receivedChallengeSelected:(id)arg1;
- (oneway void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (oneway void)relayPushNotification:(id)arg1;
- (id)replyQueueForRequestSelector:(SEL)arg1;
- (oneway void)resetNetworkActivity;
- (void)resetServiceLookup;
- (oneway void)respondedToNearbyInvite:(id)arg1;
- (oneway void)scoreSelected:(id)arg1;
- (oneway void)session:(id)arg1 addedPlayer:(id)arg2;
- (oneway void)session:(id)arg1 didReceiveData:(id)arg2 fromPlayer:(id)arg3;
- (oneway void)session:(id)arg1 didReceiveMessage:(id)arg2 withData:(id)arg3 fromPlayer:(id)arg4;
- (oneway void)session:(id)arg1 player:(id)arg2 didChangeConnectionState:(long long)arg3;
- (oneway void)session:(id)arg1 player:(id)arg2 didSaveData:(id)arg3;
- (oneway void)session:(id)arg1 removedPlayer:(id)arg2;
- (oneway void)setBadgeCount:(unsigned long long)arg1 forType:(unsigned long long)arg2;
- (oneway void)setCurrentGame:(id)arg1 serverEnvironment:(long long)arg2 reply:(CDUnknownBlockType)arg3;
- (oneway void)setLogBits:(int)arg1;
- (oneway void)setPreferencesValues:(id)arg1;
- (oneway void)setTestGame:(id)arg1;

@end

