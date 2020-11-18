//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSURL.h>

@interface NSURL (BRAdditions)
+ (void)br_containerIDsWithExternalReferencesTo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)br_documentURLFromBookmarkableString:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)br_documentURLFromBookmarkableString:(id)arg1 error:(id *)arg2;
+ (id)br_documentURLFromFileObjectID:(id)arg1 error:(id *)arg2;
- (BOOL)_br_isInSyncedLocationStrictly:(BOOL)arg1;
- (id)br_URLByResolvingExternalDocumentReferenceWithError:(id *)arg1;
- (id)br_URLByResolvingInProcessExternalDocumentReferenceWithProperties:(id)arg1;
- (void)br_addPhysicalProperty;
- (void)br_bookmarkableStringForRemoteOpeningAppWithBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)br_bookmarkableStringWithEtag:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)br_bookmarkableStringWithEtag:(BOOL)arg1 onlyAllowItemKnowByServer:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (id)br_cachedBookmarkData;
- (unsigned short)br_capabilityToMoveToURL:(id)arg1 error:(id *)arg2;
- (id)br_cloudDocsContainer;
- (id)br_containerID;
- (id)br_containerIDIfIsDesktopOrDocumentsURL;
- (id)br_containerIDIfIsDocumentsContainerURL;
- (void)br_containerIDsWithExternalReferencesWithHandler:(CDUnknownBlockType)arg1;
- (id)br_debugDescription;
- (id)br_documentRecordIDWithError:(id *)arg1;
- (id)br_externalDocumentPropertiesWithError:(id *)arg1;
- (void)br_isConflictedWithHandler:(CDUnknownBlockType)arg1;
- (BOOL)br_isDocumentsContainer;
- (BOOL)br_isExternalDocumentReference;
- (BOOL)br_isInCloudDocsPrivateStorages;
- (BOOL)br_isInCloudDocsPrivateStoragesForRemoteDocumentVersions;
- (BOOL)br_isInLocalHomeDirectory;
- (BOOL)br_isInMobileDocuments;
- (BOOL)br_isInSharedDocsContainer;
- (BOOL)br_isInSyncedDesktop;
- (BOOL)br_isInSyncedDocuments;
- (BOOL)br_isInSyncedLocation;
- (BOOL)br_isInTrash;
- (BOOL)br_isPCSChained;
- (BOOL)br_isParentOfURL:(id)arg1;
- (BOOL)br_isParentOfURL:(id)arg1 strictly:(BOOL)arg2;
- (BOOL)br_isPromiseURL;
- (BOOL)br_isStrictlyInSyncedLocation;
- (BOOL)br_isSymLink;
- (id)br_itemID;
- (id)br_logicalURL;
- (BOOL)br_mightBeBRAlias;
- (id)br_pathRelativeToMobileDocuments;
- (id)br_pathRelativeToSyncedRootURL:(id)arg1;
- (id)br_pathRelativeToSyncedRootURLForContainerID:(id)arg1;
- (id)br_physicalURL;
- (void)br_preCacheBookmarkData:(id)arg1 versionEtag:(id)arg2;
- (id)br_realpathURL;
- (BOOL)br_setAccessTime:(unsigned long long)arg1 error:(id *)arg2;
- (id)br_typeIdentifierWithError:(id *)arg1;
- (BOOL)br_wouldBeExcludedFromSync;
@end

