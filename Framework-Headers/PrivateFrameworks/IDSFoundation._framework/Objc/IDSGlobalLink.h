//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDSFoundation/IDSGLSessionManagerDelegate-Protocol.h>
#import <IDSFoundation/IDSLink-Protocol.h>
#import <IDSFoundation/IDSLinkDelegate-Protocol.h>
#import <IDSFoundation/IDSStunCandidatePairDelegate-Protocol.h>

@class IDSCommnatManager, IDSGLSessionManager, IDSGlobalLinkBlocks, IDSTCPLink, IDSUDPLink, NSData, NSMutableArray, NSMutableDictionary, NSString;
@protocol IDSLinkDelegate, OS_dispatch_source;

@interface IDSGlobalLink : NSObject <IDSLink, IDSLinkDelegate, IDSStunCandidatePairDelegate, IDSGLSessionManagerDelegate>
{
    IDSUDPLink *_udpLink;
    IDSUDPLink *_udpLinkv6;
    IDSTCPLink *_tcpLink;
    IDSTCPLink *_tcpSSLLink;
    unsigned short _startPort;
    int _portRange;
    id<IDSLinkDelegate> _delegate;
    id<IDSLinkDelegate> _alternateDelegate;
    CDUnknownBlockType _connectReadyHandler;
    CDUnknownBlockType _disconnectCompletionHandler;
    long long _clientType;
    BOOL _isFaceTimeCall;
    BOOL _isMultiway;
    BOOL _forceQuickRelay;
    BOOL _disallowWiFi;
    BOOL _disallowCellular;
    BOOL _preferCellularForCallSetup;
    struct tagIDSQRSendInfoList *_sendInfoList;
    BOOL _linkIDCounter;
    double _natMappingTimeout;
    double _inviteSentTime;
    double _inviteRecvTime;
    unsigned int _acceptDelayU32;
    double _allocbindStartTime;
    double _allocbindEndTime;
    double _linkConnectTime;
    double _firstClientPacketTime;
    struct IDSNAT64PrefixCache_ *_nat64PrefixCache;
    NSMutableDictionary *_tokenToCandidatePairs;
    NSMutableDictionary *_linkIDToCandidatePairs;
    NSMutableDictionary *_channelToCandidatePairs;
    NSMutableDictionary *_startTimeToStunReqID;
    NSMutableDictionary *_tokenToStunReqID;
    struct IDSSimpleUInt16List _channelNumberList;
    struct IDSSimpleUInt16List _reallocChannelList;
    NSMutableDictionary *_tokenToReallocBlocks;
    NSObject<OS_dispatch_source> *_disconnectTimer;
    NSObject<OS_dispatch_source> *_activityTimer;
    NSMutableDictionary *_connectingCandidatePairSessionInfo;
    NSMutableArray *_interfaceAddressArray;
    BOOL _isInitiator;
    int _nominateCount;
    NSMutableArray *_localCandidateList;
    NSMutableArray *_remoteCandidateList;
    NSMutableDictionary *_tokenToStunCheckPairs;
    BOOL _enableSKE;
    NSData *_skeData;
    BOOL _recvRemoteSKEData;
    BOOL _delaySessionConnected;
    BOOL _skeComplete;
    double _skeStartTime;
    NSString *_acceptedRelaySessionID;
    NSMutableArray *_nonAcceptedQRSessions;
    BOOL _isSessionAcceptedWithNoCandidatePair;
    IDSGLSessionManager *_sessionManager;
    long long _remoteCapabilityFlag;
    BOOL _delayedConnData;
    int _localConnDataCounter;
    int _remoteConnDataCounter;
    NSMutableArray *_delayedCellInterfaces;
    BOOL _hasPendingAllocation;
    NSMutableArray *_targetedAllocations;
    BOOL _useSecureControlMessage;
    NSData *_controlMessageKey;
    unsigned short _basebandPacketChannelNumber;
    IDSGlobalLinkBlocks *_qraBlocks;
    NSMutableArray *_allocateTimeReportBlocks;
    BOOL _hasPendingSelfAllocation;
    NSMutableArray *_selfAllocateRequestIDs;
    IDSCommnatManager *_commnatManager;
    NSString *_cbuuid;
    NSString *_deviceUniqueID;
    unsigned long long _headerOverhead;
    unsigned long long _state;
    unsigned char _clientUUID[16];
    NSString *_idsSessionID;
    unsigned long long _totalBytesSent;
    unsigned long long _totalPacketsSent;
    unsigned long long _totalBytesReceived;
    unsigned long long _totalPacketsReceived;
    unsigned long long _previousBytesSent;
    unsigned long long _previousPacketsSent;
    unsigned long long _previousBytesReceived;
    unsigned long long _previousPacketsReceived;
    double _previousReportTime;
    struct os_unfair_lock_s _lock;
    short _remoteGlobalLinkVersion;
    BOOL _reduceCellularUsage;
    BOOL _reduceRelayLinkCreation;
}

