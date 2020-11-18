//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/BRCXPCClient.h>

#import <CloudDocsDaemon/BRCForegroundClient-Protocol.h>
#import <CloudDocsDaemon/BRProtocol-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BRCXPCRegularIPCsClient : BRCXPCClient <BRProtocol, BRCForegroundClient>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly) Class superclass;

- (id)_crossZoneMoveOperationForReset:(BOOL)arg1;
- (id)_loggedInUserPropertyValuesForKeys:(id)arg1 error:(id *)arg2;
- (void)_presentAcceptDialogsWithURL:(id)arg1 metadata:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)_t_blockSyncForContainerID:(id)arg1 withPendingUpgradeToOSName:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)_t_blockSyncUpOfItemWithID:(id)arg1 containerID:(id)arg2 withPendingUpgradeToOSName:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)_t_clearAllBlockedItemsForContainerID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)_t_getPCSChainStateAtURL:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)_t_migrateAllZonesToClouddocsWithReset:(BOOL)arg1 reply:(CDUnknownBlockType)arg2;
- (void)_t_pauseSyncDownOfContainer:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)_t_resumeSyncDownOfContainer:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)_t_setFSEventProcessingState:(BOOL)arg1 reply:(CDUnknownBlockType)arg2;
- (void)_unregisterPrematurely;
- (void)addExternalDocumentReferenceTo:(id)arg1 forPid:(int)arg2 inContainer:(id)arg3 underParent:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)boostFilePresenterAtURL:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (oneway void)bundleDidAccessExternalDocument:(id)arg1;
- (void)canLogoutSafely:(CDUnknownBlockType)arg1;
- (oneway void)checkinAskClientIfUsingUbiquity:(BOOL)arg1;
- (void)computePurgableSpaceWithUrgency:(int)arg1 reply:(CDUnknownBlockType)arg2;
- (void)copyBulkShareIDsAtURLs:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)copyCurrentUserIdentifierWithReply:(CDUnknownBlockType)arg1;
- (void)copyCurrentUserNameAndEmailWithReply:(CDUnknownBlockType)arg1;
- (void)createContainerWithID:(id)arg1 ownerName:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)createSharingInfoForURL:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)currentAccountCreateWithID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)currentAccountLogoutWithReply:(CDUnknownBlockType)arg1;
- (void)currentSyncedRootURLsWithReply:(CDUnknownBlockType)arg1;
- (void)deleteAllContentsOfContainerID:(id)arg1 onClient:(BOOL)arg2 onServer:(BOOL)arg3 reply:(CDUnknownBlockType)arg4;
- (void)didReceiveHandoffRequestForBundleID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)dropSpotlightIndexWithReply:(CDUnknownBlockType)arg1;
- (void)dumpDatabaseTo:(id)arg1 containerID:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)evictItemAtURL:(id)arg1 options:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;
- (void)evictOldDocumentsWithReply:(CDUnknownBlockType)arg1;
- (void)forceConflictForURL:(id)arg1 bookmarkData:(id)arg2 forcedEtag:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)forceSyncContainerID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)forceSyncWithBarrierContainerID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)gatherInformationForPath:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getApplicationDocumentUsageInfoForBundleID:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)getApplicationStatus:(CDUnknownBlockType)arg1;
- (void)getApplicationStatusWithAuditToken:(CDStruct_4c969caf)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getApplicationStatusWithPID:(int)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getAttributeValues:(id)arg1 forItemAtURL:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)getBackReferencingContainerIDsForURLs:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getBackReferencingURLForURL:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getBookmarkDataForURL:(id)arg1 andAllowAccessByBundleID:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)getBookmarkDataForURL:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getContainerForURL:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getContainerLastServerUpdateWithID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getContainerStatusWithID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getContainerURLForID:(id)arg1 forPid:(int)arg2 reply:(CDUnknownBlockType)arg3;
- (void)getContainerURLForID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getContainersByID:(CDUnknownBlockType)arg1;
- (void)getContainersNeedingUpload:(CDUnknownBlockType)arg1;
- (void)getEvictableSpaceWithReply:(CDUnknownBlockType)arg1;
- (void)getIsContainerWithIDOverQuota:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getItemUpdateSenderWithReceiver:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getLastSyncDateWithReply:(CDUnknownBlockType)arg1;
- (void)getLocalizedLastSyncWithReply:(CDUnknownBlockType)arg1;
- (void)getLoggedInUserPropertyValuesForKeys:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getMigrationStatusForPrimaryiCloudAccount:(CDUnknownBlockType)arg1;
- (void)getNonLocalVersionSenderWithReceiver:(id)arg1 documentURL:(id)arg2 includeCachedVersions:(BOOL)arg3 reply:(CDUnknownBlockType)arg4;
- (void)getNotificationInfoAtURL:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getPublishedURLForItemAtURL:(id)arg1 forStreaming:(BOOL)arg2 requestedTTL:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;
- (void)getTotalApplicationDocumentUsageWithReply:(CDUnknownBlockType)arg1;
- (void)getiWorkNeedsShareMigrateAtURL:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getiWorkPublishingBadgingStatusAtURL:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getiWorkPublishingInfoAtURL:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)handleCloudKitShareMetadata:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)hasOptimizeStorageWithReply:(CDUnknownBlockType)arg1;
- (void)healthStatusStringForContainer:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)iCloudDesktopSettingsChangedWithAttributes:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)iCloudDriveAppStatusDescriptionForDSID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)iWorkForceSyncContainerID:(id)arg1 ownedByMe:(BOOL)arg2 reply:(CDUnknownBlockType)arg3;
- (void)jetsamCloudDocsAppsWithReply:(CDUnknownBlockType)arg1;
- (void)joinShareAtURL:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)lookupExcludedExtensionsForLogoutWithReply:(CDUnknownBlockType)arg1;
- (void)lookupExcludedFilenamesForLogoutWithReply:(CDUnknownBlockType)arg1;
- (void)overwriteAccessTimeForItemAtURL:(id)arg1 atime:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;
- (void)performSelfCheck:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)postiCloudDriveAppInstallationNotificaionWithReply:(CDUnknownBlockType)arg1;
- (void)presentAcceptDialogsForShareMetadata:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)presentAcceptDialogsForShareURL:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)presyncContainerWithID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)printStatus:(id)arg1 containerID:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)purgeAmount:(long long)arg1 withUrgency:(int)arg2 reply:(CDUnknownBlockType)arg3;
- (void)readerThrottleBackoffForDocumentAtPath:(id)arg1 containerID:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)reclaimAmount:(long long)arg1 withUrgency:(int)arg2 reply:(CDUnknownBlockType)arg3;
- (void)registerInitialSyncBarrierForID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)removeItemFromDisk:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)resetBudgets:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)resolveBookmarkDataToURL:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)resolveConflictWithName:(id)arg1 atURL:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)setMigrationStatus:(BOOL)arg1 forDSID:(id)arg2 shouldUpdateAccount:(BOOL)arg3 reply:(CDUnknownBlockType)arg4;
- (void)setStorageOpimizationEnabled:(BOOL)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setiCloudDriveAppDefaultVisibility:(id)arg1 forDSID:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)setiWorkPublishingInfoAtURL:(id)arg1 publish:(BOOL)arg2 readonly:(BOOL)arg3 reply:(CDUnknownBlockType)arg4;
- (void)setupInstanceWithDict:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)simulateHealthIssueWithContainer:(id)arg1 status:(id)arg2 brokenStructure:(BOOL)arg3 reply:(CDUnknownBlockType)arg4;
- (void)startDownloadItemsAtURLs:(id)arg1 options:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;
- (void)startOperation:(id)arg1 toCopyAvailableQuotaWithReply:(CDUnknownBlockType)arg2;
- (void)startOperation:(id)arg1 toCopyEtagAtURL:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)startOperation:(id)arg1 toCopyParticipantTokenAtURL:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)startOperation:(id)arg1 toCopyShareURLForShare:(id)arg2 appName:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)startOperation:(id)arg1 toCopySharingAccessToken:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)startOperation:(id)arg1 toCopySharingInfoAtURL:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)startOperation:(id)arg1 toCopySharingWebAuthTokenForContainerID:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)startOperation:(id)arg1 toCopyShortTokenAtURL:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)startOperation:(id)arg1 toEvictItemAtURL:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)startOperation:(id)arg1 toLookupShareParticipants:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)startOperation:(id)arg1 toModifyRecordAccessAtURL:(id)arg2 allowAccess:(BOOL)arg3 reply:(CDUnknownBlockType)arg4;
- (void)startOperation:(id)arg1 toPrepFolderForSharingAt:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)startOperation:(id)arg1 toSaveSharingInfo:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)startOperation:(id)arg1 toUnshareShare:(id)arg2 forceDelete:(BOOL)arg3 reply:(CDUnknownBlockType)arg4;
- (void)startOperation:(id)arg1 toUploadAllFilesInContainer:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)thumbnailChangedForItemAtURL:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)trashItemAtURL:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (oneway void)updateContainerMetadataForID:(id)arg1;
- (oneway void)updatePrivilegesDescriptor;
- (void)waitForFileSystemChangeProcessingWithReply:(CDUnknownBlockType)arg1;
- (void)waitUntilIdle:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (oneway void)willAcceptShareAtURL:(id)arg1;

@end
