//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@interface AWDNWAPIUsage : PBCodable <NSCopying>
{
    long long _ifFltrAttach;
    long long _ifFltrAttachOs;
    long long _ifnetAlloc;
    long long _ifnetAllocOs;
    long long _ipFltrAdd;
    long long _ipFltrAddOs;
    long long _nexusFlowInet6Datagram;
    long long _nexusFlowInet6Stream;
    long long _nexusFlowInetDatagram;
    long long _nexusFlowInetStream;
    long long _pfAddrule;
    long long _pfAddruleOs;
    long long _sockAlloc;
    long long _sockAllocKernel;
    long long _sockAllocKernelOs;
    long long _sockDomainInet;
    long long _sockDomainInet6;
    long long _sockDomainKey;
    long long _sockDomainLocal;
    long long _sockDomainMultipath;
    long long _sockDomainNdrv;
    long long _sockDomainOther;
    long long _sockDomainRoute;
    long long _sockDomainSystem;
    long long _sockFltrRegister;
    long long _sockFltrRegisterOs;
    long long _sockInetMcastJoin;
    long long _sockInetMcastJoinOs;
    long long _sockNecpClientuuidCount;
    long long _sockNetInet6Dgram;
    long long _sockNetInet6DgramConnected;
    long long _sockNetInet6DgramDns;
    long long _sockNetInet6DgramNoData;
    long long _sockNetInet6Stream;
    long long _sockNetInetDgram;
    long long _sockNetInetDgramConnected;
    long long _sockNetInetDgramDns;
    long long _sockNetInetDgramNoData;
    long long _sockNetInetStream;
    unsigned long long _timeSinceLastReport;
    unsigned long long _timestamp;
    long long _vmnetStart;
    BOOL _ifNetagentEnabled;
    struct {
        unsigned int ifFltrAttach:1;
        unsigned int ifFltrAttachOs:1;
        unsigned int ifnetAlloc:1;
        unsigned int ifnetAllocOs:1;
        unsigned int ipFltrAdd:1;
        unsigned int ipFltrAddOs:1;
        unsigned int nexusFlowInet6Datagram:1;
        unsigned int nexusFlowInet6Stream:1;
        unsigned int nexusFlowInetDatagram:1;
        unsigned int nexusFlowInetStream:1;
        unsigned int pfAddrule:1;
        unsigned int pfAddruleOs:1;
        unsigned int sockAlloc:1;
        unsigned int sockAllocKernel:1;
        unsigned int sockAllocKernelOs:1;
        unsigned int sockDomainInet:1;
        unsigned int sockDomainInet6:1;
        unsigned int sockDomainKey:1;
        unsigned int sockDomainLocal:1;
        unsigned int sockDomainMultipath:1;
        unsigned int sockDomainNdrv:1;
        unsigned int sockDomainOther:1;
        unsigned int sockDomainRoute:1;
        unsigned int sockDomainSystem:1;
        unsigned int sockFltrRegister:1;
        unsigned int sockFltrRegisterOs:1;
        unsigned int sockInetMcastJoin:1;
        unsigned int sockInetMcastJoinOs:1;
        unsigned int sockNecpClientuuidCount:1;
        unsigned int sockNetInet6Dgram:1;
        unsigned int sockNetInet6DgramConnected:1;
        unsigned int sockNetInet6DgramDns:1;
        unsigned int sockNetInet6DgramNoData:1;
        unsigned int sockNetInet6Stream:1;
        unsigned int sockNetInetDgram:1;
        unsigned int sockNetInetDgramConnected:1;
        unsigned int sockNetInetDgramDns:1;
        unsigned int sockNetInetDgramNoData:1;
        unsigned int sockNetInetStream:1;
        unsigned int timeSinceLastReport:1;
        unsigned int timestamp:1;
        unsigned int vmnetStart:1;
        unsigned int ifNetagentEnabled:1;
    } _has;
}

