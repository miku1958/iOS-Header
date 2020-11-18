//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface IMDDatabaseDowngradeHelper : NSObject
{
    BOOL _inTransaction;
    struct sqlite3 *_database;
    NSString *_path;
    long long _downgradesToVersion;
    NSArray *_tableNames;
    NSArray *_createIndexesSQL;
    NSArray *_createTablesSQL;
    NSArray *_createTriggersSQL;
}

@property (strong, nonatomic) NSArray *createIndexesSQL; // @synthesize createIndexesSQL=_createIndexesSQL;
@property (strong, nonatomic) NSArray *createTablesSQL; // @synthesize createTablesSQL=_createTablesSQL;
@property (strong, nonatomic) NSArray *createTriggersSQL; // @synthesize createTriggersSQL=_createTriggersSQL;
@property (readonly, nonatomic) struct sqlite3 *database; // @synthesize database=_database;
@property (readonly, nonatomic) long long downgradesToVersion; // @synthesize downgradesToVersion=_downgradesToVersion;
@property (readonly, nonatomic) BOOL isOpen;
@property (strong, nonatomic) NSString *path; // @synthesize path=_path;
@property (strong, nonatomic) NSArray *tableNames; // @synthesize tableNames=_tableNames;

- (BOOL)_readIntegerFromQuery:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (BOOL)beginTransaction:(CDUnknownBlockType)arg1;
- (BOOL)cloneTableContents:(id)arg1 withOperation:(struct IMDSqlOperation *)arg2 resultBlock:(CDUnknownBlockType)arg3;
- (BOOL)close:(CDUnknownBlockType)arg1;
- (BOOL)commitTransaction:(CDUnknownBlockType)arg1;
- (BOOL)createIndexes:(CDUnknownBlockType)arg1;
- (BOOL)createTables:(CDUnknownBlockType)arg1;
- (BOOL)createTriggers:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)errorFromResult:(int)arg1 query:(id)arg2;
- (BOOL)importDataFromWhitetailDatabaseWithSqlOperation:(struct IMDSqlOperation *)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (id)initWithPath:(id)arg1 tableNames:(id)arg2 createTablesSQL:(id)arg3 createIndexesSQL:(id)arg4 createTriggersSQL:(id)arg5 downgradesToVersion:(long long)arg6;
- (BOOL)open:(CDUnknownBlockType)arg1;
- (BOOL)readDatabaseVersion:(CDUnknownBlockType)arg1;
- (BOOL)readRowCountForTable:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (BOOL)revertTransaction:(CDUnknownBlockType)arg1;
- (BOOL)runArrayOfQueries:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (BOOL)runSimpleQuery:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (BOOL)writeDatabaseVersion:(long long)arg1 resultBlock:(CDUnknownBlockType)arg2;

@end
