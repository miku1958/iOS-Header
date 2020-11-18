//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GKAutoPeerIDTable, GKConnection, GKList, GKSession, GKTable, GKVoiceChatSessionListener, NSString;
@protocol GKSessionDOOBReceiveHandler, GKSessionDataReceiveHandler, GKSessionDelegate, GKSessionPrivateDelegate;

@interface GKSessionInternal : NSObject
{
    GKSession *_session;
    NSString *domain;
    NSString *serviceType;
    unsigned long long _port;
    NSString *_displayName;
    unsigned int _pid;
    unsigned long long maxPeers;
    struct OpaqueGCKSession *sessionRef;
    struct OpaqueAGPSession *agpSessionRef;
    GKConnection *_connection;
    id<GKSessionDelegate> _delegate;
    id<GKSessionPrivateDelegate> _privateDelegate;
    id<GKSessionDataReceiveHandler> _dataReceiveHandler;
    void *_dataReceiveHandlerContext;
    id<GKSessionDOOBReceiveHandler> _doobReceiveHandler[2];
    void *_doobReceiveHandlerContext[2];
    GKTable *_peerInfoTable;
    GKTable *_peerNameTable;
    GKAutoPeerIDTable *_peerIDTable;
    GKList *_peersAvailable;
    GKList *_peersConnected;
    GKList *_peersForCleanup;
    GKList *_peersPendingIncomingInvitation;
    GKList *_peersPendingOutgoingInvitation;
    struct _opaque_pthread_mutex_t _lock;
    struct _opaque_pthread_mutex_t _delegateLock;
    BOOL _isSearching;
    BOOL _isPublishing;
    BOOL _sessionStarted;
    int _mode;
    BOOL _isBusy;
    NSString *sessionID;
    double disconnectTimeout;
    struct _DNSServiceRef_t *_dnsServiceConnection;
    struct _DNSServiceRef_t *_dnsServiceResolveConnection;
    int _sReset;
    struct _DNSServiceRef_t *_serviceBrowser;
    struct _DNSServiceRef_t *_service;
    struct _DNSServiceRef_t *_oldService;
    BOOL _handleEventsRunning;
    BOOL _stopHandlingEvents;
    BOOL _wifiEnabled;
    BOOL _shutdown;
    GKVoiceChatSessionListener *_voiceChatListener;
}

@property (nonatomic) struct OpaqueAGPSession *agpSessionRef; // @synthesize agpSessionRef;
@property (getter=isAvailable) BOOL available;
@property (getter=isBusy) BOOL busy;
@property (readonly, strong) GKConnection *connection; // @synthesize connection=_connection;
@property (readonly, nonatomic) id dataReceiveHandler;
@property id<GKSessionDelegate> delegate;
@property double disconnectTimeout;
@property (readonly) NSString *displayName;
@property (copy, nonatomic) NSString *domain; // @synthesize domain;
@property (nonatomic) unsigned long long maxPeers; // @synthesize maxPeers;
@property (readonly) NSString *peerID;
@property (nonatomic) unsigned long long port; // @synthesize port=_port;
@property id<GKSessionPrivateDelegate> privateDelegate;
@property (copy, nonatomic) NSString *serviceType; // @synthesize serviceType;
@property (readonly) NSString *sessionID; // @synthesize sessionID;
@property (readonly) int sessionMode; // @synthesize sessionMode=_mode;
@property (nonatomic) struct OpaqueGCKSession *sessionRef; // @synthesize sessionRef;
@property BOOL wifiEnabled;

