//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/VCTransportSession.h>

#import <AVConference/InterfaceListenerDelegate-Protocol.h>
#import <AVConference/LoopbackSocketTunnelDelegate-Protocol.h>
#import <AVConference/VCConnectionManagerDelegate-Protocol.h>

@class GKInterfaceListener, LoopbackSocketTunnel, NSCondition, NSData, NSDictionary, NSMutableDictionary, NSObject, NSString, TCPTunnelClient, VCTransport;
@protocol OS_dispatch_source, VCConnectionProtocol, VCTransportSessionLegacyDelegate, VideoConferenceRealTimeChannel;

__attribute__((visibility("hidden")))
@interface VCTransportSessionLegacy : VCTransportSession <LoopbackSocketTunnelDelegate, InterfaceListenerDelegate, VCConnectionManagerDelegate>
{
    unsigned char _localU8Version;
    long long relayState;
    int pendingRelayCount;
    float callerPreEmptiveTimeoutInSecs;
    unsigned int _connectionSetupRTTEstimate;
    BOOL allowsRelay;
    BOOL initialSecondaryRelaySetupDone;
    BOOL requestedTimeoutRelay;
    BOOL _isCaller;
    BOOL _didReceivePiggybackBlob;
    BOOL _useLoopback;
    BOOL _isRemoteOSPreLion;
    BOOL _isStarted;
    NSObject<OS_dispatch_source> *relaySetupTimer;
    VCTransport *transport;
    unsigned int _callID;
    unsigned int _remoteCallID;
    int _NATType;
    NSMutableDictionary *_localRelayRequestResponse;
    NSDictionary *_localRelayUpdate;
    NSMutableDictionary *_remoteRelayRequestResponse;
    NSDictionary *_remoteRelayUpdate;
    NSData *_localConnectionData;
    NSData *_localRelayConnectionData;
    NSData *_remoteConnectionData;
    NSData *_remoteRelayConnectionData;
    NSString *_localParticipantID;
    NSString *_remoteParticipantID;
    NSString *_sessionID;
    struct __SecIdentity *_identity;
    TCPTunnelClient *_tcpTunnelClient;
    NSObject<VideoConferenceRealTimeChannel> *rtChannel;
    LoopbackSocketTunnel *_tunnel;
    id<VCConnectionProtocol> _loopbackConnection;
    NSCondition *_connectionDataTimeoutCondVar;
    GKInterfaceListener *_interfaceListener;
    id<VCTransportSessionLegacyDelegate> _delegate;
}

@property int NATType; // @synthesize NATType=_NATType;
@property BOOL allowsRelay; // @synthesize allowsRelay;
@property (readonly, copy) NSString *debugDescription;
@property id<VCTransportSessionLegacyDelegate> delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL initialSecondaryRelaySetupDone; // @synthesize initialSecondaryRelaySetupDone;
@property BOOL isCaller; // @synthesize isCaller=_isCaller;
@property (strong) NSData *localConnectionData; // @synthesize localConnectionData=_localConnectionData;
@property (copy) NSString *localParticipantID; // @synthesize localParticipantID=_localParticipantID;
@property (strong) NSData *localRelayConnectionData; // @synthesize localRelayConnectionData=_localRelayConnectionData;
@property (strong) NSMutableDictionary *localRelayRequestResponse; // @synthesize localRelayRequestResponse=_localRelayRequestResponse;
@property (strong, nonatomic) NSDictionary *localRelayUpdate; // @synthesize localRelayUpdate=_localRelayUpdate;
@property (nonatomic) int pendingRelayCount; // @synthesize pendingRelayCount;
@property unsigned int remoteCallID; // @synthesize remoteCallID=_remoteCallID;
@property (strong) NSData *remoteConnectionData; // @synthesize remoteConnectionData=_remoteConnectionData;
@property (copy) NSString *remoteParticipantID; // @synthesize remoteParticipantID=_remoteParticipantID;
@property (strong, nonatomic) NSData *remoteRelayConnectionData; // @synthesize remoteRelayConnectionData=_remoteRelayConnectionData;
@property (strong, nonatomic) NSMutableDictionary *remoteRelayRequestResponse; // @synthesize remoteRelayRequestResponse=_remoteRelayRequestResponse;
@property (strong, nonatomic) NSDictionary *remoteRelayUpdate; // @synthesize remoteRelayUpdate=_remoteRelayUpdate;
@property (copy) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property (readonly) Class superclass;

