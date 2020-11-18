//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSURL;
@protocol HDSQLiteDatabaseDelegate;

@interface HDSQLiteDatabase : NSObject
{
    struct sqlite3 *_db;
    BOOL _isInTransaction;
    BOOL _requiresRollback;
    long long _transactionType;
    struct __CFDictionary *_statementCache;
    NSMutableDictionary *_attachedDatabaseURLsByName;
    struct unordered_set<sqlite3_stmt *, std::__1::hash<sqlite3_stmt *>, std::__1::equal_to<sqlite3_stmt *>, std::__1::allocator<sqlite3_stmt *>> _activeStatements;
    BOOL _isHandlingTransactionEnd;
    NSMutableArray *_onCommitBlocks;
    NSMutableArray *_onRollbackBlocks;
    BOOL _isWriter;
    BOOL _checkpointRequired;
    NSURL *_fileURL;
    id<HDSQLiteDatabaseDelegate> _delegate;
}

@property (nonatomic) BOOL checkpointRequired; // @synthesize checkpointRequired=_checkpointRequired;
@property (weak, nonatomic) id<HDSQLiteDatabaseDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property (nonatomic) BOOL isWriter; // @synthesize isWriter=_isWriter;

+ (BOOL)_stepStatement:(struct sqlite3_stmt *)arg1 hasRow:(BOOL *)arg2 resultCode:(int *)arg3 error:(id *)arg4;
+ (id)highFrequencyDatabaseURLWithHomeDirectoryPath:(id)arg1;
+ (id)mainDatabaseURLWithHomeDirectoryPath:(id)arg1;
+ (id)protectedDatabaseURLWithHomeDirectoryPath:(id)arg1;
+ (id)virtualFilesystemModule;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_assertNoActiveStatements;
- (BOOL)_executeSQL:(id)arg1 cache:(BOOL)arg2 error:(id *)arg3 bindingHandler:(CDUnknownBlockType)arg4 enumerationHandler:(CDUnknownBlockType)arg5;
- (BOOL)_executeSQL:(id)arg1 error:(id *)arg2;
- (BOOL)_executeSQL:(id)arg1 error:(id *)arg2 retryIfBusy:(BOOL)arg3;
- (BOOL)_integerValueForPragma:(id)arg1 databaseName:(id)arg2 value:(long long *)arg3 error:(id *)arg4;
- (int)_openForWriting:(BOOL)arg1 error:(id *)arg2;
- (BOOL)_prepareStatementForSQL:(id)arg1 cache:(BOOL)arg2 error:(id *)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)_resetStatement:(struct sqlite3_stmt *)arg1 finalize:(BOOL)arg2;
- (id)_schemaForDatabaseWithName:(id)arg1 error:(id *)arg2;
- (id)_schemaForIndexWithName:(id)arg1 database:(id)arg2 error:(id *)arg3;
- (id)_schemaForTableWithName:(id)arg1 database:(id)arg2 error:(id *)arg3;
- (BOOL)_setPragma:(id)arg1 integerValue:(long long)arg2 withDatabaseName:(id)arg3 error:(id *)arg4;
- (struct sqlite3_stmt *)_statementForSQL:(id)arg1 cache:(BOOL)arg2 error:(id *)arg3;
- (BOOL)_verifyDatabaseOpenAndReturnError:(id *)arg1;
- (void)accessDatabaseUsingBlock:(CDUnknownBlockType)arg1;
- (BOOL)accessHFDForReadingWithError:(id *)arg1 block:(CDUnknownBlockType)arg2;
- (BOOL)accessHFDForWritingWithError:(id *)arg1 block:(CDUnknownBlockType)arg2;
- (BOOL)attachDatabaseWithName:(id)arg1 fileURL:(id)arg2 error:(id *)arg3;
- (BOOL)attachProtectedDatabaseWithURL:(id)arg1 error:(id *)arg2;
- (void)close;
- (BOOL)columnIsNullable:(id)arg1 inTable:(id)arg2 error:(id *)arg3;
- (void)dealloc;
- (BOOL)detachDatabaseWithName:(id)arg1 error:(id *)arg2;
- (BOOL)detachProtectedDatabaseWithError:(id *)arg1;
- (id)dumpSchemaWithError:(id *)arg1;
- (BOOL)enableIncrementalAutovacuumWithError:(id *)arg1;
- (BOOL)executeSQL:(id)arg1 error:(id *)arg2 bindingHandler:(CDUnknownBlockType)arg3 enumerationHandler:(CDUnknownBlockType)arg4;
- (BOOL)executeUncachedSQL:(id)arg1 error:(id *)arg2 bindingHandler:(CDUnknownBlockType)arg3 enumerationHandler:(CDUnknownBlockType)arg4;
- (BOOL)foreignKeyExistsFromTable:(id)arg1 column:(id)arg2 toTable:(id)arg3 column:(id)arg4 error:(id *)arg5;
- (id)getLastErrorWithResultCode:(int)arg1;
- (BOOL)incrementalVacuumDatabaseIfNeeded:(id)arg1 error:(id *)arg2;
- (id)initWithDatabaseURL:(id)arg1 delegate:(id)arg2;
- (BOOL)isDatabaseWithNameAttached:(id)arg1;
- (BOOL)isProtectedDatabaseAttached;
- (id)lastInsertRowID;
- (void)onCommit:(CDUnknownBlockType)arg1 orRollback:(CDUnknownBlockType)arg2;
- (int)openForReadingWithError:(id *)arg1;
- (int)openWithError:(id *)arg1;
- (BOOL)performTransactionWithType:(long long)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)requireRollback;
- (BOOL)setUserVersion:(long long)arg1 withDatabaseName:(id)arg2 error:(id *)arg3;
- (BOOL)table:(id)arg1 hasColumnWithName:(id)arg2 error:(id *)arg3;
- (id)typeOfColumn:(id)arg1 inTable:(id)arg2 error:(id *)arg3;
- (long long)userVersionWithDatabaseName:(id)arg1 error:(id *)arg2;
- (BOOL)validateForeignKeysForTable:(id)arg1 databaseName:(id)arg2 error:(id *)arg3;

@end
