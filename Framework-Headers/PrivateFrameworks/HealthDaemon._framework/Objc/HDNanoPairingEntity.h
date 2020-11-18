//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDHealthEntity.h>

@class NSUUID;

@interface HDNanoPairingEntity : HDHealthEntity
{
    BOOL _activated;
    NSUUID *_nanoRegistryUUID;
    NSUUID *_persistentUUID;
    NSUUID *_healthUUID;
    long long _syncProvenance;
    HDNanoPairingEntity *_entity;
}

@property (nonatomic, getter=isActivated) BOOL activated; // @synthesize activated=_activated;
@property (strong, nonatomic) HDNanoPairingEntity *entity; // @synthesize entity=_entity;
@property (strong, nonatomic) NSUUID *healthUUID; // @synthesize healthUUID=_healthUUID;
@property (strong, nonatomic) NSUUID *nanoRegistryUUID; // @synthesize nanoRegistryUUID=_nanoRegistryUUID;
@property (strong, nonatomic) NSUUID *persistentUUID; // @synthesize persistentUUID=_persistentUUID;
@property (nonatomic) long long syncProvenance; // @synthesize syncProvenance=_syncProvenance;

+ (id)_nanoPairingEntityWithPredicate:(id)arg1 database:(id)arg2;
+ (id)_predicateWithRegistryUUID:(id)arg1;
+ (id)columnsDefinition;
+ (id)databaseTable;
+ (id)nanoPairingEntityWithRegistryUUID:(id)arg1 healthDatabase:(id)arg2 error:(id *)arg3;
+ (long long)protectionClass;
- (void).cxx_destruct;
- (id)_initWithNanoRegistryUUID:(id)arg1 persistentUUID:(id)arg2 healthUUID:(id)arg3 syncProvenance:(long long)arg4 activated:(BOOL)arg5 database:(id)arg6 error:(id *)arg7;
- (id)_propertyValues;
- (id)description;
- (BOOL)saveWithHealthDatabase:(id)arg1 error:(id *)arg2;

@end
