//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMDNetworkRouterFirewallRuleAccessoryIdentifier, NSDictionary, NSURL;

@interface HMDCloudPairedMetadataDiagnostics : HMFObject
{
    NSURL *_privacyPolicyURL;
    NSURL *_uploadDestination;
    unsigned long long _consentVersion;
    unsigned long long _uploadType;
    HMDNetworkRouterFirewallRuleAccessoryIdentifier *_accessoryIdentifier;
}

@property (readonly, nonatomic) HMDNetworkRouterFirewallRuleAccessoryIdentifier *accessoryIdentifier; // @synthesize accessoryIdentifier=_accessoryIdentifier;
@property (readonly, nonatomic) unsigned long long consentVersion; // @synthesize consentVersion=_consentVersion;
@property (readonly, nonatomic) NSDictionary *prettyJSONDictionary;
@property (readonly, nonatomic) NSURL *privacyPolicyURL; // @synthesize privacyPolicyURL=_privacyPolicyURL;
@property (readonly, nonatomic) NSURL *uploadDestination; // @synthesize uploadDestination=_uploadDestination;
@property (readonly, nonatomic) unsigned long long uploadType; // @synthesize uploadType=_uploadType;

+ (id)logCategory;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithAccessoryIdentifier:(id)arg1 jsonDictionary:(id)arg2;
- (id)initWithAccessoryIdentifier:(id)arg1 privacyPolicyURL:(id)arg2 uploadDestination:(id)arg3 consentVersion:(unsigned long long)arg4 uploadType:(unsigned long long)arg5;

@end

