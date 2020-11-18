//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ML3DatabaseConnectionPool, ML3DatabaseStatementCache, NSMutableArray, NSString, NSUUID;
@protocol ML3DatabaseConnectionDelegate;

@interface ML3DatabaseConnection : NSObject
{
    struct sqlite3 *_sqlitedb;
    BOOL _isOpen;
    ML3DatabaseStatementCache *_statementCache;
    unsigned long long _statementsSinceLastCheckpoint;
    unsigned int _transactionLevel;
    BOOL _nestedTransactionWantsToRollback;
    NSMutableArray *_enqueuedTransactionCommitBlocks;
    ML3DatabaseConnectionPool *_owningPool;
    NSMutableArray *_registeredFunctions;
    NSMutableArray *_registeredModules;
    int _profilingLevel;
    NSString *_lastTracedStatement;
    int _willDeleteDatabaseNotifyToken;
    BOOL _isHandlingIOError;
    BOOL _isReadOnly;
    BOOL _automaticCheckpointingEnabled;
    BOOL _logQueryPlans;
    id<ML3DatabaseConnectionDelegate> _connectionDelegate;
    NSString *_databasePath;
    unsigned long long _journalingMode;
    unsigned long long _protectionLevel;
    NSUUID *_currentTransactionID;
    NSUUID *_uniqueIdentifier;
    const void *_iTunesExtensions;
    unsigned long long _checkpointStatementThreshold;
}

@property (nonatomic) BOOL automaticCheckpointingEnabled; // @synthesize automaticCheckpointingEnabled=_automaticCheckpointingEnabled;
@property (nonatomic) unsigned long long checkpointStatementThreshold; // @synthesize checkpointStatementThreshold=_checkpointStatementThreshold;
@property (weak, nonatomic) id<ML3DatabaseConnectionDelegate> connectionDelegate; // @synthesize connectionDelegate=_connectionDelegate;
@property (readonly, nonatomic) NSUUID *currentTransactionID; // @synthesize currentTransactionID=_currentTransactionID;
@property (readonly, nonatomic) NSString *databasePath; // @synthesize databasePath=_databasePath;
@property (nonatomic) const void *iTunesExtensions; // @synthesize iTunesExtensions=_iTunesExtensions;
@property (readonly, nonatomic) BOOL isInTransaction;
@property (readonly, nonatomic) BOOL isOpen;
@property (nonatomic, setter=setReadOnly:) BOOL isReadOnly; // @synthesize isReadOnly=_isReadOnly;
@property (nonatomic) unsigned long long journalingMode; // @synthesize journalingMode=_journalingMode;
@property (nonatomic) BOOL logQueryPlans; // @synthesize logQueryPlans=_logQueryPlans;
@property (nonatomic) int profilingLevel;
@property (nonatomic) unsigned long long protectionLevel; // @synthesize protectionLevel=_protectionLevel;
@property (readonly, nonatomic) BOOL transactionMarkedForRollBack;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;

