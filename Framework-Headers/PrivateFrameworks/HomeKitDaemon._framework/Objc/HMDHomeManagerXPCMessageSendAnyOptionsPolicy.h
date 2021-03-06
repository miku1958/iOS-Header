//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDXPCMessageSendPolicy.h>

@interface HMDHomeManagerXPCMessageSendAnyOptionsPolicy : HMDXPCMessageSendPolicy
{
    BOOL _active;
    unsigned long long _options;
    unsigned long long _entitlements;
}

@property (readonly, nonatomic, getter=isActive) BOOL active; // @synthesize active=_active;
@property (readonly, nonatomic) unsigned long long entitlements; // @synthesize entitlements=_entitlements;
@property (readonly, nonatomic) unsigned long long options; // @synthesize options=_options;

- (BOOL)canSendWithPolicyParameters:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithEntitlements:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (id)initWithEntitlements:(unsigned long long)arg1 options:(unsigned long long)arg2 active:(BOOL)arg3;
- (BOOL)isEqual:(id)arg1;

@end

