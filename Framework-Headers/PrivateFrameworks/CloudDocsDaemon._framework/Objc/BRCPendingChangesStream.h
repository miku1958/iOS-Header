//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BRCClientZone, BRCPQLConnection, CKServerChangeToken, NSError, NSURL;

__attribute__((visibility("hidden")))
@interface BRCPendingChangesStream : NSObject
{
    NSURL *_databaseURL;
    NSError *_error;
    BRCPQLConnection *_db;
    CKServerChangeToken *_startingChangeToken;
    BRCClientZone *_clientZone;
}

- (void).cxx_destruct;
- (void)_createSchemaIfNecessary;
- (void)_dbBecameCorrupted;
- (void)_destroyDatabase;
- (void)_openDB;
- (long long)_recordTypeFromRecordID:(id)arg1 isShare:(BOOL)arg2 isDelete:(BOOL)arg3;
- (void)dealloc;
- (void)destroyDatabase;
- (void)destroyDatabaseOnQueue:(BOOL)arg1;
- (BOOL)enumerateRecordsOfType:(long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)fetchTokenState:(CDUnknownBlockType)arg1;
- (id)initWithServerZone:(id)arg1;
- (BOOL)saveEditedRecords:(id)arg1 deletedRecordIDs:(id)arg2 deletedShareIDs:(id)arg3 serverChangeToken:(id)arg4 clientChangeToken:(long long)arg5 syncStatus:(long long)arg6;
- (id)saveError;

@end

