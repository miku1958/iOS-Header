//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache, NSMutableArray, NSMutableDictionary, NSString;
@protocol _PASSqliteErrorHandlerProtocol;

@interface _PASSqliteDatabase : NSObject
{
    struct sqlite3 *_db;
    int _transactionDepth;
    BOOL _transactionRolledback;
    struct atomic_flag _isClosed;
    NSObject<_PASSqliteErrorHandlerProtocol> *_errorHandler;
    NSString *_filename;
    struct _opaque_pthread_mutex_t _lock;
    NSMutableArray *_statementsToFinalizeAsync;
    BOOL _currentExclusivity;
    NSMutableDictionary *_explainedQueryForPlan;
    NSCache *_explainedQueriesLogged;
    struct __sFILE {
        char *_field1;
        int _field2;
        int _field3;
        short _field4;
        short _field5;
        struct __sbuf _field6;
        int _field7;
        void *_field8;
        CDUnknownFunctionPointerType _field9;
        CDUnknownFunctionPointerType _field10;
        CDUnknownFunctionPointerType _field11;
        CDUnknownFunctionPointerType _field12;
        struct __sbuf _field13;
        struct __sFILEX *_field14;
        int _field15;
        unsigned char _field16[3];
        unsigned char _field17[1];
        struct __sbuf _field18;
        int _field19;
        long long _field20;
    } *_explainedQueriesLogFile;
    BOOL _isInMemory;
    long long _contentProtectionType;
}

