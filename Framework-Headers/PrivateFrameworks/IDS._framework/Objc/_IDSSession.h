//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDS/IDSBaseSocketPairConnectionDelegate-Protocol.h>
#import <IDS/IDSDaemonListenerProtocol-Protocol.h>

@class CUTWeakReference, IDSBaseSocketPairConnection, NSMutableDictionary, NSSet, NSString;
@protocol OS_dispatch_queue;

@interface _IDSSession : NSObject <IDSDaemonListenerProtocol, IDSBaseSocketPairConnectionDelegate>
{
    id _delegateContext;
    id _boostContext;
    NSString *_uniqueID;
    NSString *_accountID;
    NSSet *_destinations;
    IDSBaseSocketPairConnection *_unreliableSocketPairConnection;
    CUTWeakReference *_delegate;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned int _state;
    long long _transportType;
    unsigned long long _initialLinkType;
    int _socket;
    BOOL _isAudioEnabled;
    BOOL _isMuted;
    BOOL _isLegacy;
    long long _inviteTimeout;
    unsigned long long _connectionCountHint;
    BOOL _needsToWaitForPreConnectionData;
    BOOL _disallowCellularInterface;
    BOOL _disallowWifiInterface;
    unsigned long long _preferredAddressFamily;
    BOOL _preferCellularForCallSetup;
    NSString *_clientUUID;
    BOOL _disableEncryption;
    BOOL _shouldUseSocketForTransport;
    BOOL _enableSingleChannelDirectMode;
    BOOL _alwaysSkipSelf;
    unsigned int _sessionEndedReason;
    NSMutableDictionary *_preferences;
    NSMutableDictionary *_sessionConfig;
}

@property (strong, nonatomic) id boostContext; // @synthesize boostContext=_boostContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) unsigned long long initialLinkType; // @synthesize initialLinkType=_initialLinkType;
@property (nonatomic) long long inviteTimeout;
@property (readonly, nonatomic) unsigned int sessionEndedReason;
@property (readonly, nonatomic) int socket;
@property (readonly, nonatomic) unsigned int state; // @synthesize state=_state;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueID;

- (void).cxx_destruct;
- (unsigned long long)MTUForAddressFamily:(unsigned long long)arg1;
- (void)_broadcastNewSessionToDaemon;
- (void)_callDelegateWithBlock:(CDUnknownBlockType)arg1;
- (void)_cleanupSocketPairConnections;
- (id)_initWithAccount:(id)arg1 destinations:(id)arg2 options:(id)arg3 delegateContext:(id)arg4;
- (id)_initWithAccount:(id)arg1 destinations:(id)arg2 transportType:(long long)arg3 connectionCountHint:(unsigned long long)arg4 needsToWaitForPreConnectionData:(BOOL)arg5 uniqueID:(id)arg6 delegateContext:(id)arg7;
- (void)_setupSocketPairToDaemon;
- (void)_setupUnreliableSocketPairConnection;
- (void)acceptInvitation;
- (void)acceptInvitationWithData:(id)arg1;
- (void)allocationDone:(id)arg1 sessionInfo:(id)arg2;
- (void)cancelInvitation;
- (void)cancelInvitationWithData:(id)arg1;
- (void)cancelInvitationWithRemoteEndedReasonOverride:(unsigned int)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (id)daemonController;
- (void)daemonDisconnected;
- (id)daemonListener;
- (void)dealloc;
- (void)declineInvitation;
- (void)declineInvitationWithData:(id)arg1;
- (void)endSession;
- (void)endSessionWithData:(id)arg1;
- (BOOL)getAudioEnabled;
- (BOOL)getMuted;
- (id)getPreferences;
- (id)initWithAccount:(id)arg1 destinations:(id)arg2 options:(id)arg3 delegateContext:(id)arg4;
- (id)initWithAccount:(id)arg1 destinations:(id)arg2 transportType:(long long)arg3 delegateContext:(id)arg4;
- (id)initWithAccount:(id)arg1 destinations:(id)arg2 transportType:(long long)arg3 uniqueID:(id)arg4 delegateContext:(id)arg5;
- (void)sendAllocationRequest:(id)arg1;
- (BOOL)sendData:(id)arg1 error:(id *)arg2;
- (void)sendInvitationWithData:(id)arg1 declineOnError:(BOOL)arg2;
- (void)sendInvitationWithOptions:(id)arg1;
- (void)sendSessionMessage:(id)arg1;
- (void)sendSessionMessage:(id)arg1 toDestinations:(id)arg2;
- (void)session:(id)arg1 audioEnabled:(BOOL)arg2;
- (void)session:(id)arg1 invitationSentToTokens:(id)arg2 shouldBreakBeforeMake:(BOOL)arg3;
- (void)session:(id)arg1 muted:(BOOL)arg2;
- (void)sessionAcceptReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3;
- (void)sessionCancelReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3;
- (void)sessionDeclineReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3;
- (void)sessionEndReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3;
- (void)sessionEnded:(id)arg1 withReason:(unsigned int)arg2 error:(id)arg3;
- (void)sessionMessageReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3;
- (void)sessionStarted:(id)arg1;
- (void)setAudioEnabled:(BOOL)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)setMuted:(BOOL)arg1;
- (void)setPreferences:(id)arg1;
- (BOOL)shouldUseSocketForTransport;
- (void)xpcObject:(id)arg1 objectContext:(id)arg2;

@end

