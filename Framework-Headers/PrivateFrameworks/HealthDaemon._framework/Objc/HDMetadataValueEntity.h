//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDHealthEntity.h>

@interface HDMetadataValueEntity : HDHealthEntity
{
}

+ (id)_insertMetadataValueWithKeyID:(id)arg1 objectID:(id)arg2 value:(id)arg3 database:(id)arg4 error:(id *)arg5;
+ (id)_predicateForEntityWithKeyID:(id)arg1;
+ (id)_predicateForEntityWithObjectID:(id)arg1;
+ (id)columnsDefinition;
+ (id)databaseTable;
+ (id)deleteStatementForObjectMetadataWithDatabase:(id)arg1;
+ (id)indices;
+ (long long)protectionClass;

@end

