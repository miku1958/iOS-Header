//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PlacesKit/PHPhotoLibraryChangeObserver-Protocol.h>

@class NSMutableArray, NSString, NSTimer, PHAsset, PHAssetCollection, PHFetchResult, UIImage;
@protocol OS_dispatch_queue, PXPlacesSnapshotFactoryDelegate;

@interface PXPlacesSnapshotFactory : NSObject <PHPhotoLibraryChangeObserver>
{
    NSString *_cachedFilePath;
    UIImage *_cachedSnapshotImage;
    NSString *_cachedSnapshotImageIdentifier;
    UIImage *_placeholderImage;
    long long _cachedCount;
    NSMutableArray *_requestedCompletionBlocks;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_concurentQueue;
    BOOL _isRegisteredForPhotoLibraryChanges;
    BOOL _countCacheInvalidated;
    id<PXPlacesSnapshotFactoryDelegate> _delegate;
    PHAssetCollection *_placesCollection;
    PHAsset *_snapshottedAsset;
    PHFetchResult *_placesAssetsFetchResult;
    PHFetchResult *_assetCountFetchResult;
    NSTimer *_assetCountChangedTimer;
}

@property (strong, nonatomic) NSTimer *assetCountChangedTimer; // @synthesize assetCountChangedTimer=_assetCountChangedTimer;
@property (strong, nonatomic) PHFetchResult *assetCountFetchResult; // @synthesize assetCountFetchResult=_assetCountFetchResult;
@property (nonatomic) BOOL countCacheInvalidated; // @synthesize countCacheInvalidated=_countCacheInvalidated;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PXPlacesSnapshotFactoryDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isRegisteredForPhotoLibraryChanges; // @synthesize isRegisteredForPhotoLibraryChanges=_isRegisteredForPhotoLibraryChanges;
@property (strong, nonatomic) PHFetchResult *placesAssetsFetchResult; // @synthesize placesAssetsFetchResult=_placesAssetsFetchResult;
@property (strong, nonatomic) PHAssetCollection *placesCollection; // @synthesize placesCollection=_placesCollection;
@property (strong, nonatomic) PHAsset *snapshottedAsset; // @synthesize snapshottedAsset=_snapshottedAsset;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_fetchImageOfAsset:(id)arg1 withSnapshotOptions:(id)arg2 andCompletion:(CDUnknownBlockType)arg3;
- (void)_handleAsyncPlacesLibraryAlbumSnapshotWithSnapshotOptions:(id)arg1 andCompletion:(CDUnknownBlockType)arg2;
- (BOOL)_imageExistsWithLocalIdentifier:(id)arg1;
- (id)_latestAssetWithLocation;
- (id)_placeHolderImageForExtendedTraitCollection:(id)arg1;
- (void)_saveImage:(id)arg1 ofAsset:(id)arg2 atPath:(id)arg3;
- (long long)assetCountWithForcedRefresh:(BOOL)arg1;
- (void)dealloc;
- (id)init;
- (void)photoLibraryDidChange:(id)arg1;
- (void)removePreviousCachedImage;
- (void)requestPlacesImageOfAsset:(id)arg1 withSnapshotOptions:(id)arg2 andCompletion:(CDUnknownBlockType)arg3;
- (void)requestPlacesLibraryAlbumSnapshotWithSnapshotOptions:(id)arg1 andCompletion:(CDUnknownBlockType)arg2;
- (void)requestPlacesLibraryImageWithSnapshotOptions:(id)arg1 andCompletion:(CDUnknownBlockType)arg2;
- (void)requestPlacesSnapshotWithSnapshotOptions:(id)arg1 assets:(id)arg2 andCompletion:(CDUnknownBlockType)arg3;
- (void)tickAssetCountChangedTimer:(id)arg1;

@end

