//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SplashBoard/XBApplicationSnapshotManifest.h>

#import <SplashBoard/BSDescriptionProviding-Protocol.h>
#import <SplashBoard/NSCoding-Protocol.h>

@class BKSApplicationDataStore, BSTimer, NSFileManager, NSMutableDictionary, NSString, XBApplicationIdentity;

@interface XBApplicationSnapshotManifestImpl : XBApplicationSnapshotManifest <NSCoding, BSDescriptionProviding>
{
    XBApplicationIdentity *_appIdentity;
    BKSApplicationDataStore *_dataStore;
    NSMutableDictionary *_snapshotGroupsByID;
    NSFileManager *_imageAccessFileManger;
    BSTimer *_reapingTimer;
    BOOL _invalidated;
    BOOL _needsArchiving;
    unsigned long long _clientCount;
    unsigned long long _pendingOperations;
}

@property (copy) XBApplicationIdentity *appIdentity; // @synthesize appIdentity=_appIdentity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property BOOL invalidated; // @synthesize invalidated=_invalidated;
@property BOOL needsArchiving; // @synthesize needsArchiving=_needsArchiving;
@property (readonly) Class superclass;

+ (id)_acquireManifestForApplicationIdentity:(id)arg1 createIfNeeded:(BOOL)arg2;
+ (void)_queue_noteManifestInvalidated:(id)arg1;
+ (id)acquireExistingManifestForBundleID:(id)arg1;
+ (id)acquireManifestForApplicationCompatibilityInfo:(id)arg1;
+ (id)acquireManifestForApplicationInfo:(id)arg1;
+ (id)acquireManifestForBundleID:(id)arg1;
+ (void)relinquishManifest:(id)arg1;
- (void)_archiveSoon;
- (id)_commonInit;
- (id)_createSnapshotWithGroupID:(id)arg1 generationContext:(id)arg2;
- (id)_createSnapshotWithGroupID:(id)arg1 newSnapshotCreator:(CDUnknownBlockType)arg2;
- (id)_generatableSnapshotForGroupID:(id)arg1 generationContext:(id)arg2;
- (BOOL)_imageAccessQueue_saveData:(id)arg1 withContentType:(long long)arg2 toPath:(id)arg3;
- (id)_initWithApplicationIdentity:(id)arg1;
- (void)_queue_accessSnapshotsWithBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_queue_archiveIfNeeded;
- (void)_queue_checkClientCount;
- (void)_queue_decrementClientCount;
- (void)_queue_deletePaths:(id)arg1;
- (void)_queue_deleteSnapshots:(id)arg1;
- (void)_queue_gatherPaths:(id)arg1 forSnapshot:(id)arg2;
- (void)_queue_incrementClientCount;
- (void)_queue_invalidate;
- (void)_queue_reallyCheckClientCount;
- (void)_queue_reapExpiredAndInvalidSnapshots;
- (id)_queue_snapshotGroupForID:(id)arg1 creatingIfNeeded:(BOOL)arg2;
- (id)_queue_snapshotsForGroupID:(id)arg1 matchingPredicate:(id)arg2;
- (id)_queue_snapshotsMatchingPredicate:(id)arg1;
- (BOOL)_validateWithAppIdentity:(id)arg1;
- (id)allSnapshots;
- (void)archive;
- (void)beginSnapshotAccessTransaction:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (id)bundleIdentifier;
- (id)containerPath;
- (id)createSnapshotWithGroupID:(id)arg1;
- (id)createVariantForSnapshot:(id)arg1 withIdentifier:(id)arg2;
- (void)dealloc;
- (void)deleteAllSnapshots;
- (void)deleteSnapshot:(id)arg1;
- (void)deleteSnapshots:(id)arg1;
- (void)deleteSnapshotsForGroupID:(id)arg1;
- (void)deleteSnapshotsForGroupID:(id)arg1 matchingPredicate:(id)arg2;
- (void)deleteSnapshotsForGroupID:(id)arg1 predicateBuilder:(CDUnknownBlockType)arg2;
- (void)deleteSnapshotsMatchingPredicate:(id)arg1;
- (void)deleteSnapshotsUsingPredicateBuilder:(CDUnknownBlockType)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)generateImageForSnapshot:(id)arg1 dataProvider:(id)arg2 writeToFile:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)generateImageForSnapshot:(id)arg1 dataProvider:(id)arg2 writeToFile:(BOOL)arg3 didGenerateImage:(CDUnknownBlockType)arg4 didSaveImage:(CDUnknownBlockType)arg5;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)saveSnapshot:(id)arg1 atPath:(id)arg2 withContext:(id)arg3;
- (id)snapshotsForGroupID:(id)arg1;
- (id)snapshotsForGroupID:(id)arg1 fetchRequest:(id)arg2;
- (id)snapshotsForGroupID:(id)arg1 matchingPredicate:(id)arg2;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
