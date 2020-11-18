//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDNetworkRouterFirewallRuleWAN, NSSet, NSString;

@interface HMDAccessoryAllowedHost : HMFObject <NSSecureCoding>
{
    NSString *_jsonWANRule;
}

@property (readonly) NSSet *addresses;
@property (readonly) NSString *jsonWANRule; // @synthesize jsonWANRule=_jsonWANRule;
@property (readonly) NSString *name;
@property (readonly) unsigned long long purpose;
@property (readonly, nonatomic) HMDNetworkRouterFirewallRuleWAN *wanRule;

+ (id)allowedHostsFromJSONFirewallWANRules:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_encodeForSPIEntitledXPCTransportWithCoder:(id)arg1;
- (id)attributeDescriptions;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONFirewallWANRule:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
