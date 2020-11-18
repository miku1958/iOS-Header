//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class HDSQLiteDatabase, HDSQLiteStatement, NSArray, NSDate, NSDictionary, NSNumber, NSSet, NSString, NSUUID;

@protocol HDSQLiteEntity <NSObject>
+ (NSArray *)allDatabaseColumnNames;
+ (NSSet *)checkConstraints;
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;
+ (NSArray *)columnsDefinition;
+ (NSString *)databaseName;
+ (NSString *)databaseTable;
+ (HDSQLiteStatement *)deleteStatementWithProperty:(NSString *)arg1 database:(HDSQLiteDatabase *)arg2;
+ (NSString *)disambiguatedDatabaseTable;
+ (NSString *)disambiguatedSQLForProperty:(NSString *)arg1;
+ (Class)entityClassForEnumeration;
+ (Class)entityForProperty:(NSString *)arg1;
+ (void)enumerateColumnsWithBlock:(void (^)(_HDSQLiteEntityColumn *, BOOL *))arg1;
+ (NSDictionary *)foreignKeys;
+ (NSArray *)indices;
+ (BOOL)isTemporary;
+ (NSSet *)joinClausesForProperty:(NSString *)arg1;
+ (NSArray *)privateSubEntities;
+ (NSArray *)tableAliases;
- (NSUUID *)UUIDForProperty:(NSString *)arg1 database:(HDSQLiteDatabase *)arg2;
- (BOOL)booleanForProperty:(NSString *)arg1 database:(HDSQLiteDatabase *)arg2;
- (NSDate *)dateForProperty:(NSString *)arg1 database:(HDSQLiteDatabase *)arg2;
- (BOOL)deleteFromDatabase:(HDSQLiteDatabase *)arg1 error:(id *)arg2;
- (BOOL)getValuesForProperties:(NSArray *)arg1 database:(HDSQLiteDatabase *)arg2 error:(id *)arg3 handler:(void (^)(NSArray *, struct HDSQLiteRow *))arg4;
- (BOOL)getValuesForProperties:(NSArray *)arg1 database:(HDSQLiteDatabase *)arg2 handler:(void (^)(NSArray *, struct HDSQLiteRow *))arg3;
- (NSNumber *)numberForProperty:(NSString *)arg1 database:(HDSQLiteDatabase *)arg2;
- (NSString *)stringForProperty:(NSString *)arg1 database:(HDSQLiteDatabase *)arg2;
- (id)valueForProperty:(NSString *)arg1 database:(HDSQLiteDatabase *)arg2;
- (void)willDeleteFromDatabase:(HDSQLiteDatabase *)arg1;

@optional
+ (NSString *)columnNameForSortIdentifier:(NSString *)arg1;
@end

