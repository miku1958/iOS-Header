//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSURL, WBSSQLiteDatabase;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SFBrowserStateSQLiteStore : NSObject
{
    NSURL *_databaseURL;
    WBSSQLiteDatabase *_database;
    NSObject<OS_dispatch_queue> *_databaseQueue;
    NSMutableDictionary *_tabUUIDStrings;
    NSMutableDictionary *_browserWindowDatabaseIDs;
}

- (void).cxx_destruct;
- (void)_cacheUUIDForTabStateData:(id)arg1;
- (BOOL)_checkDatabaseIntegrity;
- (void)_closeDatabase;
- (int)_createFreshDatabaseSchema;
- (long long)_databaseIDForBrowserWindow:(id)arg1;
- (void)_insertTabStateWithData:(id)arg1;
- (BOOL)_isDatabaseOpen;
- (BOOL)_isTabStateCached:(id)arg1;
- (void)_migrateFromLegacyPlistIfNeeded;
- (void)_migrateFromLegacyPlistWithPath:(id)arg1;
- (int)_migrateToCurrentSchemaVersionIfNeeded;
- (int)_migrateToSchemaVersion_2;
- (void)_openDatabaseAndCheckIntegrity:(BOOL)arg1;
- (id)_readSavedSessionStateDataForTabWithUUID:(id)arg1;
- (void)_readTabStatesWithBrowserWindowUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (long long)_saveBrowserWindowStateWithData:(id)arg1;
- (long long)_saveBrowserWindowStateWithDictionary:(id)arg1;
- (int)_schemaVersion;
- (void)_setDatabaseID:(long long)arg1 browserWindow:(id)arg2;
- (int)_setDatabaseSchemaVersion:(int)arg1;
- (id)_sqliteStatementForTabDeleting;
- (id)_tabUUIDsInWindow:(id)arg1;
- (void)_updateBrowserWindowStateWithDictionary:(id)arg1;
- (void)_updateBrowserWindowWithData:(id)arg1 tabs:(id)arg2;
- (void)_updateOrInsertTabStateWithData:(id)arg1;
- (BOOL)_updateTabStateWithData:(id)arg1;
- (void)_vacuum;
- (id)browserWindowUUIDs;
- (void)checkPointWriteAheadLog;
- (void)closeDatabase;
- (void)dealloc;
- (BOOL)deleteAllSavedStates;
- (BOOL)deleteTabStateWithBrowserWindowUUID:(id)arg1 andRemoveWindow:(BOOL)arg2;
- (id)init;
- (id)initWithDatabaseURL:(id)arg1;
- (id)readSavedSessionStateDataForTabWithUUID:(id)arg1;
- (void)readTabStatesWithBrowserWindowUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeTabWithTabData:(id)arg1;
- (void)saveTabStateWithDictionary:(id)arg1;
- (void)setSecureDeleteEnabled:(BOOL)arg1;
- (id)tabStatesWithBrowserWindowUUID:(id)arg1;
- (void)updateBrowserWindowStateWithDictionary:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateBrowserWindowWithData:(id)arg1 tabs:(id)arg2;
- (void)updateTabWithTabStateData:(id)arg1;

@end

