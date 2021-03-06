//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyPreferences/TPSCallClassRequest.h>

#import <TelephonyPreferences/TPSSecureObject-Protocol.h>

@class NSString;

@interface TPSCallWaitingRequest : TPSCallClassRequest <TPSSecureObject>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)unarchivedObjectClasses;
- (id)initWithCoder:(id)arg1;
- (id)initWithSubscriptionContext:(id)arg1;
- (id)initWithSubscriptionContext:(id)arg1 callClass:(int)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToRequest:(id)arg1;

@end

