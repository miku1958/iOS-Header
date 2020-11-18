//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GKDiscovery, GKMatch, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSSet;
@protocol OS_dispatch_queue;

@interface GKMatchmaker : NSObject
{
    BOOL _nearbyAdvertising;
    BOOL _wasNearbyBrowsing;
    BOOL _nearbyBrowsing;
    int _matching;
    CDUnknownBlockType _inviteHandler;
    GKMatch *_match;
    CDUnknownBlockType _inviteeResponseHandler;
    CDUnknownBlockType _recipientResponseHandler;
    NSSet *_invitees;
    NSDictionary *_inviteesByUserID;
    CDUnknownBlockType _nearbyPlayerHandler;
    CDUnknownBlockType _nearbyPlayerIDHandler;
    NSObject<OS_dispatch_queue> *_lookForInviteQueue;
    NSMutableDictionary *_nearbyPlayers;
    NSDate *_nearbyQueryLastCheckDate;
    GKDiscovery *_nearbyDiscovery;
    double _nearbyQueryAllowance;
    NSSet *_nearbyCompatibileHashes;
    NSMutableDictionary *_nearbyInvites;
    NSMutableArray *_shareInvitees;
}

@property (readonly, nonatomic) BOOL hasInviteListener;
@property (copy, nonatomic) CDUnknownBlockType inviteHandler; // @synthesize inviteHandler=_inviteHandler;
@property (copy, nonatomic) CDUnknownBlockType inviteeResponseHandler; // @synthesize inviteeResponseHandler=_inviteeResponseHandler;
@property (strong, nonatomic) NSSet *invitees; // @synthesize invitees=_invitees;
@property (strong) NSDictionary *inviteesByUserID; // @synthesize inviteesByUserID=_inviteesByUserID;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *lookForInviteQueue; // @synthesize lookForInviteQueue=_lookForInviteQueue;
@property (strong, nonatomic) GKMatch *match; // @synthesize match=_match;
@property int matching; // @synthesize matching=_matching;
@property (nonatomic) BOOL nearbyAdvertising; // @synthesize nearbyAdvertising=_nearbyAdvertising;
@property (nonatomic) BOOL nearbyBrowsing; // @synthesize nearbyBrowsing=_nearbyBrowsing;
@property (strong, nonatomic) NSSet *nearbyCompatibileHashes; // @synthesize nearbyCompatibileHashes=_nearbyCompatibileHashes;
@property (strong, nonatomic) GKDiscovery *nearbyDiscovery; // @synthesize nearbyDiscovery=_nearbyDiscovery;
@property (strong, nonatomic) NSMutableDictionary *nearbyInvites; // @synthesize nearbyInvites=_nearbyInvites;
@property (copy, nonatomic) CDUnknownBlockType nearbyPlayerHandler; // @synthesize nearbyPlayerHandler=_nearbyPlayerHandler;
@property (copy, nonatomic) CDUnknownBlockType nearbyPlayerIDHandler; // @synthesize nearbyPlayerIDHandler=_nearbyPlayerIDHandler;
@property (strong) NSMutableDictionary *nearbyPlayers; // @synthesize nearbyPlayers=_nearbyPlayers;
@property (nonatomic) double nearbyQueryAllowance; // @synthesize nearbyQueryAllowance=_nearbyQueryAllowance;
@property (strong, nonatomic) NSDate *nearbyQueryLastCheckDate; // @synthesize nearbyQueryLastCheckDate=_nearbyQueryLastCheckDate;
@property (copy, nonatomic) CDUnknownBlockType recipientResponseHandler; // @synthesize recipientResponseHandler=_recipientResponseHandler;
@property (strong, nonatomic) NSMutableArray *shareInvitees; // @synthesize shareInvitees=_shareInvitees;
@property (nonatomic) BOOL wasNearbyBrowsing; // @synthesize wasNearbyBrowsing=_wasNearbyBrowsing;

