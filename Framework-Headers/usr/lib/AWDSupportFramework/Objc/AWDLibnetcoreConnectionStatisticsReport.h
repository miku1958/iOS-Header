//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@interface AWDLibnetcoreConnectionStatisticsReport : PBCodable <NSCopying>
{
    unsigned long long _appDataStallTimerMsecs;
    unsigned long long _appReportingDataStallCount;
    unsigned long long _bestRTTMsecs;
    unsigned long long _betterRouteEventCount;
    unsigned long long _bytesDuplicate;
    unsigned long long _bytesIn;
    unsigned long long _bytesOut;
    unsigned long long _bytesOutOfOrder;
    unsigned long long _bytesRetransmitted;
    unsigned long long _connectionEstablishmentTimeMsecs;
    unsigned long long _connectionReuseCount;
    unsigned long long _currentRTTMsecs;
    unsigned long long _dNSResolvedTimeMsecs;
    unsigned long long _flowDurationMsecs;
    unsigned long long _iPAddressAttemptCount;
    unsigned long long _multipathBytesInCell;
    unsigned long long _multipathBytesInInitial;
    unsigned long long _multipathBytesInWiFi;
    unsigned long long _multipathBytesOutCell;
    unsigned long long _multipathBytesOutInitial;
    unsigned long long _multipathBytesOutWiFi;
    unsigned long long _multipathServiceType;
    unsigned long long _packetsDuplicate;
    unsigned long long _packetsIn;
    unsigned long long _packetsOut;
    unsigned long long _packetsOutOfOrder;
    unsigned long long _packetsRetransmitted;
    unsigned long long _rTTvariance;
    unsigned long long _smoothedRTTMsecs;
    unsigned long long _synRetransmissionCount;
    unsigned long long _timeToConnectionEstablishmentMsecs;
    unsigned long long _timeToConnectionStartMsecs;
    unsigned long long _timeToDNSResolvedMsecs;
    unsigned long long _timeToDNSStartMsecs;
    unsigned long long _trafficClass;
    int _connectedInterfaceType;
    int _interfaceType;
    BOOL _cellularFallback;
    BOOL _cellularRRCConnected;
    BOOL _connected;
    BOOL _dNSAnswersCached;
    BOOL _firstParty;
    BOOL _kernelReportedStalls;
    BOOL _kernelReportingConnectionStalled;
    BOOL _kernelReportingReadStalled;
    BOOL _kernelReportingWriteStalled;
    BOOL _tcpFastOpen;
    struct {
        unsigned int appDataStallTimerMsecs:1;
        unsigned int appReportingDataStallCount:1;
        unsigned int bestRTTMsecs:1;
        unsigned int betterRouteEventCount:1;
        unsigned int bytesDuplicate:1;
        unsigned int bytesIn:1;
        unsigned int bytesOut:1;
        unsigned int bytesOutOfOrder:1;
        unsigned int bytesRetransmitted:1;
        unsigned int connectionEstablishmentTimeMsecs:1;
        unsigned int connectionReuseCount:1;
        unsigned int currentRTTMsecs:1;
        unsigned int dNSResolvedTimeMsecs:1;
        unsigned int flowDurationMsecs:1;
        unsigned int iPAddressAttemptCount:1;
        unsigned int multipathBytesInCell:1;
        unsigned int multipathBytesInInitial:1;
        unsigned int multipathBytesInWiFi:1;
        unsigned int multipathBytesOutCell:1;
        unsigned int multipathBytesOutInitial:1;
        unsigned int multipathBytesOutWiFi:1;
        unsigned int multipathServiceType:1;
        unsigned int packetsDuplicate:1;
        unsigned int packetsIn:1;
        unsigned int packetsOut:1;
        unsigned int packetsOutOfOrder:1;
        unsigned int packetsRetransmitted:1;
        unsigned int rTTvariance:1;
        unsigned int smoothedRTTMsecs:1;
        unsigned int synRetransmissionCount:1;
        unsigned int timeToConnectionEstablishmentMsecs:1;
        unsigned int timeToConnectionStartMsecs:1;
        unsigned int timeToDNSResolvedMsecs:1;
        unsigned int timeToDNSStartMsecs:1;
        unsigned int trafficClass:1;
        unsigned int connectedInterfaceType:1;
        unsigned int interfaceType:1;
        unsigned int cellularFallback:1;
        unsigned int cellularRRCConnected:1;
        unsigned int connected:1;
        unsigned int dNSAnswersCached:1;
        unsigned int firstParty:1;
        unsigned int kernelReportedStalls:1;
        unsigned int kernelReportingConnectionStalled:1;
        unsigned int kernelReportingReadStalled:1;
        unsigned int kernelReportingWriteStalled:1;
        unsigned int tcpFastOpen:1;
    } _has;
}

