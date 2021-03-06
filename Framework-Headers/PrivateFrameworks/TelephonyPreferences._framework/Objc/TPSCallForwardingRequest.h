//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyPreferences/TPSCallClassRequest.h>

@interface TPSCallForwardingRequest : TPSCallClassRequest
{
    int _reason;
}

@property (readonly, nonatomic) int reason; // @synthesize reason=_reason;

+ (id)unarchivedObjectClasses;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSubscriptionContext:(id)arg1 callClass:(int)arg2;
- (id)initWithSubscriptionContext:(id)arg1 reason:(int)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToRequest:(id)arg1;

@end

