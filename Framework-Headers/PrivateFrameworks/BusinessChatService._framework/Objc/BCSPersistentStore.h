//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BusinessChatService/BCSBatchable-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface BCSPersistentStore : NSObject <BCSBatchable>
{
    struct sqlite3 *_openedDatabase;
    long long _batchCount;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic) long long batchCount; // @synthesize batchCount=_batchCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) struct sqlite3 *openedDatabase; // @synthesize openedDatabase=_openedDatabase;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly) Class superclass;

+ (const char *)debugQueueName;
- (void).cxx_destruct;
- (struct sqlite3 *)_createDatabaseFileAtPath:(id)arg1;
- (long long)_databaseSchemaVersionForDatabase:(struct sqlite3 *)arg1;
- (BOOL)_generateTableWithDatabase:(struct sqlite3 *)arg1;
- (BOOL)_setDatabaseSchemaVersion:(long long)arg1 forDatabase:(struct sqlite3 *)arg2;
- (void)beginBatch;
- (id)databasePath;
- (void)dealloc;
- (BOOL)deleteDatabaseFile;
- (void)endBatch;
- (id)init;
- (void)queue_closeDatabase;
- (void)queue_openDatabaseIfNecessary;
- (const char *)schema;
- (long long)schemaVersion;
- (void)schemaVersionDidChangeForDatabase:(struct sqlite3 *)arg1 fromSchemaVersion:(long long)arg2 toSchemaVersion:(long long)arg3;
- (void)schemaVersionWillChangeForDatabase:(struct sqlite3 *)arg1 fromSchemaVersion:(long long)arg2 toSchemaVersion:(long long)arg3;

@end
