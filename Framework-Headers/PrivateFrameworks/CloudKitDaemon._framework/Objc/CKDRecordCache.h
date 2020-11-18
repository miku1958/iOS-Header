//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKDClientContext, CKSQLite, CKSQLitePool, NSDate;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CKDRecordCache : NSObject
{
    CKSQLite *_db;
    CKSQLitePool *_dbPool;
    CKDClientContext *_context;
    long long _scope;
    NSObject<OS_dispatch_queue> *_queue;
    NSDate *_lastExpiryAttempt;
}

@property (strong, nonatomic) CKDClientContext *context; // @synthesize context=_context;
@property (strong, nonatomic) CKSQLite *db; // @synthesize db=_db;
@property (strong, nonatomic) CKSQLitePool *dbPool; // @synthesize dbPool=_dbPool;
@property (strong, nonatomic) NSDate *lastExpiryAttempt; // @synthesize lastExpiryAttempt=_lastExpiryAttempt;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (nonatomic) long long scope; // @synthesize scope=_scope;

+ (id)_expiryDateFormatter;
- (void).cxx_destruct;
- (void)_attemptRecordExpiryIfNeeded;
- (BOOL)_cachedRecordHasValidAssets:(id)arg1 forRequiredKeys:(id)arg2;
- (BOOL)_cachedRecordKnownUserKeyData:(id)arg1 satisfiesRequiredKeys:(id)arg2;
- (id)_dsid;
- (unsigned long long)_lockedSizeOfAllRecordsInDb;
- (id)_recordWithID:(id)arg1 requiredKeys:(id)arg2;
- (id)_trimRecord:(id)arg1 toRequiredKeys:(id)arg2;
- (void)addRecord:(id)arg1 knownUserKeys:(id)arg2;
- (void)clearAllRecords;
- (void)clearAllRecordsForZoneWithID:(id)arg1;
- (void)clearAssetAuthTokensForRecordWithID:(id)arg1;
- (void)close;
- (void)deleteRecordWithID:(id)arg1;
- (id)etagForRecordID:(id)arg1 requiredKeys:(id)arg2;
- (id)initWithDatabase:(id)arg1 dbPool:(id)arg2 context:(id)arg3 scope:(long long)arg4;
- (void)open;
- (id)recordWithID:(id)arg1 requiredKeys:(id)arg2;
- (id)recordsWithIDs:(id)arg1 requiredKeys:(id)arg2;
- (void)releaseDatabase;
- (void)scheduleRecordExpirationWithExpiryDate:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end
