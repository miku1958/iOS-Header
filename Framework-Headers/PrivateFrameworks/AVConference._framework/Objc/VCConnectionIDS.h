//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVConference/VCConnectionProtocol-Protocol.h>

@class IDSDataChannelLinkContext, NSData, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface VCConnectionIDS : NSObject <VCConnectionProtocol>
{
    IDSDataChannelLinkContext *_linkContext;
    unsigned int _datagramChannelToken;
    int _priority;
    unsigned int _type;
    int _localCellTech;
    int _remoteCellTech;
    int _connectionMTU;
    unsigned int _uplinkBitrateCap;
    unsigned int _downlinkBitrateCap;
}

@property (readonly) int connectionId;
@property int connectionMTU;
@property (readonly) NSUUID *connectionUUID;
@property (readonly) unsigned int datagramChannelToken; // @synthesize datagramChannelToken=_datagramChannelToken;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property unsigned int downlinkBitrateCap; // @synthesize downlinkBitrateCap=_downlinkBitrateCap;
@property (readonly) unsigned long long hash;
@property (readonly) BOOL isIPv6;
@property (readonly) BOOL isLocalOnCellular;
@property (readonly) BOOL isLocalOnWiFi;
@property (readonly) BOOL isRelay;
@property (readonly) BOOL isRemoteOnCellular;
@property (readonly) BOOL isRemoteOnWiFi;
@property (readonly) BOOL isVPN;
@property (readonly) unsigned char linkID;
@property int localCellTech;
@property (readonly) int localConnectionType;
@property (readonly) NSString *localInterfaceTypeString;
@property int priority; // @synthesize priority=_priority;
@property (readonly) NSString *relaySessionToken;
@property int remoteCellTech;
@property (readonly) int remoteConnectionType;
@property (readonly) NSString *remoteInterfaceTypeString;
@property (readonly) BOOL serverIsDegraded;
@property (readonly) NSData *sharedDigestKey;
@property (readonly) Class superclass;
@property (readonly) unsigned int type; // @synthesize type=_type;
@property unsigned int uplinkBitrateCap; // @synthesize uplinkBitrateCap=_uplinkBitrateCap;

+ (unsigned int)worstCaseNetworkOverheadInBytesWithNumOfStreamId:(int)arg1 isPriorityIncluded:(BOOL)arg2;
- (id)connectionQRSessionID;
- (void)dealloc;
- (void)getSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1;
- (id)initWithLinkContext:(id)arg1 dataChannelToken:(unsigned int)arg2;
- (BOOL)isOnSameInterfacesWithConnection:(id)arg1;
- (BOOL)isSameAsConnection:(id)arg1;
- (BOOL)matchesChannelTokenWithSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1;
- (BOOL)matchesSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1;
- (int)networkOverheadInBytesWithNumOfStreamId:(int)arg1 isPriorityIncluded:(BOOL)arg2;
- (void)setCellularMTU:(int)arg1;

@end

