//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/VCConnection.h>

#import <AVConference/VCConnectionProtocol-Protocol.h>

@class NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface VCConnectionLegacy : VCConnection <VCConnectionProtocol>
{
    unsigned int _type;
    int _priority;
    BOOL _waitToBeNominated;
    struct tagCONNRESULT *_connectionResult;
    BOOL isLocalConstrained;
    BOOL isLocalExpensive;
    BOOL isRemoteConstrained;
    BOOL isRemoteExpensive;
    BOOL isLocalDelegated;
    BOOL isRemoteDelegated;
    BOOL isLocalOn5G;
    BOOL isRemoteOn5G;
}

@property (readonly) int connectionId;
@property int connectionMTU;
@property (readonly) struct tagCONNRESULT *connectionResult; // @synthesize connectionResult=_connectionResult;
@property (readonly) NSUUID *connectionUUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property unsigned int downlinkBitrateCap;
@property (readonly) unsigned long long hash;
@property (readonly) BOOL isIPv6;
@property (readonly) BOOL isLocalConstrained; // @synthesize isLocalConstrained;
@property (readonly) BOOL isLocalDelegated; // @synthesize isLocalDelegated;
@property (readonly) BOOL isLocalExpensive; // @synthesize isLocalExpensive;
@property (readonly) BOOL isLocalOn5G; // @synthesize isLocalOn5G;
@property (readonly) BOOL isLocalOnCellular;
@property (readonly) BOOL isLocalOnWiFi;
@property (readonly) BOOL isRelay;
@property (readonly) BOOL isRemoteConstrained; // @synthesize isRemoteConstrained;
@property (readonly) BOOL isRemoteDelegated; // @synthesize isRemoteDelegated;
@property (readonly) BOOL isRemoteExpensive; // @synthesize isRemoteExpensive;
@property (readonly) BOOL isRemoteOn5G; // @synthesize isRemoteOn5G;
@property (readonly) BOOL isRemoteOnCellular;
@property (readonly) BOOL isRemoteOnWiFi;
@property (readonly) BOOL isReplaceOnly;
@property (readonly) BOOL isUpgraded;
@property (readonly) BOOL isVPN;
@property int localCellTech;
@property (readonly) int localConnectionType;
@property (readonly) NSString *localInterfaceTypeString;
@property int priority; // @synthesize priority=_priority;
@property (readonly) unsigned short relayChannelNumber;
@property int remoteCellTech;
@property (readonly) int remoteConnectionType;
@property (readonly) NSString *remoteInterfaceTypeString;
@property (readonly) BOOL serverIsDegraded;
@property (readonly) Class superclass;
@property (readonly) unsigned int type; // @synthesize type=_type;
@property unsigned int uplinkBitrateCap;
@property BOOL waitToBeNominated; // @synthesize waitToBeNominated=_waitToBeNominated;

- (struct tagIPPORT)IPPortForNWConnection:(id)arg1;
- (int)cellularMTU;
- (id)copy;
- (void)dealloc;
- (void)getSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1;
- (id)initWithCandidatePair:(struct tagCANDIDATEPAIR *)arg1;
- (id)initWithConnectionResult:(struct tagCONNRESULT *)arg1 type:(unsigned int)arg2;
- (id)ipportToString:(struct tagIPPORT *)arg1;
- (BOOL)isLocalIPPort:(struct tagIPPORT *)arg1;
- (BOOL)isOnSameIPPortWithConnection:(id)arg1;
- (BOOL)isOnSameInterfacesWithConnection:(id)arg1;
- (BOOL)isRemoteIPPort:(struct tagIPPORT *)arg1;
- (BOOL)isSameAsConnection:(id)arg1;
- (BOOL)matchesSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1;

@end

