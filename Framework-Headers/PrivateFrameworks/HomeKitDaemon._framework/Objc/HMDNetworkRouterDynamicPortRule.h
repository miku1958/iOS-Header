//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HAPTLVProtocol-Protocol.h>
#import <HomeKitDaemon/HMDNetworkRouterLANRule-Protocol.h>
#import <HomeKitDaemon/NSCopying-Protocol.h>

@class HAPTLVUnsignedNumberValue, HMDNetworkRouterAdvertisementProtocol, HMDNetworkRouterLANIdentifierList, HMDNetworkRouterProtocol, HMDNetworkRouterRuleDirection, HMDNetworkRouterServiceType, NSString;

@interface HMDNetworkRouterDynamicPortRule : NSObject <HMDNetworkRouterLANRule, NSCopying, HAPTLVProtocol>
{
    HMDNetworkRouterRuleDirection *_direction;
    HMDNetworkRouterLANIdentifierList *_lanIdentifierList;
    HMDNetworkRouterProtocol *_protocol;
    HMDNetworkRouterAdvertisementProtocol *_advertisementProtocol;
    HAPTLVUnsignedNumberValue *_flags;
    HMDNetworkRouterServiceType *_serviceType;
}

@property (strong, nonatomic) HMDNetworkRouterAdvertisementProtocol *advertisementProtocol; // @synthesize advertisementProtocol=_advertisementProtocol;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) HMDNetworkRouterRuleDirection *direction; // @synthesize direction=_direction;
@property (strong, nonatomic) HAPTLVUnsignedNumberValue *flags; // @synthesize flags=_flags;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) HMDNetworkRouterLANIdentifierList *lanIdentifierList; // @synthesize lanIdentifierList=_lanIdentifierList;
@property (strong, nonatomic) HMDNetworkRouterProtocol *protocol; // @synthesize protocol=_protocol;
@property (strong, nonatomic) HMDNetworkRouterServiceType *serviceType; // @synthesize serviceType=_serviceType;
@property (readonly) Class superclass;
@property (readonly) Class superclass;

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;
+ (id)ruleForHAP;
+ (id)ruleFromFirewallRuleLAN:(id)arg1;
- (void).cxx_destruct;
- (void)addTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithDirection:(id)arg1 lanIdentifierList:(id)arg2 protocol:(id)arg3 advertisementProtocol:(id)arg4 flags:(id)arg5 serviceType:(id)arg6;
- (BOOL)isEqual:(id)arg1;
- (BOOL)parseFromData:(id)arg1 error:(id *)arg2;
- (id)serializeWithError:(id *)arg1;

@end
