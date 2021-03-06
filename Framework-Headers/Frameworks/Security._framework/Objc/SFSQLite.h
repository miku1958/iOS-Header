//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDateFormatter, NSMutableDictionary, NSString;
@protocol SFSQLiteDelegate;

@interface SFSQLite : NSObject
{
    id<SFSQLiteDelegate> _delegate;
    NSString *_path;
    NSString *_schema;
    NSString *_schemaVersion;
    NSMutableDictionary *_statementsBySQL;
    NSString *_objectClassPrefix;
    long long _synchronousMode;
    int _userVersion;
    struct sqlite3 *_db;
    unsigned long long _openCount;
    NSDateFormatter *_dateFormatter;
    BOOL _hasMigrated;
    BOOL _corrupt;
    BOOL _traced;
    NSDateFormatter *_oldDateFormatter;
}

@property (nonatomic) BOOL corrupt; // @synthesize corrupt=_corrupt;
@property (strong, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property (nonatomic) struct sqlite3 *db; // @synthesize db=_db;
@property (strong, nonatomic) id<SFSQLiteDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) BOOL hasMigrated; // @synthesize hasMigrated=_hasMigrated;
@property (readonly, nonatomic) BOOL isOpen;
@property (strong, nonatomic) NSString *objectClassPrefix; // @synthesize objectClassPrefix=_objectClassPrefix;
@property (strong, nonatomic) NSDateFormatter *oldDateFormatter; // @synthesize oldDateFormatter=_oldDateFormatter;
@property (nonatomic) unsigned long long openCount; // @synthesize openCount=_openCount;
@property (readonly, nonatomic) NSString *path; // @synthesize path=_path;
@property (readonly, nonatomic) NSString *schema; // @synthesize schema=_schema;
@property (readonly, nonatomic) NSString *schemaVersion; // @synthesize schemaVersion=_schemaVersion;
@property (readonly, nonatomic) NSMutableDictionary *statementsBySQL; // @synthesize statementsBySQL=_statementsBySQL;
@property (nonatomic) long long synchronousMode; // @synthesize synchronousMode=_synchronousMode;
@property (nonatomic) BOOL traced; // @synthesize traced=_traced;
@property (nonatomic) int userVersion; // @synthesize userVersion=_userVersion;

- (void).cxx_destruct;
- (id)_createSchemaHash;
- (id)_synchronousModeString;
- (id)_tableNameForClass:(Class)arg1;
- (id)allTableNames;
- (void)analyze;
- (void)attemptProperDatabasePermissions;
- (int)autoVacuumSetting;
- (void)begin;
- (int)changes;
- (void)close;
- (id)columnNamesForTable:(id)arg1;
- (id)creationDate;
- (id)datePropertyForKey:(id)arg1;
- (int)dbUserVersion;
- (void)dealloc;
- (void)deleteFrom:(id)arg1 matchingValues:(id)arg2;
- (void)deleteFrom:(id)arg1 where:(id)arg2 bindings:(id)arg3;
- (void)dropAllTables;
- (void)end;
- (BOOL)executeSQL:(id)arg1;
- (BOOL)executeSQL:(id)arg1 arguments:(struct __va_list_tag [1])arg2;
- (id)initWithPath:(id)arg1 schema:(id)arg2;
- (long long)insertOrReplaceInto:(id)arg1 values:(id)arg2;
- (long long)lastInsertRowID;
- (void)open;
- (BOOL)openWithError:(id *)arg1;
- (id)propertyForKey:(id)arg1;
- (void)remove;
- (void)removeAllStatements;
- (void)removePropertyForKey:(id)arg1;
- (void)rollback;
- (id)select:(id)arg1 from:(id)arg2;
- (id)select:(id)arg1 from:(id)arg2 where:(id)arg3 bindings:(id)arg4;
- (void)select:(id)arg1 from:(id)arg2 where:(id)arg3 bindings:(id)arg4 orderBy:(id)arg5 limit:(id)arg6 block:(CDUnknownBlockType)arg7;
- (id)selectAllFrom:(id)arg1 where:(id)arg2 bindings:(id)arg3;
- (unsigned long long)selectCountFrom:(id)arg1 where:(id)arg2 bindings:(id)arg3;
- (id)selectFrom:(id)arg1 where:(id)arg2 bindings:(id)arg3 limit:(id)arg4;
- (void)selectFrom:(id)arg1 where:(id)arg2 bindings:(id)arg3 orderBy:(id)arg4 limit:(id)arg5 block:(CDUnknownBlockType)arg6;
- (void)setDateProperty:(id)arg1 forKey:(id)arg2;
- (void)setProperty:(id)arg1 forKey:(id)arg2;
- (id)statementForSQL:(id)arg1;
- (void)update:(id)arg1 set:(id)arg2 where:(id)arg3 bindings:(id)arg4 limit:(id)arg5;
- (void)vacuum;

@end

