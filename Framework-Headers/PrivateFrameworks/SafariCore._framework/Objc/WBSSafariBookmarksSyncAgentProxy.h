//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariCore/WBSSafariBookmarksSyncAgentProtocol-Protocol.h>

@class NSString, NSXPCConnection;

@interface WBSSafariBookmarksSyncAgentProxy : NSObject <WBSSafariBookmarksSyncAgentProtocol>
{
    NSXPCConnection *__connection;
}

@property (strong) NSXPCConnection *_connection; // @synthesize _connection=__connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedProxy;
- (void).cxx_destruct;
- (void)beginMigrationFromDAV;
- (void)clearLocalDataIncludingMigrationState:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)collectDiagnosticsDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)deleteCloudTabCloseRequestsWithUUIDStrings:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteDevicesWithUUIDStrings:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchRemoteMigrationStateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchSyncedCloudTabDevicesAndCloseRequestsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchUserIdentityWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)generateDAVServerIDsForExistingBookmarksWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getCloudTabDevicesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)init;
- (void)migrateToCloudKitWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)observeRemoteMigrationStateForSecondaryMigration;
- (void)registerForPushNotificationsIfNeeded;
- (void)resetToDAVDatabaseWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)saveCloudTabCloseRequestWithDictionaryRepresentation:(id)arg1 closeRequestUUIDString:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)saveTabsForCurrentDeviceWithDictionaryRepresentation:(id)arg1 deviceUUIDString:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setUsesOpportunisticPushTopic:(BOOL)arg1;
- (void)userAccountDidChange:(long long)arg1;
- (void)userDidUpdateBookmarkDatabase;

@end
