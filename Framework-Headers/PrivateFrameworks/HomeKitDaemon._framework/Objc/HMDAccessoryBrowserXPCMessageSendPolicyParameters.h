//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDXPCMessageSendPolicyParameters.h>

@interface HMDAccessoryBrowserXPCMessageSendPolicyParameters : HMDXPCMessageSendPolicyParameters
{
    BOOL _browsing;
}

@property (nonatomic, getter=isBrowsing) BOOL browsing; // @synthesize browsing=_browsing;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithEntitlements:(unsigned long long)arg1 browsing:(BOOL)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)signature;

@end
