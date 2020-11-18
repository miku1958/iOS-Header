//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDNetworkRouterFirewallRuleLAN.h>

@class HMFNetAddress;

@interface HMDNetworkRouterFirewallRuleLANMulticast : HMDNetworkRouterFirewallRuleLAN
{
    unsigned short _port;
    HMFNetAddress *_ipAddress;
}

@property (readonly, nonatomic) HMFNetAddress *ipAddress; // @synthesize ipAddress=_ipAddress;
@property (readonly, nonatomic) unsigned short port; // @synthesize port=_port;

+ (id)createWithJSONDictionary:(struct NSDictionary *)arg1 name:(id)arg2 critical:(BOOL)arg3 purpose:(unsigned long long)arg4 allowInterAccessoryConnections:(BOOL)arg5 direction:(unsigned char)arg6 requiredForHAPFunctionality:(BOOL)arg7 ruleDictionary:(struct NSDictionary *)arg8 error:(id *)arg9;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithJSONDictionary:(struct NSDictionary *)arg1 name:(id)arg2 critical:(BOOL)arg3 purpose:(unsigned long long)arg4 allowInterAccessoryConnections:(BOOL)arg5 direction:(unsigned char)arg6 requiredForHAPFunctionality:(BOOL)arg7 ipAddress:(id)arg8 port:(unsigned short)arg9;
- (struct NSDictionary *)prettyJSONDictionary;

@end
