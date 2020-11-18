//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyPreferences/TPSRequest.h>

@class CTCallForwardingValue;

@interface TPSSetCallForwardingRequest : TPSRequest
{
    CTCallForwardingValue *_value;
}

@property (readonly, nonatomic) CTCallForwardingValue *value; // @synthesize value=_value;

+ (id)unarchivedObjectClasses;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSubscriptionContext:(id)arg1;
- (id)initWithSubscriptionContext:(id)arg1 value:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToRequest:(id)arg1;

@end

