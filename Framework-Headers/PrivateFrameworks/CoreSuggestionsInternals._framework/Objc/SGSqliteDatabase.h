//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache, NSString;
@protocol OS_dispatch_queue;

@interface SGSqliteDatabase : NSObject
{
    struct sqlite3 *_db;
    int _transactionDepth;
    BOOL _transactionRolledback;
    NSString *_filename;
    NSCache *_queryCache;
    NSObject<OS_dispatch_queue> *_queue;
    struct _opaque_pthread_t {
        long long _field1;
        struct __darwin_pthread_handler_rec *_field2;
        char _field3[8176];
    } *_threadInQueue;
    BOOL _currentExclusivity;
    BOOL _isInMemory;
}

@property (readonly, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property (readonly, nonatomic) struct sqlite3 *handle;
@property (readonly, nonatomic) BOOL isInMemory; // @synthesize isInMemory=_isInMemory;

+ (int)bindParam:(struct sqlite3_stmt *)arg1 name:(const char *)arg2 double:(double)arg3;
+ (int)bindParam:(struct sqlite3_stmt *)arg1 name:(const char *)arg2 int64:(long long)arg3;
+ (int)bindParam:(struct sqlite3_stmt *)arg1 name:(const char *)arg2 int:(int)arg3;
+ (int)bindParam:(struct sqlite3_stmt *)arg1 name:(const char *)arg2 nsdata:(id)arg3;
+ (int)bindParam:(struct sqlite3_stmt *)arg1 name:(const char *)arg2 nsstring:(id)arg3;
+ (int)bindParamToNull:(struct sqlite3_stmt *)arg1 name:(const char *)arg2;
+ (id)corruptionMarkerFilename;
+ (id)corruptionMarkerPathForPath:(id)arg1;
+ (id)inMemoryPath;
+ (BOOL)isInMemoryPath:(id)arg1;
+ (id)protectedDatabaseWithFilename:(id)arg1 error:(id *)arg2;
+ (id)protectedDatabaseWithFilename:(id)arg1 flags:(int)arg2 error:(id *)arg3;
+ (id)randomlyNamedInMemoryPathWithBaseName:(id)arg1;
+ (id)sqliteDatabaseInMemoryWithError:(id *)arg1;
+ (id)sqliteDatabaseWithFilename:(id)arg1 error:(id *)arg2;
+ (id)sqliteDatabaseWithFilename:(id)arg1 flags:(int)arg2 error:(id *)arg3;
+ (void)truncateDatabaseAtPath:(id)arg1;
- (void).cxx_destruct;
- (BOOL)_transactionWithExclusivity:(BOOL)arg1 transaction:(CDUnknownBlockType)arg2;
- (void)clearCaches;
- (void)closePermanently;
- (id)corruptionMarkerPath;
- (BOOL)createSnapshot:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)errorMessage:(int)arg1 forQuery:(id)arg2;
- (BOOL)frailReadTransaction:(CDUnknownBlockType)arg1;
- (BOOL)frailWriteTransaction:(CDUnknownBlockType)arg1;
- (BOOL)hasColumnOnTable:(id)arg1 named:(id)arg2;
- (BOOL)hasIndexNamed:(id)arg1;
- (BOOL)hasTableNamed:(id)arg1;
- (id)initWithFilename:(id)arg1 flags:(int)arg2 error:(id *)arg3;
- (id)languageForFTSTable:(id)arg1;
- (unsigned long long)numberOfRowsInTable:(id)arg1;
- (void)placeCorruptionMarker;
- (BOOL)prepAndRunQuery:(id)arg1 onPrep:(CDUnknownBlockType)arg2 onRow:(CDUnknownBlockType)arg3 onError:(CDUnknownBlockType)arg4;
- (void)prepQuery:(id)arg1 onPrep:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
- (void)readTransaction:(CDUnknownBlockType)arg1;
- (BOOL)runQuery:(struct sqlite3_stmt *)arg1 onRow:(CDUnknownBlockType)arg2;
- (BOOL)runQuery:(struct sqlite3_stmt *)arg1 onRow:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
- (void)setUserVersion:(unsigned long long)arg1;
- (void)simulateOnDiskDatabase;
- (id)tablesWithColumnNamed:(id)arg1;
- (unsigned long long)userVersion;
- (void)writeTransaction:(CDUnknownBlockType)arg1;

@end

