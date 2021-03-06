//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEODBWriter.h>

__attribute__((visibility("hidden")))
@interface GEONavdCacheDBWriter : GEODBWriter
{
    struct sqlite3_stmt *_sqlInsertCache;
    struct sqlite3_stmt *_sqlDeleteRowForRowID;
    struct sqlite3_stmt *_sqlUpdateCache;
    struct sqlite3_stmt *_sqlDeleteAllRows;
}

- (void)_createCacheTable;
- (void)_deleteAllRows;
- (void)_deleteRowsWithRowIDs:(id)arg1;
- (long long)_insertWithKey:(id)arg1 value:(id)arg2;
- (void)_openIfNecessary;
- (BOOL)_updateRowId:(long long)arg1 withKey:(id)arg2 value:(id)arg3;
- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (void)performStatementPreparationTasks;
- (void)performTableCreationTasks;

@end

