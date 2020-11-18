//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <BookmarkDAV/CoreDAVContainerInfoTaskGroupDelegate-Protocol.h>
#import <BookmarkDAV/CoreDAVDeleteTaskDelegate-Protocol.h>
#import <BookmarkDAV/CoreDAVGetAccountPropertiesTaskGroupDelegate-Protocol.h>
#import <BookmarkDAV/CoreDAVLocalDBTreeInfoProvider-Protocol.h>

@class BookmarkDAVSyncData, NSDictionary, NSMutableSet, NSString, NSURL;
@protocol CoreDAVAccountInfoProvider, CoreDAVTaskManager;

@interface BookmarkDAVSyncDriver : NSObject <CoreDAVLocalDBTreeInfoProvider, CoreDAVDeleteTaskDelegate, CoreDAVGetAccountPropertiesTaskGroupDelegate, CoreDAVContainerInfoTaskGroupDelegate>
{
    id<CoreDAVAccountInfoProvider> _accountInfoProvider;
    id<CoreDAVTaskManager> _taskManager;
    NSMutableSet *_outstandingTaskGroups;
    CDUnknownBlockType _getAccountPropertiesHandler;
    CDUnknownBlockType _syncHandler;
    void *_changeToken;
    NSURL *_homeURL;
    NSString *_pushKey;
    NSDictionary *_pushTransport;
    CDUnknownBlockType _openDBBlock;
    CDUnknownBlockType _getDBBlock;
    CDUnknownBlockType _saveDBBlock;
    CDUnknownBlockType _closeDBBlock;
    BookmarkDAVSyncData *_topLevelSyncData;
    CDUnknownBlockType _registerForPush;
    BOOL _forceSafariOrdering;
    BOOL _forceSave;
    unsigned long long _accountPropertyFetchAttempt;
}

@property (readonly, nonatomic) id<CoreDAVAccountInfoProvider> accountInfoProvider; // @synthesize accountInfoProvider=_accountInfoProvider;
@property (nonatomic) unsigned long long accountPropertyFetchAttempt; // @synthesize accountPropertyFetchAttempt=_accountPropertyFetchAttempt;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) CDUnknownBlockType getAccountPropertiesHandler; // @synthesize getAccountPropertiesHandler=_getAccountPropertiesHandler;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSURL *homeURL; // @synthesize homeURL=_homeURL;
@property (readonly, nonatomic) unsigned long long outstandingActionCount;
@property (strong, nonatomic) NSString *pushKey; // @synthesize pushKey=_pushKey;
@property (strong, nonatomic) NSDictionary *pushTransport; // @synthesize pushTransport=_pushTransport;
@property (readonly) Class superclass;
@property (copy, nonatomic) CDUnknownBlockType syncHandler; // @synthesize syncHandler=_syncHandler;
@property (readonly, nonatomic) BookmarkDAVSyncData *topLevelSyncData;

