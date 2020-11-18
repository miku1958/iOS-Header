//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameCenterFoundation/GKSessionDelegate-Protocol.h>
#import <GameCenterFoundation/GKSessionPrivateDelegate-Protocol.h>

@class GKConnection, GKSession, GKThreadsafeDictionary, NSArray, NSData, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol GKMatchDelegate, OS_dispatch_queue;

@interface GKMatch : NSObject <GKSessionDelegate, GKSessionPrivateDelegate>
{
    unsigned char _version;
    BOOL _needHostScore;
    BOOL _hostScoreForQuery;
    BOOL _recentlyBecameActive;
    unsigned int _packetSequenceNumber;
    GKThreadsafeDictionary *_playersByIdentifier;
    NSMutableSet *_connectedPlayerIDs;
    NSObject<OS_dispatch_queue> *_stateChangeQueue;
    id<GKMatchDelegate> _delegateWeak;
    GKSession *_session;
    GKConnection *_connection;
    unsigned long long _expectedPlayerCount;
    NSMutableDictionary *_guestConnections;
    NSMutableDictionary *_guestSessions;
    NSMutableDictionary *_playerEventQueues;
    NSMutableArray *_reinvitedPlayers;
    NSData *_selfBlob;
    id<GKMatchDelegate> _inviteDelegateWeak;
    NSMutableDictionary *_playerPushTokens;
    NSMutableArray *_opponentIDs;
    NSString *_rematchID;
    long long _rematchCount;
    NSDictionary *_networkStatistics;
    NSMutableDictionary *_hostScores;
    CDUnknownBlockType _chooseHostCompletion;
}

@property (copy, nonatomic) CDUnknownBlockType chooseHostCompletion; // @synthesize chooseHostCompletion=_chooseHostCompletion;
@property (strong, nonatomic) NSMutableSet *connectedPlayerIDs; // @synthesize connectedPlayerIDs=_connectedPlayerIDs;
@property (strong, nonatomic) GKConnection *connection; // @synthesize connection=_connection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<GKMatchDelegate> delegate; // @synthesize delegate=_delegateWeak;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned long long expectedPlayerCount; // @synthesize expectedPlayerCount=_expectedPlayerCount;
@property (strong, nonatomic) NSMutableDictionary *guestConnections; // @synthesize guestConnections=_guestConnections;
@property (strong, nonatomic) NSMutableDictionary *guestSessions; // @synthesize guestSessions=_guestSessions;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL hostScoreForQuery; // @synthesize hostScoreForQuery=_hostScoreForQuery;
@property (strong, nonatomic) NSMutableDictionary *hostScores; // @synthesize hostScores=_hostScores;
@property (nonatomic) id<GKMatchDelegate> inviteDelegate; // @synthesize inviteDelegate=_inviteDelegateWeak;
@property (nonatomic) BOOL needHostScore; // @synthesize needHostScore=_needHostScore;
@property (strong, nonatomic) NSDictionary *networkStatistics; // @synthesize networkStatistics=_networkStatistics;
@property (strong, nonatomic) NSMutableArray *opponentIDs; // @synthesize opponentIDs=_opponentIDs;
@property (nonatomic) unsigned int packetSequenceNumber; // @synthesize packetSequenceNumber=_packetSequenceNumber;
@property (strong, nonatomic) NSMutableDictionary *playerEventQueues; // @synthesize playerEventQueues=_playerEventQueues;
@property (strong, nonatomic) NSMutableDictionary *playerPushTokens; // @synthesize playerPushTokens=_playerPushTokens;
@property (readonly, nonatomic) NSArray *players;
@property (strong, nonatomic) GKThreadsafeDictionary *playersByIdentifier; // @synthesize playersByIdentifier=_playersByIdentifier;
@property (nonatomic) BOOL recentlyBecameActive; // @synthesize recentlyBecameActive=_recentlyBecameActive;
@property (strong, nonatomic) NSMutableArray *reinvitedPlayers; // @synthesize reinvitedPlayers=_reinvitedPlayers;
@property (nonatomic) long long rematchCount; // @synthesize rematchCount=_rematchCount;
@property (strong, nonatomic) NSString *rematchID; // @synthesize rematchID=_rematchID;
@property (strong, nonatomic) NSData *selfBlob; // @synthesize selfBlob=_selfBlob;
@property (strong, nonatomic) GKSession *session; // @synthesize session=_session;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *stateChangeQueue; // @synthesize stateChangeQueue=_stateChangeQueue;
@property (readonly) Class superclass;
@property (nonatomic) unsigned char version; // @synthesize version=_version;

