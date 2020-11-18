//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AVConference/VCConnectionHealthMonitorDelegate-Protocol.h>

@class NSString, VCConnectionHealthMonitor;
@protocol OS_dispatch_queue, VCConnectionManagerDelegate, VCConnectionProtocol;

__attribute__((visibility("hidden")))
@interface VCConnectionManager : NSObject <VCConnectionHealthMonitorDelegate>
{
    unsigned int _callID;
    int _relayServerProvider;
    struct _opaque_pthread_rwlock_t _stateRWlock;
    id<VCConnectionProtocol> _primaryConnection;
    id<VCConnectionProtocol> _secondaryConnection;
    id<VCConnectionProtocol> _connectionForDuplication;
    id<VCConnectionProtocol> _lastPrimaryConnectionInUse;
    struct opaqueRTCReporting *_reportingAgent;
    BOOL _isInitialConnectionEstablished;
    int _mediaExcessiveCellularTxBytes;
    int _mediaExcessiveCellularRxBytes;
    int _signalingExcessiveCellularTxBytes;
    int _signalingExcessiveCellularRxBytes;
    id _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    int _duplicationType;
    CDUnknownFunctionPointerType _duplicationCallback;
    double _lastConnectionUnstableTime;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    void *_duplicationContext;
    BOOL _duplicationPending;
    BOOL _enableDuplication;
    BOOL _supportDuplication;
    int _preferredLocalInterfaceForDuplication;
    int _preferredRemoteInterfaceForDuplication;
    BOOL _isPrimaryLocalUsingCell;
    VCConnectionHealthMonitor *_connectionHealthMonitor;
    CDStruct_b3143830 _localConnectionStats;
    CDStruct_b3143830 _remoteConnectionStats;
    double _remoteNoRemotePacketInterval;
    BOOL _isAudioOnly;
    int _localiRATLinkTypeSuggestion;
    int _remoteiRATLinkTypeSuggestion;
    BOOL _isRemoteDuplicating;
    double _lastiRATCheckTime;
    double _localLinkTypeSuggestionChangeTime;
    double _iRATNotificationRequestTime;
    int _localWRMLinkTypeFromDefaults;
    BOOL _allowRequestForWRMNotification;
    BOOL _forceHandoverToCell;
    BOOL _disableRemoteInterfaceInference;
    CDUnknownFunctionPointerType _wrmStatusUpdateCallback;
    CDUnknownFunctionPointerType _wrmRequestNotificationCallback;
    void *_wrmCallbacksContext;
}

@property unsigned int callID; // @synthesize callID=_callID;
@property (readonly) int connectionCount;
@property (strong, nonatomic) id<VCConnectionProtocol> connectionForDuplication; // @synthesize connectionForDuplication=_connectionForDuplication;
@property (readonly, copy) NSString *debugDescription;
@property id<VCConnectionManagerDelegate> delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property BOOL isAudioOnly; // @synthesize isAudioOnly=_isAudioOnly;
@property (nonatomic, setter=setDuplicationEnabled:) BOOL isDuplicationEnabled; // @synthesize isDuplicationEnabled=_enableDuplication;
@property (readonly) BOOL isLocalCellularInterfaceUsed;
@property (strong, nonatomic) id<VCConnectionProtocol> lastPrimaryConnectionInUse; // @synthesize lastPrimaryConnectionInUse=_lastPrimaryConnectionInUse;
@property (readonly) int mediaExcessiveCellularRxBytes; // @synthesize mediaExcessiveCellularRxBytes=_mediaExcessiveCellularRxBytes;
@property (readonly) int mediaExcessiveCellularTxBytes; // @synthesize mediaExcessiveCellularTxBytes=_mediaExcessiveCellularTxBytes;
@property int preferredLocalInterfaceForDuplication; // @synthesize preferredLocalInterfaceForDuplication=_preferredLocalInterfaceForDuplication;
@property int preferredRemoteInterfaceForDuplication; // @synthesize preferredRemoteInterfaceForDuplication=_preferredRemoteInterfaceForDuplication;
@property (strong, nonatomic) id<VCConnectionProtocol> primaryConnection; // @synthesize primaryConnection=_primaryConnection;
@property int relayServerProvider; // @synthesize relayServerProvider=_relayServerProvider;
@property (readonly) double remoteNoRemotePacketInterval; // @synthesize remoteNoRemotePacketInterval=_remoteNoRemotePacketInterval;
@property (strong, nonatomic) id<VCConnectionProtocol> secondaryConnection; // @synthesize secondaryConnection=_secondaryConnection;
@property (readonly) int signalingExcessiveCellularRxBytes; // @synthesize signalingExcessiveCellularRxBytes=_signalingExcessiveCellularRxBytes;
@property (readonly) int signalingExcessiveCellularTxBytes; // @synthesize signalingExcessiveCellularTxBytes=_signalingExcessiveCellularTxBytes;
@property (readonly) Class superclass;
@property BOOL supportDuplication; // @synthesize supportDuplication=_supportDuplication;

