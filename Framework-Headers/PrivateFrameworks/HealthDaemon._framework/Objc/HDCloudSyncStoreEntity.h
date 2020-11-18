//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDHealthEntity.h>

@interface HDCloudSyncStoreEntity : HDHealthEntity
{
}

+ (id)_propertiesForEntity;
+ (id)columnsDefinition;
+ (id)databaseTable;
+ (BOOL)persistState:(id)arg1 storeUUID:(id)arg2 shouldReplace:(BOOL)arg3 healthDatabase:(id)arg4 error:(id *)arg5;
+ (id)persistedStateForStoreUUID:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (long long)protectionClass;
+ (BOOL)rebaseRequiredByDate:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)storeIdentifierForOwnerIdentifier:(id)arg1 containerIdentifier:(id)arg2 profile:(id)arg3 error:(id *)arg4;

@end

