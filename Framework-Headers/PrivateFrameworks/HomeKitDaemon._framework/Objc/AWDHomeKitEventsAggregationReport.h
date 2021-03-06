//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@class NSString;

@interface AWDHomeKitEventsAggregationReport : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    unsigned int _acceptedXPCRequestsCount;
    unsigned int _activeDay;
    unsigned int _activeDaysPerMonthCount;
    unsigned int _averageSampledProcessMemoryUsage;
    NSString *_dataSyncState;
    unsigned int _erroredXPCRequestsCount;
    unsigned int _filteredXPCNotificationsCount;
    unsigned int _hapBTLEConnectionPerReasonsCount;
    unsigned int _hapBTLEConnectionsCount;
    unsigned int _hapBTLEDiscoveriesCount;
    unsigned int _hapIPInvalidationCount;
    unsigned int _hapIPReceivedHTTPEventCount;
    unsigned int _hapIPReceivedHTTPResponsesCount;
    unsigned int _hapIPSentHTTPRequestsCount;
    unsigned int _jetsamReasonHighwaterCount;
    unsigned int _jetsamReasonOtherCount;
    unsigned int _jetsamReasonProcessLimitCount;
    unsigned int _jetsamReasonUnknownKillCount;
    unsigned int _peakSampledProcessMemoryUsage;
    unsigned int _processLaunchCount;
    unsigned int _processMemoryPressureStateCriticalCount;
    unsigned int _processMemoryPressureStateWarningCount;
    unsigned int _remoteMessagesReceivedCount;
    unsigned int _remoteMessagesSentCount;
    unsigned int _sentXPCNotificationsCount;
    struct {
        unsigned int timestamp:1;
        unsigned int acceptedXPCRequestsCount:1;
        unsigned int activeDay:1;
        unsigned int activeDaysPerMonthCount:1;
        unsigned int averageSampledProcessMemoryUsage:1;
        unsigned int erroredXPCRequestsCount:1;
        unsigned int filteredXPCNotificationsCount:1;
        unsigned int hapBTLEConnectionPerReasonsCount:1;
        unsigned int hapBTLEConnectionsCount:1;
        unsigned int hapBTLEDiscoveriesCount:1;
        unsigned int hapIPInvalidationCount:1;
        unsigned int hapIPReceivedHTTPEventCount:1;
        unsigned int hapIPReceivedHTTPResponsesCount:1;
        unsigned int hapIPSentHTTPRequestsCount:1;
        unsigned int jetsamReasonHighwaterCount:1;
        unsigned int jetsamReasonOtherCount:1;
        unsigned int jetsamReasonProcessLimitCount:1;
        unsigned int jetsamReasonUnknownKillCount:1;
        unsigned int peakSampledProcessMemoryUsage:1;
        unsigned int processLaunchCount:1;
        unsigned int processMemoryPressureStateCriticalCount:1;
        unsigned int processMemoryPressureStateWarningCount:1;
        unsigned int remoteMessagesReceivedCount:1;
        unsigned int remoteMessagesSentCount:1;
        unsigned int sentXPCNotificationsCount:1;
    } _has;
}