@property (nonatomic) BOOL hasIfFltrAttach;
@property (nonatomic) BOOL hasIfFltrAttachOs;
@property (nonatomic) BOOL hasIfNetagentEnabled;
@property (nonatomic) BOOL hasIfnetAlloc;
@property (nonatomic) BOOL hasIfnetAllocOs;
@property (nonatomic) BOOL hasIpFltrAdd;
@property (nonatomic) BOOL hasIpFltrAddOs;
@property (nonatomic) BOOL hasNexusFlowInet6Datagram;
@property (nonatomic) BOOL hasNexusFlowInet6Stream;
@property (nonatomic) BOOL hasNexusFlowInetDatagram;
@property (nonatomic) BOOL hasNexusFlowInetStream;
@property (nonatomic) BOOL hasPfAddrule;
@property (nonatomic) BOOL hasPfAddruleOs;
@property (nonatomic) BOOL hasSockAlloc;
@property (nonatomic) BOOL hasSockAllocKernel;
@property (nonatomic) BOOL hasSockAllocKernelOs;
@property (nonatomic) BOOL hasSockDomainInet;
@property (nonatomic) BOOL hasSockDomainInet6;
@property (nonatomic) BOOL hasSockDomainKey;
@property (nonatomic) BOOL hasSockDomainLocal;
@property (nonatomic) BOOL hasSockDomainMultipath;
@property (nonatomic) BOOL hasSockDomainNdrv;
@property (nonatomic) BOOL hasSockDomainOther;
@property (nonatomic) BOOL hasSockDomainRoute;
@property (nonatomic) BOOL hasSockDomainSystem;
@property (nonatomic) BOOL hasSockFltrRegister;
@property (nonatomic) BOOL hasSockFltrRegisterOs;
@property (nonatomic) BOOL hasSockInetMcastJoin;
@property (nonatomic) BOOL hasSockInetMcastJoinOs;
@property (nonatomic) BOOL hasSockNecpClientuuidCount;
@property (nonatomic) BOOL hasSockNetInet6Dgram;
@property (nonatomic) BOOL hasSockNetInet6DgramConnected;
@property (nonatomic) BOOL hasSockNetInet6DgramDns;
@property (nonatomic) BOOL hasSockNetInet6DgramNoData;
@property (nonatomic) BOOL hasSockNetInet6Stream;
@property (nonatomic) BOOL hasSockNetInetDgram;
@property (nonatomic) BOOL hasSockNetInetDgramConnected;
@property (nonatomic) BOOL hasSockNetInetDgramDns;
@property (nonatomic) BOOL hasSockNetInetDgramNoData;
@property (nonatomic) BOOL hasSockNetInetStream;
@property (nonatomic) BOOL hasTimeSinceLastReport;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasVmnetStart;
@property (nonatomic) long long ifFltrAttach; // @synthesize ifFltrAttach=_ifFltrAttach;
@property (nonatomic) long long ifFltrAttachOs; // @synthesize ifFltrAttachOs=_ifFltrAttachOs;
@property (nonatomic) BOOL ifNetagentEnabled; // @synthesize ifNetagentEnabled=_ifNetagentEnabled;
@property (nonatomic) long long ifnetAlloc; // @synthesize ifnetAlloc=_ifnetAlloc;
@property (nonatomic) long long ifnetAllocOs; // @synthesize ifnetAllocOs=_ifnetAllocOs;
@property (nonatomic) long long ipFltrAdd; // @synthesize ipFltrAdd=_ipFltrAdd;
@property (nonatomic) long long ipFltrAddOs; // @synthesize ipFltrAddOs=_ipFltrAddOs;
@property (nonatomic) long long nexusFlowInet6Datagram; // @synthesize nexusFlowInet6Datagram=_nexusFlowInet6Datagram;
@property (nonatomic) long long nexusFlowInet6Stream; // @synthesize nexusFlowInet6Stream=_nexusFlowInet6Stream;
@property (nonatomic) long long nexusFlowInetDatagram; // @synthesize nexusFlowInetDatagram=_nexusFlowInetDatagram;
@property (nonatomic) long long nexusFlowInetStream; // @synthesize nexusFlowInetStream=_nexusFlowInetStream;
@property (nonatomic) long long pfAddrule; // @synthesize pfAddrule=_pfAddrule;
@property (nonatomic) long long pfAddruleOs; // @synthesize pfAddruleOs=_pfAddruleOs;
@property (nonatomic) long long sockAlloc; // @synthesize sockAlloc=_sockAlloc;
@property (nonatomic) long long sockAllocKernel; // @synthesize sockAllocKernel=_sockAllocKernel;
@property (nonatomic) long long sockAllocKernelOs; // @synthesize sockAllocKernelOs=_sockAllocKernelOs;
@property (nonatomic) long long sockDomainInet; // @synthesize sockDomainInet=_sockDomainInet;
@property (nonatomic) long long sockDomainInet6; // @synthesize sockDomainInet6=_sockDomainInet6;
@property (nonatomic) long long sockDomainKey; // @synthesize sockDomainKey=_sockDomainKey;
@property (nonatomic) long long sockDomainLocal; // @synthesize sockDomainLocal=_sockDomainLocal;
@property (nonatomic) long long sockDomainMultipath; // @synthesize sockDomainMultipath=_sockDomainMultipath;
@property (nonatomic) long long sockDomainNdrv; // @synthesize sockDomainNdrv=_sockDomainNdrv;
@property (nonatomic) long long sockDomainOther; // @synthesize sockDomainOther=_sockDomainOther;
@property (nonatomic) long long sockDomainRoute; // @synthesize sockDomainRoute=_sockDomainRoute;
@property (nonatomic) long long sockDomainSystem; // @synthesize sockDomainSystem=_sockDomainSystem;
@property (nonatomic) long long sockFltrRegister; // @synthesize sockFltrRegister=_sockFltrRegister;
@property (nonatomic) long long sockFltrRegisterOs; // @synthesize sockFltrRegisterOs=_sockFltrRegisterOs;
@property (nonatomic) long long sockInetMcastJoin; // @synthesize sockInetMcastJoin=_sockInetMcastJoin;
@property (nonatomic) long long sockInetMcastJoinOs; // @synthesize sockInetMcastJoinOs=_sockInetMcastJoinOs;
@property (nonatomic) long long sockNecpClientuuidCount; // @synthesize sockNecpClientuuidCount=_sockNecpClientuuidCount;
@property (nonatomic) long long sockNetInet6Dgram; // @synthesize sockNetInet6Dgram=_sockNetInet6Dgram;
@property (nonatomic) long long sockNetInet6DgramConnected; // @synthesize sockNetInet6DgramConnected=_sockNetInet6DgramConnected;
@property (nonatomic) long long sockNetInet6DgramDns; // @synthesize sockNetInet6DgramDns=_sockNetInet6DgramDns;
@property (nonatomic) long long sockNetInet6DgramNoData; // @synthesize sockNetInet6DgramNoData=_sockNetInet6DgramNoData;
@property (nonatomic) long long sockNetInet6Stream; // @synthesize sockNetInet6Stream=_sockNetInet6Stream;
@property (nonatomic) long long sockNetInetDgram; // @synthesize sockNetInetDgram=_sockNetInetDgram;
@property (nonatomic) long long sockNetInetDgramConnected; // @synthesize sockNetInetDgramConnected=_sockNetInetDgramConnected;
@property (nonatomic) long long sockNetInetDgramDns; // @synthesize sockNetInetDgramDns=_sockNetInetDgramDns;
@property (nonatomic) long long sockNetInetDgramNoData; // @synthesize sockNetInetDgramNoData=_sockNetInetDgramNoData;
@property (nonatomic) long long sockNetInetStream; // @synthesize sockNetInetStream=_sockNetInetStream;
@property (nonatomic) unsigned long long timeSinceLastReport; // @synthesize timeSinceLastReport=_timeSinceLastReport;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property (nonatomic) long long vmnetStart; // @synthesize vmnetStart=_vmnetStart;

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

