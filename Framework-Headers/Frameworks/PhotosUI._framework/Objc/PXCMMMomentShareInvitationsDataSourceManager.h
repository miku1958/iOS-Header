//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXCMMInvitationsDataSourceManager.h>

#import <PhotosUICore/PXPhotoLibraryUIChangeObserver-Protocol.h>

@class NSMutableOrderedSet, NSObject, NSString, PHPhotoLibrary, PXCMMMomentShareInvitationsDataSource, PXCMMMomentShareInvitationsDataSourceState;
@protocol OS_dispatch_queue;

@interface PXCMMMomentShareInvitationsDataSourceManager : PXCMMInvitationsDataSourceManager <PXPhotoLibraryUIChangeObserver>
{
    PHPhotoLibrary *_photoLibrary;
    NSObject<OS_dispatch_queue> *_workerQueue;
    BOOL _isLoading;
    BOOL _hasCreatedInitialDataSource;
    PXCMMMomentShareInvitationsDataSourceState *_state;
    NSMutableOrderedSet *_remainingMomentShareObjectIDsToFetch;
}

@property (readonly, nonatomic) PXCMMMomentShareInvitationsDataSource *dataSource; // @dynamic dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_dataSourceManagerWithPredicate:(id)arg1;
+ (id)dataSourceManager;
+ (id)emptyDataSourceManager;
+ (id)mostRecentCreationDate;
- (void).cxx_destruct;
- (void)_handleFinishedFetchingBatch:(id)arg1 preparedChangeDetails:(id)arg2 forFetchResult:(id)arg3 changedObjects:(id)arg4;
- (id)_initWithFetchResult:(id)arg1;
- (void)_startLoadingIfNeeded;
- (void)_workerQueue_fetchRemainingMomentSharesInBatchesWithMomentShares:(id)arg1;
- (id)createInitialDataSource;
- (void)dealloc;
- (id)init;
- (id)momentShares;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2;
- (id)prepareForPhotoLibraryChange:(id)arg1;

@end