@property (nonatomic) unsigned int acceptedXPCRequestsCount; // @synthesize acceptedXPCRequestsCount=_acceptedXPCRequestsCount;
@property (nonatomic) unsigned int activeDay; // @synthesize activeDay=_activeDay;
@property (nonatomic) unsigned int activeDaysPerMonthCount; // @synthesize activeDaysPerMonthCount=_activeDaysPerMonthCount;
@property (nonatomic) unsigned int averageSampledProcessMemoryUsage; // @synthesize averageSampledProcessMemoryUsage=_averageSampledProcessMemoryUsage;
@property (strong, nonatomic) NSString *dataSyncState; // @synthesize dataSyncState=_dataSyncState;
@property (nonatomic) unsigned int erroredXPCRequestsCount; // @synthesize erroredXPCRequestsCount=_erroredXPCRequestsCount;
@property (nonatomic) unsigned int filteredXPCNotificationsCount; // @synthesize filteredXPCNotificationsCount=_filteredXPCNotificationsCount;
@property (nonatomic) unsigned int hapBTLEConnectionPerReasonsCount; // @synthesize hapBTLEConnectionPerReasonsCount=_hapBTLEConnectionPerReasonsCount;
@property (nonatomic) unsigned int hapBTLEConnectionsCount; // @synthesize hapBTLEConnectionsCount=_hapBTLEConnectionsCount;
@property (nonatomic) unsigned int hapBTLEDiscoveriesCount; // @synthesize hapBTLEDiscoveriesCount=_hapBTLEDiscoveriesCount;
@property (nonatomic) unsigned int hapIPInvalidationCount; // @synthesize hapIPInvalidationCount=_hapIPInvalidationCount;
@property (nonatomic) unsigned int hapIPReceivedHTTPEventCount; // @synthesize hapIPReceivedHTTPEventCount=_hapIPReceivedHTTPEventCount;
@property (nonatomic) unsigned int hapIPReceivedHTTPResponsesCount; // @synthesize hapIPReceivedHTTPResponsesCount=_hapIPReceivedHTTPResponsesCount;
@property (nonatomic) unsigned int hapIPSentHTTPRequestsCount; // @synthesize hapIPSentHTTPRequestsCount=_hapIPSentHTTPRequestsCount;
@property (nonatomic) BOOL hasAcceptedXPCRequestsCount;
@property (nonatomic) BOOL hasActiveDay;
@property (nonatomic) BOOL hasActiveDaysPerMonthCount;
@property (nonatomic) BOOL hasAverageSampledProcessMemoryUsage;
@property (readonly, nonatomic) BOOL hasDataSyncState;
@property (nonatomic) BOOL hasErroredXPCRequestsCount;
@property (nonatomic) BOOL hasFilteredXPCNotificationsCount;
@property (nonatomic) BOOL hasHapBTLEConnectionPerReasonsCount;
@property (nonatomic) BOOL hasHapBTLEConnectionsCount;
@property (nonatomic) BOOL hasHapBTLEDiscoveriesCount;
@property (nonatomic) BOOL hasHapIPInvalidationCount;
@property (nonatomic) BOOL hasHapIPReceivedHTTPEventCount;
@property (nonatomic) BOOL hasHapIPReceivedHTTPResponsesCount;
@property (nonatomic) BOOL hasHapIPSentHTTPRequestsCount;
@property (nonatomic) BOOL hasJetsamReasonHighwaterCount;
@property (nonatomic) BOOL hasJetsamReasonOtherCount;
@property (nonatomic) BOOL hasJetsamReasonProcessLimitCount;
@property (nonatomic) BOOL hasJetsamReasonUnknownKillCount;
@property (nonatomic) BOOL hasPeakSampledProcessMemoryUsage;
@property (nonatomic) BOOL hasProcessLaunchCount;
@property (nonatomic) BOOL hasProcessMemoryPressureStateCriticalCount;
@property (nonatomic) BOOL hasProcessMemoryPressureStateWarningCount;
@property (nonatomic) BOOL hasRemoteMessagesReceivedCount;
@property (nonatomic) BOOL hasRemoteMessagesSentCount;
@property (nonatomic) BOOL hasSentXPCNotificationsCount;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned int jetsamReasonHighwaterCount; // @synthesize jetsamReasonHighwaterCount=_jetsamReasonHighwaterCount;
@property (nonatomic) unsigned int jetsamReasonOtherCount; // @synthesize jetsamReasonOtherCount=_jetsamReasonOtherCount;
@property (nonatomic) unsigned int jetsamReasonProcessLimitCount; // @synthesize jetsamReasonProcessLimitCount=_jetsamReasonProcessLimitCount;
@property (nonatomic) unsigned int jetsamReasonUnknownKillCount; // @synthesize jetsamReasonUnknownKillCount=_jetsamReasonUnknownKillCount;
@property (nonatomic) unsigned int peakSampledProcessMemoryUsage; // @synthesize peakSampledProcessMemoryUsage=_peakSampledProcessMemoryUsage;
@property (nonatomic) unsigned int processLaunchCount; // @synthesize processLaunchCount=_processLaunchCount;
@property (nonatomic) unsigned int processMemoryPressureStateCriticalCount; // @synthesize processMemoryPressureStateCriticalCount=_processMemoryPressureStateCriticalCount;
@property (nonatomic) unsigned int processMemoryPressureStateWarningCount; // @synthesize processMemoryPressureStateWarningCount=_processMemoryPressureStateWarningCount;
@property (nonatomic) unsigned int remoteMessagesReceivedCount; // @synthesize remoteMessagesReceivedCount=_remoteMessagesReceivedCount;
@property (nonatomic) unsigned int remoteMessagesSentCount; // @synthesize remoteMessagesSentCount=_remoteMessagesSentCount;
@property (nonatomic) unsigned int sentXPCNotificationsCount; // @synthesize sentXPCNotificationsCount=_sentXPCNotificationsCount;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

