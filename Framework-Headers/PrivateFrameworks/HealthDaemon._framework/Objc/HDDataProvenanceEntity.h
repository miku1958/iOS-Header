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
+ (id)insertOrLookupDataProvenanceForSyncProvenance:(long long)arg1 originProductType:(id)arg2 originSystemBuild:(id)arg3 localProductType:(id)arg4 localSystemBuild:(id)arg5 sourceVersion:(id)arg6 timeZoneName:(id)arg7 sourceID:(id)arg8 deviceID:(id)arg9 database:(id)arg10 error:(id *)arg11;
+ (id)originProvenanceForPersistentID:(long long)arg1 database:(id)arg2 error:(id *)arg3;
+ (long long)protectionClass;
+ (id)uniquedColumns;

@end

