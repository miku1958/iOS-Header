//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PLLibraryServicesManager;
@protocol OS_dispatch_queue;

@interface PLDelayedSaveActionsProcessor : NSObject
{
    PLLibraryServicesManager *_libraryServicesManager;
    NSObject<OS_dispatch_queue> *_coreDuetCallback;
}

- (void).cxx_destruct;
- (void)_deleteUUIDs:(id)arg1 fromCoreDuetStreams:(id)arg2 transaction:(id)arg3;
- (void)_processDelayedAlbumCountsAndDateRangeUpdates:(id)arg1 library:(id)arg2 transaction:(id)arg3;
- (void)_processDelayedAssetsForDuetDelete:(id)arg1 transaction:(id)arg2;
- (void)_processDelayedAssetsForFileSystemPersistency:(id)arg1 library:(id)arg2 transaction:(id)arg3;
- (void)_processDelayedCloudFeedAlbumUpdates:(id)arg1 assetInserts:(id)arg2 assetUpdates:(id)arg3 commentInserts:(id)arg4 invitationRecordUpdates:(id)arg5 deletionEntries:(id)arg6 transaction:(id)arg7;
- (void)_processDelayedDupeAnalysisNormalInserts:(id)arg1 cloudInserts:(id)arg2 transaction:(id)arg3;
- (void)_processDelayedMemoriesForDuetDelete:(id)arg1 transaction:(id)arg2;
- (void)_processDelayedMomentChangesWithTransaction:(id)arg1;
- (void)_processDelayedSearchIndexUpdates:(id)arg1 transaction:(id)arg2;
- (void)_processDelayedWidgetTimelineReload:(BOOL)arg1 library:(id)arg2 transaction:(id)arg3;
- (id)initWithLibraryServicesManager:(id)arg1;
- (void)processDelayedDeletionsFromChangeHubEvent:(id)arg1 library:(id)arg2 transaction:(id)arg3;
- (void)processDelayedMomentGeneratorSaveActionsFromDetail:(id)arg1;
- (void)processDelayedSaveActionsDetail:(id)arg1 withPhotoLibrary:(id)arg2 transaction:(id)arg3;

@end
