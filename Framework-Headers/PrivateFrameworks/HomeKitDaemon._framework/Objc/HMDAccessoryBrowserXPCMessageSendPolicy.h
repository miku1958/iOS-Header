//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDXPCMessageSendPolicy.h>

@interface HMDAccessoryBrowserXPCMessageSendPolicy : HMDXPCMessageSendPolicy
{
    unsigned long long _requiredEntitlements;
}

@property (readonly) unsigned long long requiredEntitlements; // @synthesize requiredEntitlements=_requiredEntitlements;

- (BOOL)canSendWithPolicyParameters:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithRequiredEntitlements:(unsigned long long)arg1;
- (BOOL)isEqual:(id)arg1;

@end

