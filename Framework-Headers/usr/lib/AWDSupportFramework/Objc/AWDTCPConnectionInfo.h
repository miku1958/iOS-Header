//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@interface AWDTCPConnectionInfo : PBCodable <NSCopying>
{
    unsigned int _dnsResolutionLatency;
    int _interfaceType;
    unsigned int _tcpHandshakeLatency;
    unsigned int _tcpRetransmissions;
    unsigned int _tcpRxBytes;
    unsigned int _tcpTxBytes;
    unsigned int _tlsLatency;
    struct {
        unsigned int dnsResolutionLatency:1;
        unsigned int interfaceType:1;
        unsigned int tcpHandshakeLatency:1;
        unsigned int tcpRetransmissions:1;
        unsigned int tcpRxBytes:1;
        unsigned int tcpTxBytes:1;
        unsigned int tlsLatency:1;
    } _has;
}

@property (nonatomic) unsigned int dnsResolutionLatency; // @synthesize dnsResolutionLatency=_dnsResolutionLatency;
@property (nonatomic) BOOL hasDnsResolutionLatency;
@property (nonatomic) BOOL hasInterfaceType;
@property (nonatomic) BOOL hasTcpHandshakeLatency;
@property (nonatomic) BOOL hasTcpRetransmissions;
@property (nonatomic) BOOL hasTcpRxBytes;
@property (nonatomic) BOOL hasTcpTxBytes;
@property (nonatomic) BOOL hasTlsLatency;
@property (nonatomic) int interfaceType; // @synthesize interfaceType=_interfaceType;
@property (nonatomic) unsigned int tcpHandshakeLatency; // @synthesize tcpHandshakeLatency=_tcpHandshakeLatency;
@property (nonatomic) unsigned int tcpRetransmissions; // @synthesize tcpRetransmissions=_tcpRetransmissions;
@property (nonatomic) unsigned int tcpRxBytes; // @synthesize tcpRxBytes=_tcpRxBytes;
@property (nonatomic) unsigned int tcpTxBytes; // @synthesize tcpTxBytes=_tcpTxBytes;
@property (nonatomic) unsigned int tlsLatency; // @synthesize tlsLatency=_tlsLatency;

- (int)StringAsInterfaceType:(id)arg1;
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

