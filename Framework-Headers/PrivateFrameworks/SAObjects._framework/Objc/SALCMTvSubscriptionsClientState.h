//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAAceClientState.h>

@class NSArray;

@interface SALCMTvSubscriptionsClientState : SAAceClientState
{
}

@property (copy, nonatomic) NSArray *subscriptions;

+ (id)deliveryDeadline;
+ (id)persistencePolicy;
+ (id)syncKey;
+ (id)tvSubscriptionsClientState;
+ (id)tvSubscriptionsClientStateWithDictionary:(id)arg1 context:(id)arg2;
+ (id)uniqueObjectIdentifier;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

