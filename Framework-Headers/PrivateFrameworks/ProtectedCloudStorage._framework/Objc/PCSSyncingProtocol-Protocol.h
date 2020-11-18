//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSDictionary, NSString;

@protocol PCSSyncingProtocol
- (void)checkForBackupStateChange;
- (void)createIdentity:(NSString *)arg1 roll:(BOOL)arg2 sync:(BOOL)arg3 complete:(void (^)(NSData *, PCSMTT *, NSError *))arg4;
- (void)deleteThisDevice:(NSDictionary *)arg1 withReply:(void (^)(NSError *))arg2;
- (void)escrowRecordIDs:(NSDictionary *)arg1 withReply:(void (^)(NSArray *, NSError *))arg2;
- (void)fetchAllDeviceKeys:(NSDictionary *)arg1 withReply:(void (^)(NSString *, NSData *, NSData *, NSArray *, NSError *))arg2;
- (void)fetchStats:(void (^)(UserRegistryStats *))arg1;
- (void)getAllClients:(void (^)(NSDictionary *, NSError *))arg1;
- (NSArray *)getServicesToRoll;
- (void)keyRollPending:(NSString *)arg1 complete:(void (^)(BOOL, NSError *))arg2;
- (void)manateeStatus:(NSString *)arg1 complete:(void (^)(unsigned int))arg2;
- (void)mobileBackupRecordIDsWithReply:(void (^)(NSArray *, NSError *))arg1;
- (void)mobileBackupStatus:(void (^)(BOOL, NSError *))arg1;
- (void)requestKeys:(NSDictionary *)arg1 withReply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)restoreMobileBackup:(BOOL)arg1 withReply:(void (^)(NSNumber *, NSNumber *, NSNumber *, NSError *))arg2;
- (BOOL)shouldRoll;
- (void)syncKeys:(NSDictionary *)arg1 withReply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)triggerDaily:(NSDictionary *)arg1 withReply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)triggerKeyRolling;
- (void)triggerSyncingWithEscrowProxy:(NSString *)arg1 complete:(void (^)(BOOL, NSError *))arg2;
- (void)triggerUserRegistryCheck:(NSDictionary *)arg1 withReply:(void (^)(NSError *))arg2;
- (void)triggerWatchSyncing:(void (^)(void))arg1;
- (void)userDBBackupRecordIDsWithReply:(void (^)(NSArray *, NSError *))arg1;
@end

