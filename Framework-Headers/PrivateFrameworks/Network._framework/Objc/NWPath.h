//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Network/NWPrettyDescription-Protocol.h>

@class NSArray, NSString, NWEndpoint, NWInterface, NWParameters;
@protocol OS_nw_path, OS_xpc_object;

@interface NWPath : NSObject <NWPrettyDescription>
{
    NSObject<OS_nw_path> *_internalPath;
}

@property (strong) NWEndpoint *derivedEndpoint;
@property (readonly) NWParameters *derivedParameters;
@property (readonly, getter=isDirect) BOOL direct;
@property (readonly) NSArray *dnsServers;
@property (readonly) int dnsServiceID;
@property BOOL duetProhibitExpensive;
@property (readonly, getter=isExpensive) BOOL expensive;
@property (readonly) NWInterface *fallbackInterface;
@property (readonly) unsigned int fallbackInterfaceIndex;
@property (readonly) BOOL fallbackIsWeak;
@property (readonly) unsigned int filterControlUnit;
@property (readonly, getter=isFiltered) BOOL filtered;
@property (readonly, getter=isFlowDivert) BOOL flowDivert;
@property (readonly) unsigned int flowDivertControlUnit;
@property (readonly, getter=isFromHelper) BOOL fromHelper;
@property BOOL hasFallbackActivity;
@property BOOL hasPower;
@property (readonly) unsigned long long helperClientID;
@property (readonly) int helperClientPID;
@property (readonly, getter=isHelperWaiting) BOOL helperWaiting;
@property (readonly) NWInterface *interface;
@property (readonly) NSObject<OS_nw_path> *internalPath; // @synthesize internalPath=_internalPath;
@property (strong) NSString *ledbellyClientID;
@property (readonly, getter=isLocal) BOOL local;
@property (readonly) BOOL mptcpAllowed;
@property (strong) NSObject<OS_xpc_object> *mptcpInterfaceDetails;
@property (readonly) long long mtu;
@property (readonly) unsigned int policyID;
@property (readonly, copy) NSString *privateDescription;
@property (strong) NSObject<OS_xpc_object> *proxySettings;
@property (readonly) long long reason;
@property (readonly) NSString *reasonDescription;
@property (readonly, getter=isRoaming) BOOL roaming;
@property (readonly) NWInterface *scopedInterface;
@property (readonly) NSString *ssid;
@property (readonly) long long status;
@property (readonly) NSString *statusAsString;
@property (readonly) BOOL supportsDNS;
@property (readonly) BOOL supportsIPv4;
@property (readonly) BOOL supportsIPv6;

+ (id)statusToString:(long long)arg1;
- (void).cxx_destruct;
- (id)copyFlowDivertToken;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2;
- (id)genericNetworkAgentsWithDomain:(id)arg1 type:(id)arg2;
- (BOOL)hasUnsatisfiedFallbackAgent;
- (id)inactiveNetworkAgentUUIDsOnlyVoluntary:(BOOL)arg1;
- (id)init;
- (id)initWithPath:(id)arg1;
- (BOOL)isEqualToPath:(id)arg1;
- (id)networkAgentsOfType:(Class)arg1;
- (void)setMPTCPAllowed:(BOOL)arg1 fallbackInterfaceIndex:(unsigned long long)arg2;
- (BOOL)unsatisfiedVoluntaryAgentMatchesAddress:(id)arg1 triggerImmediately:(BOOL *)arg2;
- (BOOL)usesInterfaceType:(long long)arg1;
- (BOOL)usesNetworkAgent:(id)arg1;
- (BOOL)usesNetworkAgentType:(Class)arg1;

@end

