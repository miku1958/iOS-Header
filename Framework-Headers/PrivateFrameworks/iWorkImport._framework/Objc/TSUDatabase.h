//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSUDatabase : NSObject
{
    struct sqlite3 *_db;
    BOOL _readonly;
    struct sqlite3_stmt *_beginTransactionStatement;
    struct sqlite3_stmt *_commitTransactionStatement;
    struct sqlite3_stmt *_rollbackTransactionStatement;
}

@property (readonly, nonatomic) struct sqlite3 *_sqliteDatabase; // @synthesize _sqliteDatabase=_db;
@property (readonly, nonatomic) BOOL readonly; // @synthesize readonly=_readonly;

- (id)_initWithPath:(id)arg1 readonly:(BOOL)arg2 error:(id *)arg3;
- (BOOL)_upgradeSchemaWithError:(id *)arg1;
- (BOOL)beginTransactionWithError:(id *)arg1;
- (BOOL)closeWithError:(id *)arg1;
- (BOOL)commitTransactionWithError:(id *)arg1;
- (BOOL)compactWithError:(id *)arg1;
- (void)dealloc;
- (BOOL)endSingleResultQuery:(struct sqlite3_stmt *)arg1 shouldFinalize:(BOOL)arg2 error:(id *)arg3;
- (BOOL)executeUpdate:(struct sqlite3_stmt *)arg1 shouldFinalize:(BOOL)arg2 error:(id *)arg3;
- (BOOL)executeUpdateWithSql:(const char *)arg1 error:(id *)arg2;
- (id)initReadonlyWithPath:(id)arg1 error:(id *)arg2;
- (id)initWithPath:(id)arg1 error:(id *)arg2;
- (BOOL)needsUpgradeFromSchemaVersion:(int)arg1;
- (BOOL)prepareStatement:(struct sqlite3_stmt **)arg1 sql:(const char *)arg2 error:(id *)arg3;
- (BOOL)rollbackTransactionWithError:(id *)arg1;
- (BOOL)setSchemaVersion:(int)arg1 error:(id *)arg2;
- (BOOL)startSingleResultQuery:(struct sqlite3_stmt *)arg1 error:(id *)arg2;
- (BOOL)upgradeFromSchemaVersion:(int)arg1 error:(id *)arg2;

@end
