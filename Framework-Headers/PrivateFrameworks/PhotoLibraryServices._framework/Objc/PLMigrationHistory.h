//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSDate, NSDictionary, NSNumber, NSString;

@interface PLMigrationHistory : PLManagedObject
{
}

@property (strong, nonatomic) NSNumber *forceRebuildReason; // @dynamic forceRebuildReason;
@property (strong, nonatomic) NSDictionary *globalKeyValues; // @dynamic globalKeyValues;
@property (nonatomic) long long index; // @dynamic index;
@property (strong, nonatomic) NSDate *migrationDate; // @dynamic migrationDate;
@property (nonatomic) short migrationType; // @dynamic migrationType;
@property (nonatomic) long long modelVersion; // @dynamic modelVersion;
@property (nonatomic) short origin; // @dynamic origin;
@property (strong, nonatomic) NSString *osVersion; // @dynamic osVersion;
@property (strong, nonatomic) NSNumber *sourceModelVersion; // @dynamic sourceModelVersion;
@property (strong, nonatomic) NSString *storeUUID; // @dynamic storeUUID;

+ (long long)_rebuildMigrationHistoryWithJournal:(id)arg1 managedObjectContext:(id)arg2;
+ (BOOL)currentMigrationHistoryIndex:(long long *)arg1 withManagedObjectContext:(id)arg2 error:(id *)arg3;
+ (id)currentMigrationHistoryWithManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertCreatedWithManagedObjectContext:(id)arg1 index:(long long)arg2 migrationDate:(id)arg3;
+ (id)insertIntoManagedObjectContext:(id)arg1 index:(long long)arg2 sourceModelVersion:(id)arg3 migrationType:(long long)arg4 migrationDate:(id)arg5 forceRebuildReason:(id)arg6;
+ (id)insertLightweightWithManagedObjectContext:(id)arg1 index:(long long)arg2 sourceModelVersion:(unsigned long long)arg3 migrationDate:(id)arg4;
+ (id)insertRebuildWithManagedObjectContext:(id)arg1 index:(long long)arg2 migrationDate:(id)arg3 forceRebuildReason:(id)arg4;
+ (id)migrateLegacyMigrationHistoryWithMetadata:(id)arg1 index:(long long)arg2 outGlobalKeyValues:(id)arg3 managedObjectContext:(id)arg4;
+ (id)migrationHistoryWithManagedObjectContext:(id)arg1;
+ (BOOL)recordCurrentMigrationStateInManagedObjectContext:(id)arg1 withPathManager:(id)arg2 migrationType:(long long)arg3 forceRebuildReason:(id)arg4 sourceModelVersion:(id)arg5 updateLegacyMigrationState:(BOOL)arg6 journalRebuildRequred:(BOOL)arg7 origin:(short)arg8 libraryCreateOptions:(unsigned long long)arg9;
- (id)payloadForChangedKeys:(id)arg1;
- (id)payloadID;
- (id)payloadIDForTombstone:(id)arg1;
- (BOOL)supportsCloudUpload;

@end
