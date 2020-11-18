//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppStoreDaemon/NSObject-Protocol.h>

@protocol ASDSoftwareUpdateProtocol <NSObject>
- (void)clearExpiredUpdateHistoryWithCompletionBlock:(void (^)(BOOL, NSError *))arg1;
- (void)getUpdateableFirstPartyAppMetadataWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)getUpdatesWithCompletionBlock:(void (^)(NSArray *, NSError *))arg1;
- (void)hideApplicationBadgeForPendingUpdates;
- (void)migrateUpdatesStoreWithCompletionBlock:(void (^)(BOOL, NSError *))arg1;
- (void)refreshUpdateCountWithCompletionBlock:(void (^)(long long, NSError *))arg1;
- (void)reloadFromServerInBackgroundWithCompletionBlock:(void (^)(NSArray *, NSError *))arg1;
- (void)reloadFromServerWithCompletionBlock:(void (^)(NSArray *, NSError *))arg1;
- (void)removeUpdateBulletins;
- (void)showApplicationBadgeForPendingUpdates;
- (void)showApplicationUpdatesBulletin;
- (void)updateAll:(void (^)(BOOL, NSError *))arg1;
@end