- (BOOL)_addChange:(void *)arg1 toData:(id)arg2 numActionsP:(int *)arg3 runningSizeP:(int *)arg4 maxResources:(long long)arg5 maxSize:(long long)arg6 foldersToAddByServerId:(struct __CFDictionary *)arg7 parentToArrayOfChildrenFolderChanges:(struct __CFDictionary *)arg8 pushedParentToArrayOfChildrenFolders:(struct __CFDictionary *)arg9;
- (BOOL)_applyReturnedBookmarks:(id)arg1 withPushedBookmarks:(struct __CFArray *)arg2;
- (BOOL)_applyReturnedFolders:(id)arg1 parentToArrayOfChildrenFolders:(struct __CFDictionary *)arg2 topmostFolders:(struct __CFArray *)arg3 postedToURL:(id)arg4;
- (BOOL)_applyUnmatchedParsedFolders:(id)arg1;
- (void *)_bookmarkByUpdatingBookmark:(void *)arg1 withServerID:(id)arg2;
- (id)_bookmarkXBELDataForBookmarkChanges:(struct __CFArray *)arg1 pushedBookmarks:(struct __CFArray *)arg2 maxResources:(long long)arg3 maxSize:(long long)arg4;
- (int)_clientOrderOfItemPrecedingItemAtServerOrder:(int)arg1 inParentWithURL:(id)arg2;
- (void)_cloneCoreAttributesFromItem:(void *)arg1 toItem:(void *)arg2 isBookmark:(BOOL)arg3;
- (void)_closeDBAndSave:(BOOL)arg1;
- (id)_copyDAVBookmarkFromBookmarkRef:(void *)arg1;
- (id)_copyDAVFolderFromFolderRef:(void *)arg1;
- (id)_copySyntheticModifyActionForMovedItem:(void *)arg1 change:(void *)arg2 destinationURL:(id)arg3 absoluteOrder:(int)arg4;
- (id)_dbRelativeString:(id)arg1;
- (void)_finishInitialSyncShouldPushChanges:(BOOL)arg1;
- (void *)_folderByUpdatingFolder:(void *)arg1 withServerID:(id)arg2;
- (id)_folderXBELDataForTopmostFolderChanges:(struct __CFArray *)arg1 foldersToAddByServerId:(struct __CFDictionary *)arg2 parentToArrayOfChildrenFolderChanges:(struct __CFDictionary *)arg3 pushedParentToArrayOfChildrenFolders:(struct __CFDictionary *)arg4 pushedTopmostFolders:(struct __CFArray *)arg5 maxResources:(long long)arg6 maxSize:(long long)arg7;
- (void)_handleAddsOrModifies:(id)arg1 removes:(id)arg2;
- (BOOL)_handleErrorItem:(id)arg1 forBAItem:(void *)arg2;
- (void)_invokeAndNilGetAccountPropertiesHandlerWithSuccess:(BOOL)arg1 error:(id)arg2;
- (void)_makeBookmarkFromDAVNode:(id)arg1;
- (void)_makeFolderFromContainer:(id)arg1;
- (BOOL)_matchParsedFolders:(id)arg1 toPushedFolders:(struct __CFDictionary *)arg2 unmatchedParsedFolders:(id)arg3 parsedSetsOfChildrenFoldersByParentURL:(id)arg4 arraysOfChildrenByNameByParent:(struct __CFDictionary *)arg5;
- (void)_removeTempIdsFromFoldersInDict:(struct __CFDictionary *)arg1;
- (void)_saveDB;
- (int)_serverOrderForChange:(void *)arg1;
- (void)_setChildrenOrder:(id)arg1 forFolderURL:(id)arg2;
- (void)_setRootCTag:(id)arg1 rootSyncToken:(id)arg2 knownOrderings:(id)arg3;
- (void)_setServerIdOnItem:(void *)arg1 isBookmark:(BOOL)arg2 suggestedId:(id)arg3;
- (void)_syncWithRemoteChanges:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2 skipAddChanges:(BOOL)arg3;
- (void)_updatePayload:(id)arg1 forMovedItem:(void *)arg2 sourceServerID:(id)arg3;
- (void)containerInfoTask:(id)arg1 completedWithContainers:(id)arg2 error:(id)arg3;
- (id)copyAllLocalURLsInFolderWithURL:(id)arg1;
- (id)copyLocalETagsForURLs:(id)arg1;
- (void)dealloc;
- (void)getAccountPropertiesTask:(id)arg1 completedWithError:(id)arg2;
- (void)getAccountPropertiesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)getCTag:(id *)arg1 pTag:(id *)arg2 forFolderWithURL:(id)arg3;
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2 openDBBlock:(CDUnknownBlockType)arg3 getDBBlock:(CDUnknownBlockType)arg4 saveDBBlock:(CDUnknownBlockType)arg5 closeDBBlock:(CDUnknownBlockType)arg6 registerForPush:(CDUnknownBlockType)arg7 forceSafariOrdering:(BOOL)arg8;
- (void)notePutToURL:(id)arg1 withDataPayload:(id)arg2 finishedWithIgnoredError:(id)arg3;
- (void)recursiveContainerSyncTask:(id)arg1 completedFullSyncWithNewCTag:(id)arg2 newPTag:(id)arg3 newSyncToken:(id)arg4 error:(id)arg5;
- (void)recursiveContainerSyncTask:(id)arg1 completedSyncOfFolderWithURL:(id)arg2 newCTag:(id)arg3 newPTag:(id)arg4 addedOrModified:(id)arg5 removed:(id)arg6 error:(id)arg7;
- (void)recursiveContainerSyncTask:(id)arg1 receivedAddedOrModifiedFolder:(id)arg2;
- (void)recursiveContainerSyncTask:(id)arg1 retrievedAddedOrModifiedActions:(id)arg2 removed:(id)arg3;
- (BOOL)setLocalETag:(id)arg1 forItemWithURL:(id)arg2;
- (void)syncWithRemoteChanges:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