@property (weak) id<IDSLinkDelegate> alternateDelegate; // @synthesize alternateDelegate=_alternateDelegate;
@property (strong) NSString *cbuuid; // @synthesize cbuuid=_cbuuid;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<IDSLinkDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong) NSString *deviceUniqueID; // @synthesize deviceUniqueID=_deviceUniqueID;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long headerOverhead; // @synthesize headerOverhead=_headerOverhead;
@property (readonly, getter=linkTypeString) NSString *linkTypeString;
@property (readonly) unsigned long long state; // @synthesize state=_state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_IsExtIPDiscoveryNeeded:(struct sockaddr *)arg1 candidatePairList:(id)arg2;
- (BOOL)_addCandidate:(id)arg1 isRemoteCandidate:(BOOL)arg2;
- (void)_addQRAAWDBlock:(id)arg1 allocateRequestTime:(double)arg2 inferredExternalIP:(unsigned int)arg3 stunTransport:(long long)arg4 relayProviderType:(long long)arg5 idsSessionID:(id)arg6;
- (id)_addSocketAndInterfaceAddress:(unsigned long long)arg1 wantsWiFi:(BOOL)arg2 wantsCellular:(BOOL)arg3;
- (void)_addStunCheckPair:(id)arg1 isRemoteCandidate:(BOOL)arg2;
- (void)_callDisconnectCompletionHandler:(id)arg1;
- (void)_connectWithSessionInfo:(id)arg1 interfaceAddress:(id)arg2 joinSession:(BOOL)arg3 allocbindFailover:(BOOL)arg4 completionHandler:(CDUnknownBlockType)arg5 withLocalInterfacePreference:(int)arg6;
- (void)_convergeSharedSessions:(id)arg1;
- (id)_createCommandData:(long long)arg1 options:(id)arg2 candidatePair:(id)arg3;
- (id)_createInterfaceAddressArray:(unsigned long long)arg1 wantsWiFi:(BOOL)arg2 wantsCellular:(BOOL)arg3;
- (id)_delayProcessingCellularInterfaces:(id)arg1;
- (void)_discardAllCandidatePairs;
- (void)_discardCandidatePairsWithOption:(BOOL)arg1;
- (void)_discardNonAcceptedCandidatePairs;
- (void)_discardSelfAllocateCandidatePairs;
- (id)_getCandidatePairsWithSessionID:(id)arg1 inState:(unsigned long long)arg2;
- (id)_getLink:(int)arg1 stunTransport:(long long)arg2;
- (void)_getNAT64PrefixForInterface:(int)arg1 interfaceName:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (BOOL)_getPacketBufferSendInfo:(CDStruct_12676517 *)arg1 channelNumber:(unsigned short *)arg2 transport:(long long *)arg3;
- (BOOL)_getSessionParticipants:(id)arg1 relaySessionID:(id)arg2 options:(id)arg3;
- (BOOL)_getSessionStreamInfo:(id)arg1 relaySessionID:(id)arg2 options:(id)arg3;
- (void)_handleActivityTimer;
- (void)_handleAllocbindFailoverTimer:(id)arg1 failoverTimerOnCandidatePair:(id)arg2 onInterface:(int)arg3;
- (void)_handleCommnatResult:(long long)arg1 reflextiveCandidate:(id)arg2;
- (void)_handleDisconnectTimer;
- (void)_handleSelfAllocationTimeout:(id)arg1;
- (BOOL)_hasActiveAllocbindFailoverTimerForSessionID:(id)arg1;
- (BOOL)_hasConnectedCandidatePair;
- (BOOL)_hasConnectingRelayCandidatePair;
- (void)_invalidateCandidatePairs:(id)arg1;
- (BOOL)_isBetterCandidatePair:(id)arg1 newCandidatePair:(id)arg2;
- (BOOL)_isExtIPDiscoveryDone;
- (BOOL)_isInterfaceConstrainedWithInterfaceIndex:(unsigned int)arg1;
- (BOOL)_isInterfaceExpensiveWithInterfaceIndex:(unsigned int)arg1;
- (BOOL)_isReachableInterface:(id)arg1 interfaceIPVersion:(unsigned long long)arg2;
- (id)_nextConnectedCandidatePair;
- (void)_nominateCandidatePair:(id)arg1;
- (void)_notifyCandidatePairConnected:(id)arg1;
- (void)_notifyCandidatePairDisconnected:(id)arg1;
- (void)_notifyDefaultUnderlyingLinkChanged:(id)arg1 error:(long long)arg2;
- (void)_notifyLinkDisconnectedWithError:(long long)arg1;
- (void)_notifyQRSessionConnected:(id)arg1;
- (void)_notifySessionInfoReceived:(id)arg1 relayGroupID:(id)arg2 relaySessionID:(id)arg3 success:(BOOL)arg4;
- (void)_parseClientUUID:(id)arg1;
- (BOOL)_processAllocbindResponse:(id)arg1 fromDevice:(id)arg2 localIfIndex:(unsigned int)arg3 localAddress:(struct sockaddr *)arg4 remmoteAddress:(struct sockaddr *)arg5 candidatePairToken:(id)arg6 arrivalTime:(double)arg7;
- (BOOL)_processBindingRequest:(id)arg1 fromDevice:(id)arg2 localIfIndex:(unsigned int)arg3 localAddress:(struct sockaddr *)arg4 remmoteAddress:(struct sockaddr *)arg5 candidatePairToken:(id)arg6 arrivalTime:(double)arg7;
- (BOOL)_processBindingResponse:(id)arg1 fromDevice:(id)arg2 localIfIndex:(unsigned int)arg3 localAddress:(struct sockaddr *)arg4 remmoteAddress:(struct sockaddr *)arg5 candidatePairToken:(id)arg6 arrivalTime:(double)arg7;
- (void)_processCommandConnected:(id)arg1 candidatePairToken:(id)arg2;
- (void)_processCommandConnectionData:(id)arg1 candidatePairToken:(id)arg2;
- (void)_processCommandDisconnected:(id)arg1 candidatePairToken:(id)arg2;
- (void)_processCommandHeartbeat:(id)arg1 candidatePairToken:(id)arg2 arrivalTime:(double)arg3;
- (void)_processCommandNominate:(id)arg1 candidatePairToken:(id)arg2;
- (void)_processCommandZUDPData:(id)arg1 candidatePairToken:(id)arg2;
- (BOOL)_processDataIndication:(id)arg1 fromDevice:(id)arg2 localIfIndex:(unsigned int)arg3 localAddress:(struct sockaddr *)arg4 remoteAddress:(struct sockaddr *)arg5 candidatePairToken:(id)arg6 arrivalTime:(double)arg7;
- (void)_processDataOnReallocChannel:(unsigned short)arg1 localAddress:(struct sockaddr *)arg2 remoteAddress:(struct sockaddr *)arg3;
- (void)_processDelayedCellularInterfaces;
- (BOOL)_processGoAwayIndication:(id)arg1 fromDevice:(id)arg2 localIfIndex:(unsigned int)arg3 localAddress:(struct sockaddr *)arg4 remoteAddress:(struct sockaddr *)arg5 candidatePairToken:(id)arg6 arrivalTime:(double)arg7;
- (BOOL)_processIncomingIndicationData:(char *)arg1 length:(int)arg2 candidatePairToken:(id)arg3 arrivalTime:(double)arg4;
- (void)_processNewLocalAddressList:(id)arg1;
- (void)_processNewRemoteCandidates:(id)arg1;
- (void)_processReallocChannelData:(CDStruct_12676517 *)arg1 channelNumber:(unsigned short)arg2 fromDeviceUniqueID:(id)arg3 cbuuid:(id)arg4 arrivalTime:(double)arg5;
- (BOOL)_processReallocIndication:(id)arg1 fromDevice:(id)arg2 localIfIndex:(unsigned int)arg3 localAddress:(struct sockaddr *)arg4 remoteAddress:(struct sockaddr *)arg5 candidatePairToken:(id)arg6 arrivalTime:(double)arg7;
- (void)_processRemoteCandidates:(id)arg1;
- (void)_processRemoteLinkUUID:(id)arg1 candidatePair:(id)arg2;
- (void)_processRemovedLocalAddressList:(id)arg1;
- (void)_processRemovedRemoteCandidates:(id)arg1;
- (BOOL)_processStunPacket:(CDStruct_12676517 *)arg1 fromDeviceUniqueID:(id)arg2 cbuuid:(id)arg3 arrivalTime:(double)arg4 headerOverhead:(unsigned long long)arg5;
- (BOOL)_processUnallocbindResponse:(id)arg1 fromDevice:(id)arg2 localIfIndex:(unsigned int)arg3 localAddress:(struct sockaddr *)arg4 remmoteAddress:(struct sockaddr *)arg5 candidatePairToken:(id)arg6 arrivalTime:(double)arg7;
- (void)_processXORMappedAddress:(id)arg1 arrivalTime:(double)arg2;
- (BOOL)_qrLinkLimitExceededWithNewLinkType:(unsigned char)arg1 cellularRelayLinkCount:(unsigned short)arg2 wifiRelayLinkCount:(unsigned short)arg3;
- (void)_recvGenericData:(char *)arg1 dataLength:(unsigned long long)arg2 linkID:(BOOL)arg3;
- (void)_removePacketNotificationFilter;
- (void)_removeStunRequest:(id)arg1;
- (void)_reportAWDAllocateTime;
- (void)_reportSessionSetupTime;
- (void)_requestNewQRAllocationWithPreferredRemoteInterface:(int)arg1 withPreferredLocalInterface:(int)arg2;
- (void)_requestNonUDPRelayAllocation:(long long)arg1 relaySessionID:(id)arg2;
- (BOOL)_requestSelfAllocationForInterfaceAddress:(id)arg1;
- (void)_saveStunRequest:(id)arg1 startTime:(double)arg2 token:(id)arg3;
- (void)_selectBetterDefaultCandidatePair:(id)arg1;
- (void)_selectDefaultCandidatePair;
- (void)_sendAllocbindRequest:(id)arg1 stunMessage:(id)arg2 isRealloc:(BOOL)arg3 inResponseToNoSessionState:(BOOL)arg4;
- (void)_sendAllocbindRequestForExtIP:(id)arg1 startTime:(double)arg2;
- (void)_sendBindingRequest:(id)arg1 stunMessage:(id)arg2;
- (void)_sendCommandMessage:(long long)arg1 stunMessage:(id)arg2 options:(id)arg3 candidatePairToken:(id)arg4;
- (void)_sendConnectionDataWithRemovedAddressList:(id)arg1;
- (void)_sendSKEDataWithSelectedCandidatePair;
- (void)_sendSessionDisconnectedCommand;
- (long long)_sendStunMessage:(id)arg1 sourceIfIndex:(int)arg2 source:(struct sockaddr *)arg3 destination:(struct sockaddr *)arg4 stunTransport:(long long)arg5 token:(id)arg6;
- (void)_sendUnallocbindRequest:(id)arg1 stunMessage:(id)arg2;
- (long long)_sendZUDPData:(char *)arg1 dataLength:(unsigned long long)arg2 linkID:(BOOL)arg3;
- (void)_setChannelToCandidatePair:(id)arg1 localAddress:(struct sockaddr *)arg2 remoteAddress:(struct sockaddr *)arg3 channelNumber:(unsigned short)arg4;
- (void)_setRemoteGlobalLinkVersionWithCommand:(long long)arg1 receivedRemoteVersion:(BOOL)arg2 versionValue:(unsigned short)arg3 receivedSKE:(BOOL)arg4;
- (void)_setupNewQRLinkIfNecessary:(id)arg1;
- (void)_setupRelayConnectionForNetworkAddressChanges;
- (BOOL)_skipCommandMessage:(long long)arg1 candidatePair:(id)arg2 timeNow:(double)arg3;
- (void)_startActivityTimer;
- (void)_startAllocbindFailoverTimerOnCandidatePair:(id)arg1;
- (void)_startDisconnectTimer;
- (void)_startExtIPDiscovery;
- (void)_startStunCheck:(id)arg1;
- (double)_startTimeForStunRequest:(id)arg1;
- (void)_stopActivityTimer;
- (void)_stopAllocbindFailoverTimer:(id)arg1;
- (void)_stopDisconnectTimer;
- (void)_updateDefaultCandidatePair:(id)arg1;
- (void)_updateInterfaceAddressesWithAddList:(id)arg1 removeList:(id)arg2;
- (void)_updateNominatedCandidatePair:(id)arg1;
- (void)_updateSendStatsWithResult:(unsigned long long)arg1 bytesSent:(long long)arg2 packetsSent:(int)arg3 linkID:(BOOL)arg4 token:(id)arg5 useRelay:(BOOL)arg6 isClientData:(BOOL)arg7 sendTime:(double)arg8 stunTransport:(long long)arg9;
- (void)candidatePair:(id)arg1 didAddQREvent:(id)arg2;
- (void)candidatePair:(id)arg1 didReceiveSessionInfo:(id)arg2 success:(BOOL)arg3;
- (void)candidatePair:(id)arg1 didReceiveStunErrorResponse:(long long)arg2 errorCode:(unsigned short)arg3;
- (void)connectWithSessionInfo:(id)arg1 interfaceAddress:(id)arg2 joinSession:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4 withLocalInterfacePreference:(int)arg5;
- (id)copyLinkStatsDict;
- (void)currentCellularSignalStrength:(int *)arg1 signalStrength:(int *)arg2 signalGrade:(int *)arg3;
- (void)dealloc;
- (unsigned long long)defaultLinkType;
- (void)disconnectCandidatePair:(id)arg1;
- (void)disconnectWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dropIPPackets:(BOOL)arg1 payloadArray:(id)arg2;
- (id)generateLinkReport:(double)arg1 isCurrentLink:(BOOL)arg2;
- (void)getSessionInfo:(id)arg1 relaySessionID:(id)arg2 requestType:(long long)arg3 options:(id)arg4;
- (void)handleCellularRATChange;
- (void)handleNetworkAddressChanges:(BOOL)arg1 hasIPv6AddressChange:(BOOL)arg2;
- (BOOL)hasReachableInterface:(unsigned long long)arg1;
- (id)initWithDeviceUniqueID:(id)arg1 cbuuid:(id)arg2;
- (void)invalidate;
- (void)link:(id)arg1 didConnectForDeviceUniqueID:(id)arg2 cbuuid:(id)arg3;
- (void)link:(id)arg1 didDisconnectForDeviceUniqueID:(id)arg2 cbuuid:(id)arg3;
- (BOOL)link:(id)arg1 didReceivePacket:(CDStruct_12676517 *)arg2 fromDeviceUniqueID:(id)arg3 cbuuid:(id)arg4;
- (BOOL)remoteHostAwake;
- (void)sendAllocbindRequest:(id)arg1 isRealloc:(BOOL)arg2 inResponseToNoSessionState:(BOOL)arg3;
- (unsigned long long)sendPacketBuffer:(CDStruct_12676517 *)arg1 toDeviceUniqueID:(id)arg2 cbuuid:(id)arg3;
- (unsigned long long)sendPacketBufferArray:(CDStruct_183601bc **)arg1 arraySize:(int)arg2 toDeviceUniqueID:(id)arg3 cbuuid:(id)arg4;
- (void)sendSKEData:(id)arg1;
- (void)setAcceptedRelaySession:(id)arg1 options:(id)arg2;
- (void)setDefaultUnderlyingLink:(BOOL)arg1;
- (void)setPacketNotificationFilter:(BOOL)arg1 uniqueTag:(unsigned int)arg2 isEnabled:(BOOL)arg3;
- (void)setWiFiAssistState:(BOOL)arg1;
- (void)startWithOptions:(id)arg1;
- (void)stopKeepAlive:(id)arg1;
- (void)updateProtocolQualityOfService:(BOOL)arg1 isGood:(BOOL)arg2;
- (void)updateSessionParticipants:(id)arg1 relaySessionID:(id)arg2 participants:(id)arg3;

@end
