//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableArray, NSMutableSet, NSNotificationCenter, NSNumber, PLManagedObjectContext;

@interface PLChangeNotificationCenter : NSObject
{
    BOOL _isProcessingRemoteDidSave;
    int _cameraPreviewChangeListenerCount;
    NSNumber *_cameraPreviewChangedToken;
    NSMutableArray *_snapshots;
    struct changeList_s _changedAlbumLists;
    struct contentChanges_s _albumListsContent;
    struct changeList_s _changedAlbums;
    struct contentChanges_s _albumsContent;
    struct changeList_s _changedAssets;
    NSMutableSet *_assetsWithCloudCommentChanges;
    struct contentChanges_s _momentsContent;
    struct changeList_s _changedMoments;
    struct contentChanges_s _momentListsContent;
    struct changeList_s _changedMomentLists;
    struct changeList_s _changedCloudFeedEntries;
    PLManagedObjectContext *_moc;
    NSMutableArray *_enqueuedNotifications;
    NSDictionary *_remoteNotificationData;
    BOOL _isOverloaded;
    NSMutableSet *_overloadedObjects;
}

@property (readonly, nonatomic) BOOL _shouldForceFetchingAlbumsToReload;
@property (readonly, strong, nonatomic) NSNotificationCenter *backingCenter;

+ (id)allManagedObjectKeysStrategy;
+ (id)defaultCenter;
+ (void)forceFetchingAlbumReload;
+ (void)getInsertedAssetCount:(unsigned long long *)arg1 deletedAssetCount:(unsigned long long *)arg2 updatedAssets:(id)arg3 fromContextDidChangeNotification:(id)arg4;
- (id)_attributesOfInterestForObject:(id)arg1;
- (void)_cleanupState;
- (void)_enqueueAlbumChangeNotification:(id)arg1;
- (void)_enqueueAlbumListNotifications;
- (void)_enqueueAlbumNotifications;
- (void)_enqueueAssetChangeNotification;
- (void)_enqueueAssetContainerChangeNotification:(id)arg1;
- (void)_enqueueAssetContainerListChangeNotification:(id)arg1;
- (void)_enqueueCloudCommentsNotifications;
- (void)_enqueueCloudFeedEntriesChangeNotifications;
- (void)_enqueueInvitationRecordsChangeNotification:(id)arg1;
- (void)_enqueueMomentChangeNotifications;
- (void)_enqueueMomentListChangeNotifications;
- (void)_enqueueNotification:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (void)_enqueueNotification:(id)arg1 object:(id)arg2 userInfoWithObjects:(const id *)arg3 forKeys:(const id *)arg4 count:(unsigned long long)arg5;
- (void)_enqueuePhotoLibraryNotifications;
- (void)_evaluateContainersWithUpdatedContent;
- (void)_evaluateUpdatedAssets;
- (BOOL)_isInterestedInUpdatesOfObject:(id)arg1;
- (id)_keysOfInterestForObject:(id)arg1;
- (id)_orderedRelationshipsOfInterestForObject:(id)arg1;
- (void)_postEnqueuedNotifications;
- (void)_registerForCameraPreviewWellChanges;
- (void)_sendNotificationsForSplitChanges;
- (id)_snapshotForObject:(id)arg1;
- (void)_splitContextDidChangeNotification:(id)arg1;
- (id)_takeSnapshotFromCommittedValuesOfObject:(id)arg1;
- (id)_takeSnapshotOfObject:(id)arg1;
- (id)_takeSnapshotOfObject:(id)arg1 useCommitedValues:(BOOL)arg2;
- (void)_takeSnapshotsFromContext:(id)arg1 forRemoteContextSaveNotification:(id)arg2 usingObjectIDs:(BOOL)arg3;
- (id)_toOneRelationshipsOfInterestForObject:(id)arg1;
- (void)_unregisterForCameraPreviewWellChanges;
- (void)addAssetChangeObserver:(id)arg1;
- (void)addAssetContainerChangeObserver:(id)arg1 container:(id)arg2;
- (void)addAssetContainerListChangeObserver:(id)arg1 containerList:(id)arg2;
- (void)addCameraPreviewWellImageChangeObserver:(id)arg1;
- (void)addCloudCommentsChangeObserver:(id)arg1 asset:(id)arg2;
- (void)addCloudFeedEntriesObserver:(id)arg1;
- (void)addInvitationRecordsObserver:(id)arg1;
- (void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4;
- (id)addObserverForName:(id)arg1 object:(id)arg2 queue:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)addShouldReloadObserver:(id)arg1;
- (void)dealloc;
- (id)descriptionOfSplitChanges;
- (void)enqueueNotification:(id)arg1;
- (void)enumerateIndexMappingCachesForObject:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)init;
- (void)managedObjectContext:(id)arg1 didProcessRemoteContextSave:(id)arg2 usingObjectIDs:(BOOL)arg3;
- (void)managedObjectContext:(id)arg1 willProcessRemoteContextSave:(id)arg2 usingObjectIDs:(BOOL)arg3 isCoalescedEvent:(BOOL)arg4;
- (void)managedObjectContextWasOverloaded:(id)arg1 withNotificationData:(id)arg2 usingObjectIDs:(BOOL)arg3;
- (void)managedObjectContextWillBeOverloaded:(id)arg1 withNotificationData:(id)arg2 usingObjectIDs:(BOOL)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)postShouldReloadNotification;
- (void)processContextDidChangeNotification:(id)arg1;
- (void)processContextDidSaveObjectIDsNotification:(id)arg1;
- (void)removeAssetChangeObserver:(id)arg1;
- (void)removeAssetContainerChangeObserver:(id)arg1 container:(id)arg2;
- (void)removeAssetContainerListChangeObserver:(id)arg1 containerList:(id)arg2;
- (void)removeCameraPreviewWellImageChangeObserver:(id)arg1;
- (void)removeCloudCommentsChangeObserver:(id)arg1 asset:(id)arg2;
- (void)removeCloudFeedEntriesObserver:(id)arg1;
- (void)removeInvitationRecordsObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)removeObserver:(id)arg1 name:(id)arg2 object:(id)arg3;
- (void)removeShouldReloadObserver:(id)arg1;

@end

