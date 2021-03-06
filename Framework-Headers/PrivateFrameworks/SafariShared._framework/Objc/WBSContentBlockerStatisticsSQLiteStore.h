//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL, WBSSQLiteDatabase;
@protocol OS_dispatch_queue;

@interface WBSContentBlockerStatisticsSQLiteStore : NSObject
{
    NSURL *_databaseURL;
    NSObject<OS_dispatch_queue> *_databaseQueue;
    WBSSQLiteDatabase *_database;
}

+ (id)_defaultDatabaseURL;
+ (id)standardStore;
- (void).cxx_destruct;
- (void)_clearStatisticsAfter:(id)arg1 before:(id)arg2;
- (void)_clearStatisticsForDomain:(id)arg1;
- (void)_closeDatabaseOnDatabaseQueue;
- (void)_configureDatabase;
- (void)_createDatabaseSchemaIfNeeded;
- (void)_deleteUnusedDomains;
- (long long)_idForFirstPartyWithHighLevelDomain:(id)arg1;
- (long long)_idForThirdPartyWithHighLevelDomain:(id)arg1;
- (void)_openDatabase;
- (void)_openDatabaseIfNeeded;
- (long long)_schemaVersion;
- (void)blockedThirdPartiesAfter:(id)arg1 before:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)blockedThirdPartiesAfter:(id)arg1 before:(id)arg2 onFirstParty:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)clearAllStatisticsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)clearStatisticsAfter:(id)arg1 before:(id)arg2;
- (void)clearStatisticsForDomains:(id)arg1;
- (void)closeDatabase;
- (id)initWithDatabaseURL:(id)arg1;
- (void)recordThirdPartyResourceBlocked:(id)arg1 onFirstParty:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

