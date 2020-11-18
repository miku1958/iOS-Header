//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface AWDMPTCPConnectionReport : PBCodable <NSCopying>
{
    double _establishmentTime;
    double _postConnectSessionLifetime;
    unsigned long long _timestamp;
    NSString *_clientId;
    int _establishmentFailureError;
    NSString *_establishmentInterfaceName;
    int _establishmentSynRetransmits;
    NSMutableArray *_interfaceReports;
    int _postConnectSubflowAttemptCount;
    int _postConnectSubflowMaxSubflowCount;
    int _subflowSwitchingCount;
    NSMutableArray *_subflowSwitchingReports;
    BOOL _establishmentCellularFallback;
    BOOL _establishmentForcedTcpFallback;
    BOOL _establishmentSuccess;
    BOOL _establishmentTcpFallback;
    BOOL _postConnectMultiHomed;
    BOOL _postConnectSingleHomed;
    struct {
        unsigned int establishmentTime:1;
        unsigned int postConnectSessionLifetime:1;
        unsigned int timestamp:1;
        unsigned int establishmentFailureError:1;
        unsigned int establishmentSynRetransmits:1;
        unsigned int postConnectSubflowAttemptCount:1;
        unsigned int postConnectSubflowMaxSubflowCount:1;
        unsigned int subflowSwitchingCount:1;
        unsigned int establishmentCellularFallback:1;
        unsigned int establishmentForcedTcpFallback:1;
        unsigned int establishmentSuccess:1;
        unsigned int establishmentTcpFallback:1;
        unsigned int postConnectMultiHomed:1;
        unsigned int postConnectSingleHomed:1;
    } _has;
}

@property (strong, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
@property (nonatomic) BOOL establishmentCellularFallback; // @synthesize establishmentCellularFallback=_establishmentCellularFallback;
@property (nonatomic) int establishmentFailureError; // @synthesize establishmentFailureError=_establishmentFailureError;
@property (nonatomic) BOOL establishmentForcedTcpFallback; // @synthesize establishmentForcedTcpFallback=_establishmentForcedTcpFallback;
@property (strong, nonatomic) NSString *establishmentInterfaceName; // @synthesize establishmentInterfaceName=_establishmentInterfaceName;
@property (nonatomic) BOOL establishmentSuccess; // @synthesize establishmentSuccess=_establishmentSuccess;
@property (nonatomic) int establishmentSynRetransmits; // @synthesize establishmentSynRetransmits=_establishmentSynRetransmits;
@property (nonatomic) BOOL establishmentTcpFallback; // @synthesize establishmentTcpFallback=_establishmentTcpFallback;
@property (nonatomic) double establishmentTime; // @synthesize establishmentTime=_establishmentTime;
@property (readonly, nonatomic) BOOL hasClientId;
@property (nonatomic) BOOL hasEstablishmentCellularFallback;
@property (nonatomic) BOOL hasEstablishmentFailureError;
@property (nonatomic) BOOL hasEstablishmentForcedTcpFallback;
@property (readonly, nonatomic) BOOL hasEstablishmentInterfaceName;
@property (nonatomic) BOOL hasEstablishmentSuccess;
@property (nonatomic) BOOL hasEstablishmentSynRetransmits;
@property (nonatomic) BOOL hasEstablishmentTcpFallback;
@property (nonatomic) BOOL hasEstablishmentTime;
@property (nonatomic) BOOL hasPostConnectMultiHomed;
@property (nonatomic) BOOL hasPostConnectSessionLifetime;
@property (nonatomic) BOOL hasPostConnectSingleHomed;
@property (nonatomic) BOOL hasPostConnectSubflowAttemptCount;
@property (nonatomic) BOOL hasPostConnectSubflowMaxSubflowCount;
@property (nonatomic) BOOL hasSubflowSwitchingCount;
@property (nonatomic) BOOL hasTimestamp;
@property (strong, nonatomic) NSMutableArray *interfaceReports; // @synthesize interfaceReports=_interfaceReports;
@property (nonatomic) BOOL postConnectMultiHomed; // @synthesize postConnectMultiHomed=_postConnectMultiHomed;
@property (nonatomic) double postConnectSessionLifetime; // @synthesize postConnectSessionLifetime=_postConnectSessionLifetime;
@property (nonatomic) BOOL postConnectSingleHomed; // @synthesize postConnectSingleHomed=_postConnectSingleHomed;
@property (nonatomic) int postConnectSubflowAttemptCount; // @synthesize postConnectSubflowAttemptCount=_postConnectSubflowAttemptCount;
@property (nonatomic) int postConnectSubflowMaxSubflowCount; // @synthesize postConnectSubflowMaxSubflowCount=_postConnectSubflowMaxSubflowCount;
@property (nonatomic) int subflowSwitchingCount; // @synthesize subflowSwitchingCount=_subflowSwitchingCount;
@property (strong, nonatomic) NSMutableArray *subflowSwitchingReports; // @synthesize subflowSwitchingReports=_subflowSwitchingReports;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;

- (void)addInterfaceReports:(id)arg1;
- (void)addSubflowSwitchingReports:(id)arg1;
- (void)clearInterfaceReports;
- (void)clearSubflowSwitchingReports;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)interfaceReportsAtIndex:(unsigned long long)arg1;
- (unsigned long long)interfaceReportsCount;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)subflowSwitchingReportsAtIndex:(unsigned long long)arg1;
- (unsigned long long)subflowSwitchingReportsCount;
- (void)writeTo:(id)arg1;

@end

