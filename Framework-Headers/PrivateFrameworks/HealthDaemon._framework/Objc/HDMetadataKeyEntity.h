//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDHealthEntity.h>

@interface HDMetadataKeyEntity : HDHealthEntity
{
}

+ (id)_entityForKey:(id)arg1 database:(id)arg2 error:(id *)arg3;
+ (id)_insertEntityWithKey:(id)arg1 database:(id)arg2 error:(id *)arg3;
+ (id)_keyForPersistentID:(id)arg1 database:(id)arg2;
+ (id)columnsDefinition;
+ (id)databaseTable;
+ (id)entityForKey:(id)arg1 healthDatabase:(id)arg2 error:(id *)arg3;
+ (id)insertEntityWithKey:(id)arg1 healthDatabase:(id)arg2 error:(id *)arg3;
+ (long long)protectionClass;
+ (id)resultForKeyID:(id)arg1 healthDatabase:(id)arg2;
- (id)resultWithDatabase:(id)arg1;

@end