- (BOOL)acceptConnectionFromPeer:(id)arg1 error:(id *)arg2;
- (void)browse;
- (void)cancelConnectToPeer:(id)arg1;
- (BOOL)checkDNSConnection;
- (void)cleanupExAvailablePeers;
- (void)connectToPeer:(id)arg1 withTimeout:(double)arg2;
- (id)createNSErrorFromGKSessionError:(int)arg1 description:(id)arg2 reason:(id)arg3;
- (id)createNSErrorFromHRESULT:(int)arg1 description:(id)arg2 reason:(id)arg3;
- (void)dealloc;
- (void)denyConnectionFromPeer:(id)arg1;
- (id)description;
- (void)didFindService:(const char *)arg1 fromIF:(const char *)arg2 withError:(int)arg3 moreComing:(BOOL)arg4;
- (void)didLookupHostname:(struct _DNSServiceRef_t *)arg1 forPeer:(id)arg2 hostName:(const char *)arg3 address:(const struct sockaddr_in *)arg4 interface:(unsigned int)arg5 withError:(int)arg6 moreComing:(BOOL)arg7;
- (void)didPublishWithError:(int)arg1;
- (void)didRemoveService:(const char *)arg1 fromIF:(const char *)arg2 withError:(int)arg3 moreComing:(BOOL)arg4;
- (void)didResolveService:(struct _DNSServiceRef_t *)arg1 forPeer:(id)arg2 hostName:(const char *)arg3 port:(unsigned short)arg4 interface:(unsigned int)arg5 txtLen:(unsigned short)arg6 txtRecord:(const void *)arg7 withError:(int)arg8 moreComing:(BOOL)arg9;
- (void)didUpdateTXTRecordForPeer:(id)arg1 fromIF:(const char *)arg2 txtLen:(unsigned short)arg3 txtRecord:(const void *)arg4 withError:(int)arg5 moreComing:(BOOL)arg6;
- (void)disconnectFromAllPeers;
- (void)disconnectPeerFromAllPeers:(id)arg1;
- (id)displayNameForPeer:(id)arg1;
- (BOOL)filterService:(const char *)arg1 withPID:(unsigned int)arg2;
- (void)handleEvents;
- (id)initWithConnection:(id)arg1 session:(id)arg2 delegate:(id)arg3;
- (id)initWithSessionID:(id)arg1 displayName:(id)arg2 session:(id)arg3 sessionMode:(int)arg4;
- (BOOL)isPeerBusy:(id)arg1;
- (BOOL)isShuttingDown;
- (void)lock;
- (BOOL)parseServiceName:(const char *)arg1 intoDisplayName:(id *)arg2 pid:(unsigned int *)arg3 state:(id *)arg4;
- (BOOL)passesSendDataSanityCheck:(id)arg1 toPeers:(id)arg2 withDataMode:(int)arg3 error:(id *)arg4;
- (id)peersWithConnectionState:(int)arg1;
- (void)printDictionaries;
- (void)processTXTRecordForPeer:(id)arg1 txtLen:(unsigned short)arg2 txtRecord:(const void *)arg3;
- (void)publish;
- (void)receiveDOOB:(id)arg1 fromPeer:(id)arg2 inSession:(id)arg3 context:(void *)arg4;
- (void)reset;
- (BOOL)sendAudioData:(id)arg1 toPeers:(id)arg2 withDataMode:(int)arg3 error:(id *)arg4;
- (void)sendCallbacksToDelegate:(CDStruct_68f9d01f *)arg1 remotePeer:(unsigned int)arg2;
- (BOOL)sendData:(id)arg1 toPeers:(id)arg2 withDataMode:(int)arg3 enableOOB:(BOOL)arg4 error:(id *)arg5;
- (BOOL)sendData:(id)arg1 toPeers:(id)arg2 withDataMode:(int)arg3 error:(id *)arg4;
- (BOOL)sendDataToAllPeers:(id)arg1 withDataMode:(int)arg2 error:(id *)arg3;
- (id)serviceName;
- (void)setDOOBReceiveHandler:(id)arg1 withContext:(void *)arg2 inBand:(unsigned int)arg3;
- (void)setDataReceiveHandler:(id)arg1 withContext:(void *)arg2;
- (void)setDisplayName:(id)arg1 forPeer:(unsigned int)arg2;
- (void)stopOldService;
- (void)stopResolvingAllPeers;
- (id)stringForGCKID:(unsigned int)arg1;
- (void)tellDelegate_connectionRequestToPeerFailed:(id)arg1;
- (void)tellDelegate_didConnectPeer:(id)arg1;
- (void)tellDelegate_didDisconnectPeer:(id)arg1;
- (void)tellDelegate_didReceiveBand_RetryICE:(id)arg1;
- (void)tellDelegate_didReceiveData:(id)arg1;
- (void)tellDelegate_gotInvited:(id)arg1;
- (void)tellDelegate_initiateRelay:(id)arg1;
- (void)tellDelegate_isConnectingPeer:(id)arg1;
- (void)tellDelegate_networkStatisticsChanged:(id)arg1;
- (void)tellDelegate_peerDidBecomeAvailable:(id)arg1;
- (void)tellDelegate_peerDidBecomeBusy:(id)arg1;
- (void)tellDelegate_peerDidBecomeUnavailable:(id)arg1;
- (void)tellDelegate_sessionDidFailWithError:(id)arg1;
- (void)tellDelegate_updateRelay:(id)arg1;
- (void)timeoutConnectToPeer:(id)arg1;
- (BOOL)tryConnectToPeer:(id)arg1;
- (void)unlock;
- (id)voiceChatSessionListener;

@end

