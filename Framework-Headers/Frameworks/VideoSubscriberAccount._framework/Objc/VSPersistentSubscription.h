//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSArray, NSDate, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface VSPersistentSubscription : NSManagedObject
{
}

@property (copy, nonatomic) NSNumber *accessLevel; // @dynamic accessLevel;
@property (copy, nonatomic) NSDate *creationDate; // @dynamic creationDate;
@property (copy, nonatomic) NSString *derivedSubscriptionInfo; // @dynamic derivedSubscriptionInfo;
@property (copy, nonatomic) NSDate *expirationDate; // @dynamic expirationDate;
@property (copy, nonatomic) NSDate *mostRecentSaveDate; // @dynamic mostRecentSaveDate;
@property (copy, nonatomic) NSString *providedSubscriptionInfo; // @dynamic providedSubscriptionInfo;
@property (copy, nonatomic) NSString *sourceIdentifier; // @dynamic sourceIdentifier;
@property (copy, nonatomic) NSNumber *sourceKind; // @dynamic sourceKind;
@property (copy, nonatomic) NSString *subscriberIdentifierHash; // @dynamic subscriberIdentifierHash;
@property (copy, nonatomic) NSArray *tierIdentifiers; // @dynamic tierIdentifiers;

+ (id)keyPathsForValuesAffectingDerivedSubscriptionInfo;
- (void)_deriveValuesFromProvidedInfo:(id)arg1;
- (void)_setNullResettableValue:(id)arg1 forKey:(id)arg2;
- (void)_updateDerivedSubscriptionInfo;
- (BOOL)_validateNullableValue:(id *)arg1 forKey:(id)arg2 error:(id *)arg3;
- (void)awakeFromFetch;
- (void)awakeFromInsert;
- (void)didChangeValueForKey:(id)arg1;
- (BOOL)validateAccessLevel:(id *)arg1 error:(id *)arg2;
- (BOOL)validateCreationDate:(id *)arg1 error:(id *)arg2;
- (BOOL)validateExpirationDate:(id *)arg1 error:(id *)arg2;
- (BOOL)validateModificationDate:(id *)arg1 error:(id *)arg2;
- (BOOL)validateSubscriberIdentifierHash:(id *)arg1 error:(id *)arg2;
- (BOOL)validateTierIdentifiers:(id *)arg1 error:(id *)arg2;

@end

