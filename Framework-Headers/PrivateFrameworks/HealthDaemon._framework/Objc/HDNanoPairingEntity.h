//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDHealthEntity.h>

@class NSString, NSUUID;

@interface HDNanoPairingEntity : HDHealthEntity
{
    BOOL _restoreComplete;
    NSUUID *_nanoRegistryUUID;
    NSUUID *_persistentUUID;
    NSUUID *_healthUUID;
    NSString *_defaultSourceBundleIdentifier;
    NSString *_deviceIdentifier;
    long long _syncProvenance;
    HDNanoPairingEntity *_entity;
}

@property (copy, nonatomic) NSString *defaultSourceBundleIdentifier; // @synthesize defaultSourceBundleIdentifier=_defaultSourceBundleIdentifier;
@property (copy, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property (strong, nonatomic) HDNanoPairingEntity *entity; // @synthesize entity=_entity;
@property (strong, nonatomic) NSUUID *healthUUID; // @synthesize healthUUID=_healthUUID;
@property (strong, nonatomic) NSUUID *nanoRegistryUUID; // @synthesize nanoRegistryUUID=_nanoRegistryUUID;
@property (strong, nonatomic) NSUUID *persistentUUID; // @synthesize persistentUUID=_persistentUUID;
@property (nonatomic, getter=isRestoreComplete) BOOL restoreComplete; // @synthesize restoreComplete=_restoreComplete;
@property (nonatomic) long long syncProvenance; // @synthesize syncProvenance=_syncProvenance;

+ (id)_nanoPairingEntitiesWithPredicate:(id)arg1 database:(id)arg2 error:(id *)arg3;
+ (id)_predicateWithRegistryUUID:(id)arg1;
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;
+ (id)databaseTable;
+ (id)foreignKeys;
+ (id)nanoPairingEntityWithRegistryUUID:(id)arg1 database:(id)arg2 error:(id *)arg3;
+ (id)nanoPairingEntityWithRegistryUUID:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (long long)protectionClass;
+ (id)sourceEntityForRegistryUUID:(id)arg1 profile:(id)arg2 error:(id *)arg3;
- (void).cxx_destruct;
- (id)_initWithNanoRegistryUUID:(id)arg1 persistentUUID:(id)arg2 healthUUID:(id)arg3 sourceBundleIdentifier:(id)arg4 deviceIdentifier:(id)arg5 syncStoreEntity:(id)arg6 restoreComplete:(BOOL)arg7 database:(id)arg8 error:(id *)arg9;
- (id)description;
- (BOOL)saveWithHealthDatabase:(id)arg1 error:(id *)arg2;

@end

