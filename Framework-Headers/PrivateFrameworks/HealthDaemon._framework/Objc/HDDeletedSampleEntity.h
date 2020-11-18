//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDDeletedObjectEntity.h>

@interface HDDeletedSampleEntity : HDDeletedObjectEntity
{
}

+ (id)_propertySettersForDataObject;
+ (id)columnsDefinition;
+ (id)databaseTable;
+ (void)enumerateDeletedSamplesWithType:(id)arg1 database:(id)arg2 predicate:(id)arg3 sourceIdentifier:(id)arg4 authorizationFilter:(CDUnknownBlockType)arg5 limit:(unsigned long long)arg6 deletedObjectsAnchor:(long long)arg7 sampleAnchor:(long long *)arg8 handler:(CDUnknownBlockType)arg9;
+ (BOOL)enumerateDeletedSamplesWithType:(id)arg1 healthDaemon:(id)arg2 predicate:(id)arg3 sourceIdentifier:(id)arg4 limit:(unsigned long long)arg5 anchor:(id)arg6 error:(id *)arg7 handler:(CDUnknownBlockType)arg8;
+ (id)insertDeletedObject:(id)arg1 dataType:(id)arg2 provenanceIdentifier:(id)arg3 deletionDate:(id)arg4 inDatabase:(id)arg5 error:(id *)arg6;
+ (id)insertDeletedObjectForObject:(id)arg1 provenanceIdentifier:(id)arg2 deletionDate:(id)arg3 inDatabase:(id)arg4 error:(id *)arg5;
+ (long long)protectionClass;

@end

