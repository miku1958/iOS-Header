//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class WebBookmarksXPCConnection;

@interface WebBookmarksSettingsGateway : NSObject
{
    WebBookmarksXPCConnection *_connection;
}

- (void).cxx_destruct;
- (void)clearAllSafariHistoryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)deleteAllSafariSecurityOriginsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)deleteSafariPersistentURLCacheStorageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)deleteSafariWebsiteDataRecord:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getSafariDataUsageByteCountWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getSafariWebDataUsageWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;
- (void)scheduleBookmarksDatabaseMaintenance;
- (void)scheduleBookmarksDatabaseMigrationTask;
- (void)scheduleHSTSSuperCookieCleanup;
- (void)schedulePasswordIconsCleanup;

@end

