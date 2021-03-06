//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HAPTLVProtocol-Protocol.h>
#import <HomeKitDaemon/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface HMDNetworkRouterLANFirewallRuleList : NSObject <NSCopying, HAPTLVProtocol>
{
    NSMutableArray *_multicastBridgingRules;
    NSMutableArray *_staticPortRules;
    NSMutableArray *_dynamicPortRules;
    NSMutableArray *_staticICMPRules;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSMutableArray *dynamicPortRules; // @synthesize dynamicPortRules=_dynamicPortRules;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMutableArray *multicastBridgingRules; // @synthesize multicastBridgingRules=_multicastBridgingRules;
@property (strong, nonatomic) NSMutableArray *staticICMPRules; // @synthesize staticICMPRules=_staticICMPRules;
@property (strong, nonatomic) NSMutableArray *staticPortRules; // @synthesize staticPortRules=_staticPortRules;
@property (readonly) Class superclass;

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithMulticastBridgingRules:(id)arg1 staticPortRules:(id)arg2 dynamicPortRules:(id)arg3 staticICMPRules:(id)arg4;
- (BOOL)isEqual:(id)arg1;
- (BOOL)parseFromData:(id)arg1 error:(id *)arg2;
- (id)serializeWithError:(id *)arg1;

@end

