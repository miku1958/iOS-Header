//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDSQLiteEntity-Protocol.h>

@class NSString;

@interface HDSQLiteEntity : NSObject <HDSQLiteEntity>
{
    long long _persistentID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) long long persistentID; // @synthesize persistentID=_persistentID;
@property (readonly) Class superclass;

+ (id)_copyDeleteSQLWithTableName:(id)arg1 columnName:(id)arg2;
+ (id)_generateDisambiguatedDatabaseTableName;
+ (BOOL)_insertValues:(id)arg1 intoTable:(id)arg2 withPidOrNil:(id)arg3 replaceExisting:(BOOL)arg4 resultCode:(int *)arg5 database:(id)arg6;
+ (BOOL)_insertValues:(id)arg1 intoTable:(id)arg2 withPidOrNil:(id)arg3 resultCode:(int *)arg4 database:(id)arg5;
+ (id)aggregateSingleValueForProperty:(id)arg1 function:(id)arg2 predicate:(id)arg3 database:(id)arg4;
+ (id)aggregateSingleValueForProperty:(id)arg1 function:(id)arg2 queryDescriptor:(id)arg3 database:(id)arg4;
+ (id)aggregateValuesForProperty:(id)arg1 functions:(id)arg2 predicate:(id)arg3 groupBy:(id)arg4 database:(id)arg5 error:(id *)arg6;
+ (id)aggregateValuesForProperty:(id)arg1 functions:(id)arg2 queryDescriptor:(id)arg3 database:(id)arg4 error:(id *)arg5;
+ (id)allDatabaseColumnNames;
+ (id)anyInDatabase:(id)arg1 predicate:(id)arg2;
+ (id)anyInDatabase:(id)arg1 predicate:(id)arg2 error:(id *)arg3;
+ (void)applyOrderedSetters:(id)arg1 toObject:(id)arg2 row:(struct HDSQLiteRow *)arg3;
+ (void)applyPropertySetters:(id)arg1 toObject:(id)arg2 withProperties:(id)arg3 row:(struct HDSQLiteRow *)arg4;
+ (id)associationPropertyForEntityClass:(Class)arg1;
+ (id)columnsDefinition;
+ (id)copyDatabaseDictionaryToSetClientDictionary:(id)arg1;
+ (id)countDistinctForProperty:(id)arg1 predicate:(id)arg2 database:(id)arg3;
+ (id)countValueForProperty:(id)arg1 predicate:(id)arg2 database:(id)arg3;
+ (id)databaseName;
+ (id)databasePropertyToGetClientProperty:(id)arg1;
+ (id)databasePropertyToSetClientProperty:(id)arg1;
+ (id)databaseTable;
+ (id)databaseValueForProperty:(id)arg1 clientValue:(id)arg2;
+ (BOOL)deleteEntitiesInDatabase:(id)arg1 predicate:(id)arg2;
+ (id)deleteStatementWithProperty:(id)arg1 database:(id)arg2;
+ (id)disambiguatedDatabaseTable;
+ (id)disambiguatedSQLForProperty:(id)arg1;
+ (id)distinctProperty:(id)arg1 predicate:(id)arg2 database:(id)arg3 error:(id *)arg4;
+ (id)entityWithPersistentID:(id)arg1;
+ (BOOL)enumerateEntitiesInDatabase:(id)arg1 predicate:(id)arg2 error:(id *)arg3 usingBlock:(CDUnknownBlockType)arg4;
+ (void)enumerateEntitiesInDatabase:(id)arg1 predicate:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
+ (BOOL)enumerateQueryResultsFromColumns:(id)arg1 properties:(id)arg2 predicate:(id)arg3 database:(id)arg4 error:(id *)arg5 usingBlock:(CDUnknownBlockType)arg6;
+ (BOOL)enumerateQueryResultsFromColumns:(id)arg1 properties:(id)arg2 predicate:(id)arg3 groupBy:(id)arg4 orderingProperties:(id)arg5 limit:(long long)arg6 database:(id)arg7 error:(id *)arg8 usingBlock:(CDUnknownBlockType)arg9;
+ (id)foreignDatabaseColumnForProperty:(id)arg1;
+ (id)foreignDatabaseTableForProperty:(id)arg1;
+ (id)foreignDatabaseTablesToDelete;
+ (id)foreignKeyColumnForTable:(id)arg1;
+ (id)joinClausesForProperty:(id)arg1;
+ (id)maxPersistentIDWithPredicate:(id)arg1 database:(id)arg2;
+ (id)maxValueForProperty:(id)arg1 predicate:(id)arg2 database:(id)arg3;
+ (id)propertyValueForAnyInDatabase:(id)arg1 property:(id)arg2 predicate:(id)arg3;
+ (id)propertyValueForAnyInDatabase:(id)arg1 property:(id)arg2 predicate:(id)arg3 orderingProperties:(id)arg4 orderingDirections:(id)arg5;
+ (id)propertyValuesForAnyInDatabase:(id)arg1 properties:(id)arg2 predicate:(id)arg3;
+ (id)queryStatementWithPredicate:(id)arg1 properties:(id)arg2 database:(id)arg3;
+ (id)queryWithDatabase:(id)arg1 predicate:(id)arg2;
+ (id)queryWithDatabase:(id)arg1 predicate:(id)arg2 limit:(unsigned long long)arg3 orderingProperties:(id)arg4 orderingDirections:(id)arg5;
+ (id)queryWithDatabase:(id)arg1 predicate:(id)arg2 limit:(unsigned long long)arg3 orderingProperties:(id)arg4 orderingDirections:(id)arg5 groupBy:(id)arg6;
+ (id)queryWithDatabase:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3;
+ (id)queryWithDatabase:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3 orderingDirections:(id)arg4;
+ (id)sumValueForProperty:(id)arg1 predicate:(id)arg2 database:(id)arg3;
+ (id)tableAliases;
- (id)UUIDForProperty:(id)arg1 database:(id)arg2;
- (id)_copyTableClusteredValuesWithValues:(id)arg1;
- (BOOL)_deleteRowFromTable:(id)arg1 usingColumn:(id)arg2 database:(id)arg3;
- (BOOL)booleanForProperty:(id)arg1 database:(id)arg2;
- (id)dateForProperty:(id)arg1 database:(id)arg2;
- (BOOL)deleteFromDatabase:(id)arg1;
- (BOOL)deleteFromDatabase:(id)arg1 error:(id *)arg2;
- (BOOL)existsInDatabase:(id)arg1;
- (BOOL)getValuesForProperties:(id)arg1 database:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (BOOL)getValuesForProperties:(id)arg1 withDatabase:(id)arg2 applier:(CDUnknownBlockType)arg3;
- (id)initWithPersistentID:(long long)arg1;
- (id)initWithPropertyValues:(id)arg1 inDatabase:(id)arg2 replaceExisting:(BOOL)arg3 error:(id *)arg4;
- (void)setExternalValuesWithDictionary:(id)arg1;
- (BOOL)setValue:(id)arg1 forProperty:(id)arg2 database:(id)arg3;
- (BOOL)setValuesWithDictionary:(id)arg1 database:(id)arg2;
- (id)stringForProperty:(id)arg1 database:(id)arg2;
- (id)valueForExternalProperty:(id)arg1;
- (id)valueForProperty:(id)arg1 database:(id)arg2;

@end