@property (readonly, nonatomic) long long contentProtectionType; // @synthesize contentProtectionType=_contentProtectionType;
@property (readonly, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property (readonly, nonatomic) struct sqlite3 *handle;
@property (readonly, nonatomic) BOOL isInMemory; // @synthesize isInMemory=_isInMemory;

+ (BOOL)contentProtectionTypeRequiresDeviceToBeUnlocked:(long long)arg1;
+ (BOOL)contentProtectionTypeRequiresDeviceToHaveBeenUnlockedOnce:(long long)arg1;
+ (id)corruptionMarkerPathForPath:(id)arg1;
+ (id)inMemoryPath;
+ (id)initializeDatabase:(id)arg1 withContentProtection:(long long)arg2 newDatabaseCreated:(BOOL *)arg3;
+ (id)initializeDatabase:(id)arg1 withContentProtection:(long long)arg2 newDatabaseCreated:(BOOL *)arg3 errorHandler:(id)arg4;
+ (id)initializeDatabase:(id)arg1 withProtection:(BOOL)arg2 newDatabaseCreated:(BOOL *)arg3;
+ (BOOL)isInMemoryPath:(id)arg1;
+ (id)protectedDatabaseWithFilename:(id)arg1 error:(id *)arg2;
+ (id)protectedDatabaseWithFilename:(id)arg1 error:(id *)arg2 errorHandler:(id)arg3;
+ (id)randomlyNamedInMemoryPathWithBaseName:(id)arg1;
+ (id)recreateCorruptDatabase:(id)arg1 withContentProtection:(long long)arg2;
+ (void)runDebugCommand:(const char *)arg1 onDbWithHandle:(id)arg2;
+ (id)sqliteDatabaseInMemoryWithError:(id *)arg1;
+ (id)sqliteDatabaseInMemoryWithError:(id *)arg1 errorHandler:(id)arg2;
+ (id)sqliteDatabaseWithFilename:(id)arg1 contentProtection:(long long)arg2 error:(id *)arg3;
+ (id)sqliteDatabaseWithFilename:(id)arg1 contentProtection:(long long)arg2 errorHandler:(id)arg3 error:(id *)arg4;
+ (id)sqliteDatabaseWithFilename:(id)arg1 error:(id *)arg2;
+ (id)sqliteDatabaseWithFilename:(id)arg1 error:(id *)arg2 errorHandler:(id)arg3;
+ (id)sqliteDatabaseWithFilename:(id)arg1 flags:(int)arg2 error:(id *)arg3;
+ (id)sqliteDatabaseWithFilename:(id)arg1 flags:(int)arg2 error:(id *)arg3 errorHandler:(id)arg4;
+ (void)truncateDatabaseAtPath:(id)arg1;
- (void).cxx_destruct;
- (void)_logQueryPlanForQuery:(id)arg1;
- (void)_prepAndRunQuery:(id)arg1 columns:(id)arg2 dictionary:(id)arg3 onError:(CDUnknownBlockType)arg4;
- (BOOL)_transactionWithExclusivity:(BOOL)arg1 transaction:(CDUnknownBlockType)arg2;
- (void)_txnBegin;
- (void)_txnBeginExclusive;
- (void)_txnEnd;
- (void)_txnRollback;
- (void)clearCaches;
- (void)closePermanently;
- (BOOL)createSnapshot:(id)arg1;
- (id)dbErrorWithCode:(unsigned long long)arg1 sqliteReturnValue:(int)arg2 lastErrno:(int)arg3 query:(id)arg4;
- (void)dealloc;
- (id)description;
- (void)disableQueryPlanLogging;
- (BOOL)enableQueryPlanLoggingWithPath:(id)arg1;
- (void)finalizeLater:(struct sqlite3_stmt *)arg1;
- (BOOL)frailReadTransaction:(CDUnknownBlockType)arg1;
- (BOOL)frailWriteTransaction:(CDUnknownBlockType)arg1;
- (id)freeSpace;
- (BOOL)handleError:(long long)arg1 sqliteError:(int)arg2 forQuery:(id)arg3 onError:(CDUnknownBlockType)arg4;
- (BOOL)hasColumnOnTable:(id)arg1 named:(id)arg2;
- (BOOL)hasIndexNamed:(id)arg1;
- (BOOL)hasTableNamed:(id)arg1;
- (id)init;
- (id)initWithFilename:(id)arg1 flags:(int)arg2 error:(id *)arg3;
- (id)initWithFilename:(id)arg1 flags:(int)arg2 error:(id *)arg3 errorHandler:(id)arg4;
- (void)insertIntoTable:(id)arg1 dictionary:(id)arg2;
- (void)insertOrReplaceIntoTable:(id)arg1 dictionary:(id)arg2 onError:(CDUnknownBlockType)arg3;
- (id)languageForFTSTable:(id)arg1;
- (long long)lastInsertRowId;
- (unsigned long long)numberOfRowsInTable:(id)arg1;
- (void)placeCorruptionMarker;
- (BOOL)prepAndRunNonDataQueries:(id)arg1 onError:(CDUnknownBlockType)arg2;
- (BOOL)prepAndRunQuery:(id)arg1 onPrep:(CDUnknownBlockType)arg2 onRow:(CDUnknownBlockType)arg3 onError:(CDUnknownBlockType)arg4;
- (BOOL)prepQuery:(id)arg1 onPrep:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
- (void)readTransaction:(CDUnknownBlockType)arg1;
- (BOOL)runQuery:(id)arg1 onRow:(CDUnknownBlockType)arg2;
- (BOOL)runQuery:(id)arg1 onRow:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
- (id)selectColumns:(id)arg1 fromTable:(id)arg2 whereClause:(id)arg3 onPrep:(CDUnknownBlockType)arg4 onError:(CDUnknownBlockType)arg5;
- (BOOL)setUserVersion:(unsigned int)arg1;
- (void)simulateOnDiskDatabase;
- (id)tablesWithColumnNamed:(id)arg1;
- (void)updateTable:(id)arg1 dictionary:(id)arg2 whereClause:(id)arg3 onError:(CDUnknownBlockType)arg4;
- (unsigned int)userVersion;
- (void)withDbLockExecuteBlock:(CDUnknownBlockType)arg1;
- (void)writeTransaction:(CDUnknownBlockType)arg1;

@end
