//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSString, REMObjectID;

@protocol REMXPCSyncInterfacePerformer
- (void)debugDownloadMigrationCacheWithCompletion:(void (^)(NSDictionary *, NSError *))arg1;
- (void)deleteApplicationDataFromCloudKitWithCompletion:(void (^)(NSError *))arg1;
- (void)fetchServerRecordFor:(REMObjectID *)arg1 completion:(void (^)(CKRecord *, NSError *))arg2;
- (void)fetchUserRecordWithCompletion:(void (^)(CKRecord *, NSError *))arg1;
- (void)migrateICloudCalDavToCloudKitForAccountID:(REMObjectID *)arg1 disableCache:(BOOL)arg2 userInitiated:(BOOL)arg3 completion:(void (^)(REMMigrationResult *, NSError *))arg4;
- (void)observeCloudKitNetworkActivityChanges;
- (void)restartCloudKitSyncWithReason:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)setMigrationStateToDidChooseToMigrate:(BOOL)arg1 didFinishMigration:(BOOL)arg2 completion:(void (^)(NSError *))arg3;
- (void)syncCloudKitWithReason:(NSString *)arg1 discretionary:(BOOL)arg2 completion:(void (^)(NSError *))arg3;
- (void)syncDataAccessAccountsWithAccountIDs:(NSArray *)arg1 bypassThrottler:(BOOL)arg2 completion:(void (^)(NSError *))arg3;
@end