- (void)_delegate:(id)arg1 didReceiveData:(id)arg2 forRecipient:(id)arg3 fromPlayer:(id)arg4;
- (void)acceptRelayResponse:(id)arg1 player:(id)arg2;
- (void)addHostScore:(int)arg1 forPlayer:(id)arg2;
- (void)addPlayers:(id)arg1;
- (id)allIDs;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)calculateHostScore;
- (void)chooseBestHostPlayerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)chooseBestHostingPlayerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)conditionallyReinvitePlayer:(id)arg1 sessionToken:(id)arg2;
- (void)conditionallyRelaunchPlayer:(id)arg1;
- (void)connectToGuestPlayer:(id)arg1 withHostPlayer:(id)arg2;
- (void)connectToNearbyPlayer:(id)arg1 withConnectionData:(id)arg2;
- (void)connectToPlayers:(id)arg1 withPeerDictionaries:(id)arg2 version:(unsigned char)arg3 sessionToken:(id)arg4 cdxTicket:(id)arg5;
- (BOOL)connected:(id)arg1;
- (id)dataFromBase64String:(id)arg1;
- (void)dealloc;
- (void)deferStateCallbackForPlayer:(id)arg1 state:(long long)arg2;
- (void)disconnect;
- (void)disconnectGuestSessions;
- (void)getLocalConnectionDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)guestPlayers;
- (BOOL)haveAllHostScores;
- (id)init;
- (void)initRelayConnectionForPlayer:(id)arg1;
- (void)initRelayInfoFromCallback:(id)arg1 forPlayer:(id)arg2;
- (void)initRelayInfoFromPush:(id)arg1 forPlayer:(id)arg2;
- (void)initRelayInfoFromServerResponse:(id)arg1 forPlayer:(id)arg2;
- (void)initRelayResponse:(id)arg1 player:(id)arg2;
- (void)inviteeComboMatched:(long long)arg1;
- (void)localPlayerDidChange:(id)arg1;
- (id)nearbyConnectionData;
- (id)packet:(unsigned char)arg1 data:(id)arg2;
- (id)peerFromPlayer:(id)arg1;
- (id)playerForSession:(id)arg1;
- (id)playerFromPeer:(id)arg1;
- (id)playerIDs;
- (void)preLoadInviter:(id)arg1 sessionToken:(id)arg2;
- (void)preemptRelay:(id)arg1;
- (void)queueData:(id)arg1 withEventQueueForPlayer:(id)arg2 forRecipient:(id)arg3;
- (void)receiveData:(id)arg1 fromPeer:(id)arg2 inSession:(id)arg3 context:(void *)arg4;
- (void)receivedChooseHostData:(id)arg1 fromPlayer:(id)arg2;
- (void)reinviteeAcceptedNotification:(id)arg1;
- (void)reinviteeDeclinedNotification:(id)arg1;
- (void)relayPush:(id)arg1;
- (void)relayPushNotification:(id)arg1;
- (void)rematchWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)requestRelayInitForPlayer:(id)arg1;
- (void)requestRelayUpdateForPlayer:(id)arg1;
- (BOOL)selectHostIfRequestedAndAllScored;
- (void)sendData:(id)arg1 forRecipient:(id)arg2 fromPlayer:(id)arg3;
- (BOOL)sendData:(id)arg1 toPlayers:(id)arg2 dataMode:(long long)arg3 error:(id *)arg4;
- (BOOL)sendData:(id)arg1 toPlayers:(id)arg2 withDataMode:(long long)arg3 error:(id *)arg4;
- (BOOL)sendDataToAllPlayers:(id)arg1 withDataMode:(long long)arg2 error:(id *)arg3;
- (void)sendHostScoreAsQuery:(BOOL)arg1;
- (BOOL)sendInviteData:(id)arg1 error:(id *)arg2;
- (void)sendQueuedPacketsForPlayer:(id)arg1;
- (void)sendStateCallbackForPlayer:(id)arg1 state:(long long)arg2;
- (void)sendStateCallbackToDelegate:(id)arg1 forPlayer:(id)arg2 state:(long long)arg3;
- (void)sendVersionData:(unsigned char)arg1;
- (void)sendVersionData:(unsigned char)arg1 toPeer:(id)arg2;
- (void)session:(id)arg1 connectionWithPeerFailed:(id)arg2 withError:(id)arg3;
- (void)session:(id)arg1 didFailWithError:(id)arg2;
- (void)session:(id)arg1 initiateRelay:(id)arg2 forPeer:(id)arg3;
- (void)session:(id)arg1 networkStatisticsChanged:(id)arg2;
- (void)session:(id)arg1 peer:(id)arg2 didChangeState:(int)arg3;
- (void)session:(id)arg1 updateRelay:(id)arg2 forPeer:(id)arg3;
- (BOOL)shouldStartRelay:(id)arg1;
- (void)updateRelayConnectionForPlayer:(id)arg1;
- (void)updateRelayInfo:(id)arg1 forPlayer:(id)arg2;
- (void)updateRelayInfoFromCallback:(id)arg1 forPlayer:(id)arg2;
- (void)updateRematchID;
- (void)updateStateForPlayer:(id)arg1 state:(long long)arg2;
- (id)voiceChatWithName:(id)arg1;
- (void)withEventQueueForPlayer:(id)arg1 create:(CDUnknownBlockType)arg2 perform:(CDUnknownBlockType)arg3;
- (void)withEventQueueForPlayer:(id)arg1 createIfNeeded:(BOOL)arg2 perform:(CDUnknownBlockType)arg3;
- (void)withEventQueueForPlayer:(id)arg1 perform:(CDUnknownBlockType)arg2;

@end