- (int)addConnection:(id)arg1;
- (void)checkiRATSuggestion;
- (void)checkiRATSuggestionDefaultValue;
- (id)connectionForQuality:(int)arg1;
- (id)connectionForQualityInternal:(int)arg1;
- (void)connectionHealthDidUpdate:(int)arg1 isLocalConnection:(BOOL)arg2;
- (struct tagVCSourceDestinationInfo *)createSourceDestinationInfoList;
- (void)dealloc;
- (int)getCellularMTUForActiveConnectionWithQuality:(int)arg1;
- (int)getCellularTechForActiveConnectionWithQuality:(int)arg1 forLocalInterface:(BOOL)arg2;
- (int)getConnectionTypeForActiveConnectionWithQuality:(int)arg1 forLocalInterface:(BOOL)arg2;
- (id)getConnectionWithSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1 isPrimary:(BOOL *)arg2;
- (int)getNumberOfConnectionsInternal;
- (id)init;
- (BOOL)isBetterConnection:(id)arg1 asPrimary:(BOOL)arg2;
- (BOOL)isConnectedOnIPv6ForActiveConnectionWithQuality:(int)arg1;
- (BOOL)isConnectedOnRelayForActiveConnectionWithQuality:(int)arg1;
- (BOOL)isInterfaceOnCellularForActiveConnectionWithQuality:(int)arg1 forLocalInterface:(BOOL)arg2;
- (BOOL)isOptimalConnection:(id)arg1 asPrimary:(BOOL)arg2 interfaceMask:(int)arg3;
- (void)primaryConnectionChanged:(id)arg1 oldPrimaryConnection:(id)arg2;
- (int)processConnectionHealthFromControlInfo:(void *)arg1;
- (int)processRemoteWRMSuggestion:(int)arg1 isRemoteDuplicating:(BOOL)arg2;
- (int)processWRMNotification:(CDStruct_d2860d30 *)arg1;
- (void)promoteSecondaryConnectionToPrimary:(id)arg1;
- (const char *)reasonStringWithDuplicationType:(int)arg1;
- (int)removeConnection:(id)arg1;
- (void)reportConnection:(id)arg1 isInitialConnection:(BOOL)arg2;
- (void)requestWRMNotificationAtTime:(double)arg1;
- (int)setConnectionHealthOnControlInfo:(void *)arg1;
- (void)setConnectionPause:(BOOL)arg1 isLocalConnection:(BOOL)arg2;
- (void)setDuplicationCallback:(CDUnknownFunctionPointerType)arg1 withContext:(void *)arg2;
- (void)setDuplicationEnabledInternal:(BOOL)arg1;
- (void)setReportingAgent:(struct opaqueRTCReporting *)arg1;
- (int)setWRMUpdateCallback:(CDUnknownFunctionPointerType)arg1 requestNotificationCallback:(CDUnknownFunctionPointerType)arg2 withContext:(void *)arg3;
- (BOOL)shouldAcceptDataFromSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1;
- (BOOL)shouldHandoverWhenUpdateWRMDuplication:(int)arg1;
- (void)sourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1 isSourceOnCellular:(BOOL *)arg2 isSourceIPv6:(BOOL *)arg3;
- (void)updateBytesForSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1 bytes:(int)arg2 isMediaData:(BOOL)arg3 isOutgoing:(BOOL)arg4;
- (void)updateCellularMTU:(int)arg1;
- (void)updateCellularTech:(int)arg1 forLocalInterface:(BOOL)arg2;
- (void)updateConnectionHealthWithIndicator:(BOOL)arg1;
- (void)updateConnectionStatsWithIndicatorNoPackets:(CDStruct_b3143830 *)arg1;
- (void)updateConnectionStatsWithIndicatorNone:(CDStruct_b3143830 *)arg1;
- (void)updateConnectionStatsWithIndicatorPrimaryImproved:(CDStruct_b3143830 *)arg1;
- (void)updateReceivedBytesForSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1 bytesReceived:(int)arg2 isMediaData:(BOOL)arg3;
- (void)updateReceivedExcessiveBytes:(int)arg1 isMediaData:(BOOL)arg2 isIPv6:(BOOL)arg3;
- (void)updateTransmittedBytesForSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1 bytesSent:(int)arg2 isMediaData:(BOOL)arg3;
- (void)updateTransmittedExcessiveBytes:(int)arg1 isMediaData:(BOOL)arg2 isIPv6:(BOOL)arg3;
- (void)updateWRMDuplicationForHandover;
- (BOOL)updateWRMDuplicationForLocaliRATSuggestion;
- (void)updateWRMDuplicationForRemoteiRATSuggestion;
- (void)useConnectionAsPrimary:(id)arg1;

@end