- (void).cxx_destruct;
- (BOOL)_alterTableNamed:(id)arg1 withNewColumnDefinitions:(id)arg2 newColumnNames:(id)arg3 oldColumnNames:(id)arg4;
- (BOOL)_closeAndFlushTransactionState:(BOOL)arg1;
- (void)_createDatabaseDirectoryIfNonexistent;
- (void)_createDatabaseFileIfNonexistent;
- (BOOL)_databaseFileExists;
- (id)_databaseFilePaths;
- (BOOL)_databaseFilesAreWritable;
- (void)_ensureConnectionIsOpen;
- (void)_enumerateTableColumnNamesAndDefinitionsFromTable:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (BOOL)_executeStatement:(id)arg1 withError:(id *)arg2;
- (void)_executeTransactionCommitBlocks:(BOOL)arg1;
- (void)_finalizeAllStatements;
- (BOOL)_handleBusyLockWithNumberOfRetries:(int)arg1;
- (BOOL)_handleConnectionErrorWhileOpening:(int)arg1;
- (void)_handleDatabaseCorruption;
- (void)_handleDatabaseProfileStatement:(const char *)arg1 executionTimeNS:(unsigned long long)arg2;
- (void)_handleDatabaseTraceStatement:(const char *)arg1;
- (BOOL)_handleDiskIOError;
- (BOOL)_handleZombieSQLiteConnection:(struct sqlite3 *)arg1;
- (BOOL)_internalBeginTransactionWithBehaviorType:(unsigned long long)arg1;
- (BOOL)_internalEndTransactionAndCommit:(BOOL)arg1;
- (id)_internalExecuteQuery:(id)arg1 withParameters:(id)arg2 limitProperty:(id)arg3 limitValue:(long long)arg4;
- (BOOL)_internalExecuteUpdate:(id)arg1 withParameters:(id)arg2 error:(id *)arg3;
- (void)_internalLogQuery:(id)arg1 withParameters:(id)arg2 limitProperty:(id)arg3 limitValue:(long long)arg4;
- (BOOL)_isSharedMediaLibraryDatabase;
- (void)_logCurrentError;
- (void)_logCurrentErrorWhilePerformingStatementOperation:(id)arg1 statement:(id)arg2;
- (void)_logCurrentErrorWhilePerformingStatementOperation:(id)arg1 statementSQL:(id)arg2;
- (BOOL)_openWithFlags:(int)arg1;
- (id)_owningPool;
- (id)_prepareStatement:(id)arg1 error:(id *)arg2;
- (id)_registeredModuleNamed:(id)arg1;
- (void)_resetUnfinalizedStatements;
- (void)_setOwningPool:(id)arg1;
- (void)_setTransactionLevel:(unsigned long long)arg1;
- (id)_shortDescription;
- (struct sqlite3 *)_sqliteHandle;
- (unsigned long long)_transactionLevel;
- (void)_updateProfilingLevel;
- (BOOL)_validatePreparedStatement:(id)arg1 error:(id *)arg2;
- (int)checkpointDatabase;
- (BOOL)close;
- (BOOL)databasePathExists;
- (void)dealloc;
- (BOOL)deleteDatabase;
- (id)description;
- (void)enqueueBlockForTransactionCommit:(CDUnknownBlockType)arg1;
- (id)executeQuery:(id)arg1;
- (id)executeQuery:(id)arg1 withParameters:(id)arg2;
- (id)executeQuery:(id)arg1 withParameters:(id)arg2 limitProperty:(id)arg3 limitValue:(long long)arg4;
- (BOOL)executeUpdate:(id)arg1;
- (BOOL)executeUpdate:(id)arg1 withParameters:(id)arg2 error:(id *)arg3;
- (void)flush;
- (id)init;
- (id)initWithDatabasePath:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (long long)lastInsertionRowID;
- (BOOL)open;
- (id)openBlobInTable:(id)arg1 column:(id)arg2 row:(long long)arg3 readOnly:(BOOL)arg4;
- (BOOL)performTransactionWithBlock:(CDUnknownBlockType)arg1;
- (BOOL)performTransactionWithBlock:(CDUnknownBlockType)arg1 usingBehaviorType:(unsigned long long)arg2;
- (BOOL)popToRootTransactionAndCommit:(BOOL)arg1;
- (BOOL)popTransactionAndCommit:(BOOL)arg1;
- (BOOL)pushTransaction;
- (BOOL)pushTransactionUsingBehaviorType:(unsigned long long)arg1;
- (BOOL)registerFunctionName:(id)arg1 argumentCount:(int)arg2 block:(CDUnknownBlockType)arg3;
- (BOOL)registerFunctionName:(id)arg1 argumentCount:(int)arg2 functionPointer:(CDUnknownFunctionPointerType)arg3;
- (BOOL)registerFunctionName:(id)arg1 argumentCount:(int)arg2 functionPointer:(CDUnknownFunctionPointerType)arg3 userData:(void *)arg4;
- (BOOL)registerModule:(id)arg1;
- (BOOL)registerModuleName:(id)arg1 moduleMethods:(struct sqlite3_module *)arg2;
- (BOOL)removeModuleNamed:(id)arg1;
- (BOOL)schemaAddColumnDefinition:(id)arg1 toTable:(id)arg2;
- (BOOL)schemaDeleteColumn:(id)arg1 inTable:(id)arg2;
- (BOOL)schemaDeleteColumns:(id)arg1 inTable:(id)arg2;
- (BOOL)schemaInsertColumnDefinition:(id)arg1 intoTable:(id)arg2 atIndex:(unsigned long long)arg3;
- (BOOL)schemaInsertColumnDefinitions:(id)arg1 intoTable:(id)arg2 atIndex:(unsigned long long)arg3;
- (BOOL)schemaRenameColumn:(id)arg1 inTable:(id)arg2 toNewColumnName:(id)arg3;
- (void)setCurrentTransactionID:(id)arg1;
- (id)sqliteError;
- (BOOL)tableExists:(id)arg1;

@end
