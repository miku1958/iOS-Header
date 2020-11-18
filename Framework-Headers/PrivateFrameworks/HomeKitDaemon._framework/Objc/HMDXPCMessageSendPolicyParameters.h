//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface HMDXPCMessageSendPolicyParameters : NSObject
{
    unsigned long long _entitlements;
}

@property (readonly, nonatomic) unsigned long long entitlements; // @synthesize entitlements=_entitlements;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithEntitlements:(unsigned long long)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)signature;

@end
