//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariCore/NSObject-Protocol.h>

@protocol WBSCyclerCloudBookmarksAssistant <NSObject>
- (void)clearLocalDataIncludingMigrationState:(BOOL)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)generateDAVServerIDsForExistingBookmarksWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)migrateToCloudKitWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)resetToDAVDatabaseWithCompletionHandler:(void (^)(NSError *))arg1;
@end

