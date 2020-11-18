//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAAceClientState.h>

@class NSArray, NSString;

@interface SALocalSearchGeoClientState : SAAceClientState
{
}

@property (copy, nonatomic) NSArray *additionalEnabledTransitMarkets;
@property (copy, nonatomic) NSString *environment;

+ (id)deliveryDeadline;
+ (id)geoClientState;
+ (id)geoClientStateWithDictionary:(id)arg1 context:(id)arg2;
+ (id)persistencePolicy;
+ (id)syncKey;
+ (id)uniqueObjectIdentifier;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

