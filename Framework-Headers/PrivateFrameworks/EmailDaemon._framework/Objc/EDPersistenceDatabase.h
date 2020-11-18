//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailDaemon/EDPersistenceDatabaseConnectionDelegate-Protocol.h>
#import <EmailDaemon/EDPersistenceDatabaseConnectionPoolDelegate-Protocol.h>

@class EDPersistenceDatabaseConnectionPool, EDProtectedDatabasePersistence, EFSQLPropertyMapper, EFSQLSchema, NSString;

@interface EDPersistenceDatabase : NSObject <EDPersistenceDatabaseConnectionPoolDelegate, EDPersistenceDatabaseConnectionDelegate>
{
    BOOL _setupIsComplete;
    EFSQLSchema *_schema;
    EFSQLSchema *_protectedSchema;
    EFSQLPropertyMapper *_propertyMapper;
    EDPersistenceDatabaseConnectionPool *_connectionPool;
    EDProtectedDatabasePersistence *_protectedDatabasePersistence;
    NSString *_basePath;
    NSString *_databaseName;
    NSString *_fullPath;
}

@property (readonly, nonatomic) NSString *basePath; // @synthesize basePath=_basePath;
@property (readonly, nonatomic) BOOL databaseIsCorrupt;
@property (readonly, nonatomic) NSString *databaseName; // @synthesize databaseName=_databaseName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL enforceDataProtection;
@property (readonly, nonatomic) NSString *fullPath; // @synthesize fullPath=_fullPath;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isNestedDatabaseCall;
@property (readonly, nonatomic) EFSQLPropertyMapper *propertyMapper; // @synthesize propertyMapper=_propertyMapper;
@property (readonly, nonatomic) EDProtectedDatabasePersistence *protectedDatabasePersistence; // @synthesize protectedDatabasePersistence=_protectedDatabasePersistence;
@property (readonly, nonatomic) EFSQLSchema *protectedSchema; // @synthesize protectedSchema=_protectedSchema;
@property (readonly, nonatomic) EFSQLSchema *schema; // @synthesize schema=_schema;
@property BOOL setupIsComplete; // @synthesize setupIsComplete=_setupIsComplete;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL writersAreWaiting;

- (void).cxx_destruct;
- (void)checkInConnection:(id)arg1;
- (id)checkOutConnectionIsWriter:(BOOL)arg1;
- (void)closeAllConnections;
- (id)fileProtectionForDatabaseType:(long long)arg1;
- (id)init;
- (id)initWithBasePath:(id)arg1 databaseName:(id)arg2 maxConcurrentReaders:(unsigned long long)arg3 schema:(id)arg4 protectedSchema:(id)arg5 propertyMapper:(id)arg6 protectedDatabasePersistence:(id)arg7;
- (id)openConnectionIsWriter:(BOOL)arg1;
- (BOOL)performDatabaseSetupUsingTransaction:(BOOL)arg1 block:(CDUnknownBlockType)arg2;
- (void)performDatabaseWorkInBlockWithHighPriority:(CDUnknownBlockType)arg1;
- (BOOL)performReadBlock:(CDUnknownBlockType)arg1;
- (BOOL)performWithOptions:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (BOOL)performWriteBlock:(CDUnknownBlockType)arg1;
- (void)reconcileJournalWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)scheduleRecurringActivity;
- (id)urlForDatabasePath:(id)arg1 type:(long long)arg2;
- (id)urlForDatabasePath:(id)arg1 type:(long long)arg2 fileProtection:(id)arg3;

@end
