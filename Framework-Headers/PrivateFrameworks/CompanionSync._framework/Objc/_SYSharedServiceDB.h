//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface _SYSharedServiceDB : NSObject
{
    struct os_unfair_lock_s _lock;
    struct sqlite3 *_db;
    NSString *_name;
    NSMutableDictionary *_schemaSetupCallbacks;
}

@property (readonly, nonatomic, getter=_dbPath) NSString *dbPath;

+ (void)_releaseSharedInstanceForServiceName:(id)arg1;
+ (void)initialize;
+ (void)pairingStorePathWasReset;
+ (id)sharedInstanceForServiceName:(id)arg1;
- (void).cxx_destruct;
- (BOOL)_LOCKED_createOrOpenDBForServiceName:(id)arg1 error:(id *)arg2;
- (BOOL)_LOCKED_ensureDBExists;
- (void)_LOCKED_ensureSchemaVersionsTableInDB:(struct sqlite3 *)arg1;
- (long long)_LOCKED_getClientVersion:(id)arg1;
- (BOOL)_LOCKED_hasSchemaVersionForClient:(id)arg1;
- (void)_LOCKED_runSchemaUpdate:(CDUnknownBlockType)arg1 forClientNamed:(id)arg2;
- (void)_LOCKED_setVersion:(long long)arg1 forClient:(id)arg2;
- (BOOL)_addSkipBackupAttributeToItemAtPath:(id)arg1 error:(id *)arg2;
- (BOOL)_ensureParentExists:(id)arg1 error:(id *)arg2;
- (void)_ensureSchemaVersionsTable;
- (BOOL)_runTransactionBlock:(CDUnknownBlockType)arg1 exclusive:(BOOL)arg2;
- (void)dealloc;
- (BOOL)inExclusiveTransaction:(CDUnknownBlockType)arg1;
- (BOOL)inTransaction:(CDUnknownBlockType)arg1;
- (id)initWithServiceName:(id)arg1;
- (long long)schemaVersionForClient:(id)arg1;
- (void)setSchemaVersion:(long long)arg1 forClient:(id)arg2;
- (void)updateSchemaForClient:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)withDBRef:(CDUnknownBlockType)arg1;

@end