+ (id)descriptionForNearbyDictionary:(id)arg1;
+ (id)sharedMatchmaker;
+ (id)syncQueue;
- (id)_nearbyDeviceWithDeviceID:(id)arg1;
- (void)_request:(id)arg1 match:(id)arg2 rematchID:(id)arg3 serverHosted:(BOOL)arg4 playerCount:(long long)arg5 connectionData:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)acceptNearbyInvite:(id)arg1 connectionData:(id)arg2;
- (void)addPlayersForHostedMatchRequest:(id)arg1 existingPlayerCount:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)addPlayersToMatch:(id)arg1 matchRequest:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)applicationDidEnterBackgroundNotification:(id)arg1;
- (void)applicationWillEnterForegroundNotification:(id)arg1;
- (void)applicationWillTerminateNotification:(id)arg1;
- (void)cancel;
- (void)cancelInviteToPlayer:(id)arg1;
- (void)cancelNearbyInvitesToPlayers:(id)arg1;
- (void)cancelPendingInviteToPlayer:(id)arg1;
- (void)cancelPendingInvitesAndMarkInviteComplete:(BOOL)arg1;
- (void)cancelSentNearbyInvites;
- (BOOL)compatibilityMatrix:(id)arg1 includesAppWithBundleID:(id)arg2 version:(id)arg3;
- (long long)currentEnvironment;
- (void)dealloc;
- (void)declineNearbyInviteFromDevice:(id)arg1 reason:(long long)arg2;
- (void)declineReceivedNearbyInvites;
- (void)determineIfShouldRespondToNearbyPlayer:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)doneMatchmaking;
- (void)findMatchForRequest:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)findPlayersForHostedMatchRequest:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)findPlayersForHostedRequest:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)findRematchForMatch:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)finishMatchmakingForMatch:(id)arg1;
- (void)finishedAuthenticating;
- (void)foundNearbyDeviceID:(id)arg1 discoveryInfo:(id)arg2;
- (void)generateHashedCompatibiltySet;
- (void)handleNearbyInvite:(id)arg1 fromDevice:(id)arg2;
- (void)handleNearbyInviteResponse:(id)arg1 fromDevice:(id)arg2;
- (void)handleNearbyProfileQuery:(id)arg1 fromDevice:(id)arg2;
- (void)handleNearbyProfileResponse:(id)arg1 fromDevice:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (id)hashForBundleID:(id)arg1 version:(id)arg2;
- (id)hashForCurrentGame;
- (id)init;
- (void)inviteAnyNearbyPlayersWithRequest:(id)arg1;
- (void)invitePlayersWithRequest:(id)arg1 serverHosted:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)invitePlayersWithRequest:(id)arg1 serverHosted:(BOOL)arg2 onlineConnectionData:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)inviteeAcceptedNotification:(id)arg1;
- (void)inviteeDeclinedNotification:(id)arg1;
- (void)loadCompatabilityMatrixAsDictionaryWithHandler:(CDUnknownBlockType)arg1;
- (void)loadConnectivitySettingsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadPhotoDataDictionaryWithHandler:(CDUnknownBlockType)arg1;
- (void)loadURLForMatch:(id)arg1 matchRequest:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)localPlayerAcceptedGameInvite;
- (void)localPlayerAcceptedGameInviteNotification:(id)arg1;
- (void)localPlayerAcceptedNearbyInvite:(id)arg1;
- (void)localPlayerRespondedToNearbyInvite:(id)arg1;
- (void)lookForInvite;
- (void)lostNearbyDeviceID:(id)arg1;
- (void)matchForInvite:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)matchForNearbyInvite:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)matchForRemoteInvite:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)matchWithRequest:(id)arg1 currentMatch:(id)arg2 hostedCurrentPlayerCount:(long long)arg3 serverHosted:(BOOL)arg4 rematchID:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (id)nearbyDeviceWithDeviceID:(id)arg1;
- (id)nearbyDevicesForPlayer:(id)arg1 withState:(long long)arg2;
- (id)nearbyInviteFromPlayer:(id)arg1;
- (void)nearbyInviteWasCancelled:(id)arg1 fromDevice:(id)arg2;
- (int)numberOfNearbyDevicesForPlayer:(id)arg1 withState:(long long)arg2;
- (void)performSync:(CDUnknownBlockType)arg1;
- (void)presentNearbyInvite:(id)arg1 fromDevice:(id)arg2;
- (id)profileDictionaryForLocalPlayer;
- (void)queryActivityWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)queryPlayerGroupActivity:(unsigned long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)receivedData:(id)arg1 fromNearbyDeviceID:(id)arg2;
- (void)registeredListentersChanged;
- (BOOL)removeInvitee:(id)arg1;
- (void)removeNearbyInviteFromPlayer:(id)arg1;
- (void)reportResponse:(long long)arg1 forInvitees:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)respondToHostedInvite:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (long long)responseForDeclineReason:(long long)arg1;
- (void)saveNearbyInvite:(id)arg1 fromPlayer:(id)arg2;
- (void)sendProfileResponseToDevice:(id)arg1;
- (void)setConnectivitySettings:(id)arg1;
- (void)setNearbyDevice:(id)arg1 reachable:(BOOL)arg2;
- (void)setNearbyPlayerAccepted:(id)arg1 connectionData:(id)arg2;
- (void)setNearbyPlayerAccepted:(id)arg1 deviceID:(id)arg2 connectionData:(id)arg3;
- (void)setNearbyPlayerDeclined:(id)arg1 deviceID:(id)arg2 reason:(long long)arg3;
- (void)setNearbyPlayerDeclined:(id)arg1 reason:(long long)arg2;
- (void)setNearbyPlayerFailed:(id)arg1;
- (void)setNearbyPlayerFailed:(id)arg1 deviceID:(id)arg2;
- (void)setShareInvitees:(id)arg1 propogateToDaemon:(BOOL)arg2;
- (void)setupNearbyDiscovery;
- (BOOL)shouldRespondToNearbyQuery;
- (void)startBrowsingForNearbyPlayersWithHandler:(CDUnknownBlockType)arg1;
- (void)startBrowsingForNearbyPlayersWithReachableHandler:(CDUnknownBlockType)arg1;
- (void)startNearbyAdvertising;
- (void)startNearbyBrowsing;
- (void)stopBrowsingForNearbyPlayers;
- (void)stopNearbyAdvertising;
- (void)stopNearbyBrowsing;
- (id)unreleasedHash;
- (void)updateNearbyAdvertising;

@end

