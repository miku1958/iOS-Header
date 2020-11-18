//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSMutableArray, NSString, NSURL;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;

@interface PQLConnection : NSObject
{
    struct sqlite3 *_db;
    NSObject<OS_os_transaction> *_batchStarted;
    int _suspendCaching;
    int _savePointLevel;
    int _skipBatchStop;
    int _vacuumTracker;
    NSMutableArray *_flushNotifications;
    NSObject<OS_dispatch_source> *_batchingTimer;
    double _batchingPeriod;
    int _batchingChangesLimit;
    int _batchingChangesCount;
    int _cacheSize;
    BOOL _useBatching;
    BOOL _useQueue;
    BOOL _needsFullSync;
    struct cache_s *_preparedStatements;
    NSObject<OS_dispatch_source> *_stmtCacheSource;
    NSMutableArray *_stmtCacheCleanupQueue;
    BOOL _traced;
    BOOL _crashIfUsedAfterClose;
    NSString *_label;
    NSURL *_url;
    CDUnknownBlockType _lockedHandler;
    CDUnknownBlockType _autoRollbackHandler;
    CDUnknownBlockType _sqliteErrorHandler;
    CDUnknownBlockType _preFlushHook;
    CDUnknownBlockType _postFlushHook;
    CDUnknownBlockType _profilingHook;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSError *_lastError;
}

@property (copy, nonatomic) CDUnknownBlockType autoRollbackHandler; // @synthesize autoRollbackHandler=_autoRollbackHandler;
@property (readonly, nonatomic) long long changes;
@property (nonatomic) BOOL crashIfUsedAfterClose; // @synthesize crashIfUsedAfterClose=_crashIfUsedAfterClose;
@property (readonly, nonatomic) struct sqlite3 *dbHandle; // @synthesize dbHandle=_db;
@property (readonly, nonatomic) BOOL isBatchSuspended;
@property (readonly, nonatomic) BOOL isInBatch;
@property (readonly, nonatomic) BOOL isInTransaction;
@property (copy, nonatomic) NSString *label; // @synthesize label=_label;
@property (strong, nonatomic) NSError *lastError; // @synthesize lastError=_lastError;
@property (readonly, nonatomic) long long lastInsertedRowID;
@property (copy, nonatomic) CDUnknownBlockType lockedHandler; // @synthesize lockedHandler=_lockedHandler;
@property (copy, nonatomic) CDUnknownBlockType postFlushHook; // @synthesize postFlushHook=_postFlushHook;
@property (copy, nonatomic) CDUnknownBlockType preFlushHook; // @synthesize preFlushHook=_preFlushHook;
@property (copy, nonatomic) CDUnknownBlockType profilingHook; // @synthesize profilingHook=_profilingHook;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property (copy, nonatomic) CDUnknownBlockType sqliteErrorHandler; // @synthesize sqliteErrorHandler=_sqliteErrorHandler;
@property (nonatomic) unsigned long long statementCacheMaxCount;
@property (nonatomic) unsigned long long synchronousMode;
@property (nonatomic, getter=isTraced) BOOL traced; // @synthesize traced=_traced;
@property (readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;

+ (void)initialize;
- (void).cxx_destruct;
- (void)_batchStartIfNeeded;
- (void)_batchStopIfNeeded;
- (void)_clearCleanupCacheQueueIfNeeded;
- (void)_clearStatementCache;
- (void)_createCacheIfNeeded;
- (id)_description:(BOOL)arg1;
- (BOOL)_execute:(id)arg1 mustSucceed:(BOOL)arg2 bindings:(struct __va_list_tag [1])arg3;
- (void)_fireFlushNotifications;
- (BOOL)_fullSync;
- (id)_newStatementForFormat:(id)arg1 arguments:(struct __va_list_tag [1])arg2;
- (BOOL)_performWithFlags:(unsigned int)arg1 action:(CDUnknownBlockType)arg2 whenFlushed:(CDUnknownBlockType)arg3;
- (void)_resetState;
- (void)_vacuumIfNeeded;
- (int)_vacuumMode;
- (BOOL)backupToURL:(id)arg1 progress:(CDUnknownBlockType)arg2;
- (BOOL)close:(id *)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (BOOL)destroyDatabaseWithError:(id *)arg1;
- (BOOL)execute:(id)arg1;
- (BOOL)execute:(id)arg1 args:(struct __va_list_tag [1])arg2;
- (BOOL)executeRaw:(id)arg1;
- (id)fetch:(id)arg1;
- (id)fetch:(id)arg1 args:(struct __va_list_tag [1])arg2;
- (id)fetchObject:(CDUnknownBlockType)arg1 sql:(id)arg2;
- (id)fetchObject:(CDUnknownBlockType)arg1 sql:(id)arg2 args:(struct __va_list_tag [1])arg3;
- (id)fetchObjectOfClass:(Class)arg1 initializer:(SEL)arg2 sql:(id)arg3;
- (id)fetchObjectOfClass:(Class)arg1 initializer:(SEL)arg2 sql:(id)arg3 args:(struct __va_list_tag [1])arg4;
- (id)fetchObjectOfClass:(Class)arg1 sql:(id)arg2;
- (id)fetchObjectOfClass:(Class)arg1 sql:(id)arg2 args:(struct __va_list_tag [1])arg3;
- (void)flush;
- (void)forceBatchStart;
- (void)groupInBatch:(CDUnknownBlockType)arg1;
- (BOOL)groupInTransaction:(CDUnknownBlockType)arg1;
- (id)init;
- (void)makeNextFlushFullSync;
- (BOOL)openAtURL:(id)arg1 sharedCache:(BOOL)arg2 error:(id *)arg3;
- (BOOL)openAtURL:(id)arg1 withFlags:(int)arg2 error:(id *)arg3;
- (BOOL)performWithFlags:(unsigned int)arg1 action:(CDUnknownBlockType)arg2;
- (BOOL)performWithFlags:(unsigned int)arg1 action:(CDUnknownBlockType)arg2 whenFlushed:(CDUnknownBlockType)arg3;
- (BOOL)registerFunction:(id)arg1 nArgs:(int)arg2 handler:(CDUnknownBlockType)arg3;
- (BOOL)setUserVersion:(long long)arg1;
- (BOOL)setupPragmas;
- (void)useBatchingWithDelay:(double)arg1 changeCount:(int)arg2;
- (void)useSerialQueue;
- (id)userVersion;

@end

