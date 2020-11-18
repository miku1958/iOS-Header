//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Network/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface NWAWDLBConnectionReport : PBCodable <NSCopying>
{
    CDStruct_5df41632 _connectionReadyTimes;
    CDStruct_95bda58d _resumptionFailureErrors;
    CDStruct_5df41632 _resumptionFailureTimes;
    CDStruct_5df41632 _resumptionSuccessTimes;
    long long _bytesReceived;
    long long _bytesSent;
    long long _clientConnectionCount;
    long long _connectionDuration;
    unsigned long long _timestamp;
    int _connectionAttemptCount;
    int _connectionCellularFallbackCount;
    int _connectionFailureCount;
    int _connectionSuccessMptcpCount;
    int _connectionSuccessTcpCount;
    int _resumptionFailureCount;
    int _resumptionSuccessCount;
    int _suspensionCount;
    int _upgradeSuccessAndNotNeededCount;
    int _upgradeSuccessAndPrimaryCount;
    struct {
        unsigned int bytesReceived:1;
        unsigned int bytesSent:1;
        unsigned int clientConnectionCount:1;
        unsigned int connectionDuration:1;
        unsigned int timestamp:1;
        unsigned int connectionAttemptCount:1;
        unsigned int connectionCellularFallbackCount:1;
        unsigned int connectionFailureCount:1;
        unsigned int connectionSuccessMptcpCount:1;
        unsigned int connectionSuccessTcpCount:1;
        unsigned int resumptionFailureCount:1;
        unsigned int resumptionSuccessCount:1;
        unsigned int suspensionCount:1;
        unsigned int upgradeSuccessAndNotNeededCount:1;
        unsigned int upgradeSuccessAndPrimaryCount:1;
    } _has;
}

@property (nonatomic) long long bytesReceived; // @synthesize bytesReceived=_bytesReceived;
@property (nonatomic) long long bytesSent; // @synthesize bytesSent=_bytesSent;
@property (nonatomic) long long clientConnectionCount; // @synthesize clientConnectionCount=_clientConnectionCount;
@property (nonatomic) int connectionAttemptCount; // @synthesize connectionAttemptCount=_connectionAttemptCount;
@property (nonatomic) int connectionCellularFallbackCount; // @synthesize connectionCellularFallbackCount=_connectionCellularFallbackCount;
@property (nonatomic) long long connectionDuration; // @synthesize connectionDuration=_connectionDuration;
@property (nonatomic) int connectionFailureCount; // @synthesize connectionFailureCount=_connectionFailureCount;
@property (readonly, nonatomic) long long *connectionReadyTimes;
@property (readonly, nonatomic) unsigned long long connectionReadyTimesCount;
@property (nonatomic) int connectionSuccessMptcpCount; // @synthesize connectionSuccessMptcpCount=_connectionSuccessMptcpCount;
@property (nonatomic) int connectionSuccessTcpCount; // @synthesize connectionSuccessTcpCount=_connectionSuccessTcpCount;
@property (nonatomic) BOOL hasBytesReceived;
@property (nonatomic) BOOL hasBytesSent;
@property (nonatomic) BOOL hasClientConnectionCount;
@property (nonatomic) BOOL hasConnectionAttemptCount;
@property (nonatomic) BOOL hasConnectionCellularFallbackCount;
@property (nonatomic) BOOL hasConnectionDuration;
@property (nonatomic) BOOL hasConnectionFailureCount;
@property (nonatomic) BOOL hasConnectionSuccessMptcpCount;
@property (nonatomic) BOOL hasConnectionSuccessTcpCount;
@property (nonatomic) BOOL hasResumptionFailureCount;
@property (nonatomic) BOOL hasResumptionSuccessCount;
@property (nonatomic) BOOL hasSuspensionCount;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasUpgradeSuccessAndNotNeededCount;
@property (nonatomic) BOOL hasUpgradeSuccessAndPrimaryCount;
@property (nonatomic) int resumptionFailureCount; // @synthesize resumptionFailureCount=_resumptionFailureCount;
@property (readonly, nonatomic) int *resumptionFailureErrors;
@property (readonly, nonatomic) unsigned long long resumptionFailureErrorsCount;
@property (readonly, nonatomic) long long *resumptionFailureTimes;
@property (readonly, nonatomic) unsigned long long resumptionFailureTimesCount;
@property (nonatomic) int resumptionSuccessCount; // @synthesize resumptionSuccessCount=_resumptionSuccessCount;
@property (readonly, nonatomic) long long *resumptionSuccessTimes;
@property (readonly, nonatomic) unsigned long long resumptionSuccessTimesCount;
@property (nonatomic) int suspensionCount; // @synthesize suspensionCount=_suspensionCount;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property (nonatomic) int upgradeSuccessAndNotNeededCount; // @synthesize upgradeSuccessAndNotNeededCount=_upgradeSuccessAndNotNeededCount;
@property (nonatomic) int upgradeSuccessAndPrimaryCount; // @synthesize upgradeSuccessAndPrimaryCount=_upgradeSuccessAndPrimaryCount;

- (void)addConnectionReadyTimes:(long long)arg1;
- (void)addResumptionFailureErrors:(int)arg1;
- (void)addResumptionFailureTimes:(long long)arg1;
- (void)addResumptionSuccessTimes:(long long)arg1;
- (void)clearConnectionReadyTimes;
- (void)clearResumptionFailureErrors;
- (void)clearResumptionFailureTimes;
- (void)clearResumptionSuccessTimes;
- (long long)connectionReadyTimesAtIndex:(unsigned long long)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (int)resumptionFailureErrorsAtIndex:(unsigned long long)arg1;
- (long long)resumptionFailureTimesAtIndex:(unsigned long long)arg1;
- (long long)resumptionSuccessTimesAtIndex:(unsigned long long)arg1;
- (void)setConnectionReadyTimes:(long long *)arg1 count:(unsigned long long)arg2;
- (void)setResumptionFailureErrors:(int *)arg1 count:(unsigned long long)arg2;
- (void)setResumptionFailureTimes:(long long *)arg1 count:(unsigned long long)arg2;
- (void)setResumptionSuccessTimes:(long long *)arg1 count:(unsigned long long)arg2;
- (void)writeTo:(id)arg1;

@end