@property (nonatomic) unsigned long long appDataStallTimerMsecs; // @synthesize appDataStallTimerMsecs=_appDataStallTimerMsecs;
@property (nonatomic) unsigned long long appReportingDataStallCount; // @synthesize appReportingDataStallCount=_appReportingDataStallCount;
@property (nonatomic) unsigned long long bestRTTMsecs; // @synthesize bestRTTMsecs=_bestRTTMsecs;
@property (nonatomic) unsigned long long betterRouteEventCount; // @synthesize betterRouteEventCount=_betterRouteEventCount;
@property (nonatomic) unsigned long long bytesDuplicate; // @synthesize bytesDuplicate=_bytesDuplicate;
@property (nonatomic) unsigned long long bytesIn; // @synthesize bytesIn=_bytesIn;
@property (nonatomic) unsigned long long bytesOut; // @synthesize bytesOut=_bytesOut;
@property (nonatomic) unsigned long long bytesOutOfOrder; // @synthesize bytesOutOfOrder=_bytesOutOfOrder;
@property (nonatomic) unsigned long long bytesRetransmitted; // @synthesize bytesRetransmitted=_bytesRetransmitted;
@property (nonatomic) BOOL cellularFallback; // @synthesize cellularFallback=_cellularFallback;
@property (nonatomic) BOOL cellularRRCConnected; // @synthesize cellularRRCConnected=_cellularRRCConnected;
@property (nonatomic) BOOL connected; // @synthesize connected=_connected;
@property (nonatomic) int connectedInterfaceType; // @synthesize connectedInterfaceType=_connectedInterfaceType;
@property (nonatomic) unsigned long long connectionEstablishmentTimeMsecs; // @synthesize connectionEstablishmentTimeMsecs=_connectionEstablishmentTimeMsecs;
@property (nonatomic) unsigned long long connectionReuseCount; // @synthesize connectionReuseCount=_connectionReuseCount;
@property (nonatomic) unsigned long long currentRTTMsecs; // @synthesize currentRTTMsecs=_currentRTTMsecs;
@property (nonatomic) BOOL dNSAnswersCached; // @synthesize dNSAnswersCached=_dNSAnswersCached;
@property (nonatomic) unsigned long long dNSResolvedTimeMsecs; // @synthesize dNSResolvedTimeMsecs=_dNSResolvedTimeMsecs;
@property (nonatomic) BOOL firstParty; // @synthesize firstParty=_firstParty;
@property (nonatomic) unsigned long long flowDurationMsecs; // @synthesize flowDurationMsecs=_flowDurationMsecs;
@property (nonatomic) BOOL hasAppDataStallTimerMsecs;
@property (nonatomic) BOOL hasAppReportingDataStallCount;
@property (nonatomic) BOOL hasBestRTTMsecs;
@property (nonatomic) BOOL hasBetterRouteEventCount;
@property (nonatomic) BOOL hasBytesDuplicate;
@property (nonatomic) BOOL hasBytesIn;
@property (nonatomic) BOOL hasBytesOut;
@property (nonatomic) BOOL hasBytesOutOfOrder;
@property (nonatomic) BOOL hasBytesRetransmitted;
@property (nonatomic) BOOL hasCellularFallback;
@property (nonatomic) BOOL hasCellularRRCConnected;
@property (nonatomic) BOOL hasConnected;
@property (nonatomic) BOOL hasConnectedInterfaceType;
@property (nonatomic) BOOL hasConnectionEstablishmentTimeMsecs;
@property (nonatomic) BOOL hasConnectionReuseCount;
@property (nonatomic) BOOL hasCurrentRTTMsecs;
@property (nonatomic) BOOL hasDNSAnswersCached;
@property (nonatomic) BOOL hasDNSResolvedTimeMsecs;
@property (nonatomic) BOOL hasFirstParty;
@property (nonatomic) BOOL hasFlowDurationMsecs;
@property (nonatomic) BOOL hasIPAddressAttemptCount;
@property (nonatomic) BOOL hasInterfaceType;
@property (nonatomic) BOOL hasKernelReportedStalls;
@property (nonatomic) BOOL hasKernelReportingConnectionStalled;
@property (nonatomic) BOOL hasKernelReportingReadStalled;
@property (nonatomic) BOOL hasKernelReportingWriteStalled;
@property (nonatomic) BOOL hasMultipathBytesInCell;
@property (nonatomic) BOOL hasMultipathBytesInInitial;
@property (nonatomic) BOOL hasMultipathBytesInWiFi;
@property (nonatomic) BOOL hasMultipathBytesOutCell;
@property (nonatomic) BOOL hasMultipathBytesOutInitial;
@property (nonatomic) BOOL hasMultipathBytesOutWiFi;
@property (nonatomic) BOOL hasMultipathServiceType;
@property (nonatomic) BOOL hasPacketsDuplicate;
@property (nonatomic) BOOL hasPacketsIn;
@property (nonatomic) BOOL hasPacketsOut;
@property (nonatomic) BOOL hasPacketsOutOfOrder;
@property (nonatomic) BOOL hasPacketsRetransmitted;
@property (nonatomic) BOOL hasRTTvariance;
@property (nonatomic) BOOL hasSmoothedRTTMsecs;
@property (nonatomic) BOOL hasSynRetransmissionCount;
@property (nonatomic) BOOL hasTcpFastOpen;
@property (nonatomic) BOOL hasTimeToConnectionEstablishmentMsecs;
@property (nonatomic) BOOL hasTimeToConnectionStartMsecs;
@property (nonatomic) BOOL hasTimeToDNSResolvedMsecs;
@property (nonatomic) BOOL hasTimeToDNSStartMsecs;
@property (nonatomic) BOOL hasTrafficClass;
@property (nonatomic) unsigned long long iPAddressAttemptCount; // @synthesize iPAddressAttemptCount=_iPAddressAttemptCount;
@property (nonatomic) int interfaceType; // @synthesize interfaceType=_interfaceType;
@property (nonatomic) BOOL kernelReportedStalls; // @synthesize kernelReportedStalls=_kernelReportedStalls;
@property (nonatomic) BOOL kernelReportingConnectionStalled; // @synthesize kernelReportingConnectionStalled=_kernelReportingConnectionStalled;
@property (nonatomic) BOOL kernelReportingReadStalled; // @synthesize kernelReportingReadStalled=_kernelReportingReadStalled;
@property (nonatomic) BOOL kernelReportingWriteStalled; // @synthesize kernelReportingWriteStalled=_kernelReportingWriteStalled;
@property (nonatomic) unsigned long long multipathBytesInCell; // @synthesize multipathBytesInCell=_multipathBytesInCell;
@property (nonatomic) unsigned long long multipathBytesInInitial; // @synthesize multipathBytesInInitial=_multipathBytesInInitial;
@property (nonatomic) unsigned long long multipathBytesInWiFi; // @synthesize multipathBytesInWiFi=_multipathBytesInWiFi;
@property (nonatomic) unsigned long long multipathBytesOutCell; // @synthesize multipathBytesOutCell=_multipathBytesOutCell;
@property (nonatomic) unsigned long long multipathBytesOutInitial; // @synthesize multipathBytesOutInitial=_multipathBytesOutInitial;
@property (nonatomic) unsigned long long multipathBytesOutWiFi; // @synthesize multipathBytesOutWiFi=_multipathBytesOutWiFi;
@property (nonatomic) unsigned long long multipathServiceType; // @synthesize multipathServiceType=_multipathServiceType;
@property (nonatomic) unsigned long long packetsDuplicate; // @synthesize packetsDuplicate=_packetsDuplicate;
@property (nonatomic) unsigned long long packetsIn; // @synthesize packetsIn=_packetsIn;
@property (nonatomic) unsigned long long packetsOut; // @synthesize packetsOut=_packetsOut;
@property (nonatomic) unsigned long long packetsOutOfOrder; // @synthesize packetsOutOfOrder=_packetsOutOfOrder;
@property (nonatomic) unsigned long long packetsRetransmitted; // @synthesize packetsRetransmitted=_packetsRetransmitted;
@property (nonatomic) unsigned long long rTTvariance; // @synthesize rTTvariance=_rTTvariance;
@property (nonatomic) unsigned long long smoothedRTTMsecs; // @synthesize smoothedRTTMsecs=_smoothedRTTMsecs;
@property (nonatomic) unsigned long long synRetransmissionCount; // @synthesize synRetransmissionCount=_synRetransmissionCount;
@property (nonatomic) BOOL tcpFastOpen; // @synthesize tcpFastOpen=_tcpFastOpen;
@property (nonatomic) unsigned long long timeToConnectionEstablishmentMsecs; // @synthesize timeToConnectionEstablishmentMsecs=_timeToConnectionEstablishmentMsecs;
@property (nonatomic) unsigned long long timeToConnectionStartMsecs; // @synthesize timeToConnectionStartMsecs=_timeToConnectionStartMsecs;
@property (nonatomic) unsigned long long timeToDNSResolvedMsecs; // @synthesize timeToDNSResolvedMsecs=_timeToDNSResolvedMsecs;
@property (nonatomic) unsigned long long timeToDNSStartMsecs; // @synthesize timeToDNSStartMsecs=_timeToDNSStartMsecs;
@property (nonatomic) unsigned long long trafficClass; // @synthesize trafficClass=_trafficClass;

- (int)StringAsConnectedInterfaceType:(id)arg1;
- (int)StringAsInterfaceType:(id)arg1;
- (id)connectedInterfaceTypeAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)interfaceTypeAsString:(int)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

