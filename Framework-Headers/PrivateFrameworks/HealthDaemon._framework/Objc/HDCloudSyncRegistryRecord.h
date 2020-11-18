//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDCloudSyncRecord.h>

@class HDCloudSyncCodableRegistry, HKProfileIdentifier, NSArray, NSDate, NSSet, NSString;

@interface HDCloudSyncRegistryRecord : HDCloudSyncRecord
{
    HDCloudSyncCodableRegistry *_underlyingRegistry;
}

@property (readonly, copy, nonatomic) NSArray *childHeaderRecordIDs;
@property (nonatomic) BOOL deleted;
@property (strong, nonatomic) NSSet *disabledOwnerIdentifiers;
@property (copy, nonatomic) NSString *displayFirstName;
@property (copy, nonatomic) NSString *displayLastName;
@property (copy, nonatomic) NSDate *displayNameModificationDate;
@property (readonly, copy, nonatomic) NSSet *ownerIdentifiers;
@property (copy, nonatomic) HKProfileIdentifier *ownerProfileIdentifier;
@property (copy, nonatomic) HKProfileIdentifier *sharedProfileIdentifier;

+ (BOOL)hasFutureSchema:(id)arg1;
+ (BOOL)isRegistryRecord:(id)arg1;
+ (BOOL)isRegistryRecordID:(id)arg1;
+ (id)recordIDWithZoneID:(id)arg1;
+ (id)recordType;
+ (BOOL)requiresUnderlyingMessage;
+ (id)sharedProfileIdentifierForOwnerProfileIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id)_codableProfileIdentifierWithProfileIdentifier:(id)arg1;
- (id)_profileIdentifierWithCodableProfileIdentifier:(id)arg1;
- (void)addStoreIdentifier:(id)arg1 ownerIdentifier:(id)arg2;
- (id)description;
- (id)initInZone:(id)arg1 ownerProfileIdentifier:(id)arg2;
- (id)initInZone:(id)arg1 ownerProfileIdentifier:(id)arg2 sharedProfileIdentifier:(id)arg3;
- (id)initWithCKRecord:(id)arg1 schemaVersion:(long long)arg2;
- (void)removeStoreIdentifier:(id)arg1 ownerIdentifier:(id)arg2;
- (id)serializeUnderlyingMessage;
- (id)storeIdentifiersForOwnerIdentifier:(id)arg1;

@end
