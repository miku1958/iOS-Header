//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDHealthEntity.h>

@interface HDDataProvenanceEntity : HDHealthEntity
{
}

+ (id)columnsDefinition;
+ (id)databaseTable;
+ (id)insertOrLookupDataProvenanceForSyncProvenance:(long long)arg1 originDevice:(id)arg2 originBuild:(id)arg3 localDevice:(id)arg4 localBuild:(id)arg5 sourceID:(id)arg6 deviceID:(id)arg7 sourceVersion:(id)arg8 database:(id)arg9 error:(id *)arg10;
+ (id)originProvenanceForPersistentID:(long long)arg1 database:(id)arg2 error:(id *)arg3;
+ (long long)protectionClass;
+ (id)uniquedColumns;

@end