- (struct tagIPPORT)IPPortForPrimaryConnectionOnLocalInterface:(BOOL)arg1;
- (void)connectionCallback:(id)arg1 isInitialConnection:(BOOL)arg2;
- (id)connectionDataUsingRelay:(BOOL)arg1 isInitialRelay:(BOOL)arg2 nonCellularCandidateTimeout:(double)arg3 error:(id *)arg4;
- (void)connectionResultCallback:(struct tagCONNRESULT *)arg1 didReceiveICEPacket:(BOOL)arg2 didUseRelay:(BOOL)arg3 secretKey:(id)arg4 skeResult:(int)arg5;
- (unsigned int)connectionSetupRTTEstimate;
- (unsigned int)connectionTypeForConnectionResult:(struct tagCONNRESULT *)arg1;
- (id)createInitiateRelayDictionary;
- (id)createInitiateRelayDictionaryForCall:(unsigned int)arg1 primaryConnection:(struct tagCONNRESULT *)arg2;
- (id)createRelayUpdateDictionary:(id)arg1;
- (void)createSecondaryRelayDispatchTimer:(float)arg1 callID:(unsigned int)arg2 callerRequired:(BOOL)arg3;
- (BOOL)createTCPTunnelForParticipantID:(id)arg1 relayDictionary:(id)arg2 didOriginateRequest:(BOOL)arg3 relayType:(unsigned char)arg4 error:(id *)arg5;
- (void)dealloc;
- (void)deleteTCPTunnel;
- (void)destroySecondaryRelayDispatchTimer;
- (int)detailedErrorCode;
- (void)didEnableDuplication:(BOOL)arg1 activeConnection:(id)arg2;
- (int)generateConnectionData:(char **)arg1 forCallID:(unsigned int)arg2 connectionDataSize:(int *)arg3 nonCellularCandidateTimeout:(double)arg4;
- (void)getConnectionDataUsingRelay:(BOOL)arg1 isInitialRelay:(BOOL)arg2 nonCellularCandidateTimeout:(double)arg3 queue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (BOOL)getConnectionSetupData:(id *)arg1 withOptions:(id)arg2 error:(id *)arg3;
- (void)handleConnectionSetupDataChangeMessageDelivered;
- (BOOL)handleExchangedKey:(id)arg1 result:(int)arg2;
- (void)handleMediaReceivedOverPeerToPeerLink;
- (void)handleMediaReceivedOverRelayLink;
- (void)handleNewCandidates:(id)arg1 version:(unsigned short)arg2;
- (double)iceTimeoutInSeconds:(BOOL)arg1;
- (id)initWithCallID:(unsigned int)arg1;
- (void)initiateRelayRequest;
- (BOOL)isConnectedAndAllowAdditionalConnection;
- (BOOL)isHandoverSupported;
- (BOOL)isRemoteOSPreLion;
- (void)loopbackSocketTunnel:(id)arg1 receivedData:(id)arg2 from:(struct tagIPPORT *)arg3;
- (void)networkStateDidChange;
- (void)notifyDelegateToCancelRelay;
- (void)primaryConnectionChanged:(id)arg1 oldPrimaryConnection:(id)arg2;
- (void)processRelayRequestResponse:(id)arg1 didOriginateRequest:(BOOL)arg2;
- (void)processRelayUpdate:(id)arg1 didOriginateRequest:(BOOL)arg2;
- (void)processRemoteIPChange:(id)arg1;
- (void)processRemoteIPChange:(char *)arg1 dataLength:(int)arg2 remoteCandidateVersion:(unsigned short)arg3;
- (void)receivedRealTimeData:(id)arg1 fromParticipantID:(id)arg2;
- (void)reportNetworkConditionsDegraded;
- (void)resetICETimeoutToLongTimeout;
- (void)resetLoopback;
- (void)setForceRelay;
- (void)setIdentity:(struct __SecIdentity *)arg1;
- (void)setupInitialSecondaryRelayWithCallbackRelayFlag:(BOOL)arg1 callID:(unsigned int)arg2;
- (void)setupLoopbackWithConnectionType:(unsigned int)arg1;
- (void)setupPendingSecondaryRelayWithNewPrimary:(id)arg1;
- (void)setupSecondaryRelayForCall:(unsigned int)arg1 callerRequired:(BOOL)arg2;
- (void)setupTransport;
- (void)start;
- (BOOL)startConnectionWithBlob:(id)arg1 useRelay:(BOOL)arg2 isInitialRelay:(BOOL)arg3 error:(id *)arg4;
- (void)stop;
- (void)stopLoopback;
- (void)stopLoopbackProc:(id)arg1;
- (void)triggerInterfaceChange;

@end

