//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableArray, NSString, PLPhotoLibrary;
@protocol OS_dispatch_queue;

@interface PLCameraPreviewWellManager : NSObject
{
    NSMutableArray *_workQueue;
    struct os_unfair_lock_s _queueLock;
    BOOL _active;
    struct os_unfair_lock_s _activeLock;
    NSObject<OS_dispatch_queue> *_serialQueue;
    PLPhotoLibrary *_photoLibrary;
    BOOL _currentPreviewWellMetadataIsLoaded;
    NSString *_currentPreviewWellAssetUUID;
    NSDate *_currentPreviewWellAddedDate;
    double _currentPreviewWellSortToken;
}

- (void).cxx_destruct;
- (void)_clearPreviewWellAndNotify;
- (void)_fetchPreviewWellAssetWithAssetHandler:(CDUnknownBlockType)arg1;
- (void)_fetchPreviewWellMetadataIfNeeded;
- (void)_inqProcessAssetChanges;
- (void)_processChange:(id)arg1;
- (void)_saveImageAndNotify:(struct CGImage *)arg1 assetUUID:(id)arg2;
- (void)considerAssetForPreviewWellChanges:(id)arg1;
- (id)initWithPhotoLibrary:(id)arg1;
- (void)refreshPreviewWellImage;

@end

